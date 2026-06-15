/*
 * XREFs of _lambda_f6263596e2cedf593a59fb7cc979efd5_::operator() @ 0x18008E114
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_f6263596e2cedf593a59fb7cc979efd5_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@UEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x18008E9E0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_f6263596e2cedf593a59fb7cc979efd5_@@$0A@@std@@V-.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x180048C3E (memcmp_0.c)
 *     WPP_SF_qdd @ 0x1800779F8 (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x18008ED08 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x18008ED6C (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x18008EDF0 (WPP_SF_qii.c)
 */

char __fastcall lambda_f6263596e2cedf593a59fb7cc979efd5_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdi
  int v10; // esi
  __int64 v11; // rdi
  unsigned __int16 *v12; // rsi
  __int64 v13; // rdi
  const void *v14; // rax
  __int64 v16; // rbp
  int v17; // esi
  int v18; // edi
  __int64 v19; // rax
  __int64 v20; // rdx
  __int64 v21; // r8
  _DWORD *v22; // rax
  __int64 v23; // rdx
  __int64 v24; // r8
  int v25; // [rsp+20h] [rbp-58h]
  int v26; // [rsp+28h] [rbp-50h]
  _BYTE v27[16]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v27);
    v9 = *a1;
    if ( *(_QWORD *)(*a1 + 48) == *v8 && *(_QWORD *)(v9 + 56) == v8[1] )
    {
      v10 = *(_DWORD *)(v9 + 8);
      if ( v10 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v11 = *(_QWORD *)(v9 + 16);
        if ( *(unsigned __int16 *)(v11 + 16) + 18LL == *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2)
                                                                           + 16)
                                                     + 18LL )
        {
          v12 = *(unsigned __int16 **)(*a1 + 16);
          v13 = v12[8];
          v14 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v12, v14, v13 + 18) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v16 = *(_QWORD *)(*a1 + 16);
          v17 = *(unsigned __int16 *)(v16 + 2);
          v18 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v19 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            v20,
            v21,
            a2,
            *(_DWORD *)(v19 + 4),
            v18,
            *(_DWORD *)(v16 + 4),
            v17);
        }
      }
      else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v26 = v10;
        v25 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_c654cfd5aeeaca479956b571394d5ce9_Traceguids,
          a2,
          v25,
          v26);
      }
    }
    else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
           && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
           && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v22 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v27);
      WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v23, v24, a2, *v22, *(_DWORD *)(v9 + 48));
    }
  }
  else if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
