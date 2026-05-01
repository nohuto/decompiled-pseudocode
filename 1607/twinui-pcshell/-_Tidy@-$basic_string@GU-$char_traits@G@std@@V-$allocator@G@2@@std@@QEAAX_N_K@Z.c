/*
 * XREFs of ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x18001A1A4
 * Callers:
 *     ?IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z @ 0x180007D78 (-IsOverrideLayout@TaskbarLayoutPolicyManager@@AEAAHPEAUIXMLDOMNode@@@Z.c)
 *     ??1?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@QEAA@XZ @ 0x1800081B4 (--1-$shared_ptr@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@QEAA@XZ.c)
 *     ?ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z @ 0x18000AF4C (-ParsePinnedAppNode@TaskbarLayoutParser@@AEAAJPEAUIXMLDOMNode@@PEAPEAUITaskbarLayoutItem@@@Z.c)
 *     ?GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV?$shared_ptr@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@@Z @ 0x180019AA0 (-GetStringAttributeValue@StartLayout@@YAJPEAUIXMLDOMElement@@AEBV_bstr_t@@AEAV-$shared_ptr@V-$ba.c)
 *     ?_Destroy@?$_Ref_count_obj@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180019DA0 (-_Destroy@-$_Ref_count_obj@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@@std@@E.c)
 *     ?_Copy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_K0@Z @ 0x180019F6C (-_Copy@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAX_K0@Z.c)
 *     ?ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV?$ComPtr@UIXMLDOMNode@@@WRL@Microsoft@@AEAUSelectionData@2@@Z @ 0x18001A660 (-ParseSelectionAttributes@SelectionDataParser@StartLayout@@UEAAJAEAV-$ComPtr@UIXMLDOMNode@@@WRL@.c)
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$0 @ 0x1800314AA (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_1800314AA.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

void __fastcall std::wstring::_Tidy(void **a1, char a2, void *a3)
{
  void **v4; // rbx
  char *v5; // rdi
  unsigned __int64 v6; // rax
  char *v7; // rax
  unsigned __int64 v8; // rdi

  v4 = a1;
  if ( a2 && (unsigned __int64)a1[3] >= 8 )
  {
    v5 = (char *)*a1;
    if ( a3 )
      memcpy_0(a1, *a1, 2LL * (_QWORD)a3);
    v6 = (unsigned __int64)v4[3] + 1;
    if ( v6 > 0x7FFFFFFFFFFFFFFFLL )
    {
      _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
      __debugbreak();
    }
    if ( 2 * v6 >= 0x1000 )
    {
      if ( ((unsigned __int8)v5 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        __debugbreak();
      }
      v7 = (char *)*((_QWORD *)v5 - 1);
      if ( v7 >= v5 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        __debugbreak();
      }
      v8 = v5 - v7;
      if ( v8 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        __debugbreak();
      }
      if ( v8 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn(0x7FFFFFFFFFFFFFFFLL);
        __debugbreak();
      }
      v5 = v7;
    }
    operator delete(v5);
  }
  v4[3] = (void *)7;
  v4[2] = a3;
  if ( (unsigned __int64)v4[3] >= 8 )
    v4 = (void **)*v4;
  *((_WORD *)v4 + (_QWORD)a3) = 0;
}
