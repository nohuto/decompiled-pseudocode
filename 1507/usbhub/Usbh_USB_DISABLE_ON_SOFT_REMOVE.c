/*
 * XREFs of Usbh_USB_DISABLE_ON_SOFT_REMOVE @ 0x1C004CCD0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C0013AD0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_USB_DISABLE_ON_SOFT_REMOVE(__int64 a1, const wchar_t *a2, _BYTE *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  int v5; // esi
  __int64 v8; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = (_UNKNOWN **)WPP_RECORDER_SF_S(
                            (__int64)WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            (__int64)a3,
                            0x26u,
                            (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                            a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v5;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x27u,
                              (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                              v8);
    }
  }
  if ( *a3 )
  {
    result = (_UNKNOWN **)PdoExt(a1, (__int64)a2, (__int64)a3, a4);
    *((_DWORD *)result + 356) |= 0x2000u;
  }
  return result;
}
