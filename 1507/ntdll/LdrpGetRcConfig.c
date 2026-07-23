/*
 * XREFs of LdrpGetRcConfig @ 0x180018978
 * Callers:
 *     LdrpGetMUIFromCMFSegment @ 0x18000EF20 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrIsResItemExist @ 0x18001A80C (LdrIsResItemExist.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18001B314 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpVerifyAlternateResourceModule @ 0x180056D78 (LdrpVerifyAlternateResourceModule.c)
 *     LdrLoadAlternateResourceModule @ 0x180066760 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x180066950 (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x180017204 (LdrpGetFromMUIMemCache.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180017554 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x18001778C (LdrpSearchResourceSection_U.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180057378 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+50h] [rbp-58h] BYREF
  ULONG *v11; // [rsp+58h] [rbp-50h] BYREF
  int v12; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-40h] BYREF

  v4 = -1;
  v10 = 0LL;
  if ( a4 )
  {
    result = LdrpGetFromMUIMemCache((unsigned __int64)BaseOfImage, 0, 0LL, 8);
    v10 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v13, 3u, 0x30u, (__int64)&v11);
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = LdrpAccessResourceDataNoMultipleLanguage((unsigned __int64)BaseOfImage, v11, (unsigned __int64 *)&v10, &v12);
  if ( v8 < 0 )
    goto LABEL_14;
  v9 = v10;
  if ( *v10 != -20054323 )
  {
    v8 = -1073741701;
LABEL_14:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (int)v9;
    LdrpSetAlternateResourceModuleHandle((_DWORD)BaseOfImage, 0, 0, v4, -1, 0, 2, v8, 0LL);
  }
  return v9;
}
