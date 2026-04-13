/*
 * XREFs of ??$make_wnf_subscription_state@Uempty_wnf_state@details@wil@@@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@KPEAPEAU?$wnf_subscription_state@Uempty_wnf_state@details@wil@@@01@@Z @ 0x18003E7A4
 * Callers:
 *     ??$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAUwnf_subscription_state_base@details@wil@@P6AXPEAU123@@Z$1?delete_wnf_subscription_state@23@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU123@$0A@$$T@details@wil@@@details@wil@@@0@AEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXXZ@wistd@@K@Z @ 0x18003E07C (--$make_wnf_subscription@Uempty_wnf_state@details@wil@@@wil@@YA-AV-$unique_any_t@V-$unique_stora.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C50 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x180038010 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??$out_param@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@wil@@YA?AU?$out_param_t@V?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@@details@0@AEAV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6AJPEAU1@@Z$1?RtlUnsubscribeWnfNotificationWaitForCompletion@@YAJ0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@0@@Z @ 0x18003F574 (--$out_param@V-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_WNF_USER_SUBSCRIPTION@@P6.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18006F68C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<wil::details::empty_wnf_state>(
        __int64 a1,
        __int64 a2,
        int a3,
        _QWORD *a4)
{
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // rax
  __int64 v15; // r8
  int v16; // r15d
  _QWORD *v17; // r14
  __int64 v18; // r12
  __int64 v19; // rbp
  DWORD LastError; // edi
  int v22; // [rsp+40h] [rbp-48h] BYREF
  _QWORD v23[2]; // [rsp+48h] [rbp-40h] BYREF
  char v24; // [rsp+58h] [rbp-30h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+0h]
  int v26; // [rsp+A0h] [rbp+18h] BYREF

  v26 = a3;
  v22 = 0;
  *a4 = 0LL;
  v6 = operator new(0x80uLL, (const struct std::nothrow_t *)&TLV::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &wil::details::wnf_subscription_state<wil::details::empty_wnf_state>::`vftable';
    v6[15] = 0LL;
    v8 = *(_QWORD *)(a2 + 104);
    if ( !v8 )
    {
      v6[15] = 0LL;
      goto LABEL_10;
    }
    if ( v8 == a2 )
    {
      v6[15] = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v8 + 8LL))(v8, v6 + 2);
      v10 = *(_QWORD *)(a2 + 104);
      if ( !v10 )
        goto LABEL_10;
      LOBYTE(v9) = v10 != a2;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v10 + 24LL))(v10, v9);
    }
    else
    {
      v6[15] = v8;
    }
    *(_QWORD *)(a2 + 104) = 0LL;
  }
  else
  {
    v7 = 0LL;
  }
LABEL_10:
  v11 = (void (__fastcall ***)(_QWORD, __int64))v7;
  if ( !v7 )
  {
    v12 = -2147024882;
    v13 = 5024LL;
LABEL_16:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v13,
      (__int64)"internal\\sdk\\inc\\wil\\resource.h",
      (const char *)v12);
    goto LABEL_24;
  }
  if ( v22 == -1 )
  {
    v26 = 0;
    v12 = NtQueryWnfStateData(&WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED, 0LL, 0LL, &v22, 0LL, &v26) | 0x10000000;
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -805306333 )
    {
      v13 = 5031LL;
      goto LABEL_16;
    }
  }
  v14 = wil::out_param<wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_WNF_USER_SUBSCRIPTION *,long (*)(_WNF_USER_SUBSCRIPTION *),&long RtlUnsubscribeWnfNotificationWaitForCompletion(_WNF_USER_SUBSCRIPTION *),wistd::integral_constant<unsigned __int64,0>,_WNF_USER_SUBSCRIPTION *,0,std::nullptr_t>>>>(
          v23,
          v7 + 1);
  v16 = RtlSubscribeWnfStateChangeNotification(
          v14 + 8,
          WNF_SHEL_TARGETED_CONTENT_SUBSCRIPTION_UPDATED,
          v15,
          lambda_9bbec43bd3c841ff596242732b4f01fa_::_lambda_invoker_cdecl_,
          v7,
          0LL,
          0,
          0);
  if ( v24 )
  {
    v17 = (_QWORD *)v23[0];
    v18 = v23[1];
    v19 = *(_QWORD *)v23[0];
    if ( *(_QWORD *)v23[0] )
    {
      LastError = GetLastError();
      RtlUnsubscribeWnfNotificationWaitForCompletion(v19);
      SetLastError(LastError);
    }
    *v17 = v18;
  }
  if ( v16 >= 0 )
  {
    v11 = 0LL;
    *a4 = v7;
    v12 = 0;
  }
  else
  {
    v12 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x13B6,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v16);
  }
LABEL_24:
  if ( v11 )
    (**v11)(v11, 1LL);
  return v12;
}
