/*
 * XREFs of _lambda_c9062d0cc6b58ce068de574295fd0aa7_::operator() @ 0x18007688C
 * Callers:
 *     ?_Do_call@?$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V?$allocator@H@std@@_NPEAUISaDeviceProxy@@@std@@EEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x180076F60 (-_Do_call@-$_Func_impl@V_lambda_c9062d0cc6b58ce068de574295fd0aa7_@@V-$allocator@H@std@@_NPEAUISa.c)
 * Callees:
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcmp_0 @ 0x180038F04 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_qdd @ 0x18005FFFC (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x180077340 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1800773A4 (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x180077428 (WPP_SF_qii.c)
 */

char __fastcall lambda_c9062d0cc6b58ce068de574295fd0aa7_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rbx
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rbx
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // rdi
  int v15; // ebx
  __int64 v16; // rbx
  unsigned __int16 *v17; // rdi
  __int64 v18; // rbx
  const void *v19; // rax
  __int64 v21; // rsi
  int v22; // edi
  int v23; // ebx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r8
  int v27; // [rsp+20h] [rbp-48h]
  int v28; // [rsp+28h] [rbp-40h]
  _BYTE v29[16]; // [rsp+40h] [rbp-28h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v29);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v11 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v29);
        WPP_SF_qDD(*((_QWORD *)WPP_GLOBAL_Control + 2), v12, v13, a2, *v11, *(_DWORD *)(v9 + 48));
      }
    }
    else
    {
      v14 = *a1;
      v15 = *(_DWORD *)(v9 + 8);
      if ( v15 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v16 = *(_QWORD *)(v14 + 16);
        if ( *(unsigned __int16 *)(v16 + 16) + 18LL == *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2)
                                                                           + 16)
                                                     + 18LL )
        {
          v17 = *(unsigned __int16 **)(*a1 + 16);
          v18 = v17[8];
          v19 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v17, v19, v18 + 18) )
            return 1;
        }
        if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v21 = *(_QWORD *)(*a1 + 16);
          v22 = *(unsigned __int16 *)(v21 + 2);
          v23 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v24 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            v25,
            v26,
            a2,
            *(_DWORD *)(v24 + 4),
            v23,
            *(_DWORD *)(v21 + 4),
            v22);
        }
      }
      else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
             && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
             && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v28 = v15;
        v27 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        WPP_SF_qdd(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          0xCu,
          (__int64)&WPP_fb4725feffd93d51989ad9d0ed5ddd21_Traceguids,
          a2,
          v27,
          v28);
      }
    }
  }
  else if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
         && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
         && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*((_QWORD *)WPP_GLOBAL_Control + 2), v6, v7, a2, v5, v4);
  }
  return 0;
}
