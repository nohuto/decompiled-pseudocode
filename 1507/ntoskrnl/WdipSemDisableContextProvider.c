/*
 * XREFs of WdipSemDisableContextProvider @ 0x140553028
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140552FBC (WdipSemDisableContextProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemCaptureState @ 0x14012C624 (WdipSemCaptureState.c)
 *     memset @ 0x140195A80 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x1405531B0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v7; // ebp
  __int64 v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r9
  signed __int8 v11; // cf
  __int64 v12; // rbx
  int v13; // r8d
  __int64 v14; // rbx
  __int32 v15; // ecx
  signed __int64 v17; // rcx
  ULONG_PTR v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax

  CurrentThread = KeGetCurrentThread();
  v7 = 0;
  --CurrentThread->KernelApcDisable;
  v8 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB28, 0LL, 0LL, a4);
  v11 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB28, 0LL);
  v12 = v8;
  if ( v11 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB28, v8, (ULONG_PTR)&qword_14032AB28, v10);
  if ( v12 )
    *(_BYTE *)(v12 + 26) |= 1u;
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v14 = *(_QWORD *)(a1 + 40);
      v15 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v14 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v14 + 40) )
        {
          LOBYTE(v13) = *(_BYTE *)(v14 + 16);
          v7 = WdipSemEnableDisableTrace(v15, a1, v13, *(_QWORD *)(v14 + 24), *(_DWORD *)(v14 + 32), 1);
          if ( v7 >= 0 )
          {
            *(_BYTE *)(v14 + 48) = *(_BYTE *)(v14 + 16);
            *(_QWORD *)(v14 + 56) = *(_QWORD *)(v14 + 24);
            *(_DWORD *)(v14 + 64) = *(_DWORD *)(v14 + 32);
          }
        }
        else
        {
          v7 = WdipSemEnableDisableTrace(v15, a1, 0, 0, 0, 0);
          if ( v7 >= 0 )
            memset((void *)(v14 + 48), 0, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v7 = -1073741811;
  }
  _m_prefetchw(&qword_14032AB28);
  v17 = qword_14032AB28 - 16;
  if ( (qword_14032AB28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v17 = 0LL;
  if ( (qword_14032AB28 & 2) != 0
    || (v18 = qword_14032AB28,
        v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB28, v17, qword_14032AB28)) )
  {
    ExfReleasePushLock(&qword_14032AB28, v9);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB28);
  v19 = KeGetCurrentThread();
  v20 = v19->KernelApcDisable + 1;
  v19->KernelApcDisable = v20;
  if ( !v20
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v19->ApcState.ApcListHead[0].Flink != &v19->152
    && !v19->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)v7;
}
