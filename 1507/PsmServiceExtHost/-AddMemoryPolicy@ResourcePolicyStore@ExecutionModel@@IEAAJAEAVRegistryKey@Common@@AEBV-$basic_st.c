/*
 * XREFs of ?AddMemoryPolicy@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@@6@@Z @ 0x18001CF00
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023790 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@.c)
 * Callees:
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18001EB60 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_18001EB60.c)
 *     ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAU_MemoryPolicyManifest@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@2@$0A@@utl@@QEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_MemoryPolicyManifest@@@utl@@@utl@@_N@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEAU_MemoryPolicyManifest@@@Z @ 0x18001ECB0 (--$emplace@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAU_MemoryPolicyMan.c)
 *     ExecutionModel::MiBToB @ 0x180023950 (ExecutionModel--MiBToB.c)
 */

int __fastcall ExecutionModel::ResourcePolicyStore::AddMemoryPolicy(__int64 a1, HKEY *a2, __int64 a3, __int64 a4)
{
  unsigned __int64 v5; // rsi
  signed int v6; // edi
  HKEY v9; // rcx
  int result; // eax
  bool v11; // sf
  signed __int64 v12; // rbx
  HKEY v13; // rcx
  __int64 v14; // r12
  HKEY v15; // rcx
  __int64 v16; // rbp
  HKEY v17; // rcx
  LSTATUS v18; // eax
  unsigned __int64 v19; // rax
  double v20; // xmm0_8
  double v21; // xmm0_8
  unsigned __int64 v22; // rcx
  double v23; // xmm0_8
  unsigned __int64 v24; // rcx
  _BYTE v25[16]; // [rsp+30h] [rbp-68h] BYREF
  _QWORD v26[11]; // [rsp+40h] [rbp-58h] BYREF
  __int64 Data; // [rsp+A0h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+B8h] [rbp+20h] BYREF

  Data = a1;
  v5 = 0LL;
  v6 = 0;
  if ( utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
         a4,
         a3) != a4 )
    return v6;
  v9 = *a2;
  cbData = 4;
  result = RegQueryValueExW(v9, L"CommitLimit", 0LL, 0LL, (LPBYTE)&Data, &cbData);
  v11 = result < 0;
  if ( result > 0 )
  {
    result = (unsigned __int16)result | 0x80070000;
    v11 = result < 0;
  }
  if ( !v11 )
  {
    v12 = 0LL;
    if ( (_DWORD)Data )
      v12 = (unsigned __int64)(unsigned int)Data << 20;
    v13 = *a2;
    cbData = 4;
    result = RegQueryValueExW(v13, L"InitialCommitEstimate", 0LL, 0LL, (LPBYTE)&Data, &cbData);
    if ( result > 0 )
      result = (unsigned __int16)result | 0x80070000;
    if ( result == -2147024894 )
    {
      v14 = v12;
    }
    else
    {
      if ( result < 0 )
        return result;
      v14 = ExecutionModel::MiBToB((unsigned int)Data);
    }
    v15 = *a2;
    cbData = 4;
    result = RegQueryValueExW(v15, L"MediumNotificationThreshold", 0LL, 0LL, (LPBYTE)&Data, &cbData);
    if ( result > 0 )
      result = (unsigned __int16)result | 0x80070000;
    if ( result == -2147024894 )
    {
      v16 = (unsigned __int64)v12 >> 1;
LABEL_15:
      v17 = *a2;
      cbData = 4;
      v18 = RegQueryValueExW(v17, L"HighNotificationThreshold", 0LL, 0LL, (LPBYTE)&Data, &cbData);
      v6 = v18;
      if ( v18 > 0 )
        v6 = (unsigned __int16)v18 | 0x80070000;
      if ( v6 == -2147024894 )
      {
        v6 = 0;
        v19 = ExecutionModel::MiBToB(15LL);
        v20 = (double)(int)v12;
        if ( v12 > v19 )
        {
          v5 = v12 - v19;
          if ( v12 < 0 )
            v20 = v20 + 1.844674407370955e19;
          v23 = v20 * 0.9;
          v24 = 0LL;
          if ( v23 >= 9.223372036854776e18 )
          {
            v23 = v23 - 9.223372036854776e18;
            if ( v23 < 9.223372036854776e18 )
              v24 = 0x8000000000000000uLL;
          }
          if ( v24 + (unsigned int)(int)v23 > v5 )
            v5 = v24 + (unsigned int)(int)v23;
        }
        else
        {
          if ( v12 < 0 )
            v20 = v20 + 1.844674407370955e19;
          v21 = v20 * 0.9;
          v22 = 0LL;
          if ( v21 >= 9.223372036854776e18 )
          {
            v21 = v21 - 9.223372036854776e18;
            if ( v21 < 9.223372036854776e18 )
              v22 = 0x8000000000000000uLL;
          }
          v5 = v22 + (unsigned int)(int)v21;
        }
LABEL_21:
        v26[0] = v12;
        v26[1] = v14;
        v26[2] = v16;
        v26[3] = v5;
        if ( !*(_QWORD *)utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_MemoryPolicyManifest>>,0>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,_MemoryPolicyManifest &>(
                           a4,
                           v25,
                           a3,
                           v26) )
          return -2147024882;
        return v6;
      }
      if ( v6 >= 0 )
      {
        if ( (_DWORD)Data )
          v5 = (unsigned __int64)(unsigned int)Data << 20;
        goto LABEL_21;
      }
      return v6;
    }
    if ( result >= 0 )
    {
      v16 = ExecutionModel::MiBToB((unsigned int)Data);
      goto LABEL_15;
    }
  }
  return result;
}
