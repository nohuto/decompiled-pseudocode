/*
 * XREFs of ExEnumHandleTable @ 0x14045D3A0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9960 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x14045D2F4 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14045E3D4 (ObInitProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x140625770 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CF44 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1406656C0 (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x1406A74DC (EtwpObjectHandleRundown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpLookupHandleTableEntry @ 0x140450260 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x14045D570 (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404AF024 (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, signed __int64 *, __int64, __int64),
        __int64 a3,
        __int64 *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  __int64 v10; // rdx
  signed __int64 *NextHandleTableEntry; // rdi
  signed __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rbx
  __int64 v16[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v16);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v12 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v12 )
      {
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v12);
      }
      else
      {
        v14 = v16[0];
LABEL_5:
        v13 = v14 + 4;
        if ( (v14 ^ (unsigned __int64)(v14 + 4)) >= 0x400 )
          NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, v14 + 8);
        else
          NextHandleTableEntry += 2;
        v16[0] = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_13;
      }
    }
  }
  while ( v12 != _InterlockedCompareExchange64(NextHandleTableEntry, v12 - 1, v12) );
  v14 = v16[0];
  v5 = a2(a1, NextHandleTableEntry, v16[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v14;
LABEL_13:
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v10, v12, v13);
  return v5;
}
