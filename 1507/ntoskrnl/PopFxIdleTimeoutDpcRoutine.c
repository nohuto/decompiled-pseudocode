/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x140139F50
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x140028CEC (PopDiagTraceFxDevicePowerRequirement.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PopFxDeliverDevicePowerRequired @ 0x14013A1B4 (PopFxDeliverDevicePowerRequired.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     PopFxBugCheck @ 0x1402373B8 (PopFxBugCheck.c)
 */

__int64 __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  volatile signed __int32 *v3; // rdi
  unsigned __int8 CurrentIrql; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  __int64 result; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v3 = (volatile signed __int32 *)(a2 + 328);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented(v3);
  }
  else if ( _interlockedbittestandset64(v3, 0LL) )
  {
    KxWaitForSpinLockAndAcquire(v3);
  }
  _m_prefetchw((const void *)(a2 + 32));
  v5 = *(_DWORD *)(a2 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a2 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 4) != 0 )
  {
    _InterlockedAnd((volatile signed __int32 *)(a2 + 32), 0xFFFFFFFB);
    if ( *(_DWORD *)(a2 + 40) != 2 )
      PopFxBugCheck(0x613uLL, a2, 0LL, 0LL);
    PopDiagTraceFxDevicePowerRequirement(*(_QWORD *)(a2 + 48), 0, 0);
    (*(void (__fastcall **)(_QWORD))(a2 + 144))(*(_QWORD *)(a2 + 168));
    _InterlockedOr((volatile signed __int32 *)(a2 + 32), 0x40u);
    _InterlockedDecrement((volatile signed __int32 *)(a2 + 40));
  }
  else
  {
    PopFxDeliverDevicePowerRequired(a2);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(v3, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
