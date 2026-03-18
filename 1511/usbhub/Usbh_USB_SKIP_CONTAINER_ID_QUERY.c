/*
 * XREFs of Usbh_USB_SKIP_CONTAINER_ID_QUERY @ 0x1C00274A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

void __fastcall Usbh_USB_SKIP_CONTAINER_ID_QUERY(__int64 a1, __int64 a2, _BYTE *a3, __int64 a4)
{
  char v4; // si
  _DWORD *v7; // rax

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      42,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      WPP_RECORDER_SF_d(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        1,
        43,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v4);
  }
  if ( *a3 )
  {
    v7 = PdoExt(a1, a2, (__int64)a3, a4);
    v7[356] |= 0x8000u;
  }
}
