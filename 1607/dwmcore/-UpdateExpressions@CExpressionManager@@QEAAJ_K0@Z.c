/*
 * XREFs of ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90
 * Callers:
 *     ?UpdateExpressions@CComposition@@QEAAXXZ @ 0x18003B674 (-UpdateExpressions@CComposition@@QEAAXXZ.c)
 * Callees:
 *     ?InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z @ 0x1800195E0 (-InsertDependenciesInOrder@CKeyframeAnimation@@UEAAX_K@Z.c)
 *     ?InsertDependenciesInOrder@CExpression@@UEAAX_K@Z @ 0x180019810 (-InsertDependenciesInOrder@CExpression@@UEAAX_K@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x180089CA4 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Release@CResource@@UEAAKXZ @ 0x18008DDD0 (-Release@CResource@@UEAAKXZ.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?AddMultipleAndSet@?$DynArrayImpl@$00@@IEAAJIIPEBX@Z @ 0x1800A3774 (-AddMultipleAndSet@-$DynArrayImpl@$00@@IEAAJIIPEBX@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     _TlgWrite @ 0x180114534 (_TlgWrite.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180137834 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180137960 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CheckForIdle@CInteractionTracker@@AEAA_N_N@Z @ 0x18014A2B0 (-CheckForIdle@CInteractionTracker@@AEAA_N_N@Z.c)
 *     ?SendPendingCallbacks@CInteractionTracker@@QEAAXXZ @ 0x18014B1A8 (-SendPendingCallbacks@CInteractionTracker@@QEAAXXZ.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x18015CAF8 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x18015CB10 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x18015CB44 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z @ 0x180168B54 (-UpdateConfigurationIfDirty@CChainingHelper@@QEAAXPEAVCInteraction@@@Z.c)
 */

