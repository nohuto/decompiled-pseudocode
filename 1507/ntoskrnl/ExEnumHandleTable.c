/*
 * XREFs of ExEnumHandleTable @ 0x140521D30
 * Callers:
 *     IoRevokeHandlesForProcess @ 0x1401F7200 (IoRevokeHandlesForProcess.c)
 *     ObInitProcess @ 0x140467784 (ObInitProcess.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ObFindHandleForObject @ 0x140521C74 (ObFindHandleForObject.c)
 *     IopQueryProcessIdsUsingFile @ 0x1406761D0 (IopQueryProcessIdsUsingFile.c)
 *     PnpHandleEnumerateHandlesAgainstDeviceObject @ 0x14067D92C (PnpHandleEnumerateHandlesAgainstDeviceObject.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 *     PspIoRateControlProcessCallback @ 0x1406C4628 (PspIoRateControlProcessCallback.c)
 *     EtwpObjectHandleRundown @ 0x1406E8B14 (EtwpObjectHandleRundown.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpLookupHandleTableEntry @ 0x140498B20 (ExpLookupHandleTableEntry.c)
 *     ExpBlockOnLockedHandleEntry @ 0x1404EEB50 (ExpBlockOnLockedHandleEntry.c)
 *     ExpGetNextHandleTableEntry @ 0x140521F54 (ExpGetNextHandleTableEntry.c)
 */

__int64 __fastcall ExEnumHandleTable(
        unsigned int *a1,
        __int64 (__fastcall *a2)(unsigned int *, __int64 *, __int64, __int64),
        __int64 a3,
        _QWORD *a4)
{
  struct _KTHREAD *CurrentThread; // r13
  unsigned __int8 v5; // si
  __int64 *NextHandleTableEntry; // rdi
  __int64 v11; // r8
  __int64 v12; // rbx
  __int64 v13; // r9
  __int16 v14; // ax
  __int64 v16; // [rsp+20h] [rbp-38h] BYREF

  CurrentThread = KeGetCurrentThread();
  v5 = 0;
  --CurrentThread->KernelApcDisable;
  NextHandleTableEntry = (__int64 *)ExpGetNextHandleTableEntry(a1, 0LL, &v16);
  if ( !NextHandleTableEntry )
    goto LABEL_8;
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
        ExpBlockOnLockedHandleEntry((__int64)a1, NextHandleTableEntry, v11);
      }
      else
      {
        v12 = v16;
LABEL_5:
        v13 = v12 + 4;
        if ( (v12 ^ (unsigned __int64)(v12 + 4)) >= 0x400 )
          NextHandleTableEntry = (__int64 *)ExpLookupHandleTableEntry(a1, v12 + 8);
        else
          NextHandleTableEntry += 2;
        v16 = v13;
        if ( !NextHandleTableEntry )
          goto LABEL_8;
      }
    }
  }
  while ( v11 != _InterlockedCompareExchange64(NextHandleTableEntry, v11 - 1, v11) );
  v12 = v16;
  v5 = a2(a1, NextHandleTableEntry, v16, a3);
  if ( !v5 )
    goto LABEL_5;
  if ( a4 )
    *a4 = v12;
LABEL_8:
  v14 = CurrentThread->KernelApcDisable + 1;
  CurrentThread->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152
    && !CurrentThread->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v5;
}
