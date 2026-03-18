/*
 * XREFs of WdipSemDisableContextProvider @ 0x140505D5C
 * Callers:
 *     WdipSemDisableContextProviders @ 0x140505CF0 (WdipSemDisableContextProviders.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemCaptureState @ 0x140123924 (WdipSemCaptureState.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     WdipSemEnableDisableTrace @ 0x14050609C (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemDisableContextProvider(__int64 a1, char a2)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v3; // rbx
  int v6; // r14d
  __int64 v7; // rax
  signed __int8 v8; // cf
  __int64 v9; // rdi
  int v10; // r8d
  __int64 v11; // rdi
  __int32 v12; // ecx
  ULONG_PTR v14; // rtt

  CurrentThread = KeGetCurrentThread();
  v3 = 0LL;
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_1402DA788, 0LL, 0LL);
  v8 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DA788, 0LL);
  v9 = v7;
  if ( v8 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DA788, v7, (ULONG_PTR)&qword_1402DA788);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  if ( a1 )
  {
    WdipSemCaptureState(a1, a2);
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v11 = *(_QWORD *)(a1 + 40);
      v12 = _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId);
      if ( (*(_DWORD *)(v11 + 72))-- == 1 )
      {
        if ( *(_DWORD *)(v11 + 40) )
        {
          LOBYTE(v10) = *(_BYTE *)(v11 + 16);
          v6 = WdipSemEnableDisableTrace(v12, a1, v10, *(_QWORD *)(v11 + 24), *(_DWORD *)(v11 + 32), 1);
          if ( v6 >= 0 )
          {
            *(_BYTE *)(v11 + 48) = *(_BYTE *)(v11 + 16);
            *(_QWORD *)(v11 + 56) = *(_QWORD *)(v11 + 24);
            *(_DWORD *)(v11 + 64) = *(_DWORD *)(v11 + 32);
          }
        }
        else
        {
          v6 = WdipSemEnableDisableTrace(v12, a1, 0, 0, 0, 0);
          if ( v6 >= 0 )
            memset((void *)(v11 + 48), 0, 0x20uLL);
        }
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  _m_prefetchw(&qword_1402DA788);
  if ( (qword_1402DA788 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v3 = qword_1402DA788 - 16;
  if ( (qword_1402DA788 & 2) != 0
    || (v14 = qword_1402DA788,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA788, v3, qword_1402DA788)) )
  {
    ExfReleasePushLock(&qword_1402DA788);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA788);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v6;
}
