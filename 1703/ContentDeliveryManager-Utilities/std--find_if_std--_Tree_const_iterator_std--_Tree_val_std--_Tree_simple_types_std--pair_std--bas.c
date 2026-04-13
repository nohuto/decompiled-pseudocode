/*
 * XREFs of std::find_if_std::_Tree_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____________lambda_30b10436083aba01be8f7c4a25a13343___ @ 0x18003DED4
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 * Callees:
 *     ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x180039264 (--0-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@std@@QEAA@AEBU0.c)
 *     std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___ @ 0x18003E340 (std--_Find_if_std--_Tree_unchecked_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pa.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall std::find_if_std::_Tree_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____________lambda_30b10436083aba01be8f7c4a25a13343___(
        _QWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  _BYTE v9[8]; // [rsp+20h] [rbp-78h] BYREF
  __int64 v10; // [rsp+28h] [rbp-70h]
  _BYTE v11[64]; // [rsp+30h] [rbp-68h] BYREF
  __int64 v12; // [rsp+70h] [rbp-28h]

  v10 = -2LL;
  v12 = a4;
  std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>((__int64)v11, (void **)a4);
  *a1 = *(_QWORD *)std::_Find_if_std::_Tree_unchecked_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short__________std::_Iterator_base0___lambda_30b10436083aba01be8f7c4a25a13343___(
                     v9,
                     a2,
                     a3,
                     v11);
  if ( *(_QWORD *)(a4 + 56) >= 8uLL )
    operator delete(*(void **)(a4 + 32));
  *(_QWORD *)(a4 + 56) = 7LL;
  *(_QWORD *)(a4 + 48) = 0LL;
  *(_WORD *)(a4 + 32) = 0;
  if ( *(_QWORD *)(a4 + 24) >= 8uLL )
    operator delete(*(void **)a4);
  *(_QWORD *)(a4 + 24) = 7LL;
  *(_QWORD *)(a4 + 16) = 0LL;
  *(_WORD *)a4 = 0;
  return a1;
}
