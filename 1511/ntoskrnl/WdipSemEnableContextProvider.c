/*
 * XREFs of WdipSemEnableContextProvider @ 0x140505F20
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140505ECC (WdipSemEnableContextProviders.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     WdipSemEnableDisableTrace @ 0x14050609C (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  int v4; // ebp
  __int64 v5; // rax
  signed __int8 v6; // cf
  __int64 v7; // rdi
  int v8; // r8d
  __int64 v9; // rdi
  unsigned __int8 v10; // cl
  int v11; // edx
  unsigned __int8 v12; // r12
  __int64 v13; // rax
  __int64 v14; // r15
  int v15; // r14d
  ULONG_PTR v16; // rtt

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = KeAbPreAcquire((ULONG_PTR)&qword_1402DA788, 0LL, 0LL);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402DA788, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402DA788, v5, (ULONG_PTR)&qword_1402DA788);
  v8 = 1;
  if ( v7 )
    *(_BYTE *)(v7 + 26) |= 1u;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v9 = *(_QWORD *)(a1 + 40);
      v10 = *(_BYTE *)(v9 + 48);
      v11 = *(_DWORD *)(v9 + 64);
      v12 = v10;
      if ( *(_BYTE *)(a1 + 18) > v10 )
        v12 = *(_BYTE *)(a1 + 18);
      v13 = *(_QWORD *)(v9 + 56);
      v14 = v13 | *(_QWORD *)(a1 + 24);
      v15 = v11 | *(_DWORD *)(a1 + 36);
      if ( *(_BYTE *)(v9 + 69) && v14 == v13 && v12 == v10 && v15 == v11 )
      {
        ++*(_DWORD *)(v9 + 72);
      }
      else
      {
        LOBYTE(v8) = v12;
        v4 = WdipSemEnableDisableTrace(
               _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
               a1,
               v8,
               (unsigned int)v13 | *(_DWORD *)(a1 + 24),
               v15,
               1);
        if ( v4 >= 0 )
        {
          ++*(_DWORD *)(v9 + 72);
          *(_BYTE *)(v9 + 69) = 1;
          *(_QWORD *)(v9 + 56) = v14;
          *(_BYTE *)(v9 + 48) = v12;
          *(_DWORD *)(v9 + 64) = v15;
        }
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  _m_prefetchw(&qword_1402DA788);
  if ( (qword_1402DA788 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402DA788 - 16;
  if ( (qword_1402DA788 & 2) != 0
    || (v16 = qword_1402DA788,
        v16 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402DA788, v2, qword_1402DA788)) )
  {
    ExfReleasePushLock(&qword_1402DA788);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402DA788);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)v4;
}
