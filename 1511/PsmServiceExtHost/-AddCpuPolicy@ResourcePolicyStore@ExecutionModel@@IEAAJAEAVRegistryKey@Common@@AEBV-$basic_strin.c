/*
 * XREFs of ?AddCpuPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@@6@@Z @ 0x180026BDC
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_484c6aa6b53657583df8a8fd9f487ad8_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180026090 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_484c6aa6b53657583df8a8fd9f487ad8_@@$0A@@wistd@@.c)
 * Callees:
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x180027CF8 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180028820 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180028820.c)
 *     ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAU_CpuPolicyManifest@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_CpuPolicyManifest@@@utl@@@utl@@_N@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAU_CpuPolicyManifest@@@Z @ 0x180028960 (--$emplace@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAU_CpuPolicyManife.c)
 */

int __fastcall ExecutionModel::ResourcePolicyStore::AddCpuPolicy(
        __int64 a1,
        Common::RegistryKey *a2,
        __int64 a3,
        __int64 a4)
{
  int UInt32Value; // ebx
  int result; // eax
  int v9; // ecx
  bool v10; // al
  unsigned __int64 i; // rdx
  bool v12; // zf
  unsigned int v13; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v14[4]; // [rsp+28h] [rbp-28h] BYREF
  _BYTE v15[24]; // [rsp+38h] [rbp-18h] BYREF
  __int64 v16; // [rsp+70h] [rbp+20h] BYREF
  unsigned int v17; // [rsp+88h] [rbp+38h] BYREF

  v16 = a1;
  UInt32Value = 0;
  if ( utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
         a4,
         a3) == a4 )
  {
    result = Common::RegistryKey::GetUInt32Value(a2, L"SchedulingType", &v17);
    if ( result < 0 )
      return result;
    result = Common::RegistryKey::GetUInt32Value(a2, L"CapPercentage", &v13);
    if ( result == -2147024894 )
    {
      if ( v17 - 2 <= 1 )
        return -2147024809;
      v13 = 0;
    }
    else if ( result < 0 )
    {
      return result;
    }
    UInt32Value = Common::RegistryKey::GetUInt32Value(a2, L"PriorityClass", (unsigned int *)&v16);
    if ( UInt32Value == -2147024894 )
    {
      UInt32Value = 0;
      v9 = 32;
      LODWORD(v16) = 32;
    }
    else
    {
      v9 = v16;
    }
    if ( UInt32Value >= 0 )
    {
      if ( v17 < 5 && v13 <= 0x64 )
      {
        v10 = 0;
        for ( i = 0LL; i < 0x20; i += 4LL )
          v10 = v10 || *(_DWORD *)((char *)&unk_18005C8F0 + i) == v9;
        if ( v10 )
        {
          v14[0] = v17;
          v14[1] = v13;
          v14[2] = v9;
          v12 = *(_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_CpuPolicyManifest>>,0>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,_CpuPolicyManifest &>(
                             a4,
                             v15,
                             a3,
                             v14) == 0LL;
          result = -2147024882;
          if ( v12 )
            return result;
          return UInt32Value;
        }
      }
      return -2147024809;
    }
  }
  return UInt32Value;
}
