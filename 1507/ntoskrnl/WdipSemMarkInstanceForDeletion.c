/*
 * XREFs of WdipSemMarkInstanceForDeletion @ 0x1405520E0
 * Callers:
 *     WdipSemDisableScenario @ 0x140551F04 (WdipSemDisableScenario.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     WdipSemQueryEnabledInstanceTable @ 0x1405521E8 (WdipSemQueryEnabledInstanceTable.c)
 */

__int64 __fastcall WdipSemMarkInstanceForDeletion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r9
  signed __int8 v10; // cf
  __int64 v11; // rdi
  __int64 EnabledInstanceTable; // rax
  signed __int64 v13; // rcx
  ULONG_PTR v14; // rtt
  struct _KTHREAD *v15; // rcx
  __int16 v16; // ax

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
    EnabledInstanceTable = WdipSemQueryEnabledInstanceTable(a1);
    v6 = EnabledInstanceTable;
    if ( EnabledInstanceTable )
    {
      if ( *(_DWORD *)(EnabledInstanceTable + 44) )
        v6 = 0LL;
      else
        *(_DWORD *)(EnabledInstanceTable + 44) = 1;
    }
  }
  _m_prefetchw(&qword_14032AB58);
  v13 = qword_14032AB58 - 16;
  if ( (qword_14032AB58 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v13 = 0LL;
  if ( (qword_14032AB58 & 2) != 0
    || (v14 = qword_14032AB58,
        v14 != _InterlockedCompareExchange64((volatile signed __int64 *)&qword_14032AB58, v13, qword_14032AB58)) )
  {
    ExfReleasePushLock(&qword_14032AB58, v8);
  }
  KeAbPostRelease((ULONG_PTR)&qword_14032AB58);
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
