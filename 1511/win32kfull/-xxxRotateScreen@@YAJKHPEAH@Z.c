/*
 * XREFs of ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D2388
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C0096AC8 (xxxApplyOrientationPreference.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D22C0 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01D2848 (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgKeywordOn @ 0x1C0091E04 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x1C0091E28 (_TlgWrite.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D2528 (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 */

__int64 __fastcall xxxRotateScreen(int a1, int a2, int *a3)
{
  int v3; // esi
  __int64 v6; // rdx
  int v8; // ebx
  int v9; // ebx
  const struct _TlgProvider_t *v10; // rcx
  const GUID *cData; // r8
  const GUID *v12; // r9
  int v13; // [rsp+30h] [rbp-D0h] BYREF
  int v14; // [rsp+38h] [rbp-C8h] BYREF
  int v15; // [rsp+3Ch] [rbp-C4h] BYREF
  int v16[4]; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE v17[128]; // [rsp+50h] [rbp-B0h] BYREF
  _QWORD v18[2]; // [rsp+D0h] [rbp-30h] BYREF
  int v19; // [rsp+E0h] [rbp-20h]
  int v20; // [rsp+E4h] [rbp-1Ch]
  int v21; // [rsp+E8h] [rbp-18h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+F0h] [rbp-10h] BYREF
  int *v23; // [rsp+110h] [rbp+10h]
  int v24; // [rsp+118h] [rbp+18h]
  int v25; // [rsp+11Ch] [rbp+1Ch]
  int *v26; // [rsp+120h] [rbp+20h]
  int v27; // [rsp+128h] [rbp+28h]
  int v28; // [rsp+12Ch] [rbp+2Ch]
  _BYTE v29[36]; // [rsp+130h] [rbp+30h] BYREF
  int v30; // [rsp+154h] [rbp+54h]
  TraceLoggingHProvider hProvider; // [rsp+158h] [rbp+58h]

  v13 = a2;
  v3 = 2;
  v15 = 2;
  v16[0] = 1;
  if ( a3 )
    *a3 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, v16, v29, &v15, v17, 0LL) < 0 )
    return 0xFFFFFFFFLL;
  if ( !a1 )
    goto LABEL_11;
  v8 = a1 - 1;
  if ( v8 )
  {
    v9 = v8 - 1;
    if ( !v9 )
    {
      v3 = 3;
      goto LABEL_12;
    }
    if ( v9 == 1 )
    {
      v3 = 4;
      goto LABEL_12;
    }
LABEL_11:
    v3 = 1;
  }
LABEL_12:
  if ( v30 != 0x80000000 && v30 != 11 && v30 != 13 )
  {
    if ( v13 )
    {
      v21 = 0;
      v19 = 0;
      v18[1] = 0LL;
      v18[0] = 0x1CFFFFFFFALL;
      v20 = v3;
      DrvDisplayConfigSetDeviceInfo(v18, v6, 4LL);
    }
    goto LABEL_17;
  }
  if ( v3 == (_DWORD)hProvider )
  {
LABEL_17:
    if ( a3 )
      *a3 = 1;
    return 0LL;
  }
  if ( (unsigned int)dword_1C031B280 > 5
    && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)hProvider, 0x200000000000uLL) )
  {
    v25 = 0;
    v28 = 0;
    v23 = &v14;
    v26 = &v13;
    v14 = (int)v10;
    v24 = (int)cData;
    v27 = (int)cData;
    TlgWrite(v10, &unk_1C02E9299, cData, v12, (UINT32)cData, &pData);
  }
  LODWORD(hProvider) = v3;
  return xxxSmoothRotateScreen((struct DISPLAYCONFIG_PATH_INFO *)v29, (struct DISPLAYCONFIG_MODE_INFO *)v17, v13);
}
