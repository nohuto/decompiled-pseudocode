/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180030FE8
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x1800424A0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x180003D40 (-Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18000C8D8 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180030F9C (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800330C0 (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18003312C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x180038AB0 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x180038AE0 (-NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x180038AF0 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ @ 0x18003B0D0 (-OnTick@CTransitionVisualSet@CAnimationEngine@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r15
  char v5; // r14
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // rax
  __int64 v11; // rdi
  __int64 v12; // rcx
  __int64 i; // rdx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax
  __int64 v17; // r12
  __int64 v18; // rdx
  CAnimatedTransitionVisual *v19; // r14
  __int64 v20; // r15
  __int64 v21; // r13
  __int64 *v22; // rax
  __int64 v23; // r8
  __int64 *v24; // rax
  __int64 v25; // rax
  __int64 (__fastcall *v26)(CAnimatedTransitionVisual *__hidden); // rbx
  unsigned int v27; // edx
  __int64 v28; // rax
  float *v29; // rcx
  double v30; // xmm0_8
  __int64 (__fastcall *v31)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_2D *); // rbx
  int v32; // eax
  __int64 v33; // r15
  __int64 v34; // r15
  bool (__fastcall *v35)(CAnimatedTransitionVisual *__hidden); // rbx
  bool updated; // al
  __int64 (__fastcall *v38)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *); // rbx
  int v39; // eax
  __int64 v40; // rax
  int v41; // r9d
  unsigned int j; // r15d
  _QWORD *v43; // rcx
  __int64 v44; // r12
  __int64 v45; // rdi
  __int64 v46; // rax
  float v47; // xmm0_4
  __int64 v48; // rax
  float *v49; // rcx
  double v50; // xmm0_8
  __int64 v51; // rdx
  __int64 v52; // rax
  __int64 v53; // rdx
  float v54; // xmm0_4
  float v55; // xmm0_4
  __int64 v56; // rax
  __int64 v57; // rax
  float *v58; // rcx
  double v59; // xmm0_8
  __int64 v60; // rdx
  __int64 v61; // rax
  __int64 v62; // rdx
  float v63; // xmm0_4
  float v64; // xmm0_4
  __int64 v65; // rax
  __int64 v66; // rax
  float *v67; // rcx
  double v68; // xmm0_8
  unsigned int v69; // [rsp+28h] [rbp-E0h]
  char v70; // [rsp+38h] [rbp-D0h]
  unsigned int v71; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v72; // [rsp+40h] [rbp-C8h]
  int v73; // [rsp+48h] [rbp-C0h]
  unsigned int v74; // [rsp+4Ch] [rbp-BCh] BYREF
  int v75; // [rsp+50h] [rbp-B8h]
  float v76; // [rsp+54h] [rbp-B4h] BYREF
  __int64 v77; // [rsp+58h] [rbp-B0h]
  double v78[2]; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v79; // [rsp+70h] [rbp-98h]
  __int64 v80; // [rsp+80h] [rbp-88h]
  double v81; // [rsp+90h] [rbp-78h] BYREF
  __int64 v82; // [rsp+98h] [rbp-70h]
  bool *v83; // [rsp+A8h] [rbp-60h]
  __int64 v84; // [rsp+B0h] [rbp-58h]
  __int64 v85; // [rsp+C0h] [rbp-48h]
  __int64 v86; // [rsp+C8h] [rbp-40h]
  __int64 v87; // [rsp+D8h] [rbp-30h]
  int v88; // [rsp+F0h] [rbp-18h]
  int v89; // [rsp+100h] [rbp-8h]
  __int64 v90; // [rsp+108h] [rbp+0h]
  struct _RTL_CRITICAL_SECTION *v91; // [rsp+110h] [rbp+8h] BYREF
  __int64 v92; // [rsp+118h] [rbp+10h]
  __int64 v93; // [rsp+128h] [rbp+20h]
  __int64 v94; // [rsp+138h] [rbp+30h]
  _BYTE v95[20]; // [rsp+140h] [rbp+38h] BYREF
  float v96; // [rsp+154h] [rbp+4Ch] BYREF
  float v97; // [rsp+158h] [rbp+50h]
  float v98; // [rsp+15Ch] [rbp+54h]
  int v99; // [rsp+164h] [rbp+5Ch]
  int v100; // [rsp+168h] [rbp+60h]
  int v101; // [rsp+16Ch] [rbp+64h]
  int v102; // [rsp+170h] [rbp+68h]
  int v103; // [rsp+174h] [rbp+6Ch]
  _QWORD v104[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v105[2]; // [rsp+188h] [rbp+80h]
  double v106; // [rsp+198h] [rbp+90h] BYREF
  double v107; // [rsp+1A0h] [rbp+98h]
  double v108; // [rsp+1A8h] [rbp+A0h]
  double v109[4]; // [rsp+1B0h] [rbp+A8h] BYREF

  v83 = a3;
  v4 = a3;
  v91 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v70 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    v69 = 314;
    goto LABEL_53;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
              *((_QWORD *)this + 1),
              v7,
              0LL);
  v8 = started;
  if ( started < 0 )
  {
    v69 = 317;
    goto LABEL_53;
  }
  v9 = 0LL;
  v73 = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_30;
  while ( 1 )
  {
    v10 = *((_QWORD *)this + 5);
    v11 = (unsigned int)v9;
    v72 = (unsigned int)v9;
    v12 = *(_QWORD *)(v10 + 8 * v9);
    if ( *(_BYTE *)(v12 + 32) )
    {
      if ( !*(_BYTE *)(v12 + 33) )
        break;
    }
LABEL_28:
    v9 = (unsigned int)(v9 + 1);
    v73 = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 16) )
    {
      v4 = v83;
LABEL_30:
      started = CAnimationEngine::StopAnimations(this);
      v8 = started;
      if ( started < 0 )
      {
        v69 = 520;
        goto LABEL_53;
      }
      if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_34;
    }
  }
  ++*(_DWORD *)(v12 + 8);
  for ( i = 0LL; ; i = (unsigned int)(v75 + 1) )
  {
    v14 = *((_QWORD *)this + 5);
    v75 = i;
    v15 = *(_QWORD *)(v14 + 8 * v11);
    if ( (unsigned int)i >= *(_DWORD *)(v15 + 4) )
    {
      LODWORD(v9) = v73;
      goto LABEL_28;
    }
    v16 = *(_QWORD *)(v15 + 24);
    v17 = (unsigned int)i;
    v77 = (unsigned int)i;
    v18 = *(_QWORD *)(v16 + 8 * i);
    v19 = *(CAnimatedTransitionVisual **)v18;
    v20 = **(_QWORD **)(v18 + 8);
    v21 = **(_QWORD **)(v18 + 40);
    v22 = *(__int64 **)(v18 + 48);
    v85 = **(_QWORD **)(v18 + 32);
    v23 = *v22;
    v24 = *(__int64 **)(v18 + 56);
    v90 = v23;
    v94 = *v24;
    CAnimationEngine::CTransitionVisualSet::OnTick((CAnimationEngine::CTransitionVisualSet *)v15);
    v25 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11);
    if ( *(_DWORD *)(v25 + 8) <= 1u )
    {
      if ( (*(int (__fastcall **)(_QWORD, float *))(***(_QWORD ***)(*(_QWORD *)(v25 + 24) + 8 * v17) + 48LL))(
             **(_QWORD **)(*(_QWORD *)(v25 + 24) + 8 * v17),
             &v76) >= 0
        && v76 == 0.0 )
      {
        v105[0] = 0LL;
        v104[0] = 0LL;
        v104[1] = 0LL;
        v40 = *((_QWORD *)this + 5);
        *(_QWORD *)((char *)v105 + 4) = 1065353216LL;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(***(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v40 + 8 * v72) + 24LL)
                                                                 + 8 * v17)
                                                 + 168LL))(
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v40 + 8 * v72) + 24LL) + 8 * v17),
          v104);
      }
      v11 = v72;
    }
    v26 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v19 + 120LL);
    if ( v26 == CAnimatedTransitionVisual::HideGhost )
      CAnimatedTransitionVisual::HideGhost(v19);
    else
      v26(v19);
    if ( v20 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v20 + 24LL))(v20, &v71);
      v8 = started;
      if ( started < 0 )
      {
        v69 = 373;
        goto LABEL_53;
      }
      v27 = v71;
      if ( v71 == 2 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v20 + 40LL))(v20, v78, 2LL);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 376;
          goto LABEL_53;
        }
        v28 = 0LL;
        v29 = &v96;
        do
        {
          v30 = v78[v28++];
          *v29++ = v30;
        }
        while ( v28 < 2 );
        v31 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, const struct TA_TRANSFORM_2D *))(*(_QWORD *)v19 + 144LL);
        if ( v31 == CAnimatedTransitionVisual::Translate2D )
          v32 = CAnimatedTransitionVisual::Translate2D(v19, (const struct TA_TRANSFORM_2D *)v95);
        else
          v32 = v31(v19, (const struct TA_TRANSFORM_2D *)v95);
        v8 = v32;
        if ( v32 < 0 )
        {
          v69 = 382;
          goto LABEL_55;
        }
      }
      else if ( v71 == 3 )
      {
        for ( j = 0; j < v27; ++j )
        {
          v43 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11) + 24LL) + 8 * v17)
                           + 8LL * (int)j
                           + 8);
          v44 = *v43;
          if ( *v43 )
          {
            started = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v44 + 200LL))(
                        *v43,
                        0LL,
                        &v74);
            v8 = started;
            if ( started < 0 )
            {
              v69 = 396;
              goto LABEL_53;
            }
            v45 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v11) + 24LL) + 8 * v77);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v45 + 240LL))(v45, v74);
            started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v44 + 40LL))(v44, &v106, 3LL);
            v8 = started;
            if ( started < 0 )
            {
              v69 = 401;
              goto LABEL_53;
            }
            v46 = *((_QWORD *)this + 5);
            v17 = v77;
            v47 = v106;
            v96 = v47;
            v97 = v107;
            v98 = v108;
            (*(void (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v46 + 8 * v72) + 24LL)
                                                                   + 8 * v77)
                                                   + 240LL))(
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v46 + 8 * v72) + 24LL) + 8 * v77),
              v74);
            started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v19 + 176LL))(
                        v19,
                        v95);
            v8 = started;
            if ( started < 0 )
            {
              v69 = 409;
              goto LABEL_53;
            }
            v27 = v71;
            v11 = v72;
          }
          else
          {
            v17 = v77;
          }
        }
      }
    }
    if ( v21 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v21 + 24LL))(v21, &v71);
      v8 = started;
      if ( started < 0 )
      {
        v69 = 421;
        goto LABEL_53;
      }
      if ( v71 == 2 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v21 + 40LL))(v21, v78, 2LL);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 424;
          goto LABEL_53;
        }
        v48 = 0LL;
        v49 = &v96;
        do
        {
          v50 = v78[v48++];
          *v49++ = v50;
        }
        while ( v48 < 2 );
        v51 = *((_QWORD *)this + 5);
        v79 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8 * v11) + 24LL) + 8 * v17) + 64LL);
        v99 = v79;
        v52 = *(_QWORD *)v19;
        v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v51 + 8 * v11) + 24LL) + 8 * v17) + 64LL);
        v100 = HIDWORD(v92);
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v52 + 152))(v19, v95);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 432;
          goto LABEL_53;
        }
      }
      else if ( v71 == 3 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v21 + 40LL))(v21, &v106, 3LL);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 436;
          goto LABEL_53;
        }
        v53 = *((_QWORD *)this + 5);
        v54 = v106;
        v96 = v54;
        v97 = v107;
        v55 = v108;
        v98 = v55;
        v87 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 8 * v11) + 24LL) + 8 * v17) + 64LL);
        v101 = v87;
        v93 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 8 * v11) + 24LL) + 8 * v17) + 64LL);
        v102 = HIDWORD(v93);
        v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v53 + 8 * v11) + 24LL) + 8 * v17) + 72LL);
        v56 = *(_QWORD *)v19;
        v103 = v89;
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v56 + 184))(v19, v95);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 446;
          goto LABEL_53;
        }
      }
    }
    v33 = v85;
    if ( !v85 )
      goto LABEL_22;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v85 + 24LL))(v85, &v71);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 456;
      goto LABEL_53;
    }
    if ( v71 == 2 )
    {
      started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v33 + 40LL))(v33, v78, 2LL);
      v8 = started;
      if ( started >= 0 )
      {
        v57 = 0LL;
        v58 = &v96;
        do
        {
          v59 = v78[v57++];
          *v58++ = v59;
        }
        while ( v57 < 2 );
        v60 = *((_QWORD *)this + 5);
        v80 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 8 * v11) + 24LL) + 8 * v17) + 76LL);
        v99 = v80;
        v61 = *(_QWORD *)v19;
        v82 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v60 + 8 * v11) + 24LL) + 8 * v17) + 76LL);
        v100 = HIDWORD(v82);
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v61 + 160))(v19, v95);
        v8 = started;
        if ( started < 0 )
        {
          v69 = 467;
          goto LABEL_53;
        }
        goto LABEL_22;
      }
      v69 = 459;
