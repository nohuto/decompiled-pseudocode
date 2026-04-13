/*
 * XREFs of ??$_Buynode@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@AEAU?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@1@@Z @ 0x180064024
 * Callers:
 *     ??$_Copy_nodes@U?$integral_constant@_N$0A@@std@@@?$_Tree@V?$_Tmap_traits@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@$0A@@std@@@std@@IEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@PEAU21@0U?$integral_constant@_N$0A@@1@@Z @ 0x180063F8C (--$_Copy_nodes@U-$integral_constant@_N$0A@@std@@@-$_Tree@V-$_Tmap_traits@V-$basic_string@_WU-$ch.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800562D8 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

// Hidden C++ exception states: #wind=2
void **__fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<std::wstring const,std::wstring> &>(
        _QWORD *a1,
        void **a2)
{
  void **v3; // rax
  __int64 v4; // rcx
  void **v5; // rdi
  _QWORD *v6; // rbx
  void **v8; // [rsp+60h] [rbp+18h]

  v3 = (void **)std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v5 = v3;
  v8 = v3;
  *((_WORD *)v3 + 12) = 0;
  try
  {
    v6 = v3 + 4;
    if ( v3 != (void **)-32LL )
    {
      v3[7] = (void *)7;
      v3[6] = 0LL;
      *(_WORD *)v6 = 0;
      std::wstring::assign(v3 + 4, a2, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
      v6[7] = 7LL;
      v6[6] = 0LL;
      *((_WORD *)v6 + 16) = 0;
      std::wstring::assign((void **)v6 + 4, a2 + 4, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v4,
      v8);
    throw;
  }
  return v5;
}
