/*
 * XREFs of ?SetupStoryboard@CAnimationEngine@@AEAAJPEAVCTransitionVisualSet@1@@Z @ 0x180011B38
 * Callers:
 *     ?StartAnimations@CAnimationEngine@@AEAAJXZ @ 0x1800130A4 (-StartAnimations@CAnimationEngine@@AEAAJXZ.c)
 * Callees:
 *     ?_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z @ 0x1800115B4 (-_CalculateStaggerDelay@CAnimationEngine@@AEAAXPEAXHHIPEAN@Z.c)
 *     ?AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NNPEAN2IPEAUTA_TIMINGFUNCTION@@W4TransformMode@@22I@Z @ 0x1800118E0 (-AddToStoryboard@CAnimationEngine@@AEAAJPEAUIUIAnimationStoryboard2@@IIW4TransformAttribute@1@NN.c)
 *     ?RoundToNearestInt@@YAHM@Z @ 0x18001517C (-RoundToNearestInt@@YAHM@Z.c)
 *     ?GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z @ 0x1800151B4 (-GetTheme@CDesktopManager@@SAPEAXW4ThemeClassName@1@@Z.c)
 *     ?SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z @ 0x18003F454 (-SetStoryboard@CTransitionVisualSet@CAnimationEngine@@QEAAXPEAUIUIAnimationStoryboard2@@@Z.c)
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800503F8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     memset_0 @ 0x1800505A6 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800505E0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAnimationEngine::SetupStoryboard(
        CAnimationEngine *this,
        struct CAnimationEngine::CTransitionVisualSet *a2)
{
  __int64 v4; // rcx
  float *v5; // r14
  __int64 v6; // rdi
  int v7; // eax
  int ThemeAnimationTransform; // ebx
  int v9; // eax
  unsigned int v10; // r15d
  __int64 v11; // rax
  __int64 v12; // rsi
  int ThemeTimingFunction; // eax
  float v14; // xmm10_4
  __int64 v15; // rcx
  void *Theme; // rax
  unsigned int v17; // esi
  CAnimationEngine *v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned int v21; // edx
  __int64 v22; // rbx
  __int64 v23; // rax
  double v24; // xmm6_8
  double v25; // xmm7_8
  __int64 v26; // rax
  __int64 v27; // rbx
  __int64 v28; // rax
  int v29; // r13d
  int v30; // esi
  int v31; // eax
  int v32; // r14d
  int v33; // r8d
  int v34; // r15d
  int v35; // ecx
  int v36; // eax
  int v37; // eax
  int v38; // esi
  int v39; // r10d
  int v40; // ecx
  int v41; // edx
  int v42; // eax
  int v43; // eax
  int v44; // edx
  int v45; // r9d
  double v46; // xmm1_8
  double v47; // xmm2_8
  double v48; // xmm0_8
  double v49; // xmm3_8
  double v50; // xmm4_8
  double v51; // xmm5_8
  __m128 v52; // xmm1
  __int64 v53; // rcx
  int v54; // eax
  int v55; // xmm1_4
  __int64 v56; // rcx
  int v57; // eax
  int v58; // r8d
  __m128i v59; // xmm0
  struct IUIAnimationStoryboard2 *v60; // rdx
  int v61; // ecx
  unsigned int v62; // eax
  double v63; // xmm0_8
  double v64; // xmm0_8
  float v65; // xmm0_4
  int v66; // r8d
  struct IUIAnimationStoryboard2 *v67; // rdx
  __int64 v68; // rax
  __m128 v69; // xmm1
  __m128 v70; // xmm0
  __int64 v71; // rcx
  float v72; // xmm0_4
  float v73; // xmm1_4
  int v74; // r8d
  struct IUIAnimationStoryboard2 *v75; // rdx
  float v76; // xmm1_4
  float v77; // xmm1_4
  int v78; // xmm1_4
  __int64 v79; // rcx
  int v80; // eax
  __int64 v81; // rdx
  double v82; // xmm0_8
  double *v83; // r8
  double v84; // xmm0_8
  CAnimationEngine *v85; // r13
  __int64 j; // rax
  __int64 k; // rax
  int v88; // r9d
  unsigned int v90; // [rsp+28h] [rbp-E0h]
  unsigned int v91; // [rsp+28h] [rbp-E0h]
  float *v92; // [rsp+58h] [rbp-B0h]
  float *v93; // [rsp+58h] [rbp-B0h]
  float *v94; // [rsp+58h] [rbp-B0h]
  float *v95; // [rsp+58h] [rbp-B0h]
  char v96; // [rsp+88h] [rbp-80h]
  char v97; // [rsp+89h] [rbp-7Fh]
  bool v98; // [rsp+8Ah] [rbp-7Eh]
  bool v99; // [rsp+8Bh] [rbp-7Dh]
  unsigned int v100; // [rsp+8Ch] [rbp-7Ch]
  unsigned int v101; // [rsp+90h] [rbp-78h]
  unsigned int v102; // [rsp+94h] [rbp-74h] BYREF
  __m128 v103; // [rsp+98h] [rbp-70h] BYREF
  float *v104; // [rsp+A8h] [rbp-60h]
  int v105; // [rsp+B0h] [rbp-58h] BYREF
  int v106; // [rsp+B4h] [rbp-54h]
  __m128 v107; // [rsp+B8h] [rbp-50h] BYREF
  CAnimationEngine *v108; // [rsp+C8h] [rbp-40h]
  float v109; // [rsp+D0h] [rbp-38h] BYREF
  float v110; // [rsp+D4h] [rbp-34h] BYREF
  int v111; // [rsp+D8h] [rbp-30h]
  int v112; // [rsp+DCh] [rbp-2Ch]
  unsigned int i; // [rsp+E0h] [rbp-28h]
  unsigned int v114; // [rsp+E4h] [rbp-24h] BYREF
  float v115; // [rsp+E8h] [rbp-20h] BYREF
  struct IUIAnimationStoryboard2 *v116; // [rsp+F0h] [rbp-18h] BYREF
  float v117; // [rsp+F8h] [rbp-10h] BYREF
  __int64 v118; // [rsp+100h] [rbp-8h]
  int v119; // [rsp+108h] [rbp+0h]
  __int64 v120; // [rsp+110h] [rbp+8h]
  int v121; // [rsp+118h] [rbp+10h]
  __int64 v122; // [rsp+120h] [rbp+18h]
  double v123; // [rsp+128h] [rbp+20h] BYREF
  double v124; // [rsp+130h] [rbp+28h] BYREF
  unsigned int v125; // [rsp+138h] [rbp+30h] BYREF
  unsigned int v126; // [rsp+13Ch] [rbp+34h] BYREF
  float v127; // [rsp+140h] [rbp+38h] BYREF
  double v128; // [rsp+148h] [rbp+40h] BYREF
  double v129; // [rsp+150h] [rbp+48h] BYREF
  double v130[2]; // [rsp+158h] [rbp+50h] BYREF
  int v131; // [rsp+168h] [rbp+60h]
  int v132; // [rsp+178h] [rbp+70h]
  __int64 v133; // [rsp+180h] [rbp+78h] BYREF
  __int64 v134; // [rsp+188h] [rbp+80h]
  __int64 v135; // [rsp+190h] [rbp+88h] BYREF
  __int64 v136; // [rsp+198h] [rbp+90h]
  _QWORD v137[2]; // [rsp+1A0h] [rbp+98h] BYREF
  _QWORD v138[2]; // [rsp+1B0h] [rbp+A8h] BYREF
  double v139; // [rsp+1C0h] [rbp+B8h] BYREF
  double v140; // [rsp+1C8h] [rbp+C0h]
  double v141; // [rsp+1D0h] [rbp+C8h]
  __int128 v142; // [rsp+1D8h] [rbp+D0h] BYREF
  double v143; // [rsp+1E8h] [rbp+E0h]
  double v144[4]; // [rsp+1F0h] [rbp+E8h] BYREF
  double v145[4]; // [rsp+210h] [rbp+108h] BYREF

  v100 = *((_DWORD *)a2 + 3);
  v108 = this;
  v4 = *((_QWORD *)this + 1);
  v116 = 0LL;
  v5 = 0LL;
  v104 = 0LL;
  v6 = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, struct IUIAnimationStoryboard2 **))(*(_QWORD *)v4 + 48LL))(v4, &v116);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v90 = 626;
LABEL_3:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v90);
    goto LABEL_163;
  }
  CAnimationEngine::CTransitionVisualSet::SetStoryboard(a2, v116);
  v9 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, _QWORD, _QWORD))v116->lpVtbl->SetTag)(
         v116,
         0LL,
         *(unsigned int *)a2);
  ThemeAnimationTransform = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x276u);
    goto LABEL_163;
  }
  v7 = ((__int64 (__fastcall *)(struct IUIAnimationStoryboard2 *, CAnimationEngine *, _QWORD, _QWORD))v116->lpVtbl->SetStoryboardEventHandler)(
         v116,
         this,
         0LL,
         0LL);
  ThemeAnimationTransform = v7;
  if ( v7 < 0 )
  {
    v90 = 631;
    goto LABEL_3;
  }
  v10 = 0;
  v101 = 0;
  if ( !*((_DWORD *)a2 + 1) )
    goto LABEL_163;
  while ( 1 )
  {
    v135 = 0LL;
    v136 = 0LL;
    v133 = 0LL;
    v134 = 0LL;
    v137[0] = 0LL;
    v137[1] = 0LL;
    v138[0] = 0LL;
    v138[1] = 0LL;
    v11 = *((_QWORD *)a2 + 3);
    v122 = v10;
    v12 = **(_QWORD **)(v11 + 8LL * v10);
    v96 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 256LL))(v12);
    v97 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v12 + 136LL))(v12);
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 16LL))(v12, &v135);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 651;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v12 + 24LL))(v12, &v133);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 652;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 32LL))(v12, &v110);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 653;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 40LL))(v12, &v109);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 654;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 48LL))(v12, &v117);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 655;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 56LL))(v12, &v127);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 656;
      goto LABEL_157;
    }
    ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 64LL))(v12, &v125);
    if ( ThemeAnimationTransform < 0 )
    {
      v91 = 657;
      goto LABEL_157;
    }
    if ( (*(int (__fastcall **)(__int64, float *))(*(_QWORD *)v12 + 112LL))(v12, &v115) < 0 )
      v115 = 0.0;
    if ( v96 )
      break;
LABEL_21:
    v124 = 0.0;
    v123 = 0.0;
    v98 = 0;
    v14 = fmaxf(0.0099999998, 1.0 - v115);
    v99 = 0;
    if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v12 + 88LL))(v12, &v126) >= 0 )
    {
      v98 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v12 + 96LL))(v12, &v124) >= 0;
      v99 = (*(int (__fastcall **)(__int64, double *))(*(_QWORD *)v12 + 104LL))(v12, &v123) >= 0;
    }
    v15 = **(_QWORD **)(*((_QWORD *)a2 + 3) + 8LL * v10);
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v15 + 128LL))(v15, &v105);
    v128 = 0.0;
    v114 = 0;
    Theme = (void *)CDesktopManager::GetTheme(3LL);
    v17 = v100;
    CAnimationEngine::_CalculateStaggerDelay(v18, Theme, v100, v105, v125, &v128);
    v19 = CDesktopManager::GetTheme(3LL);
    if ( (int)GetThemeAnimationProperty(v19, v100, (unsigned int)v105, 1LL, &v114, 4, &v102) >= 0 )
    {
      for ( i = 0; i < v114; ++i )
      {
        v20 = CDesktopManager::GetTheme(3LL);
        ThemeAnimationTransform = GetThemeAnimationTransform(v20, v17, (unsigned int)v105, v21, 0LL, 0, &v102);
        if ( ThemeAnimationTransform != -2147024662 )
          continue;
        v22 = v102;
        if ( v6 )
          (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
            WPF::g_pProcessHeap,
            v6);
        v6 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 8LL))(
               WPF::g_pProcessHeap,
               v22);
        if ( !v6 )
        {
          ThemeAnimationTransform = -2147024882;
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2C8u);
          goto LABEL_161;
        }
        v23 = CDesktopManager::GetTheme(3LL);
        ThemeTimingFunction = GetThemeAnimationTransform(v23, v17, (unsigned int)v105, i, v6, v22, &v102);
        ThemeAnimationTransform = ThemeTimingFunction;
        if ( ThemeTimingFunction < 0 )
        {
          v91 = 715;
          goto LABEL_143;
        }
        v24 = ((float)((float)*(int *)(v6 + 8) / 1000.0) + v128) * v14;
        v25 = (float)((float)((float)*(int *)(v6 + 12) / 1000.0) * v14);
        v26 = CDesktopManager::GetTheme(4LL);
        if ( (unsigned int)GetThemeTimingFunction(v26, *(unsigned int *)(v6 + 4), 0LL, 0LL, &v102) == -2147024662 )
        {
          v27 = v102;
          if ( v5 )
            (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
              WPF::g_pProcessHeap,
              v5);
          v104 = (float *)(*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                     + 8LL))(
                            WPF::g_pProcessHeap,
                            v27);
          v5 = v104;
          if ( !v104 )
          {
            ThemeAnimationTransform = -2147024882;
            MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x2E2u);
            goto LABEL_159;
          }
          v28 = CDesktopManager::GetTheme(4LL);
          ThemeTimingFunction = GetThemeTimingFunction(v28, *(unsigned int *)(v6 + 4), v5, (unsigned int)v27, &v102);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v91 = 740;
            goto LABEL_143;
          }
        }
        v103 = 0uLL;
        v107 = 0uLL;
        v142 = 0uLL;
        v143 = 0.0;
        v139 = 0.0;
        v140 = 0.0;
        v141 = 0.0;
        memset_0(v145, 0, sizeof(v145));
        memset_0(v144, 0, sizeof(v144));
        v29 = v136;
        v30 = v135;
        v111 = RoundToNearestInt((float)(v135 + v136) * 0.5);
        v106 = HIDWORD(v136);
        v31 = RoundToNearestInt((float)(HIDWORD(v136) + HIDWORD(v135)) * 0.5);
        v32 = HIDWORD(v134);
        v33 = v31;
        v34 = v134;
        v112 = v31;
        if ( v96 )
          goto LABEL_42;
        v35 = v29 - v30;
        if ( v29 - v30 < 0 )
          v35 = 0;
        v36 = v134 - v133;
        if ( (int)v134 - (int)v133 < 0 )
          v36 = 0;
        if ( v35 == v36 )
        {
LABEL_42:
          v38 = v111 + v133 - v135;
          if ( v96 )
          {
            v39 = HIDWORD(v135);
            v41 = HIDWORD(v133);
LABEL_50:
            v44 = v33 + v41 - v39;
            goto LABEL_51;
          }
        }
        else
        {
          v37 = RoundToNearestInt((float)(v134 + v133) * 0.5);
          v33 = v112;
          v38 = v37;
        }
        v39 = HIDWORD(v135);
        v40 = v106 - HIDWORD(v135);
        v41 = HIDWORD(v133);
        if ( v106 - HIDWORD(v135) < 0 )
          v40 = 0;
        v42 = v32 - HIDWORD(v133);
        if ( v32 - HIDWORD(v133) < 0 )
          v42 = 0;
        if ( v40 == v42 )
          goto LABEL_50;
        v43 = RoundToNearestInt((float)(v32 + HIDWORD(v133)) * 0.5);
        v39 = HIDWORD(v135);
        v44 = v43;
LABEL_51:
        v45 = *(_DWORD *)(v6 + 16);
        if ( *(_DWORD *)v6 )
        {
          switch ( *(_DWORD *)v6 )
          {
            case 1:
              if ( (v45 & 1) != 0 )
              {
                v103.m128_u64[0] = 0x3FF0000000000000LL;
                v103.m128_u64[1] = 0x3FF0000000000000LL;
                if ( v29 == (_DWORD)v135 )
                  v76 = FLOAT_1_0;
                else
                  v76 = (float)(v34 - v133) / (float)(v29 - v135);
                *(double *)v107.m128_u64 = v76;
                if ( v106 == v39 )
                  v77 = FLOAT_1_0;
                else
                  v77 = (float)(v32 - HIDWORD(v133)) / (float)(v106 - v39);
                *(double *)&v107.m128_u64[1] = v77;
              }
              else
              {
                if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
                {
                  *(double *)v103.m128_u64 = *(float *)(v6 + 28);
                  *(double *)&v103.m128_u64[1] = *(float *)(v6 + 32);
                }
                else
                {
                  v103.m128_u64[0] = 0x3FF0000000000000LL;
                  v103.m128_u64[1] = 0x3FF0000000000000LL;
                }
                *(double *)v107.m128_u64 = *(float *)(v6 + 20);
                *(double *)&v107.m128_u64[1] = *(float *)(v6 + 24);
              }
              v121 = 0;
              if ( (v45 & 4) != 0 )
              {
                v78 = *(_DWORD *)(v6 + 40);
                LODWORD(v120) = *(_DWORD *)(v6 + 36);
                HIDWORD(v120) = v78;
              }
              else
              {
                v120 = 0x3F0000003F000000LL;
              }
              v5 = v104;
              v10 = v101;
              v79 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v80 = v121;
              v95 = v104;
              *(_QWORD *)(v79 + 64) = v120;
              *(_DWORD *)(v79 + 72) = v80;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v108,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v101,
                                      4,
                                      v24,
                                      v25,
                                      (double *)v103.m128_u64,
                                      (double *)v107.m128_u64,
                                      2u,
                                      v95,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v91 = 893;
                goto LABEL_143;
              }
              break;
            case 2:
              if ( (v45 & 1) != 0 )
              {
                v72 = v117;
                v73 = v127;
              }
              else
              {
                if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
                  v72 = *(float *)(v6 + 24);
                else
                  v72 = v117;
                v73 = *(float *)(v6 + 20);
              }
              v5 = v104;
              v10 = v101;
              v74 = *(_DWORD *)a2;
              v75 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
              v129 = v73;
              v130[0] = v72;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v108,
                                      v75,
                                      v74,
                                      v101,
                                      5,
                                      v24,
                                      v25,
                                      v130,
                                      &v129,
                                      1u,
                                      v104,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v91 = 1132;
                goto LABEL_143;
              }
              break;
            case 0x100:
              if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
              {
                *(double *)v103.m128_u64 = *(float *)(v6 + 28);
                *(double *)&v103.m128_u64[1] = *(float *)(v6 + 32);
              }
              else
              {
                v103 = 0uLL;
              }
              *(double *)v107.m128_u64 = *(float *)(v6 + 20);
              *(double *)&v107.m128_u64[1] = *(float *)(v6 + 24);
              if ( v97 )
              {
                v103 = _mm_xor_ps(v103, (__m128)_xmm);
                v107 = _mm_xor_ps(v107, (__m128)_xmm);
              }
              v68 = *((_QWORD *)a2 + 3);
              v69 = (__m128)*(unsigned int *)(v6 + 40);
              v70 = (__m128)*(unsigned int *)(v6 + 36);
              v132 = 0;
              v5 = v104;
              v10 = v101;
              v71 = *(_QWORD *)(v68 + 8 * v122);
              v94 = v104;
              *(_QWORD *)(v71 + 76) = _mm_unpacklo_ps(v70, v69).m128_u64[0];
              *(_DWORD *)(v71 + 84) = 0;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v108,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v101,
                                      3,
                                      v24,
                                      v25,
                                      (double *)v103.m128_u64,
                                      (double *)v107.m128_u64,
                                      2u,
                                      v94,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v91 = 931;
                goto LABEL_143;
              }
              break;
            case 0x102:
              v143 = 0.0;
              v142 = 0LL;
              if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
              {
                v5 = v104;
                v10 = v101;
                v58 = *(_DWORD *)a2;
                v139 = (double)(v38 - v111);
                v59 = _mm_cvtsi32_si128(v44 - v112);
                v60 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                *(_QWORD *)&v140 = *(_OWORD *)&_mm_cvtepi32_pd(v59);
                v141 = (float)(v109 - v110);
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v108,
                                        v60,
                                        v58,
                                        v101,
                                        0,
                                        v24,
                                        v25,
                                        (double *)&v142,
                                        &v139,
                                        3u,
                                        v104,
                                        0,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v91 = 961;
                  goto LABEL_143;
                }
              }
              else
              {
                v61 = 0;
                v62 = 1;
                if ( (*(_DWORD *)(v6 + 16) & 0x1000) != 0 )
                {
                  v62 = 2;
                  v63 = (double)(((int)v133 + v34 - v29 - (int)v135) / 2);
                }
                else
                {
                  v63 = *(float *)(v6 + 20);
                }
                v139 = v63;
                if ( (*(_DWORD *)(v6 + 16) & 0x2000) != 0 )
                {
                  v62 = 3;
                  v64 = (double)((HIDWORD(v133) + v32 - v106 - v39) / 2);
                  v61 = 1;
                }
                else
                {
                  v64 = *(float *)(v6 + 24);
                }
                v140 = v64;
                if ( (*(_DWORD *)(v6 + 16) & 0x4000) != 0 )
                {
                  v62 = 4;
                  v65 = v109 - v110;
                  v61 = 2;
                }
                else
                {
                  v65 = *(float *)(v6 + 28);
                }
                v5 = v104;
                v10 = v101;
                v66 = *(_DWORD *)a2;
                v67 = (struct IUIAnimationStoryboard2 *)*((_QWORD *)a2 + 2);
                v141 = v65;
                ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                        (__int64)v108,
                                        v67,
                                        v66,
                                        v101,
                                        v61,
                                        v24,
                                        v25,
                                        (double *)&v142,
                                        &v139,
                                        3u,
                                        v104,
                                        v62,
                                        0LL,
                                        0LL,
                                        0);
                ThemeAnimationTransform = ThemeTimingFunction;
                if ( ThemeTimingFunction < 0 )
                {
                  v91 = 1013;
                  goto LABEL_143;
                }
              }
              break;
            case 0x103:
              if ( (v45 & 1) != 0 )
              {
                v143 = v110;
                *(double *)&v142 = (double)(v29 - (int)v135);
                *((double *)&v142 + 1) = (double)(v106 - v39);
                v141 = v109;
                v139 = (double)(v34 - (int)v133);
                v140 = (double)(v32 - HIDWORD(v133));
              }
              else
              {
                if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
                {
                  *(double *)&v142 = *(float *)(v6 + 32);
                  *((double *)&v142 + 1) = *(float *)(v6 + 36);
                  v143 = *(float *)(v6 + 40);
                }
                else
                {
                  v142 = _xmm;
                  v143 = DOUBLE_1_0;
                }
                v139 = *(float *)(v6 + 20);
                v140 = *(float *)(v6 + 24);
                v141 = *(float *)(v6 + 28);
              }
              if ( (v45 & 4) != 0 )
              {
                v55 = *(_DWORD *)(v6 + 48);
                LODWORD(v118) = *(_DWORD *)(v6 + 44);
                v119 = *(_DWORD *)(v6 + 52);
                HIDWORD(v118) = v55;
              }
              else
              {
                v119 = 0;
                v118 = 0x3F0000003F000000LL;
              }
              v5 = v104;
              v10 = v101;
              v56 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v57 = v119;
              v93 = v104;
              *(_QWORD *)(v56 + 64) = v118;
              *(_DWORD *)(v56 + 72) = v57;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v108,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v101,
                                      4,
                                      v24,
                                      v25,
                                      (double *)&v142,
                                      &v139,
                                      3u,
                                      v93,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v91 = 1067;
                goto LABEL_143;
              }
              break;
            case 0x104:
              if ( (*(_DWORD *)(v6 + 16) & 2) != 0 )
              {
                v46 = *(float *)(v6 + 32);
                *(double *)&v142 = v46;
                v47 = *(float *)(v6 + 36);
                *((double *)&v142 + 1) = v47;
                v48 = *(float *)(v6 + 40);
              }
              else
              {
                v142 = 0LL;
                v47 = 0.0;
                v48 = 0.0;
                v46 = 0.0;
              }
              v143 = v48;
              v49 = *(float *)(v6 + 20);
              v139 = v49;
              v50 = *(float *)(v6 + 24);
              v140 = v50;
              v51 = *(float *)(v6 + 28);
              v141 = v51;
              if ( v97 )
              {
                *(_QWORD *)&v142 = *(_QWORD *)&v46 ^ _xmm;
                *((_QWORD *)&v142 + 1) = *(_QWORD *)&v47 ^ _xmm;
                *(_QWORD *)&v143 = *(_QWORD *)&v48 ^ _xmm;
                *(_QWORD *)&v139 = *(_QWORD *)&v49 ^ _xmm;
                *(_QWORD *)&v140 = *(_QWORD *)&v50 ^ _xmm;
                *(_QWORD *)&v141 = *(_QWORD *)&v51 ^ _xmm;
              }
              v52 = (__m128)*(unsigned int *)(v6 + 48);
              v5 = v104;
              v10 = v101;
              v53 = *(_QWORD *)(*((_QWORD *)a2 + 3) + 8 * v122);
              v92 = v104;
              v131 = *(_DWORD *)(v6 + 52);
              v54 = v131;
              *(_QWORD *)(v53 + 76) = _mm_unpacklo_ps((__m128)*(unsigned int *)(v6 + 44), v52).m128_u64[0];
              *(_DWORD *)(v53 + 84) = v54;
              ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                      (__int64)v108,
                                      *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                      *(_DWORD *)a2,
                                      v101,
                                      3,
                                      v24,
                                      v25,
                                      (double *)&v142,
                                      &v139,
                                      3u,
                                      v92,
                                      0,
                                      0LL,
                                      0LL,
                                      0);
              ThemeAnimationTransform = ThemeTimingFunction;
              if ( ThemeTimingFunction < 0 )
              {
                v91 = 1110;
                goto LABEL_143;
              }
              break;
            default:
              v5 = v104;
              v10 = v101;
              break;
          }
        }
        else
        {
          if ( (v45 & 1) != 0 )
          {
            v103 = 0uLL;
            *(double *)v107.m128_u64 = (double)(v38 - v111);
            *(double *)&v107.m128_u64[1] = (double)(v44 - v112);
          }
          v81 = v126;
          if ( v98 )
          {
            v82 = v124 + *(double *)&v103.m128_u64[v126];
            v124 = 0.0;
            *(double *)&v103.m128_u64[v126] = v82;
          }
          if ( v99 )
          {
            v83 = &v123;
            v84 = *(double *)&v107.m128_u64[v81] + v123;
            v123 = *(double *)&v107.m128_u64[v81];
            *(double *)&v107.m128_u64[v81] = v84;
          }
          else
          {
            v83 = 0LL;
          }
          v5 = v104;
          v85 = v108;
          v10 = v101;
          ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                  (__int64)v108,
                                  *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                  *(_DWORD *)a2,
                                  v101,
                                  0,
                                  v24,
                                  v25,
                                  (double *)v103.m128_u64,
                                  (double *)v107.m128_u64,
                                  2u,
                                  v104,
                                  0,
                                  (double *)((unsigned __int64)&v124 & -(__int64)v98),
                                  v83,
                                  v81);
          ThemeAnimationTransform = ThemeTimingFunction;
          if ( ThemeTimingFunction < 0 )
          {
            v91 = 823;
            goto LABEL_143;
          }
          if ( v96 )
          {
            for ( j = 0LL; j < 4; ++j )
              v145[j] = (double)*((int *)v137 + j);
            for ( k = 0LL; k < 4; ++k )
              v144[k] = (double)*((int *)v138 + k);
            ThemeTimingFunction = CAnimationEngine::AddToStoryboard(
                                    (__int64)v85,
                                    *((struct IUIAnimationStoryboard2 **)a2 + 2),
                                    *(_DWORD *)a2,
                                    v101,
                                    6,
                                    v24,
                                    v25,
                                    v145,
                                    v144,
                                    4u,
                                    v5,
                                    0,
                                    0LL,
                                    0LL,
                                    0);
            ThemeAnimationTransform = ThemeTimingFunction;
            if ( ThemeTimingFunction < 0 )
            {
              v91 = 844;
              goto LABEL_143;
            }
          }
        }
        v17 = v100;
      }
    }
    v101 = ++v10;
    if ( v10 >= *((_DWORD *)a2 + 1) )
      goto LABEL_159;
  }
  ThemeAnimationTransform = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 72LL))(v12, v137);
  if ( ThemeAnimationTransform < 0 )
  {
    v91 = 664;
LABEL_157:
    v88 = ThemeAnimationTransform;
    goto LABEL_158;
  }
  ThemeTimingFunction = (*(__int64 (__fastcall **)(__int64, _QWORD *))(*(_QWORD *)v12 + 80LL))(v12, v138);
  ThemeAnimationTransform = ThemeTimingFunction;
  if ( ThemeTimingFunction >= 0 )
    goto LABEL_21;
  v91 = 665;
LABEL_143:
  v88 = ThemeTimingFunction;
LABEL_158:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v88, v91);
LABEL_159:
  if ( v6 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v6);
LABEL_161:
  if ( v5 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, float *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      v5);
LABEL_163:
  if ( v116 )
    ((void (__fastcall *)(struct IUIAnimationStoryboard2 *))v116->lpVtbl->Release)(v116);
  return (unsigned int)ThemeAnimationTransform;
}
