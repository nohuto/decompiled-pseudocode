/*
 * XREFs of PopFxReleasePowerIrp @ 0x14012BA48
 * Callers:
 *     PopFreeIrp @ 0x14012B6E4 (PopFreeIrp.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
 *     KeSetEvent @ 0x1400562D0 (KeSetEvent.c)
 *     IoReleaseRemoveLockEx @ 0x14009DD7C (IoReleaseRemoveLockEx.c)
 *     PopRequestPowerIrp @ 0x14012AB98 (PopRequestPowerIrp.c)
 */

void __fastcall PopFxReleasePowerIrp(__int64 a1)
{
  KIRQL v2; // r12
  __int64 v3; // rbp
  __int64 v4; // r14
  __int64 v5; // r15
  int v6; // ebx
  signed __int32 v7; // eax
  signed __int32 v8; // ett
  char v9; // si
  signed __int32 v10; // eax
  signed __int32 v11; // ett

  v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL));
  _InterlockedAnd((volatile signed __int32 *)(a1 + 32), 0xFFFFFFEF);
  v3 = *(_QWORD *)(a1 + 480);
  v4 = *(_QWORD *)(a1 + 504);
  v5 = *(_QWORD *)(a1 + 520);
  v6 = *(_DWORD *)(a1 + 496);
  _m_prefetchw((const void *)(a1 + 32));
  v7 = *(_DWORD *)(a1 + 32);
  do
  {
    v8 = v7;
    v7 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v7, v7);
  }
  while ( v8 != v7 );
  if ( (v7 & 0x20) != 0 )
  {
    v9 = 1;
    _m_prefetchw((const void *)(a1 + 32));
    v10 = *(_DWORD *)(a1 + 32);
    do
    {
      v11 = v10;
      v10 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 32), v10, v10);
    }
    while ( v11 != v10 );
    if ( (v10 & 0x100) != 0 )
    {
      v3 = *(_QWORD *)(a1 + 488);
      v4 = *(_QWORD *)(a1 + 512);
      v5 = *(_QWORD *)(a1 + 528);
      v6 = *(_DWORD *)(a1 + 500);
    }
  }
  else
  {
    v9 = 0;
    KeSetEvent((PRKEVENT)(a1 + 536), 0, 0);
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(a1 + 208), 0LL, 0x20u);
  }
  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)(a1 + 48) + 88LL), v2);
  if ( v9 )
    PopRequestPowerIrp(v3, 2, v6, v4, v5, 1, 0LL);
}
