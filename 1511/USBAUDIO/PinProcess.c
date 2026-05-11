/*
 * XREFs of PinProcess @ 0x1C0014860
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x1C0001000 (WPP_RECORDER_SF_q.c)
 */

__int64 __fastcall PinProcess(__int64 a1)
{
  __int64 v1; // rdi

  v1 = *(_QWORD *)(a1 + 16);
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      5u,
      8u,
      0x11u,
      (__int64)&WPP_f607821aa81e8dd9b89bc5fa497d19ab_Traceguids,
      a1);
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(*(_QWORD *)(v1 + 128) + 128LL) + 16LL))(a1);
}
