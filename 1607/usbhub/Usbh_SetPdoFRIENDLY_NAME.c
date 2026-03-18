/*
 * XREFs of Usbh_SetPdoFRIENDLY_NAME @ 0x1C004CF70
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

_DWORD *__fastcall Usbh_SetPdoFRIENDLY_NAME(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _DWORD *result; // rax
  __int64 v11; // [rsp+28h] [rbp-10h]

  v4 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_S(
      WPP_GLOBAL_Control->DeviceExtension,
      0,
      a3,
      20,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v11) = v4;
      WPP_RECORDER_SF_d(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0x15u,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        v11);
    }
  }
  *((_QWORD *)PdoExt(a1, a2, a3, a4) + 276) = a3;
  result = PdoExt(a1, v7, v8, v9);
  result[551] = v4;
  return result;
}
