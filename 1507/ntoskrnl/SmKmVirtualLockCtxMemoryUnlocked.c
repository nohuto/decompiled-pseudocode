/*
 * XREFs of SmKmVirtualLockCtxMemoryUnlocked @ 0x1402582E4
 * Callers:
 *     SmKmStoreHelperCommandProcess @ 0x14014325C (SmKmStoreHelperCommandProcess.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140258134 (SmKmVirtualLockCtxLockMemory.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmQueryWorkingSetInformation @ 0x1400F090C (MmQueryWorkingSetInformation.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     MmAdjustWorkingSetSize @ 0x140213DAC (MmAdjustWorkingSetSize.c)
 */

void __fastcall SmKmVirtualLockCtxMemoryUnlocked(ULONG_PTR BugCheckParameter2, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rcx
  unsigned __int64 v6; // rax
  struct _KTHREAD *CurrentThread; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rsi
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax
  __int64 v17; // [rsp+30h] [rbp-38h] BYREF
  _QWORD v18[6]; // [rsp+38h] [rbp-30h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned __int64 v20; // [rsp+78h] [rbp+10h] BYREF
  unsigned __int64 v21; // [rsp+80h] [rbp+18h] BYREF
  __int64 v22; // [rsp+88h] [rbp+20h] BYREF

  _InterlockedExchangeAdd64((volatile signed __int64 *)(BugCheckParameter2 + 8), -a2);
  v5 = *(_QWORD *)(BugCheckParameter2 + 8);
  v6 = *(_QWORD *)(BugCheckParameter2 + 16);
  if ( v5 < v6 && (!v5 || v6 - v5 >= 0x800000) )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    v8 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
    v10 = v8;
    if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
      ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v8, BugCheckParameter2, v9);
    if ( v10 )
      *(_BYTE *)(v10 + 26) |= 1u;
    v11 = *(_QWORD *)(BugCheckParameter2 + 8);
    v12 = *(_QWORD *)(BugCheckParameter2 + 16) - v11;
    if ( (v12 >= 0x800000 || !v11 && *(_QWORD *)(BugCheckParameter2 + 16))
      && (int)MmQueryWorkingSetInformation(v18, &v17, &v22, &v20, &v21, &v19) >= 0 )
    {
      v13 = v20;
      v14 = v12 & 0xFFFFFFFFFFC00000uLL;
      *(_QWORD *)(BugCheckParameter2 + 16) -= v14;
      if ( v13 >= v14 )
      {
        v20 = v13 - v14;
        MmAdjustWorkingSetSize(v13 - v14, v21, 0, 0);
      }
    }
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v15 = KeGetCurrentThread();
    v16 = v15->KernelApcDisable + 1;
    v15->KernelApcDisable = v16;
    if ( !v16
      && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
      && !v15->SpecialApcDisable )
    {
      KiCheckForKernelApcDelivery();
    }
  }
}
