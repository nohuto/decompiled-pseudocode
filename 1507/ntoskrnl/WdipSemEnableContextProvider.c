/*
 * XREFs of WdipSemEnableContextProvider @ 0x14056B0F4
 * Callers:
 *     WdipSemEnableContextProviders @ 0x14056B0A0 (WdipSemEnableContextProviders.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemEnableDisableTrace @ 0x1405531B0 (WdipSemEnableDisableTrace.c)
 */

__int64 __fastcall WdipSemEnableContextProvider(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  int v6; // esi
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  __int64 v10; // rbx
  __int64 v11; // rbx
  unsigned __int8 v12; // cl
  char v13; // r15
  __int64 v14; // rax
  __int64 v15; // r14
  int v16; // ebp
  signed __int64 v17; // rcx
  ULONG_PTR v18; // rtt
  struct _KTHREAD *v19; // rcx
  __int16 v20; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB28, 0LL, 0LL, a4);
  v10 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB28, 0LL) )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB28, v7, (ULONG_PTR)&qword_14032AB28, v9);
  if ( v10 )
    *(_BYTE *)(v10 + 26) |= 1u;
  if ( a1 )
  {
    if ( *(_DWORD *)(a1 + 32) == 1 )
      goto LABEL_14;
    v11 = *(_QWORD *)(a1 + 40);
    v12 = *(_BYTE *)(v11 + 48);
    v8 = *(unsigned int *)(v11 + 64);
    v13 = v12;
    if ( *(_BYTE *)(a1 + 18) > v12 )
      v13 = *(_BYTE *)(a1 + 18);
    v14 = *(_QWORD *)(v11 + 56);
    v15 = v14 | *(_QWORD *)(a1 + 24);
    v16 = v8 | *(_DWORD *)(a1 + 36);
    if ( !*(_BYTE *)(v11 + 69) || v15 != v14 || v13 != v12 || v16 != (_DWORD)v8 )
    {
      v6 = WdipSemEnableDisableTrace(
             _InterlockedExchange(&WdipContextLoggerId, WdipContextLoggerId),
             a1,
             v13,
             v14 | *(_QWORD *)(a1 + 24),
             v16,
             1);
      if ( v6 < 0 )
        goto LABEL_14;
      *(_BYTE *)(v11 + 69) = 1;
      *(_QWORD *)(v11 + 56) = v15;
      *(_BYTE *)(v11 + 48) = v13;
      *(_DWORD *)(v11 + 64) = v16;
    }
    ++*(_DWORD *)(v11 + 72);
  }
  else
  {
    v6 = -1073741811;
  }
LABEL_14:
  _m_prefetchw(&qword_14032AB28);
  v17 = qword_14032AB28 - 16;
  if ( (qword_14032AB28 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v17 = 0LL;
  if ( (qword_14032AB28 & 2) != 0
    || (v18 = qword_14032AB28,
        v18 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB28, v17, qword_14032AB28)) )
  {
    ExfReleasePushLock(&qword_14032AB28, v8);
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
  return (unsigned int)v6;
}
