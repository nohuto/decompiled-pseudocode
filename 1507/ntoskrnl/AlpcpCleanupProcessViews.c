/*
 * XREFs of AlpcpCleanupProcessViews @ 0x1405045B0
 * Callers:
 *     LpcExitProcess @ 0x140504574 (LpcExitProcess.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     AlpcpForceUnlinkSecureView @ 0x14069F1C4 (AlpcpForceUnlinkSecureView.c)
 */

void __fastcall AlpcpCleanupProcessViews(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 *v6; // rdi
  __int64 v7; // rax
  __int64 v8; // r9
  __int64 v9; // rsi
  _QWORD *v10; // rbp
  struct _KTHREAD *v11; // rcx
  __int16 v12; // ax
  __int64 v13; // rsi
  __int64 BugCheckParameter4; // rax
  __int64 v15; // rdx
  __int64 v16; // r9
  signed __int64 v17; // rax
  bool v18; // cc
  ULONG_PTR v19; // rax
  __int64 v20; // rax
  __int64 v21; // r9
  __int64 v22; // rsi

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = (unsigned __int64 *)(a1 + 1592);
  v7 = KeAbPreAcquire(a1 + 1592, 0LL, 0LL, a4);
  v9 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
    ExfAcquirePushLockExclusiveEx(v6, v7, (ULONG_PTR)v6, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  v10 = (_QWORD *)(a1 + 1600);
  while ( (_QWORD *)*v10 != v10 )
  {
    v13 = *v10 - 80LL;
    _m_prefetchw((const void *)(*v10 - 104LL));
    BugCheckParameter4 = *(_QWORD *)(v13 - 24);
    do
    {
      if ( BugCheckParameter4 <= 0 )
      {
        if ( BugCheckParameter4 )
          KeBugCheckEx(0x18u, 0LL, v13, 0x20uLL, BugCheckParameter4);
        goto LABEL_20;
      }
      v15 = BugCheckParameter4;
      BugCheckParameter4 = _InterlockedCompareExchange64(
                             (volatile signed __int64 *)(v13 - 24),
                             BugCheckParameter4 + 1,
                             BugCheckParameter4);
    }
    while ( BugCheckParameter4 != v15 );
    if ( BugCheckParameter4 != -1 )
      goto LABEL_21;
LABEL_20:
    v13 = 0LL;
LABEL_21:
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)v6);
    KeAbPostRelease((ULONG_PTR)v6);
    if ( v13 )
    {
      AlpcpForceUnlinkSecureView(v13);
      v17 = _InterlockedExchangeAdd64((volatile signed __int64 *)(v13 - 24), 0xFFFFFFFFFFFFFFFFuLL);
      v18 = v17 <= 1;
      v19 = v17 - 1;
      if ( v18 )
      {
        if ( v19 )
          KeBugCheckEx(0x18u, 0LL, v13, 0x21uLL, v19);
        AlpcpDestroyBlob(v13);
      }
    }
    v20 = KeAbPreAcquire((ULONG_PTR)v6, 0LL, 0LL, v16);
    v22 = v20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)v6, 0LL) )
      ExfAcquirePushLockExclusiveEx(v6, v20, (ULONG_PTR)v6, v21);
    if ( v22 )
      *(_BYTE *)(v22 + 26) |= 1u;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v6, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v6);
  KeAbPostRelease((ULONG_PTR)v6);
  v11 = KeGetCurrentThread();
  v12 = v11->KernelApcDisable + 1;
  v11->KernelApcDisable = v12;
  if ( !v12
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v11->ApcState.ApcListHead[0].Flink != &v11->152
    && !v11->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
}
