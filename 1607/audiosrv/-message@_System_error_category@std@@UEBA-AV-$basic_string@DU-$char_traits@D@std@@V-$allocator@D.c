/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800518D0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memset @ 0x180036D30 (memset.c)
 *     ?_Grow@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA_N_K_N@Z @ 0x18004FB4C (-_Grow@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA_N_K_N@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@$$QEAV01@@Z @ 0x18004FD58 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@$$QEAV01@@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x1800513A8 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 *     ?append@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@_KD@Z @ 0x180051664 (-append@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@_KD@Z.c)
 *     ?shrink_to_fit@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051A0C (-shrink_to_fit@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXXZ.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, unsigned int a3)
{
  void **v5; // rcx
  void **v6; // rax
  char *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  void **v10; // rax
  void *Src[2]; // [rsp+30h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-20h]
  unsigned __int64 v14; // [rsp+48h] [rbp-18h]

  v14 = 15LL;
  v13 = 0LL;
  LOBYTE(Src[0]) = 0;
  if ( std::string::_Grow(Src, 0x7FFFuLL) )
  {
    v5 = Src;
    if ( v14 >= 0x10 )
      v5 = (void **)Src[0];
    memset(v5, 0, 0x7FFFuLL);
    v13 = 0x7FFFLL;
    v6 = Src;
    if ( v14 >= 0x10 )
      v6 = (void **)Src[0];
    *((_BYTE *)v6 + 0x7FFF) = 0;
  }
  v7 = (char *)Src;
  if ( v14 >= 0x10 )
    v7 = (char *)Src[0];
  v8 = std::_Winerror_message(a3, v7, 0x7FFFu);
  if ( v8 )
  {
    v9 = v8;
    if ( v8 > v13 )
    {
      std::string::append(Src, v8 - v13);
    }
    else
    {
      v13 = v8;
      v10 = Src;
      if ( v14 >= 0x10 )
        v10 = (void **)Src[0];
      *((_BYTE *)v10 + v9) = 0;
    }
    std::string::shrink_to_fit(Src);
    std::string::string(a2, Src);
  }
  else
  {
    std::string::string((__int64)a2, "unknown error");
  }
  std::string::_Tidy(Src, 1, 0LL);
  return a2;
}
