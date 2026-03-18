/*
 * XREFs of HvViewMapChangeFileSize @ 0x140662AE0
 * Callers:
 *     CmpDoFileSetSizeEx @ 0x1404AF608 (CmpDoFileSetSizeEx.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     HvpViewMapGrowFile @ 0x140663468 (HvpViewMapGrowFile.c)
 */

__int64 __fastcall HvViewMapChangeFileSize(unsigned int *a1, __int64 a2, unsigned __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v8; // rdi
  __int64 v9; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  unsigned int v12; // esi
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v8 = (unsigned __int64 *)(a1 + 2);
  v9 = KeAbPreAcquire((ULONG_PTR)(a1 + 2), 0LL, 0LL, a4);
  v11 = v9;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v8, 0LL) )
    ExfAcquirePushLockExclusiveEx(v8, v9, (ULONG_PTR)v8, v10);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( *a1 >= a3 )
    v12 = 0;
  else
    v12 = HvpViewMapGrowFile(a1, a2, a3);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v8, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v8);
  KeAbPostRelease((ULONG_PTR)v8);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v12;
}
