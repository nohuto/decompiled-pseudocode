/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C00EAED8
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C00EAE4C (-xxxbEnumerateRegistryFonts@@YAHH@Z.c)
 * Callees:
 *     GreGetCannonicalName @ 0x1C00280DC (GreGetCannonicalName.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C00E514C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxAddFontResourceW @ 0x1C00EB04C (xxxAddFontResourceW.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01CB81C (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v5; // r15d
  __int64 ProfileKeysW; // rbx
  __int64 v7; // r9
  unsigned __int16 *v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int16 *v11; // rdi
  __int64 v12; // r14
  const wchar_t *v13; // rbx
  wchar_t v14; // ax
  WCHAR v15; // ax
  WCHAR *i; // rcx
  unsigned __int16 *v19; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v20; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v21[4]; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[20]; // [rsp+70h] [rbp-90h] BYREF
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF
  _WORD Src[264]; // [rsp+2D0h] [rbp+1D0h] BYREF
  char v25[528]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v5 = a2;
  ProfileKeysW = (int)FastGetProfileKeysW(0LL, a2, a3, &v19);
  if ( !v19 )
    return 0LL;
  PushW32ThreadLock((__int64)v19, v21, (__int64)Win32FreePool, v7);
  if ( (_DWORD)ProfileKeysW )
  {
    v11 = v19;
    v12 = ProfileKeysW;
    do
    {
      v22[1] = 0;
      v13 = v11;
      while ( 1 )
      {
        v14 = *v13;
        if ( !*v13 )
          break;
        ++v13;
        if ( v14 == 40 )
        {
          if ( *v13
            && !_wcsicmp(v13, L"OpenType)")
            && (int)RtlStringCchCopyNW((char *)Src, 260LL, (char *)v11, v13 - v11 - 1) >= 0 )
          {
            GreGetCannonicalName(Src, v25, &v20, v22);
          }
          break;
        }
      }
      if ( (unsigned int)FastGetProfileStringW(0LL, v5, v11, a4, SourceString, 255, 0) )
      {
        v15 = SourceString[0];
        for ( i = SourceString; ; v15 = *i )
        {
          if ( v15 == 46 )
            goto LABEL_14;
          if ( !v15 )
            break;
          ++i;
        }
        if ( (int)RtlStringCchCatW(SourceString, 0x104uLL, L".FON") >= 0 )
LABEL_14:
          xxxAddFontResourceW(SourceString);
      }
      while ( *v11++ )
        ;
      v8 = &v19[v12];
    }
    while ( v11 < v8 );
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v21, (__int64)v8, v9, v10);
  return 1LL;
}
