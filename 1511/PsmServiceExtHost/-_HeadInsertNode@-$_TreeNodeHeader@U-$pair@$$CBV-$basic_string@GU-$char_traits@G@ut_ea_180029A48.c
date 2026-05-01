/*
 * XREFs of ?_HeadInsertNode@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@utl@@QEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@_N0@Z @ 0x180029A48
 * Callers:
 *     ?_EmplaceImpl@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@1@Z @ 0x180028760 (-_EmplaceImpl@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@_ea_180028760.c)
 * Callees:
 *     ?_NodeRotate@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@utl@@AEAAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@_N00@Z @ 0x180029708 (-_NodeRotate@-$_TreeNodeHeader@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G.c)
 */

unsigned __int64 *__fastcall utl::_TreeNodeHeader<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>::_HeadInsertNode(
        __int64 a1,
        unsigned __int64 a2,
        unsigned __int8 a3,
        unsigned __int64 *a4)
{
  unsigned __int64 v4; // r11
  unsigned __int64 *result; // rax
  unsigned __int64 v6; // rbx
  unsigned __int8 v7; // di
  __int64 v8; // rax
  unsigned __int64 v9; // r8
  unsigned __int64 *v10; // r10
  _QWORD *v11; // rdx

  *a4 = a2;
  a4[1] = (unsigned __int64)&utl::_TreeSentinel;
  v4 = a2;
  a4[2] = (unsigned __int64)&utl::_TreeSentinel;
  *(_QWORD *)(a2 + 8LL * a3 + 8) = a4;
  result = (unsigned __int64 *)(a3 == 0);
  if ( *(_QWORD *)(a1 + 8LL * (_QWORD)result + 8) == a2 )
  {
    result = (unsigned __int64 *)(a3 == 0);
    *(_QWORD *)(a1 + 8LL * (_QWORD)result + 8) = a4;
  }
  while ( (*(_QWORD *)v4 & 1) == 0 )
  {
    v6 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( *(_QWORD *)(v6 + 16) == v4 )
    {
      v7 = 1;
      v8 = 0LL;
    }
    else
    {
      v7 = 0;
      v8 = 1LL;
    }
    if ( (**(_BYTE **)(v6 + 8 * v8 + 8) & 1) != 0 )
    {
      if ( (**(_BYTE **)(v4 + 8LL * (v7 == 0) + 8) & 1) == 0 )
      {
        v9 = *(_QWORD *)v4 & 0xFFFFFFFFFFFFFFFEuLL;
        v10 = *(unsigned __int64 **)(v4 + 8LL * (v7 == 0) + 8);
        v11 = (_QWORD *)v10[v7 + 1];
        *v10 = v9;
        *(_QWORD *)(v9 + 8LL * (*(_QWORD *)(v9 + 16) == v4) + 8) = v10;
        *(_QWORD *)v4 = v10;
        *v11 &= 1uLL;
        *v11 |= v4;
        *(_QWORD *)(v4 + 8LL * (v7 == 0) + 8) = v11;
        v10[v7 + 1] = v4;
      }
      return utl::_TreeNodeHeader<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>::_NodeRotate(
               v6,
               v7 == 0);
    }
    **(_QWORD **)(v6 + 8) |= 1uLL;
    result = *(unsigned __int64 **)(v6 + 16);
    *result |= 1uLL;
    v4 = *(_QWORD *)v6 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( a1 == v4 )
      return result;
    *(_QWORD *)v6 = v4;
  }
  return result;
}
