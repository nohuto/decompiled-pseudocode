/*
 * XREFs of ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAT_RM_ACTIVITY_IMPORTANCE@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@utl@@_N@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x1800286D0
 * Callers:
 *     ?AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@@6@@Z @ 0x180026D30 (-AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basi.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?_EmplaceImpl@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@1@Z @ 0x1800284E8 (-_EmplaceImpl@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@U-$pair@$$CB.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEBV01@@?$construct@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@QEBA_NPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEBV21@@Z @ 0x1800296D4 (--$-RV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEBV01@@-$construct@V-$basic_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,_RM_ACTIVITY_IMPORTANCE &>(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        _DWORD *a4)
{
  void **v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  void **v11; // rdi
  char v12; // al

  v8 = (void **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v8;
  if ( !v8
    || (v12 = utl::construct<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>::operator()<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &>(
                v9,
                v8 + 3,
                a3),
        *((_DWORD *)v11 + 14) = *a4,
        !v12) )
  {
    if ( v11 )
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v11 + 3);
      operator delete(v11);
    }
  }
  utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_EmplaceImpl(
    a1,
    a2,
    v10);
  return a2;
}
