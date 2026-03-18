/*
 * XREFs of PopFxReleasePowerIrp @ 0x140136B3C
 * Callers:
 *     PopFreeIrp @ 0x140136730 (PopFreeIrp.c)
 * Callees:
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     PopRequestPowerIrp @ 0x140136E74 (PopRequestPowerIrp.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  __int64 v2; // rbx
  unsigned __int8 CurrentIrql; // r12
  unsigned int v4; // esi
  signed __int32 v5; // eax
  struct _DEVICE_OBJECT *v6; // rbp
  __int64 v7; // r15
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  char v10; // si
  _DWORD *v11; // rcx
  __int64 result; // rax
  signed __int32 v13; // eax
  signed __int32 v14; // ett
  void *retaddr; // [rsp+68h] [rbp+0h]

  v2 = *(_QWORD *)(a1 + 48);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v2 + 88);
  }
  else
  {
    v4 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)(v2 + 88), 0x1Fu) )
      v4 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v2 + 88));
    while ( 1 )
    {
      v5 = *(_DWORD *)(v2 + 88);
      if ( (v5 & 0xBFFFFFFF) == 0x80000000 )
        break;
      if ( (v5 & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)(v2 + 88), v5 | 0x40000000, v5);
      if ( (++v4 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v4);
    }
  }
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v6 = *(struct _DEVICE_OBJECT **)(a1 + 480);
  v7 = *(_QWORD *)(a1 + 520);
  _m_prefetchw((const void *)(a1 + 32));
  v8 = *(_DWORD *)(a1 + 32);
  do
  {
    v9 = v8;
    v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8, v8);
  }
  while ( v9 != v8 );
  if ( (v8 & 0x20) != 0 )
  {
    v10 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v13 = *(_DWORD *)(a1 + 32);
    do
    {
      v14 = v13;
      v13 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v13, v13);
    }
    while ( v14 != v13 );
    if ( (v13 & 0x100) != 0 )
    {
      v6 = *(struct _DEVICE_OBJECT **)(a1 + 488);
      v7 = *(_QWORD *)(a1 + 528);
    }
  }
  else
  {
    v10 = 0;
    KeSetEvent((PRKEVENT)(a1 + 536), 0, 0);
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(a1 + 212), 0xFFFFFFFF) == 1 )
      KeSetEvent((PRKEVENT)(a1 + 216), 0, 0);
  }
  v11 = (_DWORD *)(*(_QWORD *)(a1 + 48) + 88LL);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v11, retaddr);
  else
    *v11 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  if ( v10 )
    return PopRequestPowerIrp(v6, v7, 1, 0LL);
  return result;
}
