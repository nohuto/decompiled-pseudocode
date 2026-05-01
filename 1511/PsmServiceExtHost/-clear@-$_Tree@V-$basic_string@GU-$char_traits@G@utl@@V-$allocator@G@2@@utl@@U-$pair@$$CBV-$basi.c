/*
 * XREFs of ?clear@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@$0A@@utl@@QEAAXXZ @ 0x180028E0C
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x180026E30 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>,0>::clear(
        _QWORD *a1)
{
  unsigned __int64 v1; // rdi
  void **v3; // rbx

  v1 = a1[2];
  if ( (_QWORD *)v1 != a1 )
  {
    while ( 1 )
    {
      while ( *(_UNKNOWN **)(v1 + 8) != &utl::_TreeSentinel )
        v1 = *(_QWORD *)(v1 + 8);
LABEL_3:
      if ( *(_UNKNOWN **)(v1 + 16) == &utl::_TreeSentinel )
        break;
      v1 = *(_QWORD *)(v1 + 16);
    }
    while ( 1 )
    {
      v3 = (void **)v1;
      v1 = *(_QWORD *)v1 & 0xFFFFFFFFFFFFFFFEuLL;
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v3 + 3);
      operator delete(v3);
      if ( (_QWORD *)v1 == a1 )
        break;
      if ( *(_UNKNOWN **)(v1 + 8) != &utl::_TreeSentinel )
      {
        *(_QWORD *)(v1 + 8) = &utl::_TreeSentinel;
        goto LABEL_3;
      }
    }
    *a1 = a1;
    a1[1] = a1;
    a1[2] = a1;
    a1[3] = 0LL;
  }
}
