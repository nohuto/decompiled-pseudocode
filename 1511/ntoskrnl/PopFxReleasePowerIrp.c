/*
 * XREFs of PopFxReleasePowerIrp @ 0x1401211A4
 * Callers:
 *     PopFreeIrp @ 0x140120D98 (PopFreeIrp.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 *     PopRequestPowerIrp @ 0x140121B34 (PopRequestPowerIrp.c)
 */

void __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r15
  signed __int32 v5; // eax
  signed __int32 v6; // ett
  char v7; // si
  signed __int32 v8; // eax
  signed __int32 v9; // ett

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = *(_QWORD *)(a1 + 520);
  _m_prefetchw((const void *)(a1 + 32));
  v5 = *(_DWORD *)(a1 + 32);
  do
  {
    v6 = v5;
    v5 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v5, v5);
  }
  while ( v6 != v5 );
  if ( (v5 & 0x20) != 0 )
  {
    v7 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v8 = *(_DWORD *)(a1 + 32);
    do
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v8, v8);
    }
    while ( v9 != v8 );
    if ( (v8 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 488);
      v4 = *(_QWORD *)(a1 + 528);
    }
  }
  else
  {
    v7 = 0;
    KeSetEvent((PRKEVENT)(a1 + 536), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 208), 0LL, 0x20u);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL), v2);
  if ( v7 )
    PopRequestPowerIrp(v3, v4, 1, 0LL);
}
