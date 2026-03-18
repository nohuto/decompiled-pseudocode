/*
 * XREFs of ExEnumHandleTable @ 0x140480DE0
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401BBC4C (IoRevokeHandlesForProcess.c)
 *     ObInitProcess @ 0x1403E3544 (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x140480D40 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1405FBA88 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x140602B0C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x14062D4D0 (ObShutdownSystem.c)
 *     PspIoRateControlProcessCallback @ 0x140642104 (PspIoRateControlProcessCallback.c)
 *     EtwpObjectHandleRundown @ 0x14066599C (EtwpObjectHandleRundown.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     ExpLookupHandleTableEntry @ 0x14040BF60 (ExpLookupHandleTableEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x140480FB0 (ExpGetNextHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x140498ABC (ExpBlockOnLockedHandleEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, signed __int64 *, _QWORD, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  signed __int64 *NextHandleTableEntry; // rdi
  signed __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  _QWORD v15[7]; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (signed __int64 *)ExpGetNextHandleTableEntry(a1, 0LL, v15);
  if ( !NextHandleTableEntry )
    goto LABEL_13;
  do
  {
    while ( 1 )
    {
      _m_prefetchw(NextHandleTableEntry);
      v11 = *NextHandleTableEntry;
      if ( (*NextHandleTableEntry & 1) != 0 )
        break;
      if ( v11 )
      {
        ExpBlockOnLockedHandleEntry(a1, NextHandleTableEntry, v11);
      }
      else
      {
        v12 = v15[0];
LABEL_5:
        v13 = v12 + 4;
        if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
          NextHandleTableEntry = (signed __int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
        else
          NextHandleTableEntry += 2;
        v15[0] = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_13;
      }
    }
  }
  while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
  v12 = v15[0];
  v5 = a2(a1, NextHandleTableEntry, v15[0], a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v12;
LABEL_13:
  KeLeaveCriticalRegionThread((__int64)CurrentThread);
  return v5;
}
