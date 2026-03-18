/*
 * XREFs of Usbh_USB_DEVICE_POWER_UP_DELAY @ 0x1C004CC20
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

char __fastcall Usbh_USB_DEVICE_POWER_UP_DELAY(__int64 a1, const wchar_t *a2, _BYTE *a3, __int64 a4)
{
  int v4; // esi
  _DWORD *v7; // rax
  __int16 v8; // bx
  __int64 v10; // [rsp+28h] [rbp-10h]

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      (__int64)a3,
      0x24u,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v10) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x25u,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v10);
    }
  }
  LOBYTE(v7) = *a3;
  if ( *a3 )
  {
    v8 = 2 * (unsigned __int8)v7;
    v7 = PdoExt(a1, (__int64)a2, (__int64)a3, a4);
    *((_WORD *)v7 + 714) = v8;
  }
  return (char)v7;
}
