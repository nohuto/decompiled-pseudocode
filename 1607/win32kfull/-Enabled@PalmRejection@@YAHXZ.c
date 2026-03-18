/*
 * XREFs of ?Enabled@PalmRejection@@YAHXZ @ 0x1C0228F48
 * Callers:
 *     xxxGeneratePointerInputMessages @ 0x1C01F33DC (xxxGeneratePointerInputMessages.c)
 * Callees:
 *     memset @ 0x1C015A380 (memset.c)
 *     ?_ReadSettingsFromRegKey@PalmRejection@@YAXXZ @ 0x1C02293FC (-_ReadSettingsFromRegKey@PalmRejection@@YAXXZ.c)
 */

__int64 __fastcall PalmRejection::Enabled(PalmRejection *this)
{
  _OWORD v2[4]; // [rsp+20h] [rbp-48h] BYREF

  if ( !gPalmRejectInitialized )
  {
    PalmRejection::_ReadSettingsFromRegKey(this);
    memset(v2, 0, sizeof(v2));
    gPalmRejectLastLoggedTelemTime = 0;
    gPalmRejectData = v2[0];
    xmmword_1C0331C50 = v2[1];
    xmmword_1C0331C60 = v2[2];
    *(_OWORD *)&xmmword_1C0331C70 = v2[3];
    if ( !(unsigned int)RIMIsDeviceArbitrationEnabled() )
      gPalmRejectEnabled = 0;
    gPalmRejectInitialized = 1;
  }
  return gPalmRejectEnabled;
}
