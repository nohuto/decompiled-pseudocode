/*
 * XREFs of UsbhExceptionTrace @ 0x1C004EF18
 * Callers:
 *     UsbhException @ 0x1C004EC30 (UsbhException.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C003CFE0 (WPP_RECORDER_SF_.c)
 *     WPP_RECORDER_SF_dD @ 0x1C003D0A8 (WPP_RECORDER_SF_dD.c)
 *     WPP_RECORDER_SF_dq @ 0x1C003D354 (WPP_RECORDER_SF_dq.c)
 *     WPP_RECORDER_SF_d @ 0x1C0040704 (WPP_RECORDER_SF_d.c)
 *     WPP_RECORDER_SF__HEX_ @ 0x1C004A770 (WPP_RECORDER_SF__HEX_.c)
 *     log_xstr @ 0x1C004A888 (log_xstr.c)
 *     WPP_RECORDER_SF_Dd @ 0x1C004F684 (WPP_RECORDER_SF_Dd.c)
 *     WPP_RECORDER_SF_ds @ 0x1C004F740 (WPP_RECORDER_SF_ds.c)
 *     WPP_RECORDER_SF_qq @ 0x1C004F86C (WPP_RECORDER_SF_qq.c)
 *     WPP_RECORDER_SF_sd @ 0x1C004F928 (WPP_RECORDER_SF_sd.c)
 *     WPP_RECORDER_SF_DDD @ 0x1C004FD8C (WPP_RECORDER_SF_DDD.c)
 */

void __fastcall UsbhExceptionTrace(char a1, __int64 a2, __int64 a3)
{
  PDEVICE_OBJECT v6; // r10
  int v7; // edx
  int v8; // r8d
  int v9; // r9d
  int v10; // edx
  int v11; // r8d
  int v12; // r9d
  int v13; // edx
  int v14; // r8d
  int v15; // r9d
  int v16; // edx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // rdx
  __int64 v20; // r8
  __int128 *v21; // rax
  __int64 v22; // r10
  __int64 v23; // rcx
  __int64 v24; // rdx
  _DWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  int v28; // edx
  int v29; // r8d
  __int128 *v30; // rax
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 v33; // rdx
  int v34; // [rsp+20h] [rbp-58h]
  int v35; // [rsp+20h] [rbp-58h]
  int v36; // [rsp+20h] [rbp-58h]
  int v37; // [rsp+20h] [rbp-58h]
  __int64 v38; // [rsp+28h] [rbp-50h]
  __int64 v39; // [rsp+28h] [rbp-50h]
  __int64 v40; // [rsp+30h] [rbp-48h]
  __int128 v41; // [rsp+40h] [rbp-38h] BYREF
  __int128 v42; // [rsp+50h] [rbp-28h] BYREF

  if ( a2 && a3 )
  {
    v6 = WPP_GLOBAL_Control;
    if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
    {
      WPP_RECORDER_SF_(
        (__int64)WPP_GLOBAL_Control->DeviceExtension,
        0,
        1u,
        0xAu,
        (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids);
      v6 = WPP_GLOBAL_Control;
      if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
      {
        WPP_RECORDER_SF_qq(WPP_GLOBAL_Control->DeviceExtension, v7, v8, v9, v34, a2, a1);
        v6 = WPP_GLOBAL_Control;
        if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
        {
          WPP_RECORDER_SF_ds(
            WPP_GLOBAL_Control->DeviceExtension,
            v10,
            v11,
            v12,
            v35,
            *(_DWORD *)a3,
            *(_QWORD *)(a3 + 8));
          v6 = WPP_GLOBAL_Control;
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            WPP_RECORDER_SF_sd(
              WPP_GLOBAL_Control->DeviceExtension,
              v13,
              v14,
              v15,
              v36,
              *(_QWORD *)(a2 + 592),
              *(_DWORD *)(a2 + 584));
            v6 = WPP_GLOBAL_Control;
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              WPP_RECORDER_SF_d(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                0,
                1u,
                0xEu,
                (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids);
              v6 = WPP_GLOBAL_Control;
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_Dd(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v16,
                  v17,
                  v18,
                  v37,
                  *(_DWORD *)(a2 + 24),
                  *(_DWORD *)(a2 + 28));
                v6 = WPP_GLOBAL_Control;
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  LODWORD(v38) = *(unsigned __int16 *)(a2 + 32);
                  WPP_RECORDER_SF_dq(
                    (__int64)WPP_GLOBAL_Control->DeviceExtension,
                    v19,
                    v20,
                    0x10u,
                    (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
                    v38,
                    *(_QWORD *)(a2 + 40));
                  v6 = WPP_GLOBAL_Control;
                  if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                  {
                    v21 = log_xstr(&v42, *(unsigned __int16 *)(a2 + 32), *(_QWORD *)(a2 + 40));
                    v23 = *(_QWORD *)(v22 + 64);
                    v41 = *v21;
                    WPP_RECORDER_SF__HEX_(
                      v23,
                      v24,
                      1u,
                      0x11u,
                      (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
                      (__int64)&v41);
                    v6 = WPP_GLOBAL_Control;
                  }
                }
              }
            }
          }
        }
      }
    }
    if ( *(_DWORD *)a3 == 4 )
    {
      v25 = *(_DWORD **)(a2 + 40);
      if ( v25 )
      {
        if ( LOWORD(v6->DeviceType) )
        {
          WPP_RECORDER_SF_(
            (__int64)v6->DeviceExtension,
            0,
            1u,
            0x12u,
            (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids);
          if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
          {
            LODWORD(v38) = *v25;
            WPP_RECORDER_SF_d(
              (__int64)WPP_GLOBAL_Control->DeviceExtension,
              0,
              1u,
              0x13u,
              (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
              v38);
            if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
            {
              LODWORD(v40) = v25[1];
              LODWORD(v39) = v40;
              WPP_RECORDER_SF_dD(
                (__int64)WPP_GLOBAL_Control->DeviceExtension,
                v26,
                v27,
                0x14u,
                (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
                v39,
                v40);
              if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
              {
                WPP_RECORDER_SF_DDD(
                  WPP_GLOBAL_Control->DeviceExtension,
                  v28,
                  v29,
                  21,
                  (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
                  v25[2],
                  v25[3],
                  v25[4]);
                if ( LOWORD(WPP_GLOBAL_Control->DeviceType) )
                {
                  v30 = log_xstr(&v42, 0x40uLL, (__int64)(v25 + 5));
                  v32 = *(_QWORD *)(v31 + 64);
                  v41 = *v30;
                  WPP_RECORDER_SF__HEX_(
                    v32,
                    v33,
                    1u,
                    v33 - 42,
                    (__int64)&WPP_2baaa2b6f718571df222b7043536ba13_Traceguids,
                    (__int64)&v41);
                }
              }
            }
          }
        }
      }
    }
  }
}
