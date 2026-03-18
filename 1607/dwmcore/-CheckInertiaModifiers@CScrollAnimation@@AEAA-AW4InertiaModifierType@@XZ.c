/*
 * XREFs of ?CheckInertiaModifiers@CScrollAnimation@@AEAA?AW4InertiaModifierType@@XZ @ 0x18015DB38
 * Callers:
 *     ?StartInertia@CScrollAnimation@@AEAAX_N@Z @ 0x18015E4C4 (-StartInertia@CScrollAnimation@@AEAAX_N@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ @ 0x180007904 (-InternalRelease@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z @ 0x180149154 (-GetValue@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEAM@Z.c)
 *     ?IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180149268 (-IsConditionSatisified@CConditionalExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180149440 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 *     ??$?4VCSpringDamperEndpointForce@@@?$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpringDamperEndpointForce@@@Z @ 0x18015D4C0 (--$-4VCSpringDamperEndpointForce@@@-$ComPtr@UIAccelerator@@@WRL@Microsoft@@QEAAAEAV012@PEAVCSpri.c)
 *     ??0CSpringDamperEndpointForce@@QEAA@MMMMMM@Z @ 0x180168C14 (--0CSpringDamperEndpointForce@@QEAA@MMMMMM@Z.c)
 *     ??0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z @ 0x180168D3C (--0CExpressionForce@@QEAA@MMPEAVCConditionalExpression@@W4ScrollAxis@@@Z.c)
 */

__int64 __fastcall CScrollAnimation::CheckInertiaModifiers(__int64 a1)
{
  __int64 *v1; // rsi
  unsigned int v3; // r14d
  _QWORD *v4; // rbp
  int *v5; // rbp
  int IsConditionSatisified; // eax
  int v7; // edi
  __int64 *v8; // rax
  __int64 v9; // rdx
  int v10; // r9d
  __int64 (__fastcall ***v11)(_QWORD); // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  bool v14; // zf
  int Value; // eax
  CSpringDamperEndpointForce *v16; // rax
  CSpringDamperEndpointForce *v17; // r9
  __int64 *v18; // rax
  __int64 v19; // rcx
  __int64 v20; // rdx
  __int64 v21; // r8
  unsigned int v23; // [rsp+20h] [rbp-38h]
  bool v24; // [rsp+60h] [rbp+8h] BYREF

  v1 = (__int64 *)(a1 + 488);
  v3 = 0;
  Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease((__int64 *)(a1 + 488));
  v4 = *(_QWORD **)(a1 + 432);
  if ( v4 )
    v4 = (_QWORD *)*v4;
  v5 = (int *)v4[*(int *)(a1 + 288) + 57];
  if ( !v5 )
  {
LABEL_35:
    v7 = 0;
    goto LABEL_36;
  }
  v24 = 0;
  CConditionalExpression::Reset((CConditionalExpression *)v5);
  IsConditionSatisified = CConditionalExpression::IsConditionSatisified(
                            (CConditionalExpression *)v5,
                            *(struct CExpressionValueStack **)(a1 + 480),
                            *(_QWORD *)(a1 + 472),
                            &v24);
  v7 = IsConditionSatisified;
  if ( IsConditionSatisified >= 0 )
  {
    if ( v24 )
    {
      v8 = *(__int64 **)(a1 + 432);
      if ( v8 )
        v9 = *v8;
      else
        v9 = 0LL;
      v3 = *(_DWORD *)(*(_QWORD *)(v9 + 8LL * *(int *)(a1 + 288) + 480) + 4LL * v5[85]);
      if ( v3 == 1 )
      {
        Value = CConditionalExpression::GetValue(
                  (CConditionalExpression *)v5,
                  *(struct CExpressionValueStack **)(a1 + 480),
                  *(_QWORD *)(a1 + 472),
                  (float *)(a1 + 404));
        v7 = Value;
        if ( Value < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, Value, 0x5D1u);
          goto LABEL_36;
        }
        v16 = (CSpringDamperEndpointForce *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                              WPF::g_pProcessHeap,
                                              80LL);
        v17 = v16;
        if ( v16 )
        {
          v18 = *(__int64 **)(a1 + 432);
          if ( v18 )
            v19 = *v18;
          else
            v19 = 0LL;
          if ( v18 )
            v20 = *v18;
          else
            v20 = 0LL;
          if ( v18 )
            v21 = *v18;
          else
            v21 = 0LL;
          v16 = CSpringDamperEndpointForce::CSpringDamperEndpointForce(
                  v17,
                  *(float *)(v21 + 620),
                  *(float *)(v20 + 632),
                  *(float *)(v19 + 636),
                  *(float *)(a1 + 384),
                  *(float *)(a1 + 388),
                  *(float *)(a1 + 404));
        }
        Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringDamperEndpointForce>(
          (__int64 (__fastcall ****)(_QWORD))v1,
          (__int64 (__fastcall ***)(_QWORD))v16);
        v14 = *v1 == 0;
        *(_DWORD *)(a1 + 508) = 1114636288;
        if ( v14 )
        {
          v23 = 1504;
          goto LABEL_17;
        }
      }
      else
      {
        if ( v3 != 2 )
        {
          v23 = 1525;
          v10 = -2147467259;
LABEL_12:
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v23);
LABEL_37:
          v3 = 0;
          Microsoft::WRL::ComPtr<IAccelerator>::InternalRelease(v1);
          return v3;
        }
        v11 = (__int64 (__fastcall ***)(_QWORD))(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
                                                  WPF::g_pProcessHeap,
                                                  96LL);
        if ( v11 )
          v11 = (__int64 (__fastcall ***)(_QWORD))CExpressionForce::CExpressionForce(
                                                    v11,
                                                    v12,
                                                    v13,
                                                    v5,
                                                    *(_DWORD *)(a1 + 288));
        Microsoft::WRL::ComPtr<IAccelerator>::operator=<CSpringDamperEndpointForce>(
          (__int64 (__fastcall ****)(_QWORD))v1,
          v11);
        v14 = *v1 == 0;
        *(_DWORD *)(a1 + 508) = 1101004800;
        if ( v14 )
        {
          v23 = 1518;
LABEL_17:
          v10 = -2147024882;
          goto LABEL_12;
        }
      }
    }
    goto LABEL_35;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, IsConditionSatisified, 0x5C6u);
LABEL_36:
  if ( v7 < 0 )
    goto LABEL_37;
  return v3;
}
