/*
 * XREFs of Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY @ 0x1C004D4A0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_USB_MSOS20_DESCRIPTOR_SET_INFO_QUERY(__int64 a1, __int64 a2, _QWORD *a3, __int64 a4)
{
  int v4; // ebx
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      46,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x2Fu,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v8);
    }
  }
  result = PdoExt(a1, a2, (__int64)a3, a4);
  if ( v4 == 8 )
    *((_QWORD *)result + 357) = *a3;
  else
    *((_QWORD *)result + 357) = 0LL;
  return result;
}
