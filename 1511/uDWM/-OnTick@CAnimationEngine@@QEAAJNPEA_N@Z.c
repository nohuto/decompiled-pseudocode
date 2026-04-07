/*
 * XREFs of ?OnTick@CAnimationEngine@@QEAAJNPEA_N@Z @ 0x180036850
 * Callers:
 *     ?ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z @ 0x1800336D0 (-ProcessAnimationTick@CDesktopManager@@CAJPEAT_LARGE_INTEGER@@0PEA_N@Z.c)
 * Callees:
 *     ?HideGhost@CAnimatedTransitionVisual@@UEAAJXZ @ 0x18000DB30 (-HideGhost@CAnimatedTransitionVisual@@UEAAJXZ.c)
 *     ?NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ @ 0x18000DB60 (-NeedToUpdateScene@CAnimatedTransitionVisual@@UEAA_NXZ.c)
 *     ?Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z @ 0x18000DB70 (-Opacity@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_OPACITY@@@Z.c)
 *     ?Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18000DBB0 (-Scale2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z @ 0x18000DC60 (-Translate2D@CAnimatedTransitionVisual@@UEAAJPEBUTA_TRANSFORM_2D@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800118D8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180036804 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?StopAnimations@CAnimationEngine@@AEAAJXZ @ 0x180038A7C (-StopAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x180038AE8 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 *     ?GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z @ 0x180039BB0 (-GetBeginAlpha@CAnimatedTransitionVisual@@UEAAJPEAM@Z.c)
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x18004EF10 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 */

