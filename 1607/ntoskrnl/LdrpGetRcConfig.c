/*
 * XREFs of LdrpGetRcConfig @ 0x1400FAB68
 * Callers:
 *     LdrIsResItemExist @ 0x1400FA910 (LdrIsResItemExist.c)
 *     LdrpVerifyAlternateResourceModule @ 0x14014B5B8 (LdrpVerifyAlternateResourceModule.c)
 * Callees:
 *     LdrpGetFromMUIMemCache @ 0x1400FAC9C (LdrpGetFromMUIMemCache.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x14051C6F4 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpSearchResourceSection_U @ 0x14051C944 (LdrpSearchResourceSection_U.c)
 */

__int64 __fastcall LdrpGetRcConfig(PVOID BaseAddress, __int64 a2, char a3, char a4)
{
  int v4; // esi
  __int64 result; // rax
  int v8; // eax
  _DWORD *v9; // rbx
  int v10; // [rsp+20h] [rbp-88h]
  _DWORD *v11; // [rsp+50h] [rbp-58h]
  __int64 v12; // [rsp+60h] [rbp-48h] BYREF
  _QWORD v13[3]; // [rsp+68h] [rbp-40h] BYREF

  v4 = -1;
  v11 = 0LL;
  if ( a4 )
  {
    result = LdrpGetFromMUIMemCache(BaseAddress, 0LL, 0LL, 8LL);
    v11 = (_DWORD *)result;
    if ( result == -1 )
      return 0LL;
    if ( result )
      return result;
  }
  v13[1] = 1LL;
  v13[2] = 0LL;
  v13[0] = L"MUI";
  v8 = LdrpSearchResourceSection_U((_DWORD)BaseAddress, (unsigned int)v13, 3, 48, (__int64)&v12);
  if ( v8 < 0 )
    goto LABEL_12;
  v8 = LdrpAccessResourceDataNoMultipleLanguage(BaseAddress);
  if ( v8 < 0 )
    goto LABEL_12;
  v9 = v11;
  if ( *v11 != -20054323 )
  {
    v8 = -1073741701;
LABEL_12:
    v9 = 0LL;
  }
  if ( a3 )
  {
    if ( v9 )
      v4 = (int)v9;
    LdrpSetAlternateResourceModuleHandle((_DWORD)BaseAddress, 0, 0, v4, v10, 0, 2, v8, 0LL);
  }
  return (__int64)v9;
}
