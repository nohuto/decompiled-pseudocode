/*
 * XREFs of _lambda_a2affb40e740f00343e7979aa83c00c3_::operator() @ 0x180090884
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_a2affb40e740f00343e7979aa83c00c3_@@$0A@@std@@V?$allocator@V?$_Func_class@_NPEAUISaDeviceProxy@@U_Nil@std@@U23@U23@U23@U23@U23@@std@@@2@_NPEAUISaDeviceProxy@@U_Nil@2@U52@U52@U52@U52@U52@@std@@UEAA_N$$QEAPEAUISaDeviceProxy@@@Z @ 0x1800910D0 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_a2affb40e740f00343e7979aa83c00c3_@@$0A@@std@@V-.c)
 * Callees:
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     memcmp_0 @ 0x1800449EE (memcmp_0.c)
 *     WPP_SF_qdd @ 0x18007C708 (WPP_SF_qdd.c)
 *     WPP_SF_qDD @ 0x180091448 (WPP_SF_qDD.c)
 *     WPP_SF_qdddd @ 0x1800914AC (WPP_SF_qdddd.c)
 *     WPP_SF_qii @ 0x180091530 (WPP_SF_qii.c)
 */

char __fastcall lambda_a2affb40e740f00343e7979aa83c00c3_::operator()(__int64 *a1, __int64 a2)
{
  __int64 v4; // rdi
  __int64 v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdi
  __int64 v10; // rcx
  _DWORD *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  int v14; // esi
  __int64 v15; // rdi
  unsigned __int16 *v16; // rsi
  __int64 v17; // rdi
  const void *v18; // rax
  __int64 v20; // rbp
  int v21; // esi
  int v22; // edi
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // r8
  int v26; // [rsp+20h] [rbp-58h]
  int v27; // [rsp+28h] [rbp-50h]
  _BYTE v28[16]; // [rsp+40h] [rbp-38h] BYREF

  v4 = *(_QWORD *)(*a1 + 32);
  if ( v4 == (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2) )
  {
    v8 = (_QWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v28);
    v9 = *a1;
    v10 = *(_QWORD *)(*a1 + 48) - *v8;
    if ( !v10 )
      v10 = *(_QWORD *)(v9 + 56) - v8[1];
    if ( v10 )
    {
      if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v11 = (_DWORD *)(*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)a2 + 40LL))(a2, v28);
        WPP_SF_qDD(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v12, v13, a2, *v11, *(_DWORD *)(v9 + 48));
      }
    }
    else
    {
      v14 = *(_DWORD *)(v9 + 8);
      if ( v14 == (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2) )
      {
        v15 = *(_QWORD *)(v9 + 16);
        if ( *(unsigned __int16 *)(v15 + 16) + 18LL == *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2)
                                                                           + 16)
                                                     + 18LL )
        {
          v16 = *(unsigned __int16 **)(*a1 + 16);
          v17 = v16[8];
          v18 = (const void *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          if ( !memcmp_0(v16, v18, v17 + 18) )
            return 1;
        }
        if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
        {
          v20 = *(_QWORD *)(*a1 + 16);
          v21 = *(unsigned __int16 *)(v20 + 2);
          v22 = *(unsigned __int16 *)((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2) + 2);
          v23 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 48LL))(a2);
          WPP_SF_qdddd(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
            v24,
            v25,
            a2,
            *(_DWORD *)(v23 + 4),
            v22,
            *(_DWORD *)(v20 + 4),
            v21);
        }
      }
      else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
             && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
             && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
      {
        v27 = v14;
        v26 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 80LL))(a2);
        WPP_SF_qdd(
          *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
          0xCu,
          (__int64)&WPP_f4d8cd303aac757902d3083c41b94541_Traceguids,
          a2,
          v26,
          v27);
      }
    }
  }
  else if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
         && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
         && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v5 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a2 + 32LL))(a2);
    WPP_SF_qii(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL), v6, v7, a2, v5, v4);
  }
  return 0;
}