__int64 __fastcall CAnimationEngine::OnTick(CAnimationEngine *this, double a2, bool *a3)
{
  bool *v4; // r15
  char v5; // r14
  int started; // eax
  __int64 v7; // rdx
  unsigned int v8; // ebx
  __int64 v9; // rdx
  __int64 v10; // r13
  __int64 v11; // rcx
  __int64 i; // rcx
  __int64 v13; // rax
  __int64 v14; // r15
  __int64 v15; // rax
  __int64 *v16; // rdi
  __int64 v17; // rcx
  CAnimatedTransitionVisual *v18; // r14
  __int64 v19; // r12
  __int64 *v20; // rax
  __int64 v21; // rdx
  __int64 *v22; // rax
  __int64 v23; // rdx
  __int64 *v24; // rax
  __int64 v25; // rcx
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 (__fastcall *v28)(CAnimatedTransitionVisual *); // rbx
  unsigned int v29; // edx
  __int64 v30; // rax
  float *v31; // rcx
  double v32; // xmm0_8
  __int64 (__fastcall *v33)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rbx
  int v34; // eax
  __int64 v35; // rdi
  __int64 v36; // rdi
  __int64 v37; // r15
  __int64 v38; // rdi
  __int64 (__fastcall *v39)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *); // rbx
  int v40; // eax
  __int64 (__fastcall *v41)(CAnimatedTransitionVisual *); // rbx
  char updated; // al
  __int64 v44; // rax
  float *v45; // rcx
  double v46; // xmm0_8
  __int64 v47; // rdx
  __int64 v48; // rax
  __int64 (__fastcall *v49)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *); // rbx
  int v50; // eax
  __int64 v51; // r15
  CAnimatedTransitionVisual **v52; // rcx
  __int64 (__fastcall *v53)(CAnimatedTransitionVisual *__hidden, float *); // rdi
  int v54; // eax
  __int64 v55; // rax
  int v56; // r9d
  __int64 v57; // rdi
  unsigned int j; // r15d
  _QWORD *v59; // rcx
  __int64 v60; // r12
  __int64 v61; // rdi
  __int64 v62; // rax
  float v63; // xmm0_4
  __int64 v64; // rdx
  float v65; // xmm0_4
  float v66; // xmm0_4
  __int64 v67; // rax
  __int64 v68; // rax
  float *v69; // rcx
  double v70; // xmm0_8
  __int64 v71; // rdx
  __int64 v72; // rax
  __int64 v73; // rdx
  float v74; // xmm0_4
  float v75; // xmm0_4
  __int64 v76; // rax
  __int64 v77; // rax
  float *v78; // rcx
  double v79; // xmm0_8
  unsigned int v80; // [rsp+28h] [rbp-E0h]
  char v81; // [rsp+38h] [rbp-D0h]
  unsigned int v82; // [rsp+3Ch] [rbp-CCh] BYREF
  __int64 v83; // [rsp+40h] [rbp-C8h]
  unsigned int v84; // [rsp+48h] [rbp-C0h] BYREF
  int v85; // [rsp+4Ch] [rbp-BCh]
  float v86[2]; // [rsp+50h] [rbp-B8h] BYREF
  double v87[2]; // [rsp+58h] [rbp-B0h] BYREF
  __int64 v88; // [rsp+68h] [rbp-A0h]
  int v89; // [rsp+80h] [rbp-88h]
  __int64 v90; // [rsp+88h] [rbp-80h]
  __int64 v91; // [rsp+98h] [rbp-70h]
  __int64 v92; // [rsp+A0h] [rbp-68h]
  __int64 v93; // [rsp+B0h] [rbp-58h]
  __int64 v94; // [rsp+B8h] [rbp-50h]
  double v95; // [rsp+C8h] [rbp-40h] BYREF
  __int64 v96; // [rsp+D0h] [rbp-38h]
  __int64 v97; // [rsp+E0h] [rbp-28h]
  int v98; // [rsp+F8h] [rbp-10h]
  __int64 v99; // [rsp+100h] [rbp-8h]
  __int64 v100; // [rsp+108h] [rbp+0h]
  bool *v101; // [rsp+110h] [rbp+8h]
  __int64 v102; // [rsp+118h] [rbp+10h]
  __int64 v103; // [rsp+128h] [rbp+20h]
  double v104; // [rsp+138h] [rbp+30h] BYREF
  _BYTE v105[20]; // [rsp+140h] [rbp+38h] BYREF
  float v106; // [rsp+154h] [rbp+4Ch] BYREF
  float v107; // [rsp+158h] [rbp+50h]
  float v108; // [rsp+15Ch] [rbp+54h]
  int v109; // [rsp+164h] [rbp+5Ch]
  int v110; // [rsp+168h] [rbp+60h]
  int v111; // [rsp+16Ch] [rbp+64h]
  int v112; // [rsp+170h] [rbp+68h]
  int v113; // [rsp+174h] [rbp+6Ch]
  _QWORD v114[2]; // [rsp+178h] [rbp+70h] BYREF
  _QWORD v115[2]; // [rsp+188h] [rbp+80h]
  double v116; // [rsp+198h] [rbp+90h] BYREF
  double v117; // [rsp+1A0h] [rbp+98h]
  double v118; // [rsp+1A8h] [rbp+A0h]
  double v119[4]; // [rsp+1B0h] [rbp+A8h] BYREF

  v101 = a3;
  v4 = a3;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v5 = 0;
  *((double *)this + 13) = a2;
  v81 = 0;
  started = CAnimationEngine::StartAnimations(this);
  v8 = started;
  if ( started < 0 )
  {
    v80 = 314;
    goto LABEL_66;
  }
  started = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD))(**((_QWORD **)this + 1) + 72LL))(
              *((_QWORD *)this + 1),
              v7,
              0LL);
  v8 = started;
  if ( started < 0 )
  {
    v80 = 317;
    goto LABEL_66;
  }
  v9 = 0LL;
  v85 = 0;
  if ( !*((_DWORD *)this + 16) )
    goto LABEL_38;
  while ( 1 )
  {
    v10 = (unsigned int)v9;
    v11 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v9);
    if ( *(_BYTE *)(v11 + 32) )
    {
      if ( !*(_BYTE *)(v11 + 33) )
        break;
    }
