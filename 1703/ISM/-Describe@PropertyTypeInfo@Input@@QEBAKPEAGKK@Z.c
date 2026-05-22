/*
 * XREFs of ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180029E44
 * Callers:
 *     ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030 (-Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z.c)
 * Callees:
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800292EC (-StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

__int64 __fastcall Input::PropertyTypeInfo::Describe(Input::PropertyTypeInfo *this, unsigned __int16 *a2)
{
  unsigned __int16 *v4; // rsi
  unsigned __int64 v5; // rdi
  wchar_t *v6; // rcx
  int v7; // eax
  int v8; // edx
  __int64 v9; // r8
  wchar_t v10; // ax
  wchar_t v11; // ax
  unsigned __int64 v13; // [rsp+40h] [rbp-C0h] BYREF
  unsigned __int16 *v14; // [rsp+48h] [rbp-B8h] BYREF
  wchar_t Buffer[128]; // [rsp+50h] [rbp-B0h] BYREF

  v14 = a2;
  *a2 = 0;
  v13 = 128LL;
  v4 = a2;
  v5 = 128LL;
  if ( (int)StringCchPrintfW(Buffer, 128LL, L"%s") >= 0 )
  {
    StringCchCatNExW(a2, 128LL, (char *)Buffer, 0x80uLL, &v14, &v13);
    v4 = v14;
    v5 = v13;
  }
  v6 = Buffer;
  v7 = *((_DWORD *)this + 12);
  if ( v7 )
  {
    if ( v7 != 1 )
    {
      v8 = StringCchPrintfW(Buffer, 128LL, L"(fixed) %d bytes");
      goto LABEL_18;
    }
    v9 = 128LL;
    v8 = 0;
    do
    {
      if ( v9 == -2147483518 )
        break;
      v10 = *(wchar_t *)((char *)v6 + (char *)L"(fixed) 1 byte" - (char *)Buffer);
      if ( !v10 )
        break;
      *v6++ = v10;
      --v9;
    }
    while ( v9 );
  }
  else
  {
    v9 = 128LL;
    v8 = 0;
    do
    {
      if ( v9 == -2147483518 )
        break;
      v11 = *(wchar_t *)((char *)v6 + (char *)L"(variable)" - (char *)Buffer);
      if ( !v11 )
        break;
      *v6++ = v11;
      --v9;
    }
    while ( v9 );
  }
  if ( !v9 )
  {
    --v6;
    v8 = -2147024774;
  }
  *v6 = 0;
LABEL_18:
  if ( v8 >= 0 )
  {
    if ( a2 != v4 )
    {
      StringCchCatNExW(v4, v5, (char *)L", ", 2uLL, &v14, &v13);
      v4 = v14;
      v5 = v13;
    }
    StringCchCatNExW(v4, v5, (char *)Buffer, 0x80uLL, &v14, &v13);
    LODWORD(v5) = v13;
  }
  return (unsigned int)(128 - v5);
}
