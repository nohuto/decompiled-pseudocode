/*
 * XREFs of USBType1SurpriseRemove @ 0x1C0021D90
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall USBType1SurpriseRemove(__int64 a1)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 136LL);
  WPP_RECORDER_SF_q(
    (__int64)WPP_GLOBAL_Control->DeviceExtension,
    4u,
    8u,
    0x1Eu,
    (__int64)&WPP_d2c3a4aab021a7556cd2da6ec3e2894d_Traceguids,
    a1);
  if ( *(_BYTE *)(v1 + 80) )
    *(_BYTE *)(v1 + 84) = 0;
  return 0LL;
}