LABEL_36:
    v9 = (unsigned int)(v9 + 1);
    v85 = v9;
    if ( (unsigned int)v9 >= *((_DWORD *)this + 16) )
    {
      v4 = v101;
LABEL_38:
      started = CAnimationEngine::StopAnimations(this);
      v8 = started;
      if ( started < 0 )
      {
        v80 = 520;
        goto LABEL_66;
      }
      if ( v5 && !CAnimationEngine::IsIdle(this) || *((_BYTE *)this + 112) )
      {
        *v4 = 1;
        *((_BYTE *)this + 112) = 0;
      }
      goto LABEL_42;
    }
  }
  ++*(_DWORD *)(v11 + 8);
  for ( i = 0LL; ; i = (unsigned int)(LODWORD(v86[1]) + 1) )
  {
    v13 = *((_QWORD *)this + 5);
    LODWORD(v86[1]) = i;
    v14 = *(_QWORD *)(v13 + 8 * v10);
    if ( (unsigned int)i >= *(_DWORD *)(v14 + 4) )
    {
      LODWORD(v9) = v85;
      goto LABEL_36;
    }
    v15 = *(_QWORD *)(v14 + 24);
    v16 = *(__int64 **)(v14 + 16);
    v83 = i;
    v17 = *(_QWORD *)(v15 + 8 * i);
    v18 = *(CAnimatedTransitionVisual **)v17;
    v19 = **(_QWORD **)(v17 + 8);
    v20 = *(__int64 **)(v17 + 32);
    v100 = **(_QWORD **)(v17 + 40);
    v21 = *v20;
    v22 = *(__int64 **)(v17 + 48);
    v99 = v21;
    v23 = *v22;
    v24 = *(__int64 **)(v17 + 56);
    v91 = v23;
    v25 = *v24;
    v26 = *v16;
    v93 = v25;
    if ( (*(int (__fastcall **)(__int64 *, double *))(v26 + 152))(v16, &v95) >= 0 )
      *(double *)(v14 + 40) = v95 + *(double *)(v14 + 40);
    v27 = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10);
    if ( *(_DWORD *)(v27 + 8) <= 1u )
    {
      v51 = v83;
      v52 = *(CAnimatedTransitionVisual ***)(*(_QWORD *)(v27 + 24) + 8 * v83);
      v53 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *__hidden, float *))(*(_QWORD *)*v52 + 48LL);
      v54 = v53 == CAnimatedTransitionVisual::GetBeginAlpha
          ? CAnimatedTransitionVisual::GetBeginAlpha(*v52, v86)
          : v53(*v52, v86);
      if ( v54 >= 0 && v86[0] == 0.0 )
      {
        v115[0] = 0LL;
        v114[0] = 0LL;
        v114[1] = 0LL;
        v55 = *((_QWORD *)this + 5);
        *(_QWORD *)((char *)v115 + 4) = 1065353216LL;
        (*(void (__fastcall **)(_QWORD, _QWORD *))(***(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v55 + 8 * v10) + 24LL)
                                                                 + 8 * v51)
                                                 + 168LL))(
          **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v55 + 8 * v10) + 24LL) + 8 * v51),
          v114);
      }
    }
    v28 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *))(*(_QWORD *)v18 + 120LL);
    if ( v28 == CAnimatedTransitionVisual::HideGhost )
      CAnimatedTransitionVisual::HideGhost(v18);
    else
      v28(v18);
    if ( v19 )
    {
      started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v19 + 24LL))(v19, &v82);
      v8 = started;
      if ( started < 0 )
      {
        v80 = 373;
        goto LABEL_66;
      }
      v29 = v82;
      if ( v82 == 2 )
      {
        started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v19 + 40LL))(v19, v87, 2LL);
        v8 = started;
        if ( started < 0 )
        {
          v80 = 376;
          goto LABEL_66;
        }
        v30 = 0LL;
        v31 = &v106;
        do
        {
          v32 = v87[v30++];
          *v31++ = v32;
        }
        while ( v30 < 2 );
        v33 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(*(_QWORD *)v18 + 144LL);
        if ( v33 == CAnimatedTransitionVisual::Translate2D )
          v34 = CAnimatedTransitionVisual::Translate2D(v18, (const struct TA_TRANSFORM_2D *)v105);
        else
          v34 = v33(v18, (const struct TA_TRANSFORM_2D *)v105);
        v8 = v34;
        if ( v34 < 0 )
        {
          v80 = 382;
          goto LABEL_68;
        }
      }
      else if ( v82 == 3 )
      {
        v57 = v83;
        for ( j = 0; j < v29; ++j )
        {
          v59 = *(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v57)
                           + 8LL * (int)j
                           + 8);
          v60 = *v59;
          if ( *v59 )
          {
            started = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned int *))(*(_QWORD *)v60 + 200LL))(
                        *v59,
                        0LL,
                        &v84);
            v8 = started;
            if ( started < 0 )
            {
              v80 = 396;
              goto LABEL_66;
            }
            v61 = **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 5) + 8 * v10) + 24LL) + 8 * v57);
            (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v61 + 240LL))(v61, v84);
            started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v60 + 40LL))(v60, &v116, 3LL);
            v8 = started;
            if ( started < 0 )
            {
              v80 = 401;
              goto LABEL_66;
            }
            v62 = *((_QWORD *)this + 5);
            v63 = v116;
            v106 = v63;
            v107 = v117;
            v108 = v118;
            (*(void (__fastcall **)(_QWORD, _QWORD))(***(_QWORD ***)(*(_QWORD *)(*(_QWORD *)(v62 + 8 * v10) + 24LL)
                                                                   + 8 * v83)
                                                   + 240LL))(
              **(_QWORD **)(*(_QWORD *)(*(_QWORD *)(v62 + 8 * v10) + 24LL) + 8 * v83),
              v84);
            started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 176LL))(
                        v18,
                        v105);
            v8 = started;
            if ( started < 0 )
            {
              v80 = 409;
              goto LABEL_66;
            }
            v29 = v82;
            v57 = v83;
          }
        }
      }
    }
    v35 = v100;
    if ( !v100 )
    {
LABEL_23:
      v36 = v83;
      goto LABEL_24;
    }
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v100 + 24LL))(v100, &v82);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 421;
      goto LABEL_66;
    }
    if ( v82 == 2 )
      break;
    if ( v82 != 3 )
      goto LABEL_23;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v35 + 40LL))(v35, &v116, 3LL);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 436;
      goto LABEL_66;
    }
    v64 = *((_QWORD *)this + 5);
    v36 = v83;
    v65 = v116;
    v106 = v65;
    v107 = v117;
    v66 = v118;
    v108 = v66;
    v97 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8 * v10) + 24LL) + 8 * v83) + 64LL);
    v111 = v97;
    v103 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8 * v10) + 24LL) + 8 * v83) + 64LL);
    v112 = HIDWORD(v103);
    v89 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v64 + 8 * v10) + 24LL) + 8 * v83) + 72LL);
    v67 = *(_QWORD *)v18;
    v113 = v89;
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v67 + 184))(v18, v105);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 446;
      goto LABEL_66;
    }
