/*
 * XREFs of ??$find_if@V?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x180038794
 * Callers:
 *     ?AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@0@Z @ 0x1800334EC (-AreSubscriptionContextsEqual@SubscribedContentStore@CreativeFramework@@YA_NAEBV-$map@V-$basic_s.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180027270 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$_Find_if@V?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@std@@V_lambda_30b10436083aba01be8f7c4a25a13343_@@@std@@YA?AV?$_Tree_unchecked_const_iterator@V?$_Tree_val@U?$_Tree_simple_types@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@std@@@std@@U_Iterator_base0@2@@0@V10@0V_lambda_30b10436083aba01be8f7c4a25a13343_@@@Z @ 0x180038ECC (--$_Find_if@V-$_Tree_unchecked_const_iterator@V-$_Tree_val@U-$_Tree_simple_types@U-$pair@$$CBV-$.c)
 *     __security_check_cookie @ 0x1800589B0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::find_if<std::_Tree_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  void **v6; // rdi
  void *v8[4]; // [rsp+28h] [rbp-41h] BYREF
  void *v9[5]; // [rsp+48h] [rbp-21h] BYREF
  _BYTE v10[8]; // [rsp+70h] [rbp+7h] BYREF
  __int64 v11; // [rsp+78h] [rbp+Fh]

  v9[4] = (void *)-2LL;
  v11 = a4;
  v8[3] = (void *)7;
  v8[2] = 0LL;
  LOWORD(v8[0]) = 0;
  std::wstring::assign(v8, (void **)a4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  v9[3] = (void *)7;
  v9[2] = 0LL;
  LOWORD(v9[0]) = 0;
  v6 = (void **)(a4 + 32);
  std::wstring::assign(v9, (void **)(a4 + 32), 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *a1 = *(_QWORD *)std::_Find_if<std::_Tree_unchecked_const_iterator<std::_Tree_val<std::_Tree_simple_types<std::pair<std::wstring const,std::wstring>>>,std::_Iterator_base0>,_lambda_30b10436083aba01be8f7c4a25a13343_>(
                     v10,
                     a2,
                     a3,
                     v8,
                     v8);
  if ( *(_QWORD *)(a4 + 56) >= 8uLL )
    operator delete(*v6);
  *(_QWORD *)(a4 + 56) = 7LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_WORD *)v6 = 0;
  if ( *(_QWORD *)(a4 + 24) >= 8uLL )
    operator delete(*(void **)a4);
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_WORD *)a4 = 0;
  return a1;
}