__int64 __fastcall CExpressionManager::UpdateExpressions(
        CExpressionManager *this,
        __int64 a2,
        void (__fastcall *a3)(CExpression *this, __int64 a2))
{
  unsigned __int8 v4; // cl
  double v5; // rbx
  char v6; // al
  char v7; // cl
  bool v8; // zf
  bool v9; // sf
  unsigned int v11; // r15d
  int v12; // edi
  unsigned int v13; // esi
  int v14; // r12d
  int v15; // r12d
  unsigned int v16; // edi
  void (__fastcall *v17)(CExpression *, __int64); // rax
  bool v18; // r12
  unsigned int v19; // edi
  unsigned int v20; // ebx
  __int64 v21; // rax
  _DWORD *v22; // rsi
  unsigned int j; // edi
  unsigned int k; // edi
  __int64 (__fastcall *v26)(CKeyframeAnimation *); // rax
  unsigned int v27; // eax
  unsigned int *v28; // rdi
  CResource *v29; // rcx
  void (*v30)(void); // rax
  int v31; // eax
  __int64 v32; // rsi
  unsigned int v33; // edi
  __int64 v34; // rax
  __int64 v35; // rcx
  unsigned int v36; // r13d
  unsigned int v37; // edx
  double v38; // rdi
  unsigned __int64 v39; // r12
  char v40; // al
  __int64 v41; // rax
  void (__fastcall *v42)(_QWORD, unsigned __int64, void (__fastcall *)(CExpression *, __int64)); // rax
  __int64 v43; // r8
  __int64 v44; // rax
  __int64 v45; // rsi
  unsigned int v46; // eax
  unsigned int v47; // edx
  int v48; // eax
  __int64 v49; // rsi
  char *v50; // r15
  unsigned int i; // edi
  unsigned int v52; // eax
  unsigned int v53; // edx
  __int64 v54; // rdi
  int v55; // eax
  LARGE_INTEGER v56; // rsi
  __int128 v57; // xmm1
  __int128 v58; // xmm0
  __int128 v59; // xmm1
  int v60; // eax
  __int64 Elapsed; // rax
  __int64 v62; // rax
  __int64 v63; // rsi
  struct CInteraction *v64; // rdx
  double v65; // xmm6_8
  double v66; // xmm2_8
  __int64 v67; // rax
  double DurationAverage; // xmm0_8
  __int64 v69; // rcx
  double v70; // xmm0_8
  __int64 v71; // rcx
  double v72; // xmm0_8
  __int64 v73; // rcx
  double v74; // xmm0_8
  __int64 v75; // rcx
  double v76; // xmm0_8
  __int64 v77; // rcx
  double v78; // xmm0_8
  LPCGUID v79; // r8
  LPCGUID v80; // r9
  char v81; // [rsp+31h] [rbp-CFh] BYREF
  unsigned int v82; // [rsp+34h] [rbp-CCh] BYREF
  LARGE_INTEGER Frequency; // [rsp+38h] [rbp-C8h] BYREF
  double v84; // [rsp+40h] [rbp-C0h] BYREF
  double v85; // [rsp+48h] [rbp-B8h] BYREF
  double v86; // [rsp+50h] [rbp-B0h] BYREF
  double v87; // [rsp+58h] [rbp-A8h] BYREF
  double v88; // [rsp+60h] [rbp-A0h] BYREF
  double v89; // [rsp+68h] [rbp-98h] BYREF
  double v90; // [rsp+70h] [rbp-90h] BYREF
  _OWORD v91[4]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v92; // [rsp+C0h] [rbp-40h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D0h] [rbp-30h] BYREF
  double *v94; // [rsp+F0h] [rbp-10h]
  __int64 v95; // [rsp+F8h] [rbp-8h]
  char *v96; // [rsp+100h] [rbp+0h]
  __int64 v97; // [rsp+108h] [rbp+8h]
  char *v98; // [rsp+110h] [rbp+10h]
  __int64 v99; // [rsp+118h] [rbp+18h]
  int *v100; // [rsp+120h] [rbp+20h]
  __int64 v101; // [rsp+128h] [rbp+28h]
  char *v102; // [rsp+130h] [rbp+30h]
  __int64 v103; // [rsp+138h] [rbp+38h]
  double *v104; // [rsp+140h] [rbp+40h]
  __int64 v105; // [rsp+148h] [rbp+48h]
  double *v106; // [rsp+150h] [rbp+50h]
  __int64 v107; // [rsp+158h] [rbp+58h]
  double *v108; // [rsp+160h] [rbp+60h]
  __int64 v109; // [rsp+168h] [rbp+68h]
  double *v110; // [rsp+170h] [rbp+70h]
  __int64 v111; // [rsp+178h] [rbp+78h]
  double *v112; // [rsp+180h] [rbp+80h]
  __int64 v113; // [rsp+188h] [rbp+88h]
  double *v114; // [rsp+190h] [rbp+90h]
  __int64 v115; // [rsp+198h] [rbp+98h]
  void (__fastcall **v116)(CExpression *, __int64); // [rsp+1A0h] [rbp+A0h]
  __int64 v117; // [rsp+1A8h] [rbp+A8h]
  void (__fastcall *v118)(CExpression *, __int64); // [rsp+220h] [rbp+120h] BYREF

  v118 = a3;
  v4 = *((_BYTE *)this + 384);
  v5 = 0.0;
  v82 = 0;
  v6 = v4 >> 2;
  v7 = v4 & 0xFB;
  v6 &= 1u;
  v84 = 0.0;
  v8 = *((_DWORD *)this + 24) == 0;
  v9 = *((int *)this + 24) < 0;
  *((_BYTE *)this + 385) = v6;
  v11 = 0;
  v81 = v6;
  *((_BYTE *)this + 384) = v7;
  if ( (v9 || v8) && !*((_DWORD *)this + 76) && !*((_DWORD *)this + 68) && (v7 & 2) == 0 )
    return 0LL;
  if ( *((_DWORD *)this + 44) || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    CExpressionPerformanceCounter::Reset((CExpressionManager *)((char *)this + 104));
    QpcStopwatch::Start((QpcStopwatch *)&v84);
    v5 = v84;
  }
  v12 = *((_DWORD *)this + 14);
  v13 = *((_DWORD *)this + 4);
  if ( v13 > -1 - v12 )
  {
    v15 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
    v16 = -2147024882;
  }
  else
  {
    v14 = *((_DWORD *)this + 22);
    if ( v14 - v12 >= v13 )
      goto LABEL_6;
    memset_0(v91, 0, sizeof(v91));
    LODWORD(v92) = 18;
    v54 = v13 + v12 - v14;
    BYTE4(v92) = 0;
    v55 = DynArrayImpl<1>::AddMultiple((char *)this + 64, 72LL, (unsigned int)v54, &Frequency);
    v15 = v55;
    if ( v55 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v55, 0xE5u);
    }
    else if ( (_DWORD)v54 )
    {
      v56 = Frequency;
      v57 = v91[1];
      *(_OWORD *)Frequency.QuadPart = v91[0];
      v58 = v91[2];
      *(_OWORD *)(v56.QuadPart + 16) = v57;
      v59 = v91[3];
      *(_OWORD *)(v56.QuadPart + 32) = v58;
      *(_QWORD *)&v58 = v92;
      *(_OWORD *)(v56.QuadPart + 48) = v59;
      *(_QWORD *)(v56.QuadPart + 64) = v58;
      qmemcpy((void *)(v56.QuadPart + 72), (const void *)v56.QuadPart, 8 * ((unsigned __int64)(72 * v54 - 72) >> 3));
    }
    if ( v15 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x49u);
    else
LABEL_6:
      v15 = 0;
    v16 = v15;
    if ( v15 >= 0 )
    {
      *((_BYTE *)this + 384) |= 1u;
      v17 = v118;
      *((_QWORD *)this + 3) = a2;
      *((_QWORD *)this + 4) = v17;
      if ( *((_BYTE *)this + 385) )
      {
        Frequency.QuadPart = 0LL;
        if ( CCommonRegistryData::m_fLogExpressionPerfStats )
          QpcStopwatch::Start((QpcStopwatch *)&Frequency);
        v36 = 0;
        if ( *((_DWORD *)this + 8 * *((unsigned int *)this + 45) + 52) )
        {
          v37 = CBaseExpression::s_recursionLevel;
          a3 = CExpression::InsertDependenciesInOrder;
          do
          {
            v38 = *(double *)(*((_QWORD *)this + 4 * *((unsigned int *)this + 45) + 23) + 8LL * v36);
            if ( v38 != 0.0 )
            {
              v39 = *((_QWORD *)this + 4);
              v40 = 0;
              if ( (int)++*(_DWORD *)(*(_QWORD *)&v38 + 204LL) <= 1
                && *(_QWORD *)(*(_QWORD *)&v38 + 208LL) != v39
                && v37 <= 0x10 )
              {
                v41 = **(_QWORD **)&v38;
                CBaseExpression::s_recursionLevel = v37 + 1;
                v42 = *(void (__fastcall **)(_QWORD, unsigned __int64, void (__fastcall *)(CExpression *, __int64)))(v41 + 136);
                if ( (char *)v42 == (char *)CExpression::InsertDependenciesInOrder )
                {
                  CExpression::InsertDependenciesInOrder(*(CExpression **)&v38, v39);
                }
                else if ( (char *)v42 == (char *)CKeyframeAnimation::InsertDependenciesInOrder )
                {
                  CKeyframeAnimation::InsertDependenciesInOrder(*(CKeyframeAnimation **)&v38, v39);
                }
                else
                {
                  v42(*(_QWORD *)&v38, v39, CExpression::InsertDependenciesInOrder);
                }
                if ( *(_BYTE *)(*(_QWORD *)&v38 + 228LL) )
                {
                  v44 = *(_QWORD *)(*(_QWORD *)&v38 + 16LL);
                  v85 = v38;
                  v45 = *(_QWORD *)(v44 + 168) + 32LL * (unsigned int)(1 - *(_DWORD *)(*(_QWORD *)(v44 + 168) + 180LL));
                  v46 = *(_DWORD *)(v45 + 208);
                  v47 = v46 + 1;
                  if ( v46 + 1 < v46 )
                  {
                    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
                  }
                  else if ( v47 > *(_DWORD *)(v45 + 204) )
                  {
                    v48 = DynArrayImpl<1>::AddMultipleAndSet(v45 + 184, 8LL, v43, &v85);
                    if ( v48 < 0 )
                      MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0xC0u);
                  }
                  else
                  {
                    *(double *)(*(_QWORD *)(v45 + 184) + 8LL * v46) = v85;
                    *(_DWORD *)(v45 + 208) = v47;
                  }
                }
                v40 = 1;
                a3 = CExpression::InsertDependenciesInOrder;
                v37 = CBaseExpression::s_recursionLevel;
              }
              *(_QWORD *)(*(_QWORD *)&v38 + 208LL) = v39;
              if ( v40 )
                CBaseExpression::s_recursionLevel = --v37;
              --*(_DWORD *)(*(_QWORD *)&v38 + 204LL);
            }
            ++v36;
          }
          while ( v36 < *((_DWORD *)this + 8 * *((unsigned int *)this + 45) + 52) );
        }
        *((_DWORD *)this + 8 * *((unsigned int *)this + 45) + 52) = 0;
        v8 = CCommonRegistryData::m_fLogExpressionPerfStats == 0;
        *((_DWORD *)this + 45) = 1 - *((_DWORD *)this + 45);
        *((_BYTE *)this + 385) = 0;
        if ( !v8 )
        {
          Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&Frequency);
          CExpressionPerformanceCounter::AddDurationSample((char *)this + 104, 2LL, Elapsed);
        }
      }
      *(_QWORD *)((char *)this + 388) = 0LL;
      v18 = (Microsoft_Windows_Dwm_CoreEnableBits & 0x800) != 0;
      v19 = 0;
      if ( *((_DWORD *)this + 8 * *((unsigned int *)this + 45) + 52) )
      {
        v20 = 0;
        do
        {
          v21 = *((_QWORD *)this + 4 * *((unsigned int *)this + 45) + 23);
          v22 = *(_DWORD **)(v21 + 8LL * v19);
          if ( v22 )
          {
            if ( v18 )
            {
              if ( (*(unsigned __int8 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)v22 + 48LL))(
                     *(_QWORD *)(v21 + 8LL * v19),
                     106LL) )
              {
                if ( (v22[113] & 3) != 0 )
                {
                  v62 = *((_QWORD *)v22 + 14);
                  if ( v62 )
                  {
                    ++*(_DWORD *)(v62 + 68);
                    *(_BYTE *)(*((_QWORD *)v22 + 2) + 496LL) = 1;
                  }
                }
              }
            }
            CBaseExpression::CalculateValue(
              (CBaseExpression *)v22,
              (CExpressionManager *)((char *)this + 40),
              *((_QWORD *)this + 4));
            v26 = *(__int64 (__fastcall **)(CKeyframeAnimation *))(*(_QWORD *)v22 + 120LL);
            if ( (char *)v26 == (char *)CExpression::GetMaxStackCount )
            {
              v27 = v22[76];
            }
            else if ( v26 == CKeyframeAnimation::GetMaxStackCount )
            {
              v27 = v22[110];
            }
            else
            {
              v27 = v26((CKeyframeAnimation *)v22);
            }
            if ( v27 > v20 )
              v20 = v27;
          }
          else
          {
            ++v11;
          }
          ++v19;
        }
        while ( v19 < *((_DWORD *)this + 8 * *((unsigned int *)this + 45) + 52) );
        v82 = v20;
        v5 = v84;
        if ( v11 > 0x100 )
        {
          v49 = 32LL * *((unsigned int *)this + 45);
          v50 = (char *)this + 32 * (unsigned int)(1 - *((_DWORD *)this + 45));
          for ( i = 0; i < *(_DWORD *)((char *)this + v49 + 208); ++i )
          {
            Frequency = *(LARGE_INTEGER *)(*(_QWORD *)((char *)this + v49 + 184) + 8LL * i);
            if ( Frequency.QuadPart )
            {
              v52 = *((_DWORD *)v50 + 52);
              v53 = v52 + 1;
              if ( v52 + 1 < v52 )
              {
                MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024362, 0xB5u);
              }
              else if ( v53 > *((_DWORD *)v50 + 51) )
              {
                v60 = DynArrayImpl<1>::AddMultipleAndSet(v50 + 184, 8LL, a3, &Frequency);
                if ( v60 < 0 )
                  MilInstrumentationCheckHR(0x14u, 0LL, 0, v60, 0xC0u);
              }
              else
              {
                *(LARGE_INTEGER *)(*((_QWORD *)v50 + 23) + 8LL * v52) = Frequency;
                *((_DWORD *)v50 + 52) = v53;
              }
            }
          }
          *(_DWORD *)((char *)this + v49 + 208) = 0;
          *((_DWORD *)this + 45) = 1 - *((_DWORD *)this + 45);
        }
      }
      *((_BYTE *)this + 384) &= 0xFCu;
      while ( *((_DWORD *)this + 68) )
      {
        v28 = (unsigned int *)*((_QWORD *)this + 31);
        CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v28 + 1), *v28);
        v29 = (CResource *)*((_QWORD *)v28 + 1);
        v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
        if ( (char *)v30 == (char *)CResource::Release )
          CResource::Release(v29);
        else
          v30();
        v31 = *((_DWORD *)this + 68);
        if ( v31 )
        {
          v32 = *((_QWORD *)this + 31);
          v33 = 0;
          if ( v31 != 1 )
          {
            do
            {
              v34 = 2LL * v33;
              v35 = 2LL * ++v33;
              *(_OWORD *)(v32 + 8 * v34) = *(_OWORD *)(v32 + 8 * v35);
            }
            while ( v33 < *((_DWORD *)this + 68) - 1 );
          }
          --*((_DWORD *)this + 68);
        }
        else
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
        }
      }
      for ( j = 0; j < *((_DWORD *)this + 76); ++j )
      {
        v63 = *(_QWORD *)(*((_QWORD *)this + 35) + 8LL * j);
        v64 = *(struct CInteraction **)(v63 + 552);
        if ( v64 )
          CChainingHelper::UpdateConfigurationIfDirty((CChainingHelper *)(v63 + 376), v64);
        if ( *(_DWORD *)(v63 + 204) )
          CInteractionTracker::CheckForIdle((CInteractionTracker *)v63, 1);
      }
      for ( k = 0; k < *((_DWORD *)this + 76); ++k )
        CInteractionTracker::SendPendingCallbacks(*(CInteractionTracker **)(*((_QWORD *)this + 35) + 8LL * k));
      v16 = 0;
      *((_DWORD *)this + 4) = v82;
      goto LABEL_20;
    }
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x18Cu);
LABEL_20:
  if ( v5 != 0.0 )
  {
    v65 = (double)(int)QpcStopwatch::GetElapsed((QpcStopwatch *)&v84);
    QueryPerformanceFrequency(&Frequency);
    v66 = (double)(int)Frequency.LowPart / 1000000.0;
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_1801EAA90 & 1) != 0 && (qword_1801EAA98 & 1) == qword_1801EAA98 )
    {
      v95 = 8LL;
      v94 = &v85;
      v97 = 4LL;
      v96 = (char *)this + 388;
      v99 = 4LL;
      v98 = (char *)this + 392;
      v67 = 32LL * *((unsigned int *)this + 45);
      v85 = v65 / v66;
      v82 = *(_DWORD *)((char *)this + v67 + 208);
      v100 = (int *)&v82;
      v102 = &v81;
      v101 = 4LL;
      v103 = 1LL;
      DurationAverage = CExpressionPerformanceCounter::GetDurationAverage((char *)this + 104, 0LL);
      v105 = 8LL;
      v104 = &v84;
      v84 = DurationAverage / v66;
      v70 = CExpressionPerformanceCounter::GetDurationAverage(v69, 1LL);
      v107 = 8LL;
      v106 = &v86;
      v86 = v70 / v66;
      v72 = CExpressionPerformanceCounter::GetDurationAverage(v71, 2LL);
      v109 = 8LL;
      v108 = &v87;
      v87 = v72 / v66;
      v74 = CExpressionPerformanceCounter::GetDurationAverage(v73, 3LL);
      v111 = 8LL;
      v110 = &v88;
      v88 = v74 / v66;
      v76 = CExpressionPerformanceCounter::GetDurationAverage(v75, 4LL);
      v113 = 8LL;
      v112 = &v89;
      v89 = v76 / v66;
      v78 = CExpressionPerformanceCounter::GetDurationAverage(v77, 5LL);
      v115 = 8LL;
      v114 = &v90;
      v116 = &v118;
      v117 = 8LL;
      v90 = v78 / v66;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_1801C3A5A, v79, v80, 0xEu, &pData);
    }
  }
  return v16;
}
