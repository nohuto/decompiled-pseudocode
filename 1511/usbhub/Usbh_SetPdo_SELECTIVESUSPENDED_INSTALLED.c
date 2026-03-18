/*
 * XREFs of Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED @ 0x1C0028C70
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00456B4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdo_SELECTIVESUSPENDED_INSTALLED(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  _DWORD *result; // rax
  int v5; // ebx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  v5 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = (_DWORD *)WPP_RECORDER_SF_S(
                         WPP_GLOBAL_Control->DeviceExtension,
                         0,
                         (_DWORD)a3,
                         24,
                         (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                         a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      result = (_DWORD *)WPP_RECORDER_SF_d(
                           WPP_GLOBAL_Control->DeviceExtension,
                           0,
                           1,
                           25,
                           (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
                           v5);
  }
  if ( v5 == 4 )
  {
    if ( *a3 )
    {
      result = PdoExt(a1, a2, (__int64)a3, a4);
      *((_BYTE *)result + 2709) = 1;
    }
  }
  return result;
}
