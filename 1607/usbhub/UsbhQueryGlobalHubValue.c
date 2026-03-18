/*
 * XREFs of UsbhQueryGlobalHubValue @ 0x1C004C520
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003D3C0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D738 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040A3C (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C00459F4 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryGlobalHubValue(__int64 a1, __int64 a2, _DWORD *a3, int a4, __int64 a5, _DWORD *a6)
{
  int v8; // r14d
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  int v12; // r8d
  __int64 v14; // [rsp+28h] [rbp-20h]
  __int64 v15; // [rsp+28h] [rbp-20h]

  v8 = a2;
  v10 = 0;
  v11 = WPP_GLOBAL_Control;
  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
  {
    WPP_RECORDER_SF_(
      (__int64)WPP_GLOBAL_Control->DeviceExtension,
      0,
      1u,
      0x36u,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        WPP_GLOBAL_Control->DeviceExtension,
        0,
        v12,
        55,
        (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
        a1);
      v11 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        LODWORD(v14) = v8;
        WPP_RECORDER_SF_d(
          (__int64)WPP_GLOBAL_Control->DeviceExtension,
          0,
          1u,
          0x38u,
          (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
          v14);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            1u,
            0x39u,
            (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
            a3);
          v11 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v15) = a4;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x3Au,
              (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
              v15);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x3Bu,
                (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
                a5);
              v11 = WPP_GLOBAL_Control;
            }
          }
        }
      }
    }
  }
  if ( LOWORD(v11->DeviceType) )
    WPP_RECORDER_SF_q(
      (__int64)v11->DeviceExtension,
      a2,
      1u,
      0x3Cu,
      (__int64)&WPP_0118bfacafd43b44388ffac55c63ba49_Traceguids,
      a6);
  if ( v8 == 4 )
  {
    if ( a4 == 4 )
    {
      if ( a6 != a3 )
        *a6 = *a3;
    }
    else
    {
      return (unsigned int)-1073741670;
    }
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return v10;
}
