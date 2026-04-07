/*
 * XREFs of ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x18008ECE4
 * Callers:
 *     ?_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAPEAVCAnimationComponent@@3@Z @ 0x180093814 (-_CreateAndAddGutterAnimationComponentsForRect@CStoryboard@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TAR.c)
 * Callees:
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@PEBUFakeGutterInfo@1@PEAPEAVCAnimationComponent@@@Z @ 0x18008F248 (-_CreateSingleGutterAnimationComponent@CTransitionVisualController@@IEAAJPEAUHWND__@@W4DWMTRANSI.c)
 *     ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x18008F3E8 (-_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z.c)
 */

__int64 __fastcall CTransitionVisualController::CreateGutterAnimationComponentsForRect(
        CTransitionVisualController *a1,
        __int64 a2,
        unsigned int a3,
        int a4,
        int *a5,
        int *a6,
        __int64 a7,
        CBaseObject **a8,
        volatile signed __int32 **a9)
{
  unsigned int v10; // r15d
  volatile signed __int32 *v11; // r14
  volatile signed __int32 *v12; // rsi
  __int64 v13; // rax
  int v14; // edx
  int v15; // ebx
  int v16; // edi
  int v17; // edx
  int v18; // r10d
  int v19; // ecx
  int v20; // edx
  int v21; // r8d
  int v22; // r9d
  int v23; // eax
  int v24; // ecx
  int v25; // eax
  int v26; // ecx
  unsigned int v27; // edi
  __int64 v28; // rbx
  int v29; // eax
  int v30; // eax
  CBaseObject *v34; // [rsp+38h] [rbp-A9h] BYREF
  volatile signed __int32 *v35; // [rsp+40h] [rbp-A1h] BYREF
  __int64 v36; // [rsp+48h] [rbp-99h]
  int *v37; // [rsp+50h] [rbp-91h]
  __int64 v38; // [rsp+58h] [rbp-89h]
  CBaseObject **v39; // [rsp+60h] [rbp-81h]
  int *v40; // [rsp+68h] [rbp-79h]
  int v41; // [rsp+70h] [rbp-71h] BYREF
  __int64 v42; // [rsp+78h] [rbp-69h]
  int v43; // [rsp+80h] [rbp-61h]
  int v44; // [rsp+84h] [rbp-5Dh]
  int v45; // [rsp+88h] [rbp-59h]
  int v46; // [rsp+8Ch] [rbp-55h]
  int v47; // [rsp+90h] [rbp-51h]
  int v48; // [rsp+94h] [rbp-4Dh]
  int v49; // [rsp+98h] [rbp-49h]
  int v50; // [rsp+9Ch] [rbp-45h]
  int v51; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v52; // [rsp+A8h] [rbp-39h]
  int v53; // [rsp+B0h] [rbp-31h]
  int v54; // [rsp+B4h] [rbp-2Dh]
  int v55; // [rsp+B8h] [rbp-29h]
  int v56; // [rsp+BCh] [rbp-25h]
  int v57; // [rsp+C0h] [rbp-21h]
  int v58; // [rsp+C4h] [rbp-1Dh]
  int v59; // [rsp+C8h] [rbp-19h]
  int v60; // [rsp+CCh] [rbp-15h]

  v37 = a6;
  v38 = a7;
  v39 = a8;
  v10 = 0;
  v34 = 0LL;
  v11 = 0LL;
  v35 = 0LL;
  v12 = 0LL;
  v13 = *((_QWORD *)a1 + 23);
  v36 = a2;
  v40 = a5;
  if ( v13 )
  {
    v14 = a5[3] - a5[1];
    v15 = *(_DWORD *)(v13 + 24);
    if ( v14 < 0 )
      v14 = 0;
    v16 = MulDiv(v15, v14, *(_DWORD *)(v13 + 28));
    v17 = v37[3] - v37[1];
    if ( v17 < 0 )
      v17 = 0;
    v18 = MulDiv(v15, v17, *(_DWORD *)(*((_QWORD *)a1 + 23) + 28LL));
    v41 = a4;
    v19 = *v40;
    v20 = v37[1];
    v21 = v40[1];
    v22 = v40[3];
    v42 = v38;
    v23 = v19 - v16;
    v45 = v19;
    v24 = *v37;
    v43 = v23;
    v25 = v24 - v18;
    v49 = v24;
    v26 = v37[3];
    v47 = v25;
    v51 = a4;
    v52 = v38;
    v53 = v40[2];
    v55 = v16 + v53;
    v57 = v37[2];
    v44 = v21;
    v46 = v22;
    v48 = v20;
    v50 = v26;
    v54 = v21;
    v56 = v22;
    v58 = v20;
    v59 = v18 + v57;
    v60 = v26;
    if ( v39 )
    {
      v27 = a3;
      v28 = v36;
      if ( !CTransitionVisualController::_FakeGutterAlreadyExists(
              a1,
              (const struct CTransitionVisualController::FakeGutterInfo *)&v41) )
      {
        v29 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v36, a3, &v41, &v34);
        v10 = v29;
        if ( v29 < 0 )
        {
          MilInstrumentationCheckHR(
            0x14u,
            &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST,
            2LL,
            v29,
            0x648u);
          v11 = (volatile signed __int32 *)v34;
          goto LABEL_21;
        }
        v11 = (volatile signed __int32 *)v34;
        *v39 = v34;
        if ( v11 )
        {
          _InterlockedIncrement(v11 + 2);
          v11 = (volatile signed __int32 *)v34;
          v12 = v35;
        }
      }
    }
    else
    {
      v28 = v36;
      v27 = a3;
    }
    if ( a9
      && !CTransitionVisualController::_FakeGutterAlreadyExists(
            a1,
            (const struct CTransitionVisualController::FakeGutterInfo *)&v51) )
    {
      v30 = CTransitionVisualController::_CreateSingleGutterAnimationComponent(a1, v28, v27, &v51, &v35);
      v10 = v30;
      if ( v30 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, &CTransitionVisualController::MILINSTRUMENTATIONHRESULTLIST, 2LL, v30, 0x64Eu);
LABEL_17:
        v12 = v35;
        goto LABEL_21;
      }
      v12 = v35;
      *a9 = v35;
      if ( v12 )
      {
        _InterlockedIncrement(v12 + 2);
        v11 = (volatile signed __int32 *)v34;
        goto LABEL_17;
      }
    }
  }
  else
  {
    v10 = -2147024809;
  }
LABEL_21:
  if ( v11 )
    CBaseObject::Release((CBaseObject *)v11);
  if ( v12 )
    CBaseObject::Release((CBaseObject *)v12);
  return v10;
}
