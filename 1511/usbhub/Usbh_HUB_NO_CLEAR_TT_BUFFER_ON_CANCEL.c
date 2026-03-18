/*
 * XREFs of Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL @ 0x1C004C2C0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_HUB_NO_CLEAR_TT_BUFFER_ON_CANCEL(__int64 a1, const wchar_t *a2, _BYTE *a3, int a4)
{
  int v7; // ebx
  __int64 result; // rax
  __int64 v9; // [rsp+28h] [rbp-10h]

  v7 = 0;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      (__int64)a3,
      0x34u,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v9) = a4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x35u,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v9);
    }
  }
  LOBYTE(v7) = *a3 != 0;
  result = (*(_DWORD *)(a1 + 2568) ^ (2 * v7)) & 2;
  *(_DWORD *)(a1 + 2568) ^= result;
  return result;
}
