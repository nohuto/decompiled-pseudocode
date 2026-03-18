/*
 * XREFs of RIMGetPointerInputType @ 0x1C00C4D7C
 * Callers:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D3F3C (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C000FA94 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall RIMGetPointerInputType(__int64 a1)
{
  int v1; // edx

  v1 = *(_DWORD *)(a1 + 24);
  if ( (unsigned int)(v1 - 1) <= 4 )
    return 2LL;
  if ( (unsigned int)(v1 - 6) <= 1 )
    return 3LL;
  if ( v1 == 8 )
    return 5LL;
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    3u,
    3u,
    0xAu,
    (__int64)&WPP_e51efb334d0b6f72df968c61ccca95a5_Traceguids,
    a1);
  return 1LL;
}
