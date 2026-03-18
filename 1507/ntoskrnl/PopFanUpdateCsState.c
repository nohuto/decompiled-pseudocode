/*
 * XREFs of PopFanUpdateCsState @ 0x1406BB0E4
 * Callers:
 *     PopConnectedStandbySettingCallback @ 0x140583AF8 (PopConnectedStandbySettingCallback.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     PopFanEndCsFanPeriod @ 0x1406BB034 (PopFanEndCsFanPeriod.c)
 */

void __fastcall PopFanUpdateCsState(char a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  signed __int8 v9; // cf
  __int64 v10; // rbx
  signed __int64 v11; // rcx
  ULONG_PTR v12; // rtt
  struct _KTHREAD *v13; // rcx
  __int16 v14; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PopFanLock, 0LL, 0LL, a4);
  v9 = _interlockedbittestandset64((volatile signed __int32 *)&PopFanLock, 0LL);
  v10 = v6;
  if ( v9 )
    ExfAcquirePushLockExclusiveEx(&PopFanLock, v6, (ULONG_PTR)&PopFanLock, v8);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  qword_14032DF38 = (__int64)KeGetCurrentThread();
  if ( a1 )
  {
    if ( byte_14032DFC5 )
    {
      if ( byte_14032DFC4 )
        PopFanEndCsFanPeriod();
      byte_14032DFC5 = 0;
      qword_14032DFD0 = 0LL;
    }
  }
  else if ( !byte_14032DFC5 )
  {
    byte_14032DFC5 = 1;
    qword_14032DFD0 = MEMORY[0xFFFFF78000000008];
  }
  if ( qword_14032DF38 )
    qword_14032DF38 = 0LL;
  _m_prefetchw(&PopFanLock);
  v11 = PopFanLock - 16;
  if ( (PopFanLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v11 = 0LL;
  if ( (PopFanLock & 2) != 0
    || (v12 = PopFanLock, v12 != _InterlockedCompareExchange64((volatile signed __int64 *)&PopFanLock, v11, PopFanLock)) )
  {
    ExfReleasePushLock(&PopFanLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PopFanLock);
  v13 = KeGetCurrentThread();
  v14 = v13->KernelApcDisable + 1;
  v13->KernelApcDisable = v14;
  if ( !v14
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v13->ApcState.ApcListHead[0].Flink != &v13->152
    && !v13->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
