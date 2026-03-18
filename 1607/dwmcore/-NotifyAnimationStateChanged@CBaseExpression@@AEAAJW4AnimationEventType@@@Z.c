/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4
 * Callers:
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelMaskType@@E_K@Z @ 0x180088BC0 (-SetTarget@CBaseExpression@@QEAAJIPEAVCResource@@IIW4DCOMPOSITION_EXPRESSION_TYPE@@W4SubchannelM.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x180088AF0 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008E37C (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x1800AD048 (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180147888 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // edx
  unsigned int v5; // r9d
  const struct SubchannelMaskInfo *v6; // r8
  int AsFloatArray; // eax
  unsigned int v8; // edi
  int v9; // edx
  __int64 v10; // r10
  int v11; // edx
  int v12; // edx
  int v13; // edx
  int v14; // edx
  int v15; // edx
  int v16; // edx
  int v17; // edx
  __int64 v18; // rax
  unsigned int v19; // ecx
  __int64 v20; // rax
  __int16 v21; // cx
  void *v22; // rax
  __int64 *v23; // rdx
  unsigned int v24; // eax
  __int64 v26; // rax
  unsigned int v27; // ecx
  __int64 v28; // rdx
  __int64 v29; // rax
  unsigned int v30; // ecx
  __int64 v31; // rax
  int v32; // r9d
  __int64 v33; // rax
  unsigned int v34; // ecx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned int v37; // ecx
  __int64 v38; // rax
  __int64 v39; // rax
  unsigned int v40; // ecx
  __int64 v41; // rax
  __int64 v42; // rax
  unsigned int v43; // ecx
  __int64 v44; // rax
  unsigned int v45; // ecx
  __int16 v46; // [rsp+20h] [rbp-E0h]
  unsigned int v47; // [rsp+20h] [rbp-E0h]
  void *v48; // [rsp+28h] [rbp-D8h]
  int v49; // [rsp+30h] [rbp-D0h]
  __int64 v50; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v51; // [rsp+48h] [rbp-B8h]
  __int128 v52; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v53; // [rsp+60h] [rbp-A0h]
  __int128 v54; // [rsp+70h] [rbp-90h]
  __int128 v55; // [rsp+80h] [rbp-80h]
  __int128 v56; // [rsp+90h] [rbp-70h]
  __int128 v57; // [rsp+A0h] [rbp-60h]
  _DWORD v58[16]; // [rsp+B0h] [rbp-50h] BYREF
  int v59; // [rsp+F0h] [rbp-10h]
  char v60; // [rsp+F4h] [rbp-Ch]
  __int128 v61; // [rsp+100h] [rbp+0h] BYREF
  __int128 v62; // [rsp+110h] [rbp+10h]
  __int128 v63; // [rsp+120h] [rbp+20h]
  __int128 v64; // [rsp+130h] [rbp+30h]

  memset_0(v58, 0, sizeof(v58));
  v59 = 18;
  v60 = 0;
  if ( a2 == 1 )
  {
    v28 = 8LL;
  }
  else
  {
    if ( a2 != 2 )
      goto LABEL_3;
    v28 = 9LL;
  }
  CResource::NotifyOnChanged(a1, v28, a1);
LABEL_3:
  LODWORD(v61) = 0;
  memset_0((char *)&v61 + 4, 0, 0x3CuLL);
  if ( a2 == 8 && (!*(_BYTE *)(a1 + 228) || !*(_BYTE *)(a1 + 196)) || a2 == 16 )
  {
    a2 = 16;
    goto LABEL_40;
  }
  if ( CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)v58) )
  {
    v6 = *(const struct SubchannelMaskInfo **)(a1 + 248);
    if ( !v6 )
    {
      AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)(a1 + 128), v4, (float *)&v61);
      v8 = AsFloatArray;
      if ( AsFloatArray >= 0 )
        goto LABEL_10;
      v47 = 1172;
LABEL_49:
      v32 = AsFloatArray;
LABEL_52:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v32, v47);
      return v8;
    }
    AsFloatArray = CBaseExpression::MergeValueWithMask(
                     (const struct CExpressionValue *)v58,
                     (const struct CExpressionValue *)(a1 + 128),
                     v6,
                     v5,
                     (float *)&v61);
    v8 = AsFloatArray;
    if ( AsFloatArray < 0 )
    {
      v47 = 1168;
      goto LABEL_49;
    }
  }
  else
  {
    a2 = 16;
  }
LABEL_10:
  if ( a2 != 16 )
  {
    v9 = v59;
    goto LABEL_12;
  }
