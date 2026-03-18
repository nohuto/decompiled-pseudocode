/*
 * XREFs of PopFxIncrementDeviceSleepCount @ 0x14012328C
 * Callers:
 *     PoFxStartDevicePowerManagement @ 0x140141B30 (PoFxStartDevicePowerManagement.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExAcquireSpinLockExclusive @ 0x14002EB90 (ExAcquireSpinLockExclusive.c)
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
