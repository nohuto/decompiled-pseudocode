/*
 * XREFs of ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01C9C28
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0098AE8 (xxxApplyOrientationPreference.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01C9B60 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01CA304 (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgWrite @ 0x1C00E5414 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C00E56D0 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C01C9F78 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@HPEAU_DXGK_.c)
 */

__int64 __fastcall xxxRotateScreen(int a1, int a2, int *a3)
{
  int v5; // edi
  int v7; // ebx
  int v8; // ebx
  const GUID *v9; // r8
  const GUID *v10; // r9
  EVENT_DATA_DESCRIPTOR *pData; // rax
  const GUID *v12; // r8
  const GUID *v13; // r9
  int v14; // [rsp+30h] [rbp-D0h] BYREF
  int v15; // [rsp+38h] [rbp-C8h] BYREF
  int v16; // [rsp+3Ch] [rbp-C4h] BYREF
  int v17; // [rsp+40h] [rbp-C0h] BYREF
  int v18; // [rsp+44h] [rbp-BCh] BYREF
  int v19; // [rsp+48h] [rbp-B8h] BYREF
  int v20; // [rsp+4Ch] [rbp-B4h] BYREF
  int v21; // [rsp+50h] [rbp-B0h] BYREF
  int v22; // [rsp+54h] [rbp-ACh] BYREF
  _BYTE v23[128]; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v24[2]; // [rsp+E0h] [rbp-20h] BYREF
  int v25; // [rsp+F0h] [rbp-10h]
  int v26; // [rsp+F4h] [rbp-Ch]
  int v27; // [rsp+F8h] [rbp-8h]
  _QWORD v28[8]; // [rsp+100h] [rbp+0h] BYREF
  EVENT_DATA_DESCRIPTOR v29; // [rsp+140h] [rbp+40h] BYREF
  int *v30; // [rsp+160h] [rbp+60h]
  __int64 v31; // [rsp+168h] [rbp+68h]
  int *v32; // [rsp+170h] [rbp+70h]
  __int64 v33; // [rsp+178h] [rbp+78h]
  int *v34; // [rsp+180h] [rbp+80h]
  __int64 v35; // [rsp+188h] [rbp+88h]
  char v36; // [rsp+190h] [rbp+90h] BYREF
  int *v37; // [rsp+1B0h] [rbp+B0h]
  __int64 v38; // [rsp+1B8h] [rbp+B8h]
  int *v39; // [rsp+1C0h] [rbp+C0h]
  __int64 v40; // [rsp+1C8h] [rbp+C8h]
  int *v41; // [rsp+1D0h] [rbp+D0h]
  __int64 v42; // [rsp+1D8h] [rbp+D8h]
  EVENT_DATA_DESCRIPTOR v43; // [rsp+1E0h] [rbp+E0h] BYREF
  int *v44; // [rsp+200h] [rbp+100h]
  __int64 v45; // [rsp+208h] [rbp+108h]
  int *v46; // [rsp+210h] [rbp+110h]
  __int64 v47; // [rsp+218h] [rbp+118h]
  int *v48; // [rsp+220h] [rbp+120h]
  __int64 v49; // [rsp+228h] [rbp+128h]
  _BYTE v50[36]; // [rsp+230h] [rbp+130h] BYREF
  int v51; // [rsp+254h] [rbp+154h]
  int v52; // [rsp+258h] [rbp+158h]

  v14 = a2;
  memset(v28, 0, sizeof(v28));
  v5 = 3;
  EtwActivityIdControl(3u, (LPGUID)&v28[1]);
  v28[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v28[3]) = 18;
  v16 = 1;
  v15 = 2;
  if ( a3 )
    *a3 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, &v16, v50, &v15, v23, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    goto LABEL_11;
  v7 = a1 - 1;
  if ( !v7 )
  {
    v5 = 2;
    goto LABEL_12;
  }
  v8 = v7 - 1;
  if ( v8 )
  {
    if ( v8 == 1 )
    {
      v5 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v5 = 1;
  }
LABEL_12:
  if ( v51 != 0x80000000 && v51 != 11 && v51 != 13 )
  {
    if ( v14 )
    {
      v27 = 0;
      v25 = 0;
      v24[0] = 0x1CFFFFFFFALL;
      v26 = v5;
      v24[1] = 0LL;
      DrvDisplayConfigSetDeviceInfo(v24, v28);
    }
    if ( a3 )
      *a3 = 1;
    if ( dword_1C0320840 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
      return 0LL;
    v17 = v52;
    v30 = &v17;
    v32 = &v14;
    v34 = &v18;
    v31 = 4LL;
    v33 = 4LL;
    v18 = 1003;
    v35 = 4LL;
    pData = &v29;
LABEL_22:
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE0A1, v9, v10, 5u, pData);
    return 0LL;
  }
  if ( v5 == v52 )
  {
    if ( a3 )
      *a3 = 1;
    if ( dword_1C0320840 <= 5u || !TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
      return 0LL;
    v19 = (int)v10;
    v37 = &v19;
    v39 = &v14;
    v41 = &v20;
    v38 = 4LL;
    v40 = 4LL;
    v20 = 1001;
    v42 = 4LL;
    pData = (EVENT_DATA_DESCRIPTOR *)&v36;
    goto LABEL_22;
  }
  if ( dword_1C0320840 > 5u && TlgKeywordOn((TraceLoggingHProvider)&dword_1C0320840, 0x200000000001uLL) )
  {
    v21 = (int)v13;
    v44 = &v21;
    v46 = &v14;
    v48 = &v22;
    v45 = 4LL;
    v47 = 4LL;
    v22 = 1000;
    v49 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1C0320840, &unk_1C02EE0A1, v12, v13, 5u, &v43);
  }
  v52 = v5;
  return xxxSmoothRotateScreen(
           (struct DISPLAYCONFIG_PATH_INFO *)v50,
           (struct DISPLAYCONFIG_MODE_INFO *)v23,
           v14,
           (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v28);
}
