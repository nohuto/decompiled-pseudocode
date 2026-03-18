/*
 * XREFs of ExEnumHandleTable @ 0x14045E4D0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401C9AC0 (IoRevokeHandlesForProcess.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x14045E424 (ObFindHandleForObject.c)
 *     ObInitProcess @ 0x14045F504 (ObInitProcess.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406256BC (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14062CE90 (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1406655DC (ObShutdownSystem.c)
 *     EtwpObjectHandleRundown @ 0x1406A73A4 (EtwpObjectHandleRundown.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExpLookupHandleTableEntry @ 0x140451390 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x14045E6A0 (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x14049B4BC (ExpBlockOnLockedHandleEntry.c)
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
