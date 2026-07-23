/*
 * XREFs of WdipSemUpdateFrequentScenarioTable @ 0x1406DEE94
 * Callers:
 *     WdipSemLogInflightLimitExceededInformation @ 0x1406DECE0 (WdipSemLogInflightLimitExceededInformation.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemFastAllocate @ 0x1405525E0 (WdipSemFastAllocate.c)
 */

__int64 __fastcall WdipSemUpdateFrequentScenarioTable(_SLIST_ENTRY *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int v6; // edi
  __int64 v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rbx
  PSLIST_ENTRY v12; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rdx
  __int16 v16; // ax

  CurrentThread = KeGetCurrentThread();
  v6 = 0;
  --CurrentThread->KernelApcDisable;
  v7 = KeAbPreAcquire((ULONG_PTR)&qword_14032AF88, 0LL, 0LL, a4);
  v10 = _interlockedbittestandset64((volatile signed __int32 *)&qword_14032AF88, 0LL);
  v11 = v7;
  if ( v10 )
    ExfAcquirePushLockExclusiveEx(&qword_14032AF88, v7, (ULONG_PTR)&qword_14032AF88, v9);
  if ( v11 )
    *(_BYTE *)(v11 + 26) |= 1u;
  if ( a1 )
  {
    if ( (unsigned int)dword_14032AF80 < 0x80 )
    {
      v12 = WdipSemFastAllocate(5, 0x18u);
      if ( v12 )
      {
        v8 = WdipSemFrequentScenarioTable;
        *v12 = *a1;
        v12[1].Next = a1[1].Next;
        WdipSemFrequentScenarioTable[dword_14032AF80++] = v12;
      }
      else
      {
        v6 = -1073741670;
      }
    }
    else
    {
      v6 = -1073741823;
    }
  }
  else
  {
    v6 = -1073741811;
  }
  _m_prefetchw(&qword_14032AF88);
  v13 = qword_14032AF88 - 16;
  if ( (qword_14032AF88 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (qword_14032AF88 & 2) != 0
    || (v14 = qword_14032AF88,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AF88, v13, qword_14032AF88)) )
  {
    ExfReleasePushLock(&qword_14032AF88, (__int64)v8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AF88);
  v15 = KeGetCurrentThread();
  v16 = v15->KernelApcDisable + 1;
  v15->KernelApcDisable = v16;
  if ( !v16
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v15->ApcState.ApcListHead[0].Flink != &v15->152
    && !v15->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v6;
}
