/*
 * XREFs of Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED @ 0x1C004D0D0
 * Callers:
 *     <none>
 * Callees:
 *     PdoExt @ 0x1C001A040 (PdoExt.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall Usbh_SetPdo_USBPDO_D3COLDRECONNECTTIMEOUT_INSTALLED(
        __int64 a1,
        __int64 a2,
        unsigned int *a3,
        __int64 a4)
{
  __int64 result; // rax
  int v5; // ebx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // [rsp+28h] [rbp-10h]
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = (__int64)&retaddr;
  v5 = a4;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    result = WPP_RECORDER_SF_S(
               WPP_GLOBAL_Control->DeviceExtension,
               0,
               (_DWORD)a3,
               28,
               (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
               a2);
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      LODWORD(v14) = v5;
      result = WPP_RECORDER_SF_d(
                 (__int64)WPP_GLOBAL_Control->DeviceExtension,
                 0,
                 1u,
                 0x1Du,
                 (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                 v14);
    }
  }
  if ( v5 == 4 )
  {
    result = *a3;
    if ( (_DWORD)result )
    {
      PdoExt(a1, a2, (__int64)a3, a4)[734] = 1000 * result;
      result = (__int64)PdoExt(a1, v8, v9, v10);
      if ( *(int *)(result + 2936) > 30000 )
      {
        result = (__int64)PdoExt(a1, v11, v12, v13);
        *(_DWORD *)(result + 2936) = 30000;
      }
    }
  }
  return result;
}
