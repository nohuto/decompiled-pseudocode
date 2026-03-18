/*
 * XREFs of Usbh_HUB_RESET_TT_ON_CANCEL @ 0x1C004C420
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_HUB_RESET_TT_ON_CANCEL(__int64 a1, const wchar_t *a2, _BYTE *a3, int a4)
{
  __int64 result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      (__int64)a3,
      0x32u,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x33u,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v8);
    }
  }
  result = ((*a3 != 0) ^ (unsigned __int8)*(_DWORD *)(a1 + 2568)) & 1;
  *(_DWORD *)(a1 + 2568) ^= result;
  return result;
}
