/*
 * XREFs of PopFxIdleTimeoutDpcRoutine @ 0x140131F58
 * Callers:
 *     <none>
 * Callees:
 *     PopDiagTraceFxDevicePowerRequirement @ 0x1400BF470 (PopDiagTraceFxDevicePowerRequirement.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     PopFxDeliverDevicePowerRequired @ 0x1401269D4 (PopFxDeliverDevicePowerRequired.c)
 *     PopFxBugCheck @ 0x140202120 (PopFxBugCheck.c)
 */

void __fastcall PopFxIdleTimeoutDpcRoutine(__int64 a1, ULONG_PTR a2)
{
  KSPIN_LOCK *v2; // rdi
  KIRQL v4; // si
  signed __int32 v5; // eax
  signed __int32 v6; // ett

  v2 = (KSPIN_LOCK *)(a2 + 328);
  v4 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 328));
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
    PopFxDeliverDevicePowerRequired(a2, 0LL);
  }
  KeReleaseSpinLock(v2, v4);
}
