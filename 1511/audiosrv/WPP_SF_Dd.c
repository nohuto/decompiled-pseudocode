/*
 * XREFs of WPP_SF_DD @ 0x180077378
 * Callers:
 *     ?LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ @ 0x180035388 (-LoadSessionConfiguration@CPerStreamVolumeAudioSession@@AEAAJXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall WPP_SF_DD(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF

  v5 = a4;
  return EtwTraceMessage(a1, 43LL, &WPP_c7c899a03615192e0a524739b215c826_Traceguids, 170LL, &v5);
}