LABEL_24:
    v37 = v99;
    if ( !v99 )
      goto LABEL_25;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v99 + 24LL))(v99, &v82);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 456;
      goto LABEL_66;
    }
    if ( v82 == 2 )
    {
      started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v37 + 40LL))(v37, v87, 2LL);
      v8 = started;
      if ( started >= 0 )
      {
        v68 = 0LL;
        v69 = &v106;
        do
        {
          v70 = v87[v68++];
          *v69++ = v70;
        }
        while ( v68 < 2 );
        v71 = *((_QWORD *)this + 5);
        v90 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 8 * v10) + 24LL) + 8 * v36) + 76LL);
        v109 = v90;
        v72 = *(_QWORD *)v18;
        v92 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v71 + 8 * v10) + 24LL) + 8 * v36) + 76LL);
        v110 = HIDWORD(v92);
        started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v72 + 160))(v18, v105);
        v8 = started;
        if ( started < 0 )
        {
          v80 = 467;
          goto LABEL_66;
        }
        goto LABEL_25;
      }
      v80 = 459;
LABEL_66:
      v56 = started;
      goto LABEL_69;
    }
    if ( v82 != 3 )
      goto LABEL_25;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v37 + 40LL))(v37, &v116, 3LL);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 471;
      goto LABEL_66;
    }
    v73 = *((_QWORD *)this + 5);
    v74 = v116;
    v106 = v74;
    v107 = v117;
    v75 = v118;
    v108 = v75;
    v94 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 8 * v10) + 24LL) + 8 * v36) + 76LL);
    v111 = v94;
    v96 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 8 * v10) + 24LL) + 8 * v36) + 76LL);
    v112 = HIDWORD(v96);
    v98 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v73 + 8 * v10) + 24LL) + 8 * v36) + 84LL);
    v76 = *(_QWORD *)v18;
    v113 = v98;
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(v76 + 192))(v18, v105);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 480;
      goto LABEL_66;
    }
