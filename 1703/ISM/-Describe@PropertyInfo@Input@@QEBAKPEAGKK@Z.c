/*
 * XREFs of ?Describe@PropertyInfo@Input@@QEBAKPEAGKK@Z @ 0x18002A030
 * Callers:
 *     ?Describe@PropertyNode@Input@@UEBAKPEAGKK@Z @ 0x1800276E0 (-Describe@PropertyNode@Input@@UEBAKPEAGKK@Z.c)
 * Callees:
 *     ?_Deallocate@std@@YAXPEAX_K1@Z @ 0x180001914 (-_Deallocate@std@@YAXPEAX_K1@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x180001D40 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1800292EC (-StringCchCatNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z @ 0x180029E44 (-Describe@PropertyTypeInfo@Input@@QEBAKPEAGKK@Z.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A36C (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z @ 0x18002A464 (-append@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@QEBG@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall Input::PropertyInfo::Describe(Input::PropertyInfo *this, unsigned __int16 *a2, __int64 a3, char a4)
{
  unsigned __int16 *v6; // rbx
  char v7; // r12
  void **v8; // r15
  _DWORD *v9; // r14
  __int64 v10; // rcx
  char *p_Src; // r8
  unsigned __int16 *v13; // [rsp+48h] [rbp-C0h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v15; // [rsp+58h] [rbp-B0h]
  __int64 v16; // [rsp+60h] [rbp-A8h]
  char *Src; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v18; // [rsp+78h] [rbp-90h]
  unsigned __int64 v19; // [rsp+80h] [rbp-88h]
  wchar_t Buffer[128]; // [rsp+88h] [rbp-80h] BYREF

  v16 = -2LL;
  *a2 = 0;
  v6 = a2;
  v13 = a2;
  v14 = 128LL;
  v7 = a4 & 7;
  if ( (a4 & 1) != 0 && (int)StringCchPrintfW(Buffer, 128LL, L"%s") >= 0 )
  {
    StringCchCatNExW(a2, 128LL, (char *)Buffer, 0x80uLL, &v13, &v14);
    v6 = v13;
  }
  if ( (v7 & 4) != 0 )
  {
    v18 = 0LL;
    v19 = 7LL;
    LOWORD(Src) = 0;
    if ( *((_DWORD *)this + 14) )
    {
      v8 = (void **)off_1800A9970;
      v9 = &unk_1800AEA00;
      v10 = 4LL;
      v15 = 4LL;
      do
      {
        if ( (*v9 & *((_DWORD *)this + 14)) != 0 )
        {
          if ( v18 )
            std::wstring::append(&Src, L" | ");
          std::wstring::append(&Src, *v8);
          v10 = v15;
        }
        ++v9;
        ++v8;
        v15 = --v10;
      }
      while ( v10 );
    }
    else
    {
      std::wstring::assign(&Src, L"PROPPOLICY_PRIVATE");
    }
    if ( a2 != v6 )
    {
      StringCchCatNExW(v6, v14, (char *)L", ", 2uLL, &v13, &v14);
      v6 = v13;
    }
    p_Src = (char *)&Src;
    if ( v19 >= 8 )
      p_Src = Src;
    StringCchCatNExW(v6, v14, p_Src, v18, &v13, &v14);
    if ( v19 >= 8 )
      std::_Deallocate(Src, v19 + 1, 2uLL);
    v6 = v13;
  }
  if ( (v7 & 2) != 0 && (unsigned int)Input::PropertyTypeInfo::Describe(*((Input::PropertyTypeInfo **)this + 6), Buffer) )
  {
    if ( a2 != v6 )
    {
      StringCchCatNExW(v6, v14, (char *)L", ", 2uLL, &v13, &v14);
      v6 = v13;
    }
    StringCchCatNExW(v6, v14, (char *)Buffer, 0x80uLL, &v13, &v14);
  }
  return (unsigned int)(128 - v14);
}
