/*
 * XREFs of PopUpdateSmartUserPresencePredictions @ 0x140675020
 * Callers:
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     PopWnfAudioCallback @ 0x14052925C (PopWnfAudioCallback.c)
 *     PopWnfUserAwayPredictionCallback @ 0x14066C2C4 (PopWnfUserAwayPredictionCallback.c)
 * Callees:
 *     PopIdleCancelAoAcDozeS4Timer @ 0x1401121A4 (PopIdleCancelAoAcDozeS4Timer.c)
 *     PopIdleArmAoAcDozeS4Timer @ 0x14020D4E4 (PopIdleArmAoAcDozeS4Timer.c)
 *     PopNetUserPresencePredictionNotify @ 0x1406737B4 (PopNetUserPresencePredictionNotify.c)
 */

void __fastcall PopUpdateSmartUserPresencePredictions(__int64 a1, unsigned int a2)
{
  if ( qword_1403033A8 != a1 && !PopAudioPlaybackCount )
  {
    qword_1403033A8 = a1;
    PopNetUserPresencePredictionNotify(a1);
    if ( byte_1403033D1 )
    {
      if ( PopIdleCancelAoAcDozeS4Timer(a2) || !*((_DWORD *)PopPolicy + 22) )
        PopIdleArmAoAcDozeS4Timer();
    }
  }
}
