/*
 * XREFs of LdrpGetRcConfig @ 0x18003C440
 * Callers:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpLoadResourceFromAlternativeModule @ 0x18003A5C8 (LdrpLoadResourceFromAlternativeModule.c)
 *     LdrpVerifyAlternateResourceModule @ 0x18003C2DC (LdrpVerifyAlternateResourceModule.c)
 *     LdrIsResItemExist @ 0x18003C3B4 (LdrIsResItemExist.c)
 *     LdrpCompareServiceChecksum @ 0x18003F134 (LdrpCompareServiceChecksum.c)
 *     LdrpGetMUIFromCMFSegment @ 0x180048A70 (LdrpGetMUIFromCMFSegment.c)
 *     LdrpResReportResourceAccessInternal @ 0x18005246C (LdrpResReportResourceAccessInternal.c)
 *     LdrLoadAlternateResourceModule @ 0x180082AD0 (LdrLoadAlternateResourceModule.c)
 * Callees:
 *     LdrpSearchResourceSection_U @ 0x180030670 (LdrpSearchResourceSection_U.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180031654 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpGetFromMUIMemCache @ 0x18003195C (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18003C78C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
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
    result = (_DWORD *)LdrpGetFromMUIMemCache((unsigned __int64)BaseOfImage, 0, 0LL, 8);
    v10 = result;
    if ( result == (_DWORD *)-1LL )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U(BaseOfImage, (__int64)v13, 3LL, 0x30u, (__int64)&v11);
  if ( v8 < 0 )
    goto LABEL_14;
  v8 = LdrpAccessResourceDataNoMultipleLanguage((unsigned __int64)BaseOfImage, v11, &v10, &v12);
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
