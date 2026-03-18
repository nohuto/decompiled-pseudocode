/*
 * XREFs of Usbh_SetFORCE_PORT_POWER @ 0x1C004CBE0
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetFORCE_PORT_POWER(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
{
  int v4; // esi
  _DWORD *result; // rax
  __int64 v8; // [rsp+28h] [rbp-10h]

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      (_DWORD)a3,
      12,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xDu,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v8);
    }
  }
  if ( v4 == 4 && *a3 <= 0x1F4u )
  {
    result = FdoExt(a1, a2, (__int64)a3, a4);
    result[759] = *a3;
  }
  else
  {
    result = FdoExt(a1, a2, (__int64)a3, a4);
    result[759] = 0;
  }
  return result;
}
