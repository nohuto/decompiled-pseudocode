/*
 * XREFs of LdrpGetRcConfig @ 0x18003F1C4
 * Callers:
 *     LdrpLoadResourceFromAlternativeModule @ 0x180010818 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003BA84 (LdrpVerifyAlternateResourceModule.c)
 *     LdrIsResItemExist @ 0x18003F138 (LdrIsResItemExist.c)
 *     LdrpGetMUIFromCMFSegment @ 0x18005A1E8 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResReportResourceAccessInternal @ 0x180082730 (LdrpResReportResourceAccessInternal.c)
 *     LdrLoadAlternateResourceModule @ 0x1800857A0 (LdrLoadAlternateResourceModule.c)
 *     LdrpCompareServiceChecksum @ 0x180085990 (LdrpCompareServiceChecksum.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180030398 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18003121C (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetFromMUIMemCache @ 0x180040A30 (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x1800726B0 (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 */

_DWORD *__fastcall LdrpGetRcConfig(PVOID BaseOfImage, __int64 a2, char a3, char a4)
{
  int v4; // esi
  _DWORD *result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  _DWORD *v10; // [rsp+50h] [rbp-58h] BYREF
  int v11; // [rsp+58h] [rbp-50h] BYREF
  ULONG *v12; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-40h] BYREF

  v4 = -1;
  v10 = 0LL;
  if ( a4 )
  {
    result = (_DWORD *)LdrpGetFromMUIMemCache(BaseOfImage);
    v10 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v13, 3u, 0x30u, (__int64)&v12);
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = LdrpAccessResourceDataNoMultipleLanguage((unsigned __int64)BaseOfImage, v12, &v10, &v11);
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
