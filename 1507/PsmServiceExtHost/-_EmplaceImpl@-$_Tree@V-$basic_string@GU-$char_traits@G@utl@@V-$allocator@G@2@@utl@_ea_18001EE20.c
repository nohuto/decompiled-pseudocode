/*
 * XREFs of ?_EmplaceImpl@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@1@Z @ 0x18001EE20
 * Callers:
 *     ?AddIoPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@@6@@Z @ 0x18001CE10 (-AddIoPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV-$basic_string.c)
 * Callees:
 *     ??$_DeleteNode@U?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@@?$_ContainerBase@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@utl@@IEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@@Z @ 0x180019384 (--$_DeleteNode@U-$_TreeNode@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ?_FindInsertionPointUniqueUpper@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@utl@@_N@2@AEAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@2@@Z @ 0x18001E2EC (-_FindInsertionPointUniqueUpper@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@.c)
 *     ?_HeadInsertNode@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@utl@@QEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_IoPolicyManifest@@@utl@@@2@_N0@Z @ 0x18001F450 (-_HeadInsertNode@-$_TreeNodeHeader@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@ut_ea_18001F450.c)
 */

__int64 utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>,0>::_EmplaceImpl(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        ...)
{
  __int64 v4; // rdi
  __int64 InsertionPointUniqueUpper; // rax
  __int64 v7; // rcx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+58h] [rbp+20h]
  __int64 v14; // [rsp+60h] [rbp+28h]
  va_list va1; // [rsp+68h] [rbp+30h] BYREF

  va_start(va1, a3);
  va_start(va, a3);
  v12 = va_arg(va1, _QWORD);
  v14 = va_arg(va1, _QWORD);
  *(_QWORD *)a2 = 0LL;
  v4 = v14;
  *(_BYTE *)(a2 + 8) = 0;
  if ( v4 )
  {
    if ( *(_QWORD *)(a1 + 16) == a1 )
    {
      *(_QWORD *)a2 = v4;
      *(_BYTE *)(a2 + 8) = 1;
      *(_QWORD *)v4 = a1 | 1;
      *(_QWORD *)(v4 + 8) = &utl::_TreeSentinel;
      *(_QWORD *)(v4 + 16) = &utl::_TreeSentinel;
      *(_QWORD *)a1 = v4;
      *(_QWORD *)(a1 + 8) = v4;
      *(_QWORD *)(a1 + 16) = v4;
      ++*(_QWORD *)(a1 + 24);
    }
    else
    {
      InsertionPointUniqueUpper = utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindInsertionPointUniqueUpper(
                                    (void **)a1,
                                    (__int64)&v11,
                                    (__int64 *)va,
                                    v4 + 24);
      v8 = *(_QWORD *)InsertionPointUniqueUpper;
      LOBYTE(v9) = *(_BYTE *)(InsertionPointUniqueUpper + 8);
      if ( v12 )
      {
        *(_QWORD *)a2 = v12;
        utl::_ContainerBase<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>::_DeleteNode<utl::_TreeNode<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>>(
          v7,
          (void **)v4);
      }
      else
      {
        *(_QWORD *)a2 = v4;
        *(_BYTE *)(a2 + 8) = 1;
        utl::_TreeNodeHeader<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_IoPolicyManifest>>::_HeadInsertNode(
          a1,
          v8,
          v9,
          v4);
        ++*(_QWORD *)(a1 + 24);
      }
    }
  }
  return a2;
}
