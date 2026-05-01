/*
 * XREFs of ?AddImportancePolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@@6@@Z @ 0x18001D26C
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_6472679cf2c07d902257e6bf5df59423_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023680 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_6472679cf2c07d902257e6bf5df59423_@@$0A@@wistd@@.c)
 * Callees:
 *     ?GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z @ 0x18001C5D0 (-GetUInt32Value@RegistryKey@Common@@QEAAJPEBGPEAI@Z.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001E440 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree@V-$basic_str.c)
 *     ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAT_RM_ACTIVITY_IMPORTANCE@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@T_RM_ACTIVITY_IMPORTANCE@@@utl@@@utl@@_N@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAT_RM_ACTIVITY_IMPORTANCE@@@Z @ 0x18001E574 (--$emplace@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAT_RM_ACTIVITY_IMP.c)
 */

LSTATUS __fastcall ExecutionModel::ResourcePolicyStore::AddImportancePolicy(
        __int64 a1,
        HKEY *a2,
        __int64 a3,
        __int64 a4)
{
  LSTATUS result; // eax
  unsigned int v8; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v9[32]; // [rsp+28h] [rbp-20h] BYREF
  __int64 v10; // [rsp+50h] [rbp+8h] BYREF
  unsigned int v11; // [rsp+68h] [rbp+20h] BYREF

  v10 = a1;
  if ( utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
         a4,
         a3) != a4 )
    return 0;
  result = Common::RegistryKey::GetUInt32Value(a2, L"PresentationClass", (BYTE *)&v11);
  if ( result == -2147024894 )
  {
    result = 0;
    v11 = 0;
  }
  if ( result >= 0 )
  {
    result = Common::RegistryKey::GetUInt32Value(a2, L"Priority", (BYTE *)&v8);
    if ( result >= 0 )
    {
      LODWORD(v10) = 0;
      if ( v11 > 4 || v8 - 1 > 0xFE )
        return -2147024809;
      BYTE3(v10) = v8;
      LOWORD(v10) = v10 & 0xFFF1 | (2 * (v11 & 7)) | 1;
      if ( !*(_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_RM_ACTIVITY_IMPORTANCE>>,0>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,_RM_ACTIVITY_IMPORTANCE &>(
                         a4,
                         v9,
                         a3,
                         &v10) )
        return -2147024882;
      return 0;
    }
  }
  return result;
}
