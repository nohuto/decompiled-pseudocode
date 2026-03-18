/*
 * XREFs of WdipSemMarkNextTimedOutInstanceForDeletion @ 0x14054CE58
 * Callers:
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 */

__int64 *__fastcall WdipSemMarkNextTimedOutInstanceForDeletion(__int64 **a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 *v6; // rsi
  __int64 v7; // rax
  __int64 *v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  signed __int64 v12; // rcx
  ULONG_PTR v13; // rtt
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  __int64 *v17; // rcx

  CurrentThread = KeGetCurrentThread();
  v6 = 0LL;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14032AB58, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AB58, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AB58, v7, (ULONG_PTR)&qword_14032AB58, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a1 )
  {
    v8 = *a1;
    while ( v8 != &WdipSemEnabledInstanceTable )
    {
      v17 = v8;
      v8 = (__int64 *)*v8;
      if ( ++*((_DWORD *)v17 + 10) >= 0xAu && *(_BYTE *)(v17[4] + 1176) && !*((_DWORD *)v17 + 11) )
      {
        *((_DWORD *)v17 + 11) = 1;
        v6 = v17;
        break;
      }
    }
  }
  _m_prefetchw(&qword_14032AB58);
  v12 = qword_14032AB58 - 16;
  if ( (qword_14032AB58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v12 = 0LL;
  if ( (qword_14032AB58 & 2) != 0
    || (v13 = qword_14032AB58,
        v13 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB58, v12, qword_14032AB58)) )
  {
    ExfReleasePushLock(&qword_14032AB58, (__int64)v8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB58);
  v14 = KeGetCurrentThread();
  v15 = v14->KernelApcDisable + 1;
  v14->KernelApcDisable = v15;
  if ( !v15
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v14->ApcState.ApcListHead[0].Flink != &v14->152
    && !v14->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
