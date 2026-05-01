/*
 * XREFs of ?AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@6@@Z @ 0x180026A98
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180026230 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@.c)
 * Callees:
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x180027CF8 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ExecutionModel::MiBToB @ 0x180028120 (ExecutionModel--MiBToB.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028C20 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180028C20.c)
 *     ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAU_MemoryPolicyManifest@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@_N@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAU_MemoryPolicyManifest@@@Z @ 0x180028D70 (--$emplace@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAU_MemoryPolicyMan.c)
 */

int __fastcall ExecutionModel::ResourcePolicyStore::AddMemoryPolicy(
        __int64 a1,
        Common::RegistryKey *a2,
        __int64 a3,
        __int64 a4)
{
  int v7; // edi
  int result; // eax
  __int64 v9; // rbx
  __int64 v10; // r15
  __int64 v11; // r14
  unsigned __int64 v12; // rcx
  bool v13; // zf
  unsigned __int64 v14; // rax
  double v15; // xmm0_8
  double v16; // xmm0_8
  unsigned __int64 v17; // rdx
  double v18; // xmm0_8
  unsigned __int64 v19; // rdx
  _BYTE v20[16]; // [rsp+20h] [rbp-30h] BYREF
  _QWORD v21[4]; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+80h] [rbp+30h] BYREF

  v22 = a1;
  v7 = 0;
  if ( utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
         a4,
         a3) != a4 )
    return v7;
  result = Common::RegistryKey::GetUInt32Value(a2, L"CommitLimit", (unsigned int *)&v22);
  if ( result < 0 )
    return result;
  v9 = ExecutionModel::MiBToB((unsigned int)v22);
  result = Common::RegistryKey::GetUInt32Value(a2, L"InitialCommitEstimate", (unsigned int *)&v22);
  if ( result == -2147024894 )
  {
    v10 = v9;
  }
  else
  {
    if ( result < 0 )
      return result;
    v10 = ExecutionModel::MiBToB((unsigned int)v22);
  }
  result = Common::RegistryKey::GetUInt32Value(a2, L"MediumNotificationThreshold", (unsigned int *)&v22);
  if ( result == -2147024894 )
  {
    v11 = (unsigned __int64)v9 >> 1;
  }
  else
  {
    if ( result < 0 )
      return result;
    v11 = ExecutionModel::MiBToB((unsigned int)v22);
  }
  result = Common::RegistryKey::GetUInt32Value(a2, L"HighNotificationThreshold", (unsigned int *)&v22);
  v7 = result;
  if ( result == -2147024894 )
  {
    v7 = 0;
    v14 = ExecutionModel::MiBToB(15LL);
    v15 = (double)(int)v9;
    if ( v9 > v14 )
    {
      v12 = v9 - v14;
      if ( v9 < 0 )
        v15 = v15 + 1.844674407370955e19;
      v18 = v15 * 0.9;
      v19 = 0LL;
      if ( v18 >= 9.223372036854776e18 )
      {
        v18 = v18 - 9.223372036854776e18;
        if ( v18 < 9.223372036854776e18 )
          v19 = 0x8000000000000000uLL;
      }
      if ( v19 + (unsigned int)(int)v18 > v12 )
        v12 = v19 + (unsigned int)(int)v18;
    }
    else
    {
      if ( v9 < 0 )
        v15 = v15 + 1.844674407370955e19;
      v16 = v15 * 0.9;
      v17 = 0LL;
      if ( v16 >= 9.223372036854776e18 )
      {
        v16 = v16 - 9.223372036854776e18;
        if ( v16 < 9.223372036854776e18 )
          v17 = 0x8000000000000000uLL;
      }
      v12 = v17 + (unsigned int)(int)v16;
    }
  }
  else
  {
    if ( result < 0 )
      return result;
    v12 = ExecutionModel::MiBToB((unsigned int)v22);
  }
  v21[3] = v12;
  v21[0] = v9;
  v21[1] = v10;
  v21[2] = v11;
  v13 = *(_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,_MemoryPolicyManifest &>(
                     a4,
                     v20,
                     a3,
                     v21) == 0LL;
  result = -2147024882;
  if ( !v13 )
    return v7;
  return result;
}
