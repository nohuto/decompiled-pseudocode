/*
 * XREFs of Usbh_SetFORCE_SINGLE_TT @ 0x1C004C590
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_SetFORCE_SINGLE_TT(__int64 a1, const wchar_t *a2, _DWORD *a3, __int64 a4)
{
  _UNKNOWN **result; // rax
  int v5; // ebx
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
                            0xAu,
                            (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                            a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v5;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0xBu,
                              (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                              v8);
    }
  }
  if ( v5 == 4 )
  {
    if ( *a3 )
    {
      result = (_UNKNOWN **)FdoExt(a1, (__int64)a2, (__int64)a3, a4);
      *((_DWORD *)result + 640) |= 0x200000u;
    }
  }
  return result;
}
