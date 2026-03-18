/*
 * XREFs of PopPepReleaseActivityLink @ 0x1400C23D8
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400C1CC0 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400C2248 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1401259F0 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     PopPepComponentSetLatency @ 0x140141D40 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x14014BD30 (PopPepComponentSetResidency.c)
 *     PopPepCompleteComponentIdleState @ 0x140205E80 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetWakeHint @ 0x140205F58 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockExclusive @ 0x14002E9A0 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E9E0 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExReleaseSpinLockShared @ 0x1400EA240 (ExReleaseSpinLockShared.c)
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
