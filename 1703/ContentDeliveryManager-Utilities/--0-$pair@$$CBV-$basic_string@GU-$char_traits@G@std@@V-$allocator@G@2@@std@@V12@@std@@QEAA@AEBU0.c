/*
 * XREFs of ??0?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@QEAA@AEBU01@@Z @ 0x180039264
 * Callers:
 *     ?ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@PEAW4SubscriptionActivationFlags@12@@Z @ 0x180039970 (-ActivateSubscriptionIfInactive@SubscribedContentStore@CreativeFramework@@YAXPEBGAEBV-$map@V-$ba.c)
 *     std::find_if_std::_Tree_const_iterator_std::_Tree_val_std::_Tree_simple_types_std::pair_std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short____const__std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short_____________lambda_30b10436083aba01be8f7c4a25a13343___ @ 0x18003DED4 (std--find_if_std--_Tree_const_iterator_std--_Tree_val_std--_Tree_simple_types_std--pair_std--bas.c)
 *     ??$_Buynode@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@1@@Z @ 0x180044038 (--$_Buynode@AEAU-$pair@$$CBV-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@V12@@st.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x18002E944 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall std::pair<std::wstring const,std::wstring>::pair<std::wstring const,std::wstring>(
        __int64 a1,
        void **a2)
{
  *(_QWORD *)(a1 + 24) = 7LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  *(_WORD *)a1 = 0;
  std::wstring::assign((void **)a1, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  *(_QWORD *)(a1 + 56) = 7LL;
  *(_QWORD *)(a1 + 48) = 0LL;
  *(_WORD *)(a1 + 32) = 0;
  std::wstring::assign((void **)(a1 + 32), a2 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
  return a1;
}
