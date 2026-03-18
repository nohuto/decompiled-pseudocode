/*
 * XREFs of PopPepReleaseActivityLink @ 0x1400DBAC0
 * Callers:
 *     PopPepTryPowerDownDevice @ 0x1400DB654 (PopPepTryPowerDownDevice.c)
 *     PopPepProcessEvent @ 0x1400DB930 (PopPepProcessEvent.c)
 *     PopPepSurprisePowerOn @ 0x1401169C8 (PopPepSurprisePowerOn.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     PopPepCompleteComponentIdleState @ 0x1401ED038 (PopPepCompleteComponentIdleState.c)
 *     PopPepComponentSetLatency @ 0x1401ED110 (PopPepComponentSetLatency.c)
 *     PopPepComponentSetResidency @ 0x1401ED1F0 (PopPepComponentSetResidency.c)
 *     PopPepComponentSetWakeHint @ 0x1401ED2E0 (PopPepComponentSetWakeHint.c)
 * Callees:
 *     ExReleaseSpinLockShared @ 0x14000A410 (ExReleaseSpinLockShared.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
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
