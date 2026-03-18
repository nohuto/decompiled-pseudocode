/*
 * XREFs of ?FindMonitorSourceMode@@YA_KPEAU_VideoModeDescriptor@@_K0@Z @ 0x1C000DF20
 * Callers:
 *     EDIDV1_ObtainSupportedMonitorSourceModes @ 0x1C000DBB0 (EDIDV1_ObtainSupportedMonitorSourceModes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FindMonitorSourceMode(
        struct _VideoModeDescriptor *a1,
        unsigned __int64 a2,
        struct _VideoModeDescriptor *a3)
{
  __int64 v3; // r9
  ULONG *i; // rcx

  v3 = 0LL;
  if ( !a2 )
    return -1LL;
  for ( i = &a1->VerticalRefreshRateDenominator;
        *(i - 2) != a3->PixelClockRate
     || *(i - 1) != a3->VerticalRefreshRateNumerator
     || *i != a3->VerticalRefreshRateDenominator
     || i[1] != a3->HorizontalRefreshRateNumerator
     || i[2] != a3->HorizontalRefreshRateDenominator
     || *((_WORD *)i + 6) != a3->HorizontalActivePixels
     || *((_WORD *)i + 7) != a3->VerticalActivePixels
     || *((_WORD *)i + 8) != a3->HorizontalBlankingPixels
     || *((_WORD *)i + 9) != a3->VerticalBlankingPixels
     || *((_WORD *)i + 10) != a3->HorizontalSyncOffset
     || *((_WORD *)i + 11) != a3->VerticalSyncOffset
     || *((_WORD *)i + 12) != a3->HorizontalSyncPulseWidth
     || *((_WORD *)i + 13) != a3->VerticalSyncPulseWidth
     || *((_WORD *)i + 14) != a3->HorizontalImageSize
     || *((_WORD *)i + 15) != a3->VerticalImageSize
     || *((_WORD *)i + 16) != a3->HorizontalBorder
     || *((_WORD *)i + 17) != a3->VerticalBorder
     || *((_BYTE *)i + 36) != a3->IsInterlaced
     || *((_BYTE *)i + 37) != a3->StereoModeType
     || *((_BYTE *)i + 38) != a3->SyncSignalType
     || *((_BYTE *)i + 39) != a3->IsSerrationRequired
     || *((_BYTE *)i + 40) != a3->IsSyncOnRGB
     || *((_BYTE *)i + 41) != a3->CompositePolarityType
     || *((_BYTE *)i + 42) != a3->VerticalPolarityType
     || *((_BYTE *)i + 43) != a3->HorizontalPolarityType
     || *((_BYTE *)i + 44) != a3->VideoStandardType;
        i += 14 )
  {
    if ( ++v3 >= a2 )
      return -1LL;
  }
  return v3;
}
