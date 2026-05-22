/*
 * XREFs of ??$make_wnf_subscription_state@K@details@wil@@YAJAEBU_WNF_STATE_NAME@@$$QEAV?$function@$$A6AXAEBK@Z@wistd@@KPEAPEAU?$wnf_subscription_state@K@01@@Z @ 0x18002F93C
 * Callers:
 *     ??0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ @ 0x18002F680 (--0SecureModeListener@Holographic@Shell@Internal@Windows@@AEAA@XZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x18002F570 (-Return_NtStatus@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18009E02C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall wil::details::make_wnf_subscription_state<unsigned long>(__int64 a1, __int64 a2, int a3, _QWORD *a4)
{
  _QWORD *v5; // r14
  _QWORD *v6; // rax
  _QWORD *v7; // rsi
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  void (__fastcall ***v11)(_QWORD, __int64); // rbx
  unsigned int v12; // edi
  __int64 v13; // rdx
  __int64 v14; // r8
  int v15; // r15d
  _QWORD *v16; // r14
  __int64 v17; // r13
  __int64 v18; // r12
  DWORD LastError; // edi
  unsigned int v21; // [rsp+40h] [rbp-20h] BYREF
  _QWORD *v22; // [rsp+48h] [rbp-18h]
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  char v24; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  int v26; // [rsp+B0h] [rbp+50h] BYREF
  _QWORD *v27; // [rsp+B8h] [rbp+58h]

  v27 = a4;
  v26 = a3;
  v21 = 0;
  *a4 = 0LL;
  v5 = a4;
  v6 = operator new(0x80uLL, (const struct std::nothrow_t *)&std::nothrow);
  v7 = v6;
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = &wil::details::wnf_subscription_state<unsigned long>::`vftable';
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
    goto LABEL_25;
  }
  v14 = v21;
  if ( v21 == -1 )
  {
    v26 = 0;
    v12 = NtQueryWnfStateData(&WNF_SHEL_LOCKSCREEN_ACTIVE, 0LL, 0LL, &v21, 0LL, &v26) | 0x10000000;
    if ( (int)(v12 + 0x80000000) >= 0 && v12 != -805306333 )
    {
      v13 = 5031LL;
      goto LABEL_16;
    }
    v14 = v21;
  }
  v22 = v7 + 1;
  v23 = 0LL;
  v24 = 1;
  v15 = RtlSubscribeWnfStateChangeNotification(
          &v23,
          WNF_SHEL_LOCKSCREEN_ACTIVE,
          v14,
          lambda_82666371df6783f12a6dd836dd4357c8_::_lambda_invoker_cdecl_,
          v7,
          0LL,
          0,
          0);
  if ( v24 )
  {
    v16 = v22;
    v17 = v23;
    v18 = *v22;
    if ( *v22 )
    {
      LastError = GetLastError();
      RtlUnsubscribeWnfNotificationWaitForCompletion(v18);
      SetLastError(LastError);
    }
    *v16 = v17;
    v5 = v27;
  }
  if ( v15 >= 0 )
  {
    v11 = 0LL;
    *v5 = v7;
    v12 = 0;
  }
  else
  {
    v12 = wil::details::in1diag3::Return_NtStatus(
            retaddr,
            (void *)0x13B6,
            (__int64)"internal\\sdk\\inc\\wil\\resource.h",
            (const char *)(unsigned int)v15);
  }
LABEL_25:
  if ( v11 )
    (**v11)(v11, 1LL);
  return v12;
}
