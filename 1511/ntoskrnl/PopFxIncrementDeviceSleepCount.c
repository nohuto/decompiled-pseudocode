/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x1401146A0
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x14013D034 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 */

void __fastcall PopFxIncrementDeviceSleepCount(__int64 a1)
{
  __int64 v1; // rbx
  KIRQL v2; // cl

  if ( a1 )
    v1 = *(_QWORD *)(*(_QWORD *)(a1 + 312) + 40LL);
  else
    v1 = 0LL;
  if ( v1 )
  {
    v2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88));
    if ( (*(_DWORD *)(v1 + 296) & 4) == 0 || (*(_DWORD *)(*(_QWORD *)(v1 + 80) + 616LL) & 1) == 0 )
      ++*(_DWORD *)(v1 + 124);
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(v1 + 88), v2);
  }
}