LABEL_40:
  v58[0] = 0;
  v9 = 18;
  v59 = 18;
  v60 = 1;
LABEL_12:
  v10 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1232LL) + 56LL);
  v11 = v9 - 18;
  if ( !v11 )
  {
    v26 = *(_QWORD *)(a1 + 112);
    if ( v26 )
      v27 = *(_DWORD *)(v26 + 52);
    else
      v27 = 0;
    *(_QWORD *)&v52 = v27;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 120);
    v49 = a2;
    v48 = &g_parameters_nUpgr3xaG6loj6Q3yRoUp63Ij3A;
    v46 = 0;
    goto LABEL_30;
  }
  v12 = v11 - 17;
  if ( !v12 )
  {
    v44 = *(_QWORD *)(a1 + 112);
    if ( v44 )
      v45 = *(_DWORD *)(v44 + 52);
    else
      v45 = 0;
    *(_QWORD *)&v52 = v45;
    *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 120);
    v49 = a2;
    v48 = &unk_1801AD374;
    v46 = 1;
    v50 = v61;
LABEL_30:
    v23 = (__int64 *)&v52;
LABEL_23:
    v24 = CoreUICallSend(v10, v23, 2LL, 0LL, v46, v48, v49);
    goto LABEL_24;
  }
  v13 = v12 - 17;
  if ( v13 )
  {
    v14 = v13 - 17;
    if ( v14 )
    {
      v15 = v14 - 1;
      if ( v15 )
      {
        v16 = v15 - 1;
        if ( v16 )
        {
          v17 = v16 - 33;
          if ( v17 )
          {
            if ( v17 != 161 )
            {
              v8 = -2147024809;
              v47 = 1296;
              goto LABEL_51;
            }
            v29 = *(_QWORD *)(a1 + 112);
            v54 = v61;
            v55 = v62;
            v56 = v63;
            v57 = v64;
            if ( v29 )
              v30 = *(_DWORD *)(v29 + 52);
            else
              v30 = 0;
            v31 = v30;
            v21 = 7;
            v50 = v31;
            v51 = *(unsigned int *)(a1 + 120);
            v22 = &unk_1801AD398;
          }
          else
          {
            v18 = *(_QWORD *)(a1 + 112);
            v52 = v61;
            v53 = v62;
            if ( v18 )
              v19 = *(_DWORD *)(v18 + 52);
            else
              v19 = 0;
            v20 = v19;
            v21 = 6;
            v50 = v20;
            v51 = *(unsigned int *)(a1 + 120);
            v22 = &unk_1801AD392;
          }
        }
        else
        {
          v33 = *(_QWORD *)(a1 + 112);
          v52 = v61;
          if ( v33 )
            v34 = *(_DWORD *)(v33 + 52);
          else
            v34 = 0;
          v35 = v34;
          v21 = 5;
          v50 = v35;
          v51 = *(unsigned int *)(a1 + 120);
          v22 = &unk_1801AD38C;
        }
      }
      else
      {
        v36 = *(_QWORD *)(a1 + 112);
        v52 = v61;
        if ( v36 )
          v37 = *(_DWORD *)(v36 + 52);
        else
          v37 = 0;
        v38 = v37;
        v21 = 4;
        v50 = v38;
        v51 = *(unsigned int *)(a1 + 120);
        v22 = &unk_1801AD386;
      }
    }
    else
    {
      v39 = *(_QWORD *)(a1 + 112);
      v52 = v61;
      if ( v39 )
        v40 = *(_DWORD *)(v39 + 52);
      else
        v40 = 0;
      v41 = v40;
      v21 = 3;
      v50 = v41;
      v51 = *(unsigned int *)(a1 + 120);
      v22 = &unk_1801AD380;
    }
    v49 = a2;
    v23 = &v50;
    v48 = v22;
    v46 = v21;
    goto LABEL_23;
  }
  LODWORD(v51) = DWORD2(v61);
  v42 = *(_QWORD *)(a1 + 112);
  v50 = v61;
  if ( v42 )
    v43 = *(_DWORD *)(v42 + 52);
  else
    v43 = 0;
  *(_QWORD *)&v52 = v43;
  *((_QWORD *)&v52 + 1) = *(unsigned int *)(a1 + 120);
  v24 = CoreUICallSend(v10, &v52, 2LL, 0LL, 2, &unk_1801AD37A, a2);
LABEL_24:
  v8 = v24;
  if ( (int)(v24 + 0x80000000) >= 0 && v24 != -2018375675 )
  {
    v47 = 1307;
LABEL_51:
    v32 = v8;
    goto LABEL_52;
  }
  return 0;
}
