/*
 * XREFs of ?xxxbEnumerateRegistryFontsInternal@@YAHKIPEBG0@Z @ 0x1C013B638
 * Callers:
 *     ?xxxbEnumerateRegistryFonts@@YAHH@Z @ 0x1C013B5AC (-xxxbEnumerateRegistryFonts@@YAHH@Z.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     ?RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z @ 0x1C013AC8C (-RtlStringCchCopyNW@@YAJPEAG_KPEBG1@Z.c)
 *     xxxAddFontResourceW @ 0x1C013B7AC (xxxAddFontResourceW.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?RtlStringCchCatW@@YAJPEAG_KPEBG@Z @ 0x1C01D1A68 (-RtlStringCchCatW@@YAJPEAG_KPEBG@Z.c)
 *     GreGetCannonicalName @ 0x1C0287560 (GreGetCannonicalName.c)
 */

__int64 __fastcall xxxbEnumerateRegistryFontsInternal(
        __int64 a1,
        __int64 a2,
        const unsigned __int16 *a3,
        const unsigned __int16 *a4)
{
  unsigned int v5; // r15d
  __int64 ProfileKeysW; // rbx
  unsigned __int16 *v7; // rdi
  __int64 v8; // r14
  const wchar_t *v9; // rbx
  wchar_t v10; // ax
  WCHAR v11; // ax
  WCHAR *i; // rcx
  unsigned __int16 *v15; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v16[4]; // [rsp+50h] [rbp-B0h] BYREF
  int v17; // [rsp+74h] [rbp-8Ch]
  WCHAR SourceString[264]; // [rsp+C0h] [rbp-40h] BYREF
  char Src[528]; // [rsp+2D0h] [rbp+1D0h] BYREF
  _BYTE v20[528]; // [rsp+4E0h] [rbp+3E0h] BYREF

  v5 = a2;
  ProfileKeysW = (int)FastGetProfileKeysW(0LL, a2, a3, &v15);
  if ( !v15 )
    return 0LL;
  PushW32ThreadLock((__int64)v15, v16, (__int64)Win32FreePool);
  if ( (_DWORD)ProfileKeysW )
  {
    v7 = v15;
    v8 = ProfileKeysW;
    do
    {
      v17 = 0;
      v9 = v7;
      while ( 1 )
      {
        v10 = *v9;
        if ( !*v9 )
          break;
        ++v9;
        if ( v10 == 40 )
        {
          if ( *v9 && !_wcsicmp(v9, L"OpenType)") && (int)RtlStringCchCopyNW(Src, 260LL, (char *)v7, v9 - v7 - 1) >= 0 )
            GreGetCannonicalName(Src, v20);
          break;
        }
      }
      if ( (unsigned int)FastGetProfileStringW(0LL, v5, v7, a4, SourceString, 255, 0) )
      {
        v11 = SourceString[0];
        for ( i = SourceString; ; v11 = *i )
        {
          if ( v11 == 46 )
            goto LABEL_14;
          if ( !v11 )
            break;
          ++i;
        }
        if ( (int)RtlStringCchCatW(SourceString, 0x104uLL, L".FON") >= 0 )
LABEL_14:
          xxxAddFontResourceW(SourceString);
      }
      while ( *v7++ )
        ;
    }
    while ( v7 < &v15[v8] );
  }
  PopAndFreeAlwaysW32ThreadLock((__int64)v16);
  return 1LL;
}
