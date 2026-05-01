/*
 * XREFs of _lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator() @ 0x1800230B4
 * Callers:
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_@@$0A@@wistd@@V?$function_allocator@V?$_Func_class@JU_Nil@wistd@@U12@U12@U12@U12@U12@U12@@wistd@@@details@2@JU_Nil@2@U52@U52@U52@U52@U52@U52@@wistd@@UEAAJXZ @ 0x180024D10 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_243e5818cdba31bdb76d77cbcbf5d1a4_@@$0A@@wistd@@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x1800184A0 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     ?Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ @ 0x180020664 (-Provider@TileDataLayerItemWrappersTelemetry@@SAQEBU_TlgProvider_t@@XZ.c)
 *     ?StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ @ 0x180020CA8 (-StartActivity@TileCommit@TileDataLayerItemWrappersTelemetry@@QEAAXXZ.c)
 *     ??1?$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ @ 0x18002193C (--1-$ActivityBase@$0A@$0A@$04@wil@@QEAA@XZ.c)
 *     ?Stop@?$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z @ 0x1800239BC (-Stop@-$ActivityBase@$0A@$0A@$04@wil@@QEAAXJ@Z.c)
 *     ?Destroy@?$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ @ 0x180023E60 (-Destroy@-$ActivityBase@$0A@$0A@$04@wil@@IEAAXXZ.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 *     memset @ 0x1800269AC (memset.c)
 */

__int64 __fastcall lambda_243e5818cdba31bdb76d77cbcbf5d1a4_::operator()(__int64 a1)
{
  bool v2; // zf
  __int64 *v3; // rsi
  __int64 v4; // rbx
  __int64 v5; // rax
  int v6; // ebx
  int v7; // eax
  int v9[2]; // [rsp+20h] [rbp-E0h] BYREF
  __int64 v10; // [rsp+28h] [rbp-D8h]
  int *v11; // [rsp+30h] [rbp-D0h]
  __int64 v12; // [rsp+38h] [rbp-C8h]
  int v13; // [rsp+40h] [rbp-C0h]
  int *v14; // [rsp+48h] [rbp-B8h]
  int *v15; // [rsp+50h] [rbp-B0h]
  int v16; // [rsp+58h] [rbp-A8h] BYREF
  char v17; // [rsp+5Ch] [rbp-A4h]
  const struct _TlgProvider_t *v18; // [rsp+80h] [rbp-80h]
  int v19; // [rsp+88h] [rbp-78h] BYREF
  const char *v20; // [rsp+90h] [rbp-70h]
  __int64 v21; // [rsp+98h] [rbp-68h]
  char v22; // [rsp+A0h] [rbp-60h]
  __int64 v23; // [rsp+A8h] [rbp-58h]
  _BYTE v24[144]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v25; // [rsp+140h] [rbp+40h]
  __int64 v26; // [rsp+148h] [rbp+48h]
  __int64 v27; // [rsp+150h] [rbp+50h]
  __int64 v28; // [rsp+158h] [rbp+58h]
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v18 = TileDataLayerItemWrappersTelemetry::Provider();
  v10 = 0LL;
  v11 = v9;
  v12 = 0LL;
  v14 = &v19;
  v13 = 0;
  v15 = &v16;
  v16 = 0;
  v17 = 0;
  v22 = 0;
  v19 = 0;
  v20 = "TileCommit";
  v21 = 0LL;
  v23 = 1LL;
  v25 = 0LL;
  v26 = 0LL;
  memset(v24, 0, sizeof(v24));
  v27 = 0LL;
  *(_QWORD *)v9 = &TileDataLayerItemWrappersTelemetry::TileCommit::`vftable';
  v28 = 0LL;
  TileDataLayerItemWrappersTelemetry::TileCommit::StartActivity((TileDataLayerItemWrappersTelemetry::TileCommit *)v9);
  v2 = **(_BYTE **)a1 == 0;
  v3 = **(__int64 ***)(a1 + 8);
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 72LL);
  v5 = *v3;
  if ( v2 )
  {
    v7 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 48))(v3, v4);
    v6 = v7;
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x2E3,
        (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
        (const char *)(unsigned int)v7);
  }
  else
  {
    v6 = (*(__int64 (__fastcall **)(__int64 *, __int64))(v5 + 72))(v3, v4);
  }
  if ( v6 >= 0 )
  {
    wil::ActivityBase<0,0,5>::Stop(v9);
    v6 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      739LL,
      (__int64)"shell\\lib\\onecoretdlhelpers\\tiledatalayeritemwrappers.cpp",
      (const char *)(unsigned int)v6);
  }
  *(_QWORD *)v9 = &TileDataLayerItemWrappersTelemetry::TileCommit::`vftable';
  wil::ActivityBase<0,0,5>::Destroy(v9);
  wil::ActivityBase<0,0,5>::~ActivityBase<0,0,5>((__int64)v9);
  return (unsigned int)v6;
}
