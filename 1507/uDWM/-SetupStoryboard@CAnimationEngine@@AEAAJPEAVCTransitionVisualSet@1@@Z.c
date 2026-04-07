/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180031AD4
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x18003312C (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180004308 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x180010994 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800314A8 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x180031840 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x1800392E4 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18003AE80 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 *     ?OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x1800488B0 (-OnSizeChanged@CIconicAnimatedVisual@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 *     memset_0 @ 0x1800498C6 (memset_0.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v2; // rdi
  float *v3; // r13
  __int64 v4; // r14
  int ThemeAnimationTransform; // esi
  int v8; // eax
  unsigned int v9; // r15d
  __int64 v10; // rax
  __int64 v11; // rdi
  int ThemeTimingFunction; // eax
  float v13; // xmm9_4
  double v14; // xmm11_8
  void *Theme; // rax
  unsigned int v16; // ebx
  CAnimationEngine *v17; // rcx
  __int64 v18; // rax
  __int64 v19; // rax
  unsigned int v20; // edx
  __int64 v21; // r15
  __int64 v22; // rax
  double v23; // xmm6_8
  double v24; // xmm7_8
  __int64 v25; // rax
  __int64 v26; // r15
  __int64 v27; // rax
  int v28; // r13d
  int v29; // ebx
  int v30; // eax
  int v31; // edi
  int v32; // r8d
  int v33; // r15d
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // ebx
  int v38; // r10d
  int v39; // ecx
  int v40; // edx
  int v41; // eax
  int v42; // eax
  int v43; // edx
  int v44; // r9d
  double v45; // xmm1_8
  double v46; // xmm2_8
  double v47; // xmm0_8
  double v48; // xmm3_8
  double v49; // xmm4_8
  double v50; // xmm5_8
  __m128 v51; // xmm1
  __int64 v52; // rcx
  int v53; // eax
  int v54; // xmm1_4
  __int64 v55; // rcx
  int v56; // eax
  unsigned int v57; // r8d
  __m128i v58; // xmm0
  struct IUIAnimationStoryboard2 *v59; // rdx
  int v60; // ecx
  unsigned int v61; // eax
  double v62; // xmm0_8
  double v63; // xmm0_8
  float v64; // xmm0_4
  unsigned int v65; // r8d
  struct IUIAnimationStoryboard2 *v66; // rdx
  __int64 v67; // rax
  __m128 v68; // xmm1
  __m128 v69; // xmm0
  __int64 v70; // rcx
  float v71; // xmm0_4
  float v72; // xmm1_4
  unsigned int v73; // r8d
  struct IUIAnimationStoryboard2 *v74; // rdx
  float v75; // xmm1_4
  float v76; // xmm1_4
  int v77; // xmm1_4
  __int64 v78; // rcx
  int v79; // eax
  __int64 v80; // rdx
  double v81; // xmm0_8
  double *v82; // r8
  double v83; // xmm0_8
  CAnimationEngine *v84; // rbx
  __int64 j; // rax
  __int64 k; // rax
  int v87; // r9d
  unsigned int v89; // [rsp+28h] [rbp-E0h]
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  float *v91; // [rsp+58h] [rbp-B0h]
  float *v92; // [rsp+58h] [rbp-B0h]
  float *v93; // [rsp+58h] [rbp-B0h]
  float *v94; // [rsp+58h] [rbp-B0h]
  char v95; // [rsp+88h] [rbp-80h]
  unsigned int v96; // [rsp+8Ch] [rbp-7Ch]
  bool v97; // [rsp+90h] [rbp-78h]
  bool v98; // [rsp+91h] [rbp-77h]
  char v99; // [rsp+92h] [rbp-76h]
  unsigned int v100; // [rsp+94h] [rbp-74h]
  unsigned int v101; // [rsp+98h] [rbp-70h] BYREF
  __m128 v102; // [rsp+A0h] [rbp-68h] BYREF
  float *v103; // [rsp+B0h] [rbp-58h]
  int v104; // [rsp+B8h] [rbp-50h]
  int v105; // [rsp+BCh] [rbp-4Ch] BYREF
  __m128 v106; // [rsp+C0h] [rbp-48h] BYREF
  CAnimationEngine *v107; // [rsp+D0h] [rbp-38h]
  float v108; // [rsp+D8h] [rbp-30h] BYREF
  int v109; // [rsp+DCh] [rbp-2Ch]
  float v110; // [rsp+E0h] [rbp-28h] BYREF
  unsigned int v111; // [rsp+E4h] [rbp-24h] BYREF
  int v112; // [rsp+E8h] [rbp-20h]
  unsigned int i; // [rsp+ECh] [rbp-1Ch]
  struct IUIAnimationStoryboard2 *v114; // [rsp+F0h] [rbp-18h] BYREF
  float v115; // [rsp+F8h] [rbp-10h] BYREF
  float v116; // [rsp+FCh] [rbp-Ch] BYREF
  __int64 v117; // [rsp+100h] [rbp-8h]
  int v118; // [rsp+108h] [rbp+0h]
  __int64 v119; // [rsp+110h] [rbp+8h]
  int v120; // [rsp+118h] [rbp+10h]
  double v121; // [rsp+120h] [rbp+18h] BYREF
  __int64 v122; // [rsp+128h] [rbp+20h]
  double v123; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v124; // [rsp+138h] [rbp+30h] BYREF
  float v125; // [rsp+13Ch] [rbp+34h] BYREF
  unsigned int v126; // [rsp+140h] [rbp+38h] BYREF
  double v127; // [rsp+148h] [rbp+40h] BYREF
  double v128; // [rsp+150h] [rbp+48h] BYREF
  double v129[2]; // [rsp+158h] [rbp+50h] BYREF
  int v130; // [rsp+168h] [rbp+60h]
  int v131; // [rsp+178h] [rbp+70h]
  __int128 v132; // [rsp+180h] [rbp+78h] BYREF
  __int128 v133; // [rsp+190h] [rbp+88h] BYREF
  __int128 v134; // [rsp+1A0h] [rbp+98h] BYREF
  __int128 v135; // [rsp+1B0h] [rbp+A8h] BYREF
  double v136; // [rsp+1C0h] [rbp+B8h] BYREF
  double v137; // [rsp+1C8h] [rbp+C0h]
  double v138; // [rsp+1D0h] [rbp+C8h]
  __int128 v139; // [rsp+1D8h] [rbp+D0h] BYREF
  double v140; // [rsp+1E8h] [rbp+E0h]
  double v141[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v142[4]; // [rsp+210h] [rbp+108h] BYREF

  v2 = *((_QWORD *)this + 1);
  v3 = 0LL;
  v103 = 0LL;
  v4 = 0LL;
  v114 = 0LL;
  v107 = this;
  v96 = *((_DWORD *)a2 + 3);
  ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v2 + 48LL))(
                              v2,
                              &v114);
  if ( ThemeAnimationTransform < 0 )
  {
    v89 = 626;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, ThemeAnimationTransform, v89);
    goto LABEL_167;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v114);
  ThemeAnimationTransform = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v114->lpVtbl->SetTag)(
                              v114,
                              0LL,
                              *(unsigned int *)a2);
  if ( ThemeAnimationTransform < 0 )
  {
    v89 = 630;
    goto LABEL_3;
  }
  v8 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v114->lpVtbl->SetStoryboardEventHandler)(
         v114,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v8, 0x277u);
    goto LABEL_167;
  }
  v9 = 0;
  v100 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    goto LABEL_167;
  while ( 1 )
  {
    v10 = *((_QWORD *)a2 + 3);
    v133 = 0LL;
    v134 = 0LL;
    v122 = v9;
    v132 = 0LL;
    v135 = 0LL;
    v11 = **(_QWORD **)(v10 + 8LL * v9);
    v95 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 256LL))(v11);
    v99 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 136LL))(v11);
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 16LL))(v11, &v133);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 651;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 24LL))(v11, &v132);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 652;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 32LL))(v11, &v108);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 653;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 40LL))(v11, &v110);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 654;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 48LL))(v11, &v116);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 655;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 56LL))(v11, &v125);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 656;
      goto LABEL_161;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 64LL))(v11, &v124);
    if ( ThemeAnimationTransform < 0 )
    {
      v90 = 657;
      goto LABEL_161;
    }
    if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v11 + 112LL))(v11, &v115) < 0 )
      v115 = 0.0;
    if ( v95 )
      break;
