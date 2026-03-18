/*
 * XREFs of Usbh_SetHUB_SELECTIVE_SUSPEND @ 0x1C004C6F0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetHUB_SELECTIVE_SUSPEND(__int64 a1, const wchar_t *a2, _DWORD *a3, __int64 a4)
{
  int v4; // edi
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      (__int64)a3,
      0x10u,
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x11u,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
        v8);
    }
  }
  if ( v4 == 4 && *a3 )
  {
    result = FdoExt(a1, (__int64)a2, (__int64)a3, a4);
    result[820] = 4;
  }
  else
  {
    result = FdoExt(a1, (__int64)a2, (__int64)a3, a4);
    result[820] = 5;
  }
  return result;
}
