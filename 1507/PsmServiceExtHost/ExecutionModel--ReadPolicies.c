/*
 * XREFs of ExecutionModel::ReadPolicies @ 0x18001BE60
 * Callers:
 *     ?Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z @ 0x18001D360 (-Initialize@ResourcePolicyStore@ExecutionModel@@IEAAJPEBG@Z.c)
 * Callees:
 *     ??$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z @ 0x180004AC0 (--$AutoHandleCloseHKEY@PEAUHKEY__@@@Common@@YAXPEAUHKEY__@@@Z.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x180016810 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z @ 0x18001C21C (-OpenSubKey@RegistryKey@Common@@QEAAJPEBGKAEAVAutoHandleHKEY@2@@Z.c)
 *     ?EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z @ 0x18001C620 (-EnumKey@RegistryKey@Common@@QEAAJKAEAVStringBuffer@2@PEAU_FILETIME@@@Z.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_6472679cf2c07d902257e6bf5df59423_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023680 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_6472679cf2c07d902257e6bf5df59423_@@$0A@@wistd@@.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_484c6aa6b53657583df8a8fd9f487ad8_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023690 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_484c6aa6b53657583df8a8fd9f487ad8_@@$0A@@wistd@@.c)
 *     ??R?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@QEBAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023724 (--R-$_Func_class@JAEAVRegistryKey@Common@@AEBV-$basic_string@GU-$char_traits@G@utl@@V-$allocator.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x180023790 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_d6d8b41681ce36e6a21c54338e68fa96_@@$0A@@wistd@@.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_41717bbc047c593e908ebc00be73e2bc_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x1800237B0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_41717bbc047c593e908ebc00be73e2bc_@@$0A@@wistd@@.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@wistd@@U56@U56@U56@U56@@wistd@@@details@2@JAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@U_Nil@2@U92@U92@U92@U92@@wistd@@UEAAJAEAVRegistryKey@Common@@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@Z @ 0x1800237C0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_@@$0A@@wistd@@.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x180024ED2 (memcpy_0.c)
 */