LABEL_21:
    v13 = FLOAT_0_0099999998;
    if ( (float)(1.0 - v115) >= 0.0099999998 )
      v13 = 1.0 - v115;
    v97 = 0;
    v98 = 0;
    v123 = 0.0;
    v121 = 0.0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v11 + 88LL))(v11, &v126) >= 0 )
    {
      v97 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 96LL))(v11, &v123) >= 0;
      v98 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v11 + 104LL))(v11, &v121) >= 0;
    }
    (*(void (__fastcall **)(_QWORD, int *))(***(_QWORD ***)(*((_QWORD *)a2 + 3) + 8LL * v9) + 128LL))(
      **(_QWORD **)(*((_QWORD *)a2 + 3) + 8LL * v9),
      &v105);
    v128 = 0.0;
    v111 = 0;
    v14 = 0.0;
    Theme = (void *)CDesktopManager::GetTheme(3);
    v16 = v96;
    CAnimationEngine::_CalculateStaggerDelay(v17, Theme, v96, v105, v124, &v128);
    v18 = CDesktopManager::GetTheme(3);
    if ( (int)GetThemeAnimationProperty(v18, v96, (unsigned int)v105, 1LL, &v111, 4, &v101) >= 0 )
    {
      for ( i = 0; i < v111; ++i )
      {
        v19 = CDesktopManager::GetTheme(3);
        ThemeAnimationTransform = GetThemeAnimationTransform(v19, v16, (unsigned int)v105, v20, 0LL, 0, &v101);
        if ( ThemeAnimationTransform != -2147024662 )
          continue;
        v21 = v101;
        if ( v4 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v4);
        v4 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               v21);
        if ( !v4 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2C8u);
          goto LABEL_165;
        }
        v22 = CDesktopManager::GetTheme(3);
        ThemeTimingFunction = GetThemeAnimationTransform(v22, v96, (unsigned int)v105, i, v4, v21, &v101);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v90 = 715;
          goto LABEL_147;
        }
        v23 = ((float)((float)*(int *)(v4 + 8) / 1000.0) + v128) * v13;
        v24 = (float)((float)((float)*(int *)(v4 + 12) / 1000.0) * v13);
        if ( v24 + v23 > v14 )
          v14 = v24 + v23;
        v25 = CDesktopManager::GetTheme(4);
        if ( (unsigned int)GetThemeTimingFunction(v25, *(unsigned int *)(v4 + 4), 0LL, 0LL, &v101) == -2147024662 )
        {
          v26 = v101;
          if ( v3 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v3);
          v103 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            v26);
          v3 = v103;
          if ( !v103 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0LL, -2147024882, 0x2E2u);
            goto LABEL_163;
          }
          v27 = CDesktopManager::GetTheme(4);
          ThemeTimingFunction = GetThemeTimingFunction(v27, *(unsigned int *)(v4 + 4), v3, (unsigned int)v26, &v101);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v90 = 740;
            goto LABEL_147;
          }
        }
        v102 = 0uLL;
        v106 = 0uLL;
        v139 = 0uLL;
        v140 = 0.0;
        v136 = 0.0;
        v137 = 0.0;
        v138 = 0.0;
        memset_0(v142, 0, sizeof(v142));
        memset_0(v141, 0, sizeof(v141));
        v28 = DWORD2(v133);
        v29 = v133;
        v112 = RoundToNearestInt((float)(v133 + DWORD2(v133)) * 0.5);
        v104 = HIDWORD(v133);
        v30 = RoundToNearestInt((float)(HIDWORD(v133) + DWORD1(v133)) * 0.5);
        v31 = HIDWORD(v132);
        v32 = v30;
        v33 = DWORD2(v132);
        v109 = v30;
        if ( v95 )
          goto LABEL_46;
        v34 = v28 - v29;
        if ( v28 - v29 < 0 )
          v34 = 0;
        v35 = DWORD2(v132) - v132;
        if ( DWORD2(v132) - (int)v132 < 0 )
          v35 = 0;
        if ( v34 == v35 )
        {
LABEL_46:
          v37 = v112 + v132 - v133;
          if ( v95 )
          {
            v38 = DWORD1(v133);
            v40 = DWORD1(v132);
LABEL_54:
            v43 = v32 + v40 - v38;
            goto LABEL_55;
          }
        }
        else
        {
          v36 = RoundToNearestInt((float)(DWORD2(v132) + v132) * 0.5);
          v32 = v109;
          v37 = v36;
        }
        v38 = DWORD1(v133);
        v39 = v104 - DWORD1(v133);
        v40 = DWORD1(v132);
        if ( v104 - DWORD1(v133) < 0 )
          v39 = 0;
        v41 = v31 - DWORD1(v132);
        if ( v31 - DWORD1(v132) < 0 )
          v41 = 0;
        if ( v39 == v41 )
          goto LABEL_54;
        v42 = RoundToNearestInt((float)(v31 + DWORD1(v132)) * 0.5);
        v38 = DWORD1(v133);
        v43 = v42;
