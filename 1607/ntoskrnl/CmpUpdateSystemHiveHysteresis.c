/*
 * XREFs of CmpUpdateSystemHiveHysteresis @ 0x14047C1B4
 * Callers:
 *     HvpAddBin @ 0x14047CC64 (HvpAddBin.c)
 *     HvFreeHivePartial @ 0x140480844 (HvFreeHivePartial.c)
 * Callees:
 *     CmpDoQueueSystemHiveHysteresis @ 0x1405FC44C (CmpDoQueueSystemHiveHysteresis.c)
 */

void __fastcall CmpUpdateSystemHiveHysteresis(__int64 a1, unsigned int a2, unsigned int a3)
{
  unsigned int v4; // eax
  unsigned int v5; // eax
  __int64 v6; // rdx

  if ( a1 == qword_1402F2E60 && CmpSystemHiveHysteresisCallback )
  {
    v4 = a2 + 4096;
    v6 = 100 * (a2 + 4096) % CmSystemHiveLimitSize;
    v5 = 100 * v4 / CmSystemHiveLimitSize;
    if ( a2 <= a3 )
    {
      if ( !CmpSystemHiveHysteresisLowSeen && v5 < CmpSystemHiveHysteresisLow )
      {
        CmpSystemHiveHysteresisLowSeen = 1;
        if ( CmpSystemHiveHysteresisHighSeen == 1 )
        {
          if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) != 1 )
            goto LABEL_9;
LABEL_14:
          CmpSystemHiveHysteresisHighSeen = 0;
        }
      }
    }
    else if ( !CmpSystemHiveHysteresisHighSeen && v5 > CmpSystemHiveHysteresisHigh )
    {
      CmpSystemHiveHysteresisHighSeen = 1;
      if ( CmpSystemHiveHysteresisLowSeen == 1 )
      {
        if ( (unsigned __int8)CmpDoQueueSystemHiveHysteresis(v5, v6) == 1 )
        {
LABEL_9:
          CmpSystemHiveHysteresisLowSeen = 0;
          return;
        }
        goto LABEL_14;
      }
    }
  }
}
