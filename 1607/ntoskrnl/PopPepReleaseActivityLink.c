/*
 * XREFs of PopPepReleaseActivityLink @ 0x1400C0268
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400BFB50 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400C00D8 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x140125F60 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x1401422B0 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014C2A0 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140205CAC (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140205D84 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockShared @ 0x1400E80B0 (ExReleaseSpinLockShared.c)
 */

void __fastcall PopPepReleaseActivityLink(__int64 a1, volatile LONG *a2, char a3, KIRQL a4)
{
  unsigned int v6; // eax
  _QWORD *v7; // rcx

  if ( a3 == 1 )
  {
    v6 = 0;
    v7 = (_QWORD *)(a1 + 72);
    while ( !*v7 || !*(_DWORD *)*v7 )
    {
      ++v6;
      ++v7;
      if ( v6 >= 6 )
      {
        if ( *(_BYTE *)(a1 + 136) )
          *(_BYTE *)(a1 + 125) = 0;
        break;
      }
    }
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 64), a4);
  }
  else
  {
    ExReleaseSpinLockExclusiveFromDpcLevel(a2);
    ExReleaseSpinLockShared((PEX_SPIN_LOCK)(a1 + 64), a4);
  }
}
