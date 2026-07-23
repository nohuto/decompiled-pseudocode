/*
 * XREFs of WdipSemEnableContextProvider @ 0x14054203C
 * Callers:
 *     WdipSemEnableContextProviders @ 0x140541FE8 (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     WdipSemEnableDisableTrace @ 0x1404C7BCC (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1)
{
  struct _KTHREAD *CurrentThread; // rax
  signed __int64 v2; // rbx
  int v4; // ebp
  _BYTE *v5; // rax
  signed __int8 v6; // cf
  _BYTE *v7; // rdi
  __int64 v8; // rdi
  unsigned __int8 v9; // cl
  int v10; // edx
  char v11; // r12
  __int64 v12; // rax
  __int64 v13; // r15
  int v14; // r14d
  ULONG_PTR v15; // rtt
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9

  CurrentThread = KeGetCurrentThread();
  v2 = 0LL;
  v4 = 0;
  --CurrentThread->KernelApcDisable;
  v5 = (_BYTE *)KeAbPreAcquire((ULONG_PTR)&qword_1402FFF08, 0LL, 0);
  v6 = _interlockedbittestandset64((volatile signed __int32 *)&qword_1402FFF08, 0LL);
  v7 = v5;
  if ( v6 )
    ExfAcquirePushLockExclusiveEx(&qword_1402FFF08, v5, (ULONG_PTR)&qword_1402FFF08);
  if ( v7 )
    v7[26] |= 1u;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) != 1 )
    {
      v8 = *(_QWORD *)(a1 + 40);
      v9 = *(_BYTE *)(v8 + 48);
      v10 = *(_DWORD *)(v8 + 64);
      v11 = v9;
      if ( *(_BYTE *)(a1 + 18) > v9 )
        v11 = *(_BYTE *)(a1 + 18);
      v12 = *(_QWORD *)(v8 + 56);
      v13 = v12 | *(_QWORD *)(a1 + 24);
      v14 = v10 | *(_DWORD *)(a1 + 36);
      if ( *(_BYTE *)(v8 + 69) && v13 == v12 && v11 == v9 && v14 == v10 )
      {
        ++*(_DWORD *)(v8 + 72);
      }
      else
      {
        v4 = WdipSemEnableDisableTrace(
               _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
               a1,
               v11,
               v12 | *(_QWORD *)(a1 + 24),
               v14,
               1);
        if ( v4 >= 0 )
        {
          ++*(_DWORD *)(v8 + 72);
          *(_BYTE *)(v8 + 69) = 1;
          *(_QWORD *)(v8 + 56) = v13;
          *(_BYTE *)(v8 + 48) = v11;
          *(_DWORD *)(v8 + 64) = v14;
        }
      }
    }
  }
  else
  {
    v4 = -1073741811;
  }
  _m_prefetchw(&qword_1402FFF08);
  if ( (qword_1402FFF08 & 0xFFFFFFFFFFFFFFF0uLL) > 0x10 )
    v2 = qword_1402FFF08 - 16;
  if ( (qword_1402FFF08 & 2) != 0
    || (v15 = qword_1402FFF08,
        v15 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_1402FFF08, v2, qword_1402FFF08)) )
  {
    ExfReleasePushLock(&qword_1402FFF08);
  }
  KeAbPostRelease((ULONG_PTR)&qword_1402FFF08);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v16, v17, v18);
  return (unsigned int)v4;
}
