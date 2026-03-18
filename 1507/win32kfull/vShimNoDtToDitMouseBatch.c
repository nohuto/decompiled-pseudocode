/*
 * XREFs of vShimNoDtToDitMouseBatch @ 0x1C01DAB40
 * Callers:
 *     <none>
 * Callees:
 *     WakeDIT @ 0x1C0007B04 (WakeDIT.c)
 */

void __fastcall vShimNoDtToDitMouseBatch(int a1)
{
  BOOL v2; // edi
  int v3; // eax

  v2 = 0;
  ExEnterCriticalRegionAndAcquireResourceExclusive(gpresMouseEventQueue);
  if ( !a1 )
  {
    if ( !gdwShimDisableDwmMouseProcessingConextSwitchOpt )
      goto LABEL_10;
    v3 = gdwShimDisableDwmMouseProcessingConextSwitchOpt - 1;
    goto LABEL_9;
  }
  if ( gdwShimDisableDwmMouseProcessingConextSwitchOpt )
  {
    if ( gdwShimDisableDwmMouseProcessingConextSwitchOpt == -1 )
      goto LABEL_10;
    v3 = gdwShimDisableDwmMouseProcessingConextSwitchOpt + 1;
LABEL_9:
    gdwShimDisableDwmMouseProcessingConextSwitchOpt = v3;
    goto LABEL_10;
  }
  gdwShimDisableDwmMouseProcessingConextSwitchOpt = 1;
  if ( gdwMouseEvents )
    v2 = gdwMouseEvents != 15;
LABEL_10:
  ExReleaseResourceAndLeaveCriticalRegion(gpresMouseEventQueue);
  if ( v2 )
  {
    if ( glDitMouseHandling )
    {
      EtwTraceWakeDIT(64LL);
      WakeDIT(0x40u);
    }
  }
}
