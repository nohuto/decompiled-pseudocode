/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0
 * Callers:
 *     ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4 (-ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x1800F863C (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180128F90 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180129928 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x180136A40 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     ?SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z @ 0x180136D04 (-SetDataType@CExpressionValue@@AEAAXW4DCOMPOSITION_EXPRESSION_TYPE@@@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  __int64 v4; // r10
  unsigned int v5; // ebx
  int v6; // r9d
  unsigned int v7; // edx
  __int64 v8; // r9
  const struct SubchannelMaskInfo *v9; // r8
  int AsFloatArray; // eax
  unsigned __int16 v11; // cx
  void *v12; // rax
  __int64 v13; // r9
  unsigned int v15; // [rsp+20h] [rbp-E0h]
  int v16; // [rsp+40h] [rbp-C0h] BYREF
  int v17; // [rsp+44h] [rbp-BCh]
  __int128 v18; // [rsp+50h] [rbp-B0h]
  __int64 v19; // [rsp+60h] [rbp-A0h]
  __int128 v20; // [rsp+70h] [rbp-90h]
  __int128 v21; // [rsp+80h] [rbp-80h]
  __int128 v22; // [rsp+90h] [rbp-70h]
  __int128 v23; // [rsp+A0h] [rbp-60h]
  int v24; // [rsp+B0h] [rbp-50h] BYREF
  char v25; // [rsp+B4h] [rbp-4Ch]
  int v26; // [rsp+B8h] [rbp-48h]
  __int128 v27; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v28; // [rsp+E0h] [rbp-20h]
  __int128 v29; // [rsp+F0h] [rbp-10h]
  __int128 v30; // [rsp+100h] [rbp+0h]

  v24 = 18;
  v25 = 0;
  CExpressionValue::Reset((CExpressionValue *)&v24, 1);
  LODWORD(v27) = 0;
  memset_0((char *)&v27 + 4, 0, 0x3CuLL);
  if ( a2 == 8 && (!*(_BYTE *)(a1 + 100) || !*(_BYTE *)(a1 + 52)) || a2 == 16 )
  {
    CExpressionValue::SetDataType(&v24);
    v26 = 0;
    v25 = 1;
LABEL_6:
    a2 = 16;
    goto LABEL_7;
  }
  if ( !CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)&v24) )
    goto LABEL_6;
  v9 = *(const struct SubchannelMaskInfo **)(a1 + 112);
  if ( v9 )
  {
    AsFloatArray = CBaseExpression::MergeValueWithMask(
                     (const struct CExpressionValue *)&v24,
                     a1 + 48,
                     v9,
                     v8,
                     (float *)&v27);
    v5 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      v15 = 886;
LABEL_21:
      v6 = AsFloatArray;
      goto LABEL_22;
    }
  }
  else
  {
    AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)(a1 + 48), v7, (float *)&v27);
    v5 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      v15 = 890;
      goto LABEL_21;
    }
  }
LABEL_7:
  v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1128LL) + 56LL);
  switch ( v24 )
  {
    case 18:
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &g_parameters_imw9wQ$SfJbb_Tdmial7mcfrpWM;
      v13 = 0LL;
LABEL_34:
      v5 = CoreUICallSend(v4, &v16, 0LL, v13, v12, a2);
      if ( (int)(v5 + 0x80000000) < 0 || v5 == -2018375675 )
      {
        v5 = 0;
        goto LABEL_38;
      }
      v15 = 1019;
      goto LABEL_16;
    case 35:
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DBE4;
      *(_QWORD *)&v18 = v27;
      v13 = 1LL;
      goto LABEL_34;
    case 52:
      v11 = 2;
      DWORD2(v18) = DWORD2(v27);
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DBEA;
      *(_QWORD *)&v18 = v27;
      goto LABEL_26;
    case 69:
      v11 = 3;
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DBF0;
      v18 = v27;
      goto LABEL_26;
    case 70:
      v11 = 4;
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DBF6;
      v18 = v27;
      goto LABEL_26;
    case 71:
      v11 = 5;
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DBFC;
      v18 = v27;
      goto LABEL_26;
    case 104:
      v11 = 6;
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v12 = &unk_18016DC02;
      v18 = v27;
      v19 = v28;
      goto LABEL_26;
    case 265:
      v11 = 7;
      v16 = *(_DWORD *)(a1 + 44);
      v17 = *(_DWORD *)(a1 + 40);
      v20 = v27;
      v21 = v28;
      v12 = &unk_18016DC08;
      v22 = v29;
      v23 = v30;
LABEL_26:
      v13 = v11;
      goto LABEL_34;
  }
  v5 = -2147024809;
  v15 = 1008;
LABEL_16:
  v6 = v5;
LABEL_22:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, v15);
LABEL_38:
  CExpressionValue::Reset((CExpressionValue *)&v24, 0);
  return v5;
}
