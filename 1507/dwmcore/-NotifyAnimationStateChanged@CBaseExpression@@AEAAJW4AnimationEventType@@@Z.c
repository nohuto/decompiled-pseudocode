/*
 * XREFs of ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x18010DF68
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180045D40 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 *     ?ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@@@Z @ 0x18010E2D8 (-ProcessSetTarget@CBaseExpression@@QEAAJPEAVCResourceTable@@PEBUMILCMD_BASEEXPRESSION_SETTARGET@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180097754 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ?TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z @ 0x18010E9D4 (-TryGetTargetValue@CBaseExpression@@IEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z @ 0x18012122C (-GetAsFloatArray@CExpressionValue@@QEBAJIPEAM@Z.c)
 */

__int64 __fastcall CBaseExpression::NotifyAnimationStateChanged(__int64 a1, int a2)
{
  unsigned int v4; // edx
  int AsFloatArray; // eax
  unsigned int v6; // ebx
  int v7; // r9d
  __int64 v8; // rcx
  unsigned __int16 v9; // dx
  void *v10; // rax
  __int64 v11; // r9
  unsigned int v13; // [rsp+20h] [rbp-E0h]
  int v14; // [rsp+40h] [rbp-C0h] BYREF
  int v15; // [rsp+44h] [rbp-BCh]
  __int128 v16; // [rsp+50h] [rbp-B0h]
  __int64 v17; // [rsp+60h] [rbp-A0h]
  __int128 v18; // [rsp+70h] [rbp-90h]
  __int128 v19; // [rsp+80h] [rbp-80h]
  __int128 v20; // [rsp+90h] [rbp-70h]
  __int128 v21; // [rsp+A0h] [rbp-60h]
  int v22; // [rsp+B0h] [rbp-50h] BYREF
  char v23; // [rsp+B4h] [rbp-4Ch]
  __int128 v24; // [rsp+D0h] [rbp-30h] BYREF
  __int128 v25; // [rsp+E0h] [rbp-20h]
  __int128 v26; // [rsp+F0h] [rbp-10h]
  __int128 v27; // [rsp+100h] [rbp+0h]

  v22 = 17;
  v23 = 0;
  CExpressionValue::Reset((CExpressionValue *)&v22, 1);
  LODWORD(v24) = 0;
  memset_0((char *)&v24 + 4, 0, 0x3CuLL);
  if ( a2 == 8 && !*(_BYTE *)(a1 + 100)
    || a2 == 16
    || !CBaseExpression::TryGetTargetValue((CBaseExpression *)a1, (struct CExpressionValue *)&v22) )
  {
    a2 = 16;
LABEL_9:
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(a1 + 16) + 1160LL) + 56LL);
    if ( v22 == 17 )
    {
      v14 = *(_DWORD *)(a1 + 44);
      v15 = *(_DWORD *)(a1 + 40);
      v10 = &g_parameters_AIWwGCYMDkNXoldIhcknzbDJ8Vw;
      v11 = 0LL;
    }
    else if ( v22 == 34 )
    {
      v14 = *(_DWORD *)(a1 + 44);
      v15 = *(_DWORD *)(a1 + 40);
      v10 = &unk_180162B24;
      *(_QWORD *)&v16 = v24;
      v11 = 1LL;
    }
    else
    {
      switch ( v22 )
      {
        case 51:
          v9 = 2;
          DWORD2(v16) = DWORD2(v24);
          v14 = *(_DWORD *)(a1 + 44);
          v15 = *(_DWORD *)(a1 + 40);
          v10 = &unk_180162B2A;
          *(_QWORD *)&v16 = v24;
          break;
        case 68:
          v9 = 3;
          v14 = *(_DWORD *)(a1 + 44);
          v15 = *(_DWORD *)(a1 + 40);
          v10 = &unk_180162B30;
          v16 = v24;
          break;
        case 101:
          v9 = 4;
          v14 = *(_DWORD *)(a1 + 44);
          v15 = *(_DWORD *)(a1 + 40);
          v10 = &unk_180162B36;
          v16 = v24;
          v17 = v25;
          break;
        case 262:
          v9 = 5;
          v14 = *(_DWORD *)(a1 + 44);
          v15 = *(_DWORD *)(a1 + 40);
          v18 = v24;
          v19 = v25;
          v10 = &unk_180162B3C;
          v20 = v26;
          v21 = v27;
          break;
        default:
          v6 = -2147024809;
          v13 = 987;
LABEL_16:
          v7 = v6;
          goto LABEL_7;
      }
      v11 = v9;
    }
    v6 = CoreUICallSend(v8, &v14, 0LL, v11, v10, a2);
    if ( (int)(v6 + 0x80000000) < 0 || v6 == -2018375675 )
    {
      v6 = 0;
      goto LABEL_28;
    }
    v13 = 998;
    goto LABEL_16;
  }
  AsFloatArray = CExpressionValue::GetAsFloatArray((CExpressionValue *)&v22, v4, (float *)&v24);
  v6 = AsFloatArray;
  if ( AsFloatArray >= 0 )
    goto LABEL_9;
  v13 = 892;
  v7 = AsFloatArray;
LABEL_7:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v13);
LABEL_28:
  CExpressionValue::Reset((CExpressionValue *)&v22, 0);
  return v6;
}
