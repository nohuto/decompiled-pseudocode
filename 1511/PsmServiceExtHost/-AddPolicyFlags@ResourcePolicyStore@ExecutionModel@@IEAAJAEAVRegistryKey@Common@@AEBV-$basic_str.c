/*
 * XREFs of ?AddPolicyFlags@ResourcePolicyStore@ExecutionModel@@IEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAV?$map@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@@6@@Z @ 0x180026770
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180026150 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_@@$0A@@wistd@@.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?_EmplaceImpl@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@$0A@@utl@@AEAA?AU?$pair@V?$_TreeIt@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@utl@@_N@2@U?$integral_constant@_N$0A@@2@PEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@1@Z @ 0x1800294D0 (-_EmplaceImpl@-$_Tree@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@_ea_1800294D0.c)
 *     ??$_FindImpl@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$_Tree@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@2@U?$less@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@2@$0A@@utl@@AEBAPEAU?$_TreeNode@U?$pair@$$CBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_ResourcePolicyFlags@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x180029590 (--$_FindImpl@V-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@@-$_Tree_ea_180029590.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEBV01@@?$construct@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@QEBA_NPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEBV21@@Z @ 0x1800296D4 (--$-RV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEBV01@@-$construct@V-$basic_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

__int64 __fastcall ExecutionModel::ResourcePolicyStore::AddPolicyFlags(__int64 a1, HKEY *a2, __int64 a3, __int64 a4)
{
  int v5; // r14d
  unsigned int v7; // esi
  int v8; // ebx
  unsigned __int64 v9; // rdi
  HKEY v10; // rcx
  const WCHAR *v11; // rdx
  LSTATUS v12; // eax
  unsigned int v13; // edx
  int v14; // eax
  void **v15; // rax
  __int64 v16; // rcx
  int v17; // r8d
  int v18; // r9d
  void **v19; // rbp
  char v20; // al
  __int64 v21; // rbx
  __int64 v23; // [rsp+30h] [rbp-38h] BYREF
  __int64 Data; // [rsp+70h] [rbp+8h] BYREF
  DWORD cbData; // [rsp+88h] [rbp+20h] BYREF

  Data = a1;
  v5 = a4;
  v7 = 0;
  if ( utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_FindImpl<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>(
         a4,
         a3) == a4 )
  {
    v8 = 0;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *a2;
      v11 = off_18005CA90[v9];
      cbData = 4;
      v12 = RegQueryValueExW(v10, v11, 0LL, 0LL, (LPBYTE)&Data, &cbData);
      v7 = v12;
      if ( v12 > 0 )
        v7 = (unsigned __int16)v12 | 0x80070000;
      if ( v7 == -2147024894 )
      {
        v13 = 0;
        LODWORD(Data) = 0;
        v7 = 0;
      }
      else
      {
        v13 = Data;
      }
      if ( (v7 & 0x80000000) != 0 )
        break;
      if ( v13 > 1 )
        return 2147942487LL;
      v14 = 1 << v9++;
      v8 |= v13 * v14;
      if ( v9 >= 0xD )
      {
        v15 = (void **)operator new(0x40uLL, (const struct std::nothrow_t *)&std::nothrow);
        v19 = v15;
        if ( v15
          && (v20 = utl::construct<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>::operator()<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &>(
                      v16,
                      v15 + 3,
                      a3),
              *((_DWORD *)v19 + 14) = v8,
              v20) )
        {
          v21 = (__int64)v19;
        }
        else
        {
          v21 = (__int64)v19;
          if ( v19 )
          {
            utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v19 + 3);
            v21 = 0LL;
            operator delete(v19);
          }
        }
        utl::_Tree<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>,utl::less<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>,utl::allocator<utl::pair<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const,_ResourcePolicyFlags>>,0>::_EmplaceImpl(
          v5,
          (unsigned int)&v23,
          v17,
          v18,
          v21);
        if ( !v23 )
          return 2147942414LL;
        return v7;
      }
    }
  }
  return v7;
}
