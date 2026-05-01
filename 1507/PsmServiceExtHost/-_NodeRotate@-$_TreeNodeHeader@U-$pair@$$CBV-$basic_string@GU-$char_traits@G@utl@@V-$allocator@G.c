/*
 * XREFs of ?_NodeRotate@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@utl@@AEAAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@_N00@Z @ 0x18001F164
 * Callers:
 *     ?_HeadInsertNode@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@QEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@_N0@Z @ 0x18001F1F8 (-_HeadInsertNode@-$_TreeNodeHeader@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@utl@@V-$allocat.c)
 *     ?_HeadInsertNode@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@utl@@QEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@_N0@Z @ 0x18001F2F4 (-_HeadInsertNode@-$_TreeNodeHeader@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@ut_ea_18001F2F4.c)
 *     ?_HeadInsertNode@?$_TreeNodeHeader@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@utl@@QEAAXPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ExternalResourcePolicyManifest@@@utl@@@2@_N0@Z @ 0x180023444 (-_HeadInsertNode@-$_TreeNodeHeader@U-$pair@$$CBV-$basic_string@GU-$char_traits@G@ut_ea_180023444.c)
 * Callees:
 *     <none>
 */

unsigned __int64 *__fastcall utl::_TreeNodeHeader<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ExternalResourcePolicyManifest>>::_NodeRotate(
        unsigned __int64 a1,
        unsigned __int8 a2)
{
  int v2; // ebx
  unsigned __int64 v3; // r11
  unsigned __int64 *v4; // r9
  _QWORD *v5; // r10
  unsigned __int64 *result; // rax

  v2 = 0;
  v3 = *(_QWORD *)a1 & 0xFFFFFFFFFFFFFFFEuLL;
  v4 = *(unsigned __int64 **)(a1 + 8LL * (a2 == 0) + 8);
  v5 = (_QWORD *)v4[a2 + 1];
  *v4 = v3 | 1;
  if ( (*(_QWORD *)v3 & 0xFFFFFFFFFFFFFFFEuLL) == a1 )
    *(_QWORD *)v3 = v4;
  else
    *(_QWORD *)(v3 + 8LL * (*(_QWORD *)(v3 + 16) == a1) + 8) = v4;
  *(_QWORD *)a1 = v4;
  result = v4;
  *v5 &= 1uLL;
  *v5 |= a1;
  LOBYTE(v2) = a2 == 0;
  *(_QWORD *)(a1 + 8LL * v2 + 8) = v5;
  v4[a2 + 1] = a1;
  return result;
}