__int64 __fastcall ExecutionModel::ReadPolicies(
        const WCHAR **a1,
        LPCWSTR lpSubKey,
        Common::RegistryKey *this,
        unsigned __int16 *a4,
        __int64 a5)
{
  int v7; // ebx
  struct _FILETIME *v8; // r9
  unsigned int v9; // r14d
  __int64 v10; // r9
  _QWORD *v11; // rax
  const WCHAR *v12; // rdi
  unsigned __int64 v13; // rbx
  char *v14; // rsi
  size_t v15; // rbx
  char *v16; // rbx
  const WCHAR *v17; // rdx
  LSTATUS v18; // eax
  LSTATUS v19; // eax
  __int64 v20; // rbx
  __int64 (__fastcall *v21)(_QWORD, HKEY *, void **); // rdi
  int v22; // eax
  DWORD cSubKeys; // [rsp+60h] [rbp-21h] BYREF
  HKEY phkResult; // [rsp+68h] [rbp-19h] BYREF
  HKEY hKey; // [rsp+70h] [rbp-11h] BYREF
  HKEY v27; // [rsp+78h] [rbp-9h] BYREF
  void *v28[2]; // [rsp+80h] [rbp-1h] BYREF
  void *Block; // [rsp+90h] [rbp+Fh] BYREF
  char *v30; // [rsp+98h] [rbp+17h]
  _QWORD v31[2]; // [rsp+A0h] [rbp+1Fh] BYREF

  hKey = 0LL;
  v7 = Common::RegistryKey::OpenSubKey(this, a4, 0x20019u, (struct Common::AutoHandleHKEY *)&hKey);
  if ( v7 >= 0 )
  {
    v7 = RegQueryInfoKeyW(hKey, 0LL, 0LL, 0LL, &cSubKeys, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL, 0LL);
    if ( v7 >= 0 )
    {
      v9 = 0;
      if ( cSubKeys )
      {
        while ( 1 )
        {
          v7 = Common::RegistryKey::EnumKey((Common::RegistryKey *)&hKey, v9, (struct Common::StringBuffer *)a1, v8);
          if ( v7 < 0 )
            goto LABEL_31;
          LOWORD(v31[0]) = 0;
          v11 = v31;
          v12 = a1[1];
          Block = v31;
          v30 = (char *)v31;
          if ( !v12 )
            break;
          v13 = -1LL;
          do
            ++v13;
          while ( v12[v13] );
          if ( v13 <= 7 )
          {
            if ( v31 != (_QWORD *)v12 )
              goto LABEL_40;
            goto LABEL_41;
          }
          utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_GrowAlloc(
            &Block,
            v28,
            v13,
            v10);
          v14 = (char *)v28[0];
          if ( !v28[0] )
          {
            v7 = -2147024882;
            goto LABEL_51;
          }
          v15 = 2 * v13;
          memcpy_0(v28[0], v12, v15);
          v16 = &v14[v15];
          *(_WORD *)v16 = 0;
          if ( Block != v31 )
            operator delete(Block);
          Block = v14;
          v30 = v16;
          v28[0] = 0LL;
          v31[0] = &v14[2 * (__int64)v28[1] - 2];
LABEL_13:
          v17 = a1[1];
          phkResult = 0LL;
          v18 = RegOpenKeyExW(hKey, v17, 0, 0x20019u, &phkResult);
          v7 = v18;
          if ( v18 > 0 )
            v7 = (unsigned __int16)v18 | 0x80070000;
          if ( v7 < 0 )
            goto LABEL_50;
          v27 = 0LL;
          v19 = RegOpenKeyExW(phkResult, lpSubKey, 0, 0x20019u, &v27);
          v7 = v19;
          if ( v19 > 0 )
            v7 = (unsigned __int16)v19 | 0x80070000;
          if ( v7 >= 0 )
          {
            v7 = wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::operator()(
                   a5,
                   &v27,
                   &Block);
            if ( v7 < 0 )
              goto LABEL_49;
          }
          else
          {
            if ( v7 != -2147024894 )
              goto LABEL_49;
            v20 = *(_QWORD *)(a5 + 96);
            if ( !v20 )
              __fastfail(7u);
            v21 = *(__int64 (__fastcall **)(_QWORD, HKEY *, void **))(*(_QWORD *)v20 + 16LL);
            if ( (char *)v21 == (char *)wistd::_Func_impl<wistd::_Callable_obj<_lambda_41717bbc047c593e908ebc00be73e2bc_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call )
            {
              v22 = wistd::_Func_impl<wistd::_Callable_obj<_lambda_41717bbc047c593e908ebc00be73e2bc_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
                      *(_QWORD *)(a5 + 96),
                      &phkResult,
                      &Block);
            }
            else if ( (char *)v21 == (char *)wistd::_Func_impl<wistd::_Callable_obj<_lambda_d6d8b41681ce36e6a21c54338e68fa96_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call )
            {
              v22 = wistd::_Func_impl<wistd::_Callable_obj<_lambda_d6d8b41681ce36e6a21c54338e68fa96_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
                      *(_QWORD *)(a5 + 96),
                      &phkResult,
                      &Block);
            }
            else if ( (char *)v21 == (char *)wistd::_Func_impl<wistd::_Callable_obj<_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call )
            {
              v22 = wistd::_Func_impl<wistd::_Callable_obj<_lambda_43f3c7a0cfabd3a1fabd61013ccc6008_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
                      *(_QWORD *)(a5 + 96),
                      &phkResult,
                      &Block);
            }
            else if ( (char *)v21 == (char *)wistd::_Func_impl<wistd::_Callable_obj<_lambda_6472679cf2c07d902257e6bf5df59423_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call )
            {
              v22 = wistd::_Func_impl<wistd::_Callable_obj<_lambda_6472679cf2c07d902257e6bf5df59423_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
                      *(_QWORD *)(a5 + 96),
                      &phkResult,
                      &Block);
            }
            else
            {
              v22 = (char *)v21 == (char *)wistd::_Func_impl<wistd::_Callable_obj<_lambda_484c6aa6b53657583df8a8fd9f487ad8_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call
                  ? wistd::_Func_impl<wistd::_Callable_obj<_lambda_484c6aa6b53657583df8a8fd9f487ad8_,0>,wistd::details::function_allocator<wistd::_Func_class<long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>>,long,Common::RegistryKey &,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil,wistd::_Nil>::_Do_call(
                      *(_QWORD *)(a5 + 96),
                      &phkResult,
                      &Block)
                  : v21(*(_QWORD *)(a5 + 96), &phkResult, &Block);
            }
            v7 = v22;
            if ( v22 < 0 )
            {
LABEL_49:
              Common::AutoHandleCloseHKEY<HKEY__ *>(v27);
LABEL_50:
              Common::AutoHandleCloseHKEY<HKEY__ *>(phkResult);
LABEL_51:
              utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(&Block);
              goto LABEL_31;
            }
          }
          if ( (unsigned __int64)v27 - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            RegCloseKey(v27);
          if ( (unsigned __int64)phkResult - 1 <= 0xFFFFFFFFFFFFFFFDuLL )
            RegCloseKey(phkResult);
          if ( Block != v31 )
            operator delete(Block);
          if ( ++v9 >= cSubKeys )
            goto LABEL_31;
        }
        v13 = 0LL;
LABEL_40:
        memmove(v31, v12, 2 * v13);
        v11 = Block;
LABEL_41:
        v30 = (char *)v11 + 2 * v13;
        *(_WORD *)v30 = 0;
        goto LABEL_13;
      }
    }
  }
LABEL_31:
  Common::AutoHandleCloseHKEY<HKEY__ *>(hKey);
  return (unsigned int)v7;
}
