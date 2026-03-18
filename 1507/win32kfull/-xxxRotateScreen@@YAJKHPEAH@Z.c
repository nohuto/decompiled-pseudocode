/*
 * XREFs of ?xxxRotateScreen@@YAJKHPEAH@Z @ 0x1C01D0770
 * Callers:
 *     xxxApplyOrientationPreference @ 0x1C007D7E8 (xxxApplyOrientationPreference.c)
 *     ?xxxApplyNativeOrientation@@YAXXZ @ 0x1C01D06F4 (-xxxApplyNativeOrientation@@YAXXZ.c)
 *     xxxAutoRotateScreen @ 0x1C01D0C4C (xxxAutoRotateScreen.c)
 * Callees:
 *     _TlgWrite @ 0x1C007D678 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x1C007E128 (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z @ 0x1C01D092C (-xxxSmoothRotateScreen@@YAJPEAUDISPLAYCONFIG_PATH_INFO@@PEAUDISPLAYCONFIG_MODE_INFO@@H@Z.c)
 */

__int64 __fastcall xxxRotateScreen(int a1, int a2, int *a3)
{
  int v3; // edi
  __int64 v6; // rdx
  __int64 result; // rax
  int v8; // ebx
  int v9; // ebx
  const GUID *v10; // r8
  const struct _TlgProvider_t *v11; // rcx
  const GUID *cData; // r9
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
  const GUID *v24; // [rsp+118h] [rbp+18h]
  int *v25; // [rsp+120h] [rbp+20h]
  const GUID *v26; // [rsp+128h] [rbp+28h]
  _BYTE v27[36]; // [rsp+130h] [rbp+30h] BYREF
  int v28; // [rsp+154h] [rbp+54h]
  TraceLoggingHProvider hProvider; // [rsp+158h] [rbp+58h]

  v13 = a2;
  v16[0] = 1;
  v3 = 2;
  v15 = 2;
  if ( a3 )
    *a3 = 0;
  if ( (int)DrvQueryDisplayConfig(3221225474LL, v16, v27, &v15, v17, 0LL) < 0 )
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
  v10 = (const GUID *)(unsigned int)v13;
  if ( !v13 || v28 == 0x80000000 || v28 == 11 || v28 == 13 )
  {
    if ( v3 == (_DWORD)hProvider )
    {
      if ( a3 )
        *a3 = 1;
      return 0LL;
    }
    else
    {
      if ( (unsigned int)dword_1C031D7B0 > 5
        && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)hProvider, 0x200000000000uLL) )
      {
        v14 = (int)v11;
        v23 = &v14;
        v25 = &v13;
        v24 = cData;
        v26 = cData;
        TlgWrite(v11, &unk_1C02EA301, v10, cData, (UINT32)cData, &pData);
        LODWORD(v10) = v13;
      }
      LODWORD(hProvider) = v3;
      return xxxSmoothRotateScreen(
               (struct DISPLAYCONFIG_PATH_INFO *)v27,
               (struct DISPLAYCONFIG_MODE_INFO *)v17,
               (int)v10);
    }
  }
  else
  {
    v21 = 0;
    v19 = 0;
    v18[0] = 0x1CFFFFFFFALL;
    v20 = v3;
    v18[1] = 0LL;
    if ( a3 )
      *a3 = 1;
    result = DrvDisplayConfigSetDeviceInfo(v18, v6, v10, 4LL);
    if ( (int)result < 0 )
      return 0LL;
  }
  return result;
}