LABEL_25:
    v38 = v91;
    if ( !v91 )
      goto LABEL_31;
    started = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v91 + 24LL))(v91, &v82);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 490;
      goto LABEL_66;
    }
    started = (*(__int64 (__fastcall **)(__int64, double *, _QWORD))(*(_QWORD *)v38 + 40LL))(v38, &v104, v82);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 494;
      goto LABEL_66;
    }
    v39 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_OPACITY *))(*(_QWORD *)v18 + 168LL);
    v106 = v104;
    if ( v39 == CAnimatedTransitionVisual::Opacity )
      v40 = CAnimatedTransitionVisual::Opacity(v18, (const struct TA_TRANSFORM_OPACITY *)v105);
    else
      v40 = v39(v18, (const struct TA_TRANSFORM_OPACITY *)v105);
    v8 = v40;
    if ( v40 < 0 )
    {
      v80 = 499;
      goto LABEL_68;
    }
LABEL_31:
    if ( !v93 )
      goto LABEL_32;
    started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v93 + 40LL))(v93, v119, 4LL);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 504;
      goto LABEL_66;
    }
    v77 = 0LL;
    v78 = &v106;
    do
    {
      v79 = v119[v77++];
      *v78++ = v79;
    }
    while ( v77 < 4 );
    started = (*(__int64 (__fastcall **)(CAnimatedTransitionVisual *, _BYTE *))(*(_QWORD *)v18 + 200LL))(v18, v105);
    v8 = started;
    if ( started < 0 )
    {
      v80 = 512;
      goto LABEL_66;
    }
LABEL_32:
    v41 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *))(*(_QWORD *)v18 + 248LL);
    if ( v41 == CAnimatedTransitionVisual::NeedToUpdateScene )
      updated = CAnimatedTransitionVisual::NeedToUpdateScene(v18);
    else
      updated = v41(v18);
    v5 = updated | v81;
    v81 |= updated;
  }
  started = (*(__int64 (__fastcall **)(__int64, double *, __int64))(*(_QWORD *)v35 + 40LL))(v35, v87, 2LL);
  v8 = started;
  if ( started < 0 )
  {
    v80 = 424;
    goto LABEL_66;
  }
  v44 = 0LL;
  v45 = &v106;
  do
  {
    v46 = v87[v44++];
    *v45++ = v46;
  }
  while ( v44 < 2 );
  v47 = *((_QWORD *)this + 5);
  v36 = v83;
  v88 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 8 * v10) + 24LL) + 8 * v83) + 64LL);
  v109 = v88;
  v48 = *(_QWORD *)v18;
  v102 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v47 + 8 * v10) + 24LL) + 8 * v83) + 64LL);
  v110 = HIDWORD(v102);
  v49 = *(__int64 (__fastcall **)(CAnimatedTransitionVisual *, const struct TA_TRANSFORM_2D *))(v48 + 152);
  if ( v49 == CAnimatedTransitionVisual::Scale2D )
    v50 = CAnimatedTransitionVisual::Scale2D(v18, (const struct TA_TRANSFORM_2D *)v105);
  else
    v50 = v49(v18, (const struct TA_TRANSFORM_2D *)v105);
  v8 = v50;
  if ( v50 >= 0 )
    goto LABEL_24;
  v80 = 432;
LABEL_68:
  v56 = v8;
LABEL_69:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v56, v80);
LABEL_42:
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v8;
}
