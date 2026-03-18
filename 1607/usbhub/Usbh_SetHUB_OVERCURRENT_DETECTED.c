/*
 * XREFs of Usbh_SetHUB_OVERCURRENT_DETECTED @ 0x1C004CD50
 * Callers:
 *     <none>
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

_UNKNOWN **__fastcall Usbh_SetHUB_OVERCURRENT_DETECTED(__int64 a1, __int64 a2, _DWORD *a3, __int64 a4)
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
                            WPP_GLOBAL_Control->DeviceExtension,
                            0,
                            (_DWORD)a3,
                            18,
                            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                            a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v8) = v5;
      result = (_UNKNOWN **)WPP_RECORDER_SF_d(
                              (__int64)WPP_GLOBAL_Control->DeviceExtension,
                              0,
                              1u,
                              0x13u,
                              (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                              v8);
    }
  }
  if ( v5 == 4 )
  {
    if ( *a3 )
    {
      result = (_UNKNOWN **)FdoExt(a1, a2, (__int64)a3, a4);
      *((_BYTE *)result + 3010) = 1;
    }
  }
  return result;
}
