/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180011000
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045230 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180005D70 (-Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180005DB0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180010FB0 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180012FF0 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800130A4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180014940 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180014970 (-NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180014980 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180014A50 (-GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r14
  char v5; // si
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // r15
  __int64 v12; // rcx
  __int64 i; // r14
  __int64 v14; // rbx
  __int64 v15; // rcx
  CAnimatedTransitionVisual *v16; // rsi
  __int64 v17; // r12
  __int64 v18; // r13
  __int64 *v19; // rax
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 (__fastcall *v22)(CAnimatedTransitionVisual *__hidden); // rax
  int v23; // eax
  unsigned int v24; // edx
  __int64 (__fastcall *v25)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_2D *); // rax
  int v26; // eax
  __int64 v27; // r12
  __int64 v28; // r12
  __int64 (__fastcall *v29)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *); // rax
  int v30; // eax
  bool (__fastcall *v31)(CAnimatedTransitionVisual *__hidden); // rax
  bool updated; // al
  __int64 v34; // rdx
  float v35; // xmm0_4
  __int64 v36; // rax
  __int64 (__fastcall *v37)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rax
  int v38; // eax
  CAnimatedTransitionVisual *v39; // rcx
  __int64 (__fastcall *v40)(CAnimatedTransitionVisual *__hidden, float *); // rax
  int v41; // eax
  __int64 v42; // rax
  __int64 v43; // rcx
  unsigned int v44; // r12d
  __int64 v45; // r8
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rax
  float v49; // xmm0_4
  __int64 v50; // rcx
  __int64 v51; // rdx
  float v52; // xmm0_4
  float v53; // xmm0_4
  __int64 v54; // rax
  __int64 j; // rax
  __int64 v56; // rdx
  __int64 v57; // rax
  __int64 v58; // rdx
  float v59; // xmm0_4
  float v60; // xmm0_4
  __int64 v61; // rax
  __int64 k; // rax
  unsigned int v63; // [rsp+20h] [rbp-E0h]
  char v64; // [rsp+30h] [rbp-D0h]
  unsigned int v65; // [rsp+34h] [rbp-CCh] BYREF
  float v66; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v67; // [rsp+3Ch] [rbp-C4h] BYREF
  int v68; // [rsp+40h] [rbp-C0h]
  double v69; // [rsp+48h] [rbp-B8h] BYREF
  double v70; // [rsp+50h] [rbp-B0h]
  double v71; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v72; // [rsp+60h] [rbp-A0h]
  __int64 v73; // [rsp+68h] [rbp-98h]
  __int64 v74; // [rsp+70h] [rbp-90h]
  double v75; // [rsp+78h] [rbp-88h] BYREF
  __int64 v76; // [rsp+80h] [rbp-80h]
  bool *v77; // [rsp+88h] [rbp-78h]
  __int64 v78; // [rsp+90h] [rbp-70h]
  __int64 v79; // [rsp+A0h] [rbp-60h]
  __int64 v80; // [rsp+B0h] [rbp-50h]
  __int64 v81; // [rsp+C0h] [rbp-40h]
  int v82; // [rsp+D8h] [rbp-28h]
  __int64 v83; // [rsp+E0h] [rbp-20h]
  __int64 v84; // [rsp+F0h] [rbp-10h]
  __int64 v85; // [rsp+100h] [rbp+0h]
  __int64 v86; // [rsp+110h] [rbp+10h]
  int v87; // [rsp+128h] [rbp+28h]
  _BYTE v88[20]; // [rsp+130h] [rbp+30h] BYREF
  float v89; // [rsp+144h] [rbp+44h]
  float v90; // [rsp+148h] [rbp+48h]
  float v91; // [rsp+14Ch] [rbp+4Ch]
  int v92; // [rsp+154h] [rbp+54h]
  int v93; // [rsp+158h] [rbp+58h]
  int v94; // [rsp+15Ch] [rbp+5Ch]
  int v95; // [rsp+160h] [rbp+60h]
  int v96; // [rsp+164h] [rbp+64h]
  _QWORD v97[2]; // [rsp+168h] [rbp+68h] BYREF
  _QWORD v98[2]; // [rsp+178h] [rbp+78h]
  double v99; // [rsp+188h] [rbp+88h] BYREF
  double v100; // [rsp+190h] [rbp+90h]
  double v101; // [rsp+198h] [rbp+98h]
  double v102[4]; // [rsp+1A0h] [rbp+A0h] BYREF

  v77 = a3;
  v4 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v64 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, started, 0x13Au);
  }
  else
  {
    v9 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
           *((_QWORD *)this + 1),
           v7,
           0LL);
    v8 = v9;
    if ( v9 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x13Du);
    }
    else
    {
      v10 = 0LL;
      v68 = 0;
      if ( *((_DWORD *)this + 16) )
      {
        do
        {
          v11 = (unsigned int)v10;
          v12 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
          if ( *(_BYTE *)(v12 + 32) && !*(_BYTE *)(v12 + 33) )
          {
            ++*(_DWORD *)(v12 + 8);
            for ( i = 0LL; ; i = (unsigned int)(i + 1) )
            {
              v14 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
              if ( (unsigned int)i >= *(_DWORD *)(v14 + 4) )
              {
                LODWORD(v10) = v68;
                break;
              }
              v15 = *(_QWORD *)(*(_QWORD *)(v14 + 24) + 8 * i);
              v16 = *(CAnimatedTransitionVisual **)v15;
              v17 = **(_QWORD **)(v15 + 8);
              v73 = **(_QWORD **)(v15 + 40);
              v74 = **(_QWORD **)(v15 + 32);
              v18 = **(_QWORD **)(v15 + 48);
              v19 = *(__int64 **)(v15 + 56);
              v20 = *(_QWORD *)(v14 + 16);
              v76 = *v19;
              if ( (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v20 + 152LL))(v20, &v71) >= 0 )
                *(double *)(v14 + 40) = v71 + *(double *)(v14 + 40);
              v21 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
              if ( *(_DWORD *)(v21 + 8) <= 1u )
              {
                v39 = **(CAnimatedTransitionVisual ***)(*(_QWORD *)(v21 + 24) + 8 * i);
                v40 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, float *))(*(_QWORD *)v39 + 48LL);
                v41 = v40 == CAnimatedTransitionVisual::GetBeginAlpha
                    ? CAnimatedTransitionVisual::GetBeginAlpha(v39, &v66)
                    : v40(v39, &v66);
                if ( v41 >= 0 && v66 == 0.0 )
                {
                  v98[0] = 0LL;
                  v97[0] = 0LL;
                  v97[1] = 0LL;
                  v42 = *((_QWORD *)this + 5);
                  *(_QWORD *)((char *)v98 + 4) = 1065353216LL;
                  v43 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v42 + 8 * v11) + 24LL) + 8 * i);
                  (*(void (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v43 + 168LL))(v43, v97);
                }
              }
              v22 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v16 + 120LL);
              if ( v22 == CAnimatedTransitionVisual::HideGhost )
                CAnimatedTransitionVisual::HideGhost(v16);
              else
                v22(v16);
              if ( v17 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v17 + 24LL))(v17, &v65);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 373;
                  goto LABEL_109;
                }
                v24 = v65;
                if ( v65 == 2 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v17 + 40LL))(v17, &v69, 2LL);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 376;
                    goto LABEL_109;
                  }
                  v25 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_2D *))(*(_QWORD *)v16 + 144LL);
                  v89 = v69;
                  v90 = v70;
                  if ( v25 == CAnimatedTransitionVisual::Translate2D )
                    v26 = CAnimatedTransitionVisual::Translate2D(v16, (const struct TA_TRANSFORM_2D *)v88);
                  else
                    v26 = v25(v16, (const struct TA_TRANSFORM_2D *)v88);
                  v8 = v26;
                  if ( v26 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v26, 0x17Eu);
                    goto LABEL_39;
                  }
                }
                else if ( v65 == 3 )
                {
                  v44 = 0;
                  v45 = (unsigned int)i;
                  do
                  {
                    v46 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11) + 24LL)
                                                  + 8 * v45)
                                      + 8LL * (int)v44
                                      + 8);
                    v72 = v46;
                    if ( v46 )
                    {
                      v23 = (*(__int64 (__fastcall **)(__int64, _QWORD, unsigned int *))(*(_QWORD *)v46 + 200LL))(
                              v46,
                              0LL,
                              &v67);
                      v8 = v23;
                      if ( v23 < 0 )
                      {
                        v63 = 396;
                        goto LABEL_109;
                      }
                      v47 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11) + 24LL) + 8 * i);
                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v47 + 240LL))(v47, v67);
                      v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v72 + 40LL))(
                              v72,
                              &v99,
                              3LL);
                      v8 = v23;
                      if ( v23 < 0 )
                      {
                        v63 = 401;
                        goto LABEL_109;
                      }
                      v48 = *((_QWORD *)this + 5);
                      v49 = v99;
                      v89 = v49;
                      v90 = v100;
                      v91 = v101;
                      v50 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v48 + 8 * v11) + 24LL) + 8 * i);
                      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v50 + 240LL))(v50, v67);
                      v23 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v16 + 176LL))(
                              v16,
                              v88);
                      v8 = v23;
                      if ( v23 < 0 )
                      {
                        v63 = 409;
                        goto LABEL_109;
                      }
                      v24 = v65;
                      v45 = (unsigned int)i;
                    }
                    ++v44;
                  }
                  while ( v44 < v24 );
                }
              }
              v27 = v73;
              if ( v73 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v73 + 24LL))(v73, &v65);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 421;
                  goto LABEL_109;
                }
                if ( v65 == 2 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v27 + 40LL))(v27, &v69, 2LL);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 424;
                    goto LABEL_109;
                  }
                  v34 = *((_QWORD *)this + 5);
                  v35 = v69;
                  v89 = v35;
                  v90 = v70;
                  v78 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8 * v11) + 24LL) + 8 * i) + 64LL);
                  v92 = v78;
                  v36 = *(_QWORD *)v16;
                  v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v34 + 8 * v11) + 24LL) + 8 * i) + 64LL);
                  v93 = HIDWORD(v79);
                  v37 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(v36 + 152);
                  if ( v37 == CAnimatedTransitionVisual::Scale2D )
                    v38 = CAnimatedTransitionVisual::Scale2D(v16, (const struct TA_TRANSFORM_2D *)v88);
                  else
                    v38 = v37(v16, (const struct TA_TRANSFORM_2D *)v88);
                  v8 = v38;
                  if ( v38 < 0 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x1B0u);
                    goto LABEL_39;
                  }
                }
                else if ( v65 == 3 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v27 + 40LL))(v27, &v99, 3LL);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 436;
                    goto LABEL_109;
                  }
                  v51 = *((_QWORD *)this + 5);
                  v52 = v99;
                  v89 = v52;
                  v90 = v100;
                  v53 = v101;
                  v91 = v53;
                  v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8 * v11) + 24LL) + 8 * i) + 64LL);
                  v94 = v80;
                  v81 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8 * v11) + 24LL) + 8 * i) + 64LL);
                  v95 = HIDWORD(v81);
                  v82 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8 * v11) + 24LL) + 8 * i) + 72LL);
                  v54 = *(_QWORD *)v16;
                  v96 = v82;
                  v23 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v54 + 184))(v16, v88);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 446;
                    goto LABEL_109;
                  }
                }
              }
              v28 = v74;
              if ( v74 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v74 + 24LL))(v74, &v65);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 456;
                  goto LABEL_109;
                }
                if ( v65 == 2 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v28 + 40LL))(v28, &v69, 2LL);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 459;
                    goto LABEL_109;
                  }
                  for ( j = 0LL; j < 2; ++j )
                    *(&v89 + j) = *(&v69 + j);
                  v56 = *((_QWORD *)this + 5);
                  v83 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 8 * v11) + 24LL) + 8 * i) + 76LL);
                  v92 = v83;
                  v57 = *(_QWORD *)v16;
                  v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v56 + 8 * v11) + 24LL) + 8 * i) + 76LL);
                  v93 = HIDWORD(v84);
                  v23 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v57 + 160))(v16, v88);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 467;
                    goto LABEL_109;
                  }
                }
                else if ( v65 == 3 )
                {
                  v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v28 + 40LL))(v28, &v99, 3LL);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 471;
                    goto LABEL_109;
                  }
                  v58 = *((_QWORD *)this + 5);
                  v59 = v99;
                  v89 = v59;
                  v90 = v100;
                  v60 = v101;
                  v91 = v60;
                  v85 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8 * v11) + 24LL) + 8 * i) + 76LL);
                  v94 = v85;
                  v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8 * v11) + 24LL) + 8 * i) + 76LL);
                  v95 = HIDWORD(v86);
                  v87 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v58 + 8 * v11) + 24LL) + 8 * i) + 84LL);
                  v61 = *(_QWORD *)v16;
                  v96 = v87;
                  v23 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v61 + 192))(v16, v88);
                  v8 = v23;
                  if ( v23 < 0 )
                  {
                    v63 = 480;
                    goto LABEL_109;
                  }
                }
              }
              if ( v18 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v18 + 24LL))(v18, &v65);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 490;
                  goto LABEL_109;
                }
                v23 = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v18 + 40LL))(v18, &v75, v65);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 494;
                  goto LABEL_109;
                }
                v29 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *))(*(_QWORD *)v16 + 168LL);
                v89 = v75;
                if ( v29 == CAnimatedTransitionVisual::Opacity )
                  v30 = CAnimatedTransitionVisual::Opacity(v16, (const struct TA_TRANSFORM_OPACITY *)v88);
                else
                  v30 = v29(v16, (const struct TA_TRANSFORM_OPACITY *)v88);
                v8 = v30;
                if ( v30 < 0 )
                {
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x1F3u);
                  goto LABEL_39;
                }
              }
              if ( v76 )
              {
                v23 = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v76 + 40LL))(v76, v102, 4LL);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 504;
                  goto LABEL_109;
                }
                for ( k = 0LL; k < 4; ++k )
                  *(&v89 + k) = v102[k];
                v23 = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v16 + 200LL))(
                        v16,
                        v88);
                v8 = v23;
                if ( v23 < 0 )
                {
                  v63 = 512;
                  goto LABEL_109;
                }
              }
              v31 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v16 + 248LL);
              if ( v31 == CAnimatedTransitionVisual::NeedToUpdateScene )
                updated = CAnimatedTransitionVisual::NeedToUpdateScene(v16);
              else
                updated = v31(v16);
              v5 = updated | v64;
              v64 |= updated;
            }
          }
          v10 = (unsigned int)(v10 + 1);
          v68 = v10;
        }
        while ( (unsigned int)v10 < *((_DWORD *)this + 16) );
        v4 = v77;
      }
      v23 = CAnimationEngine::StopAnimations(this);
      v8 = v23;
      if ( v23 < 0 )
      {
        v63 = 520;
LABEL_109:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v23, v63);
      }
      else if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
    }
  }
LABEL_39:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
