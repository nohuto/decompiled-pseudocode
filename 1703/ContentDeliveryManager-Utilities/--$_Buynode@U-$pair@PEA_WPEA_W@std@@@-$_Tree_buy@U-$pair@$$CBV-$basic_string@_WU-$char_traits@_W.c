/*
 * XREFs of ??$_Buynode@U?$pair@PEA_WPEA_W@std@@@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@1@$$QEAU?$pair@PEA_WPEA_W@1@@Z @ 0x180056078
 * Callers:
 *     ?GetActionService@Actions@CreativeFramework@@YA?AV?$shared_ptr@VIActionService@Actions@CreativeFramework@@@std@@W4ActionServices@12@AEBUActionContext@12@AEBV?$map@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@U?$less@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V12@@std@@@2@@4@@Z @ 0x180055E40 (-GetActionService@Actions@CreativeFramework@@YA-AV-$shared_ptr@VIActionService@Acti_ea_180055E40.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Buynode0@?$_Tree_buy@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@QEAAPEAU?$_Tree_node@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@PEAX@2@XZ @ 0x1800562D8 (-_Buynode0@-$_Tree_buy@U-$pair@$$CBV-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@s.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode<std::pair<wchar_t *,wchar_t *>>(
        __int64 a1,
        char **a2)
{
  __int64 v3; // rax
  __int64 v4; // rcx
  __int64 v5; // r14
  unsigned __int64 v6; // rbx
  __int64 v7; // rdi
  char *v8; // rdx
  __int64 v9; // rsi
  unsigned __int64 v10; // r8
  char *v11; // rdx
  void *v13; // [rsp+60h] [rbp+18h]

  v3 = std::_Tree_buy<std::pair<std::wstring const,std::wstring>>::_Buynode0(a1);
  v5 = v3;
  v13 = (void *)v3;
  v6 = 0LL;
  *(_WORD *)(v3 + 24) = 0;
  try
  {
    v7 = v3 + 32;
    if ( v3 != -32 )
    {
      v8 = *a2;
      *(_QWORD *)(v3 + 56) = 7LL;
      *(_QWORD *)(v3 + 48) = 0LL;
      *(_WORD *)v7 = 0;
      v9 = -1LL;
      if ( *(_WORD *)v8 )
      {
        v10 = -1LL;
        do
          ++v10;
        while ( *(_WORD *)&v8[2 * v10] );
      }
      else
      {
        v10 = 0LL;
      }
      std::wstring::assign((_QWORD *)(v3 + 32), v8, v10);
      v11 = a2[1];
      *(_QWORD *)(v7 + 56) = 7LL;
      *(_QWORD *)(v7 + 48) = 0LL;
      *(_WORD *)(v7 + 32) = 0;
      if ( *(_WORD *)v11 )
      {
        do
          ++v9;
        while ( *(_WORD *)&v11[2 * v9] );
        v6 = v9;
      }
      std::wstring::assign((_QWORD *)(v7 + 32), v11, v6);
    }
  }
  catch ( ... )
  {
    std::_Tree<std::_Tmap_traits<unsigned short const *,_WNF_STATE_NAME const *,CreativeFramework::Triggers::less,std::allocator<std::pair<unsigned short const * const,_WNF_STATE_NAME const *>>,0>>::_Destroy_if_not_nil(
      v4,
      v13);
    throw;
  }
  return v5;
}