LABEL_55:
        v44 = *(_DWORD *)(v4 + 16);
        if ( *(_DWORD *)v4 )
        {
          switch ( *(_DWORD *)v4 )
          {
            case 1:
              if ( (v44 & 1) != 0 )
              {
                v102.m128_u64[0] = 0x3FF0000000000000LL;
                v102.m128_u64[1] = 0x3FF0000000000000LL;
                if ( v28 == (_DWORD)v133 )
                  v75 = FLOAT_1_0;
                else
                  v75 = (float)(v33 - v132) / (float)(v28 - v133);
                *(double *)v106.m128_u64 = v75;
                if ( v104 == v38 )
                  v76 = FLOAT_1_0;
                else
                  v76 = (float)(v31 - DWORD1(v132)) / (float)(v104 - v38);
                *(double *)&v106.m128_u64[1] = v76;
              }
              else
              {
                if ( (v44 & 2) != 0 )
                {
                  *(double *)v102.m128_u64 = *(float *)(v4 + 28);
                  *(double *)&v102.m128_u64[1] = *(float *)(v4 + 32);
                }
                else
                {
                  v102.m128_u64[0] = 0x3FF0000000000000LL;
                  v102.m128_u64[1] = 0x3FF0000000000000LL;
                }
                *(double *)v106.m128_u64 = *(float *)(v4 + 20);
                *(double *)&v106.m128_u64[1] = *(float *)(v4 + 24);
              }
              v118 = 0;
              if ( (v44 & 4) != 0 )
              {
                v77 = *(_DWORD *)(v4 + 40);
                LODWORD(v117) = *(_DWORD *)(v4 + 36);
                HIDWORD(v117) = v77;
              }
              else
              {
                v117 = 0x3F0000003F000000LL;
              }
              v3 = v103;
              v9 = v100;
              v78 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v79 = v118;
              v94 = v103;
              *(_QWORD *)(v78 + 64) = v117;
              *(_DWORD *)(v78 + 72) = v79;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v107,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v100,
                                      4,
                                      v23,
                                      v24,
                                      (double *)v102.m128_u64,
                                      (double *)v106.m128_u64,
                                      2u,
                                      v94,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v90 = 893;
                goto LABEL_147;
              }
              break;
            case 2:
              if ( (v44 & 1) != 0 )
              {
                v71 = v116;
                v72 = v125;
              }
              else
              {
                if ( (v44 & 2) != 0 )
                  v71 = *(float *)(v4 + 24);
                else
                  v71 = v116;
                v72 = *(float *)(v4 + 20);
              }
              v3 = v103;
              v9 = v100;
              v73 = *(_DWORD *)a2;
              v74 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
              v127 = v72;
              v129[0] = v71;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v107,
                                      v74,
                                      v73,
                                      v100,
                                      5,
                                      v23,
                                      v24,
                                      v129,
                                      &v127,
                                      1u,
                                      v103,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v90 = 1132;
                goto LABEL_147;
              }
              break;
            case 0x100:
              if ( (v44 & 2) != 0 )
              {
                *(double *)v102.m128_u64 = *(float *)(v4 + 28);
                *(double *)&v102.m128_u64[1] = *(float *)(v4 + 32);
              }
              else
              {
                v102 = 0uLL;
              }
              *(double *)v106.m128_u64 = *(float *)(v4 + 20);
              *(double *)&v106.m128_u64[1] = *(float *)(v4 + 24);
              if ( v99 )
              {
                v102 = _mm_xor_ps(v102, (__m128)_xmm);
                v106 = _mm_xor_ps(v106, (__m128)_xmm);
              }
              v67 = *((_QWORD *)a2 + 3);
              v68 = (__m128)*(unsigned int *)(v4 + 40);
              v69 = (__m128)*(unsigned int *)(v4 + 36);
              v131 = 0;
              v3 = v103;
              v9 = v100;
              v70 = *(_QWORD *)(v67 + 8 * v122);
              v93 = v103;
              *(_QWORD *)(v70 + 76) = _mm_unpacklo_ps(v69, v68).m128_u64[0];
              *(_DWORD *)(v70 + 84) = 0;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v107,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v100,
                                      3,
                                      v23,
                                      v24,
                                      (double *)v102.m128_u64,
                                      (double *)v106.m128_u64,
                                      2u,
                                      v93,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v90 = 931;
                goto LABEL_147;
              }
              break;
            case 0x102:
              v140 = 0.0;
              v139 = 0LL;
              if ( (*(_BYTE *)(v4 + 16) & 1) != 0 )
              {
                v3 = v103;
                v9 = v100;
                v57 = *(_DWORD *)a2;
                v136 = (double)(v37 - v112);
                v58 = _mm_cvtsi32_si128(v43 - v109);
                v59 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                *(_QWORD *)&v137 = *(_OWORD *)&_mm_cvtepi32_pd(v58);
                v138 = (float)(v110 - v108);
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v107,
                                        v59,
                                        v57,
                                        v100,
                                        0,
                                        v23,
                                        v24,
                                        (double *)&v139,
                                        &v136,
                                        3u,
                                        v103,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v90 = 961;
                  goto LABEL_147;
                }
              }
              else
              {
                v60 = 0;
                v61 = 1;
                if ( (*(_DWORD *)(v4 + 16) & 0x1000) != 0 )
                {
                  v61 = 2;
                  v62 = (double)(((int)v132 + v33 - v28 - (int)v133) / 2);
                }
                else
                {
                  v62 = *(float *)(v4 + 20);
                }
                v136 = v62;
                if ( (*(_DWORD *)(v4 + 16) & 0x2000) != 0 )
                {
                  v61 = 3;
                  v63 = (double)((DWORD1(v132) + v31 - v104 - v38) / 2);
                  v60 = 1;
                }
                else
                {
                  v63 = *(float *)(v4 + 24);
                }
                v137 = v63;
                if ( (*(_DWORD *)(v4 + 16) & 0x4000) != 0 )
                {
                  v61 = 4;
                  v64 = v110 - v108;
                  v60 = 2;
                }
                else
                {
                  v64 = *(float *)(v4 + 28);
                }
                v3 = v103;
                v9 = v100;
                v65 = *(_DWORD *)a2;
                v66 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                v138 = v64;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v107,
                                        v66,
                                        v65,
                                        v100,
                                        v60,
                                        v23,
                                        v24,
                                        (double *)&v139,
                                        &v136,
                                        3u,
                                        v103,
                                        v61,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v90 = 1013;
                  goto LABEL_147;
                }
              }
              break;
            case 0x103:
              if ( (v44 & 1) != 0 )
              {
                v140 = v108;
                *(double *)&v139 = (double)(v28 - (int)v133);
                *((double *)&v139 + 1) = (double)(v104 - v38);
                v138 = v110;
                v136 = (double)(v33 - (int)v132);
                v137 = (double)(v31 - DWORD1(v132));
              }
              else
              {
                if ( (v44 & 2) != 0 )
                {
                  *(double *)&v139 = *(float *)(v4 + 32);
                  *((double *)&v139 + 1) = *(float *)(v4 + 36);
                  v140 = *(float *)(v4 + 40);
                }
                else
                {
                  v139 = _xmm;
                  v140 = DOUBLE_1_0;
                }
                v136 = *(float *)(v4 + 20);
                v137 = *(float *)(v4 + 24);
                v138 = *(float *)(v4 + 28);
              }
              if ( (v44 & 4) != 0 )
              {
                v54 = *(_DWORD *)(v4 + 48);
                LODWORD(v119) = *(_DWORD *)(v4 + 44);
                v120 = *(_DWORD *)(v4 + 52);
                HIDWORD(v119) = v54;
              }
              else
              {
                v120 = 0;
                v119 = 0x3F0000003F000000LL;
              }
              v3 = v103;
              v9 = v100;
              v55 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v56 = v120;
              v92 = v103;
              *(_QWORD *)(v55 + 64) = v119;
              *(_DWORD *)(v55 + 72) = v56;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v107,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v100,
                                      4,
                                      v23,
                                      v24,
                                      (double *)&v139,
                                      &v136,
                                      3u,
                                      v92,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v90 = 1067;
                goto LABEL_147;
              }
              break;
            case 0x104:
              if ( (v44 & 2) != 0 )
              {
                v45 = *(float *)(v4 + 32);
                *(double *)&v139 = v45;
                v46 = *(float *)(v4 + 36);
                *((double *)&v139 + 1) = v46;
                v47 = *(float *)(v4 + 40);
              }
              else
              {
                v139 = 0LL;
                v46 = 0.0;
                v47 = 0.0;
                v45 = 0.0;
              }
              v140 = v47;
              v48 = *(float *)(v4 + 20);
              v136 = v48;
              v49 = *(float *)(v4 + 24);
              v137 = v49;
              v50 = *(float *)(v4 + 28);
              v138 = v50;
              if ( v99 )
              {
                *(_QWORD *)&v139 = *(_QWORD *)&v45 ^ _xmm;
                *((_QWORD *)&v139 + 1) = *(_QWORD *)&v46 ^ _xmm;
                *(_QWORD *)&v140 = *(_QWORD *)&v47 ^ _xmm;
                *(_QWORD *)&v136 = *(_QWORD *)&v48 ^ _xmm;
                *(_QWORD *)&v137 = *(_QWORD *)&v49 ^ _xmm;
                *(_QWORD *)&v138 = *(_QWORD *)&v50 ^ _xmm;
              }
              v51 = (__m128)*(unsigned int *)(v4 + 48);
              v3 = v103;
              v9 = v100;
              v52 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v91 = v103;
              v130 = *(_DWORD *)(v4 + 52);
              v53 = v130;
              *(_QWORD *)(v52 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v4 + 44), v51).m128_u64[0];
              *(_DWORD *)(v52 + 84) = v53;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v107,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v100,
                                      3,
                                      v23,
                                      v24,
                                      (double *)&v139,
                                      &v136,
                                      3u,
                                      v91,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v90 = 1110;
                goto LABEL_147;
              }
              break;
            default:
              v3 = v103;
              v9 = v100;
              break;
          }
        }
        else
        {
          if ( (v44 & 1) != 0 )
          {
            v102 = 0uLL;
            *(double *)v106.m128_u64 = (double)(v37 - v112);
            *(double *)&v106.m128_u64[1] = (double)(v43 - v109);
          }
          v80 = v126;
          if ( v97 )
          {
            v81 = v123 + *(double *)&v102.m128_u64[v126];
            v123 = 0.0;
            *(double *)&v102.m128_u64[v126] = v81;
          }
          if ( v98 )
          {
            v82 = &v121;
            v83 = *(double *)&v106.m128_u64[v80] + v121;
            v121 = *(double *)&v106.m128_u64[v80];
            *(double *)&v106.m128_u64[v80] = v83;
          }
          else
          {
            v82 = 0LL;
          }
          v3 = v103;
          v84 = v107;
          v9 = v100;
          ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                  (__int64)v107,
                                  *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                  *(_DWORD *)a2,
                                  v100,
                                  0,
                                  v23,
                                  v24,
                                  (double *)v102.m128_u64,
                                  (double *)v106.m128_u64,
                                  2u,
                                  v103,
                                  0,
                                  (double *)((unsigned __int64)&v123 & -(__int64)v97),
                                  v82,
                                  v80);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v90 = 823;
            goto LABEL_147;
          }
          if ( v95 )
          {
            for ( j = 0LL; j < 4; ++j )
              v142[j] = (double)*((int *)&v134 + j);
            for ( k = 0LL; k < 4; ++k )
              v141[k] = (double)*((int *)&v135 + k);
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v84,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v100,
                                    6,
                                    v23,
                                    v24,
                                    v142,
                                    v141,
                                    4u,
                                    v3,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v90 = 844;
              goto LABEL_147;
            }
          }
        }
        v16 = v96;
      }
    }
    v100 = ++v9;
    if ( v9 >= *((_DWORD *)a2 + 1) )
      goto LABEL_163;
  }
  ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 72LL))(v11, &v134);
  if ( ThemeAnimationTransform < 0 )
  {
    v90 = 664;
LABEL_161:
    v87 = ThemeAnimationTransform;
    goto LABEL_162;
  }
  ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v11 + 80LL))(v11, &v135);
  ThemeAnimationTransform = ThemeTimingFunction;
  if ( ThemeTimingFunction >= 0 )
    goto LABEL_21;
  v90 = 665;
LABEL_147:
  v87 = ThemeTimingFunction;
LABEL_162:
  MilInstrumentationCheckHR(0x14u, 0LL, 0LL, v87, v90);
LABEL_163:
  if ( v4 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v4);
LABEL_165:
  if ( v3 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v3);
LABEL_167:
  if ( v114 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v114->lpVtbl->Release)(v114);
  return (unsigned int)ThemeAnimationTransform;
}
