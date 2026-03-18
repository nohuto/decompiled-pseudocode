/*
 * XREFs of RIMGetPointerInputType @ 0x1C00C3EE8
 * Callers:
 *     RIMABArbitratePrimaryStatus @ 0x1C00D2118 (RIMABArbitratePrimaryStatus.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0077B00 (WPP_RECORDER_SF_q.c)
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
    (__int64)&WPP_a5f1630194a675e21fb9ea38d72476ae_Traceguids,
    a1);
  return 1LL;
}
