/*
 * XREFs of UsbhQueryGlobalHubValue @ 0x1C004BEB0
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CDB0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_q @ 0x1C003D1E8 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_d @ 0x1C00404E8 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF_S @ 0x1C0045584 (WPP_RECORDER_SF_S.c)
 */

__int64 __fastcall UsbhQueryGlobalHubValue(const wchar_t *a1, __int64 a2, _DWORD *a3, int a4, __int64 a5, _DWORD *a6)
{
  int v8; // r14d
  unsigned int v10; // ebx
  PDEVICE_OBJECT v11; // rcx
  __int64 v12; // r8
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
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids);
    v11 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_S(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        v12,
        0x37u,
        (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
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
          (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
          v14);
        v11 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_q(
            (__int64)WPP_GLOBAL_Control->DeviceExtension,
            a2,
            1u,
            0x39u,
            (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
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
              (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
              v15);
            v11 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_q(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                a2,
                1u,
                0x3Bu,
                (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
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
      (__int64)&WPP_d60ab5880563f7a022b5a2715e337d91_Traceguids,
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