LABEL_53:
      v41 = started;
      goto LABEL_56;
    }
    if ( v71 != 3 )
      goto LABEL_22;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v33 + 40LL))(v33, &v106, 3LL);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 471;
      goto LABEL_53;
    }
    v62 = *((_QWORD *)this + 5);
    v63 = v106;
    v96 = v63;
    v97 = v107;
    v64 = v108;
    v98 = v64;
    v84 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 8 * v11) + 24LL) + 8 * v17) + 76LL);
    v101 = v84;
    v86 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 8 * v11) + 24LL) + 8 * v17) + 76LL);
    v102 = HIDWORD(v86);
    v88 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v62 + 8 * v11) + 24LL) + 8 * v17) + 84LL);
    v65 = *(_QWORD *)v19;
    v103 = v88;
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v65 + 192))(v19, v95);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 480;
      goto LABEL_53;
    }
LABEL_22:
    v34 = v90;
    if ( !v90 )
      goto LABEL_23;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v90 + 24LL))(v90, &v71);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 490;
      goto LABEL_53;
    }
    started = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v34 + 40LL))(v34, &v81, v71);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 494;
      goto LABEL_53;
    }
    v38 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *))(*(_QWORD *)v19 + 168LL);
    v96 = v81;
    v39 = v38 == CAnimatedTransitionVisual::Opacity
        ? CAnimatedTransitionVisual::Opacity(v19, (const struct TA_TRANSFORM_OPACITY *)v95)
        : v38(v19, (const struct TA_TRANSFORM_OPACITY *)v95);
    v8 = v39;
    if ( v39 < 0 )
      break;
LABEL_23:
    if ( !v94 )
      goto LABEL_24;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v94 + 40LL))(v94, v109, 4LL);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 504;
      goto LABEL_53;
    }
    v66 = 0LL;
    v67 = &v96;
    do
    {
      v68 = v109[v66++];
      *v67++ = v68;
    }
    while ( v66 < 4 );
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v19 + 200LL))(v19, v95);
    v8 = started;
    if ( started < 0 )
    {
      v69 = 512;
      goto LABEL_53;
    }
LABEL_24:
    v35 = *(bool (__fastcall **)(CAnimatedTransitionVisual *__hidden))(*(_QWORD *)v19 + 248LL);
    if ( v35 == CAnimatedTransitionVisual::NeedToUpdateScene )
      updated = CAnimatedTransitionVisual::NeedToUpdateScene(v19);
    else
      updated = v35(v19);
    v5 = updated | v70;
    v70 |= updated;
  }
  v69 = 499;
LABEL_55:
  v41 = v8;
LABEL_56:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v41, v69);
LABEL_34:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v91);
  return v8;
}
