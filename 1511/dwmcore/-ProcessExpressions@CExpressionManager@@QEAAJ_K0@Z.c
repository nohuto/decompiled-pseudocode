/*
 * XREFs of ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4
 * Callers:
 *     ?PreRender@CCrossThreadComposition@@MEAAJ_N@Z @ 0x180082770 (-PreRender@CCrossThreadComposition@@MEAAJ_N@Z.c)
 * Callees:
 *     _TlgWrite @ 0x18001D460 (_TlgWrite.c)
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A1A58 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z @ 0x18011B754 (-GetDurationAverage@CExpressionPerformanceCounter@@QEAANW4ExpressionPerformanceLabel@@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18011B788 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Reset@CExpressionPerformanceCounter@@QEAAXXZ @ 0x18011E800 (-Reset@CExpressionPerformanceCounter@@QEAAXXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18011EEB8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z @ 0x1801291B0 (-NotifyAnimationStateChanged@CBaseExpression@@AEAAJW4AnimationEventType@@@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

__int64 __fastcall CExpressionManager::ProcessExpressions(LARGE_INTEGER *this, LARGE_INTEGER a2, LARGE_INTEGER a3)
{
  double v3; // rbx
  unsigned int LowPart; // esi
  int v6; // r15d
  unsigned int v7; // edi
  __int64 v8; // r15
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // eax
  double v13; // rsi
  LARGE_INTEGER v14; // xmm1_8
  LARGE_INTEGER v15; // rcx
  unsigned __int64 QuadPart; // r8
  unsigned int v17; // eax
  unsigned int *v18; // rdi
  DWORD v19; // eax
  LARGE_INTEGER v20; // rsi
  unsigned int v21; // edi
  __int64 v22; // rax
  __int64 v23; // rcx
  double Elapsed; // xmm6_8
  double v25; // xmm2_8
  double DurationAverage; // xmm0_8
  __int64 v27; // rcx
  double v28; // xmm0_8
  __int64 v29; // rcx
  double v30; // xmm0_8
  __int64 v31; // rcx
  double v32; // xmm0_8
  __int64 v33; // rcx
  double v34; // xmm0_8
  __int64 v35; // rcx
  double v36; // xmm0_8
  LPCGUID v37; // r8
  LPCGUID v38; // r9
  bool v39[8]; // [rsp+38h] [rbp-D0h] BYREF
  double v40; // [rsp+40h] [rbp-C8h] BYREF
  double v41; // [rsp+48h] [rbp-C0h] BYREF
  double v42; // [rsp+50h] [rbp-B8h] BYREF
  LARGE_INTEGER Frequency[4]; // [rsp+58h] [rbp-B0h] BYREF
  double v44; // [rsp+78h] [rbp-90h] BYREF
  double v45; // [rsp+80h] [rbp-88h] BYREF
  double v46; // [rsp+88h] [rbp-80h] BYREF
  double v47; // [rsp+90h] [rbp-78h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+98h] [rbp-70h] BYREF
  double *v49; // [rsp+B8h] [rbp-50h]
  __int64 v50; // [rsp+C0h] [rbp-48h]
  double *v51; // [rsp+C8h] [rbp-40h]
  __int64 v52; // [rsp+D0h] [rbp-38h]
  double *v53; // [rsp+D8h] [rbp-30h]
  __int64 v54; // [rsp+E0h] [rbp-28h]
  double *v55; // [rsp+E8h] [rbp-20h]
  __int64 v56; // [rsp+F0h] [rbp-18h]
  double *v57; // [rsp+F8h] [rbp-10h]
  __int64 v58; // [rsp+100h] [rbp-8h]
  double *v59; // [rsp+108h] [rbp+0h]
  __int64 v60; // [rsp+110h] [rbp+8h]
  double *v61; // [rsp+118h] [rbp+10h]
  __int64 v62; // [rsp+120h] [rbp+18h]
  LARGE_INTEGER *v63; // [rsp+128h] [rbp+20h]
  __int64 v64; // [rsp+130h] [rbp+28h]
  LARGE_INTEGER v65; // [rsp+198h] [rbp+90h] BYREF

  v65 = a3;
  LODWORD(v41) = 0;
  v3 = 0.0;
  Frequency[0] = a2;
  v40 = 0.0;
  if ( this[22].LowPart )
  {
    CExpressionPerformanceCounter::Reset((CExpressionPerformanceCounter *)&this[13]);
    QpcStopwatch::Start((QpcStopwatch *)&v40);
    v3 = v40;
  }
  LowPart = this[2].LowPart;
  if ( LowPart > -1 - this[7].LowPart )
  {
    v6 = -2147024882;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x42u);
    v7 = -2147024882;
    goto LABEL_14;
  }
  if ( this[11].LowPart - this[7].LowPart >= LowPart )
    goto LABEL_5;
  Frequency[1].LowPart = 18;
  BYTE4(Frequency[1].QuadPart) = 0;
  CExpressionValue::Reset((CExpressionValue *)&Frequency[1], 1);
  v11 = LowPart + this[7].LowPart - this[11].LowPart;
  v12 = DynArrayImpl<1>::AddMultiple(&this[8], 24LL, (unsigned int)v11, &v42);
  v6 = v12;
  if ( v12 >= 0 )
  {
    if ( (_DWORD)v11 )
    {
      v13 = v42;
      v14 = Frequency[3];
      **(_OWORD **)&v42 = *(_OWORD *)&Frequency[1].LowPart;
      *(LARGE_INTEGER *)(*(_QWORD *)&v13 + 16LL) = v14;
      qmemcpy((void *)(*(_QWORD *)&v13 + 24LL), *(const void **)&v13, 8 * ((unsigned __int64)(24 * v11 - 24) >> 3));
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0xE5u);
  }
  if ( v6 >= 0 )
  {
    CExpressionValue::Reset((CExpressionValue *)&Frequency[1], 0);
LABEL_5:
    v6 = 0;
    goto LABEL_6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x4Au);
  CExpressionValue::Reset((CExpressionValue *)&Frequency[1], 0);
LABEL_6:
  v7 = v6;
  if ( v6 < 0 )
  {
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x1ACu);
    goto LABEL_10;
  }
  v8 = 0LL;
  this[3] = Frequency[0];
  this[4] = v65;
  if ( this[26].LowPart )
  {
    v10 = LODWORD(v41);
    do
    {
      v15 = this[23];
      QuadPart = this[4].QuadPart;
      v39[0] = 0;
      CBaseExpression::CalculateValue(
        *(CBaseExpression **)(v15.QuadPart + 8 * v8),
        (struct CExpressionValueStack *)&this[5],
        QuadPart,
        v39);
      v17 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(this[23].QuadPart + 8 * v8) + 112LL))(*(_QWORD *)(this[23].QuadPart + 8 * v8));
      if ( v17 > v10 )
        v10 = v17;
      v8 = (unsigned int)(v8 + 1);
    }
    while ( (unsigned int)v8 < this[26].LowPart );
    LODWORD(v41) = v10;
    v3 = v40;
  }
  while ( this[30].LowPart )
  {
    v18 = (unsigned int *)this[27].QuadPart;
    CBaseExpression::NotifyAnimationStateChanged(*((_QWORD *)v18 + 1), *v18);
    (*(void (__fastcall **)(_QWORD))(**((_QWORD **)v18 + 1) + 16LL))(*((_QWORD *)v18 + 1));
    v19 = this[30].LowPart;
    if ( v19 )
    {
      v20 = this[27];
      v21 = 0;
      if ( v19 != 1 )
      {
        do
        {
          v22 = 2LL * v21;
          v23 = 2LL * ++v21;
          *(_OWORD *)(v20.QuadPart + 8 * v22) = *(_OWORD *)(v20.QuadPart + 8 * v23);
        }
        while ( v21 < this[30].LowPart - 1 );
      }
      --this[30].LowPart;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x194u);
    }
  }
  v7 = 0;
  this[2].LowPart = LODWORD(v41);
LABEL_10:
  if ( v3 != 0.0 )
  {
    Elapsed = (double)(int)QpcStopwatch::GetElapsed((QpcStopwatch *)&v40);
    QueryPerformanceFrequency(Frequency);
    v25 = (double)(int)Frequency[0].LowPart / 1000000.0;
    if ( (unsigned int)pRelatedActivityId > 4 && (qword_18019E950 & 1) != 0 && (qword_18019E958 & 1) == qword_18019E958 )
    {
      v50 = 8LL;
      v49 = &v42;
      v42 = Elapsed / v25;
      DurationAverage = CExpressionPerformanceCounter::GetDurationAverage(&this[13], 0LL);
      v52 = 8LL;
      v51 = &v40;
      v40 = DurationAverage / v25;
      v28 = CExpressionPerformanceCounter::GetDurationAverage(v27, 1LL);
      v54 = 8LL;
      v53 = &v41;
      v41 = v28 / v25;
      v30 = CExpressionPerformanceCounter::GetDurationAverage(v29, 2LL);
      v56 = 8LL;
      v55 = &v44;
      v44 = v30 / v25;
      v32 = CExpressionPerformanceCounter::GetDurationAverage(v31, 3LL);
      v58 = 8LL;
      v57 = &v46;
      v46 = v32 / v25;
      v34 = CExpressionPerformanceCounter::GetDurationAverage(v33, 4LL);
      v60 = 8LL;
      v59 = &v47;
      v47 = v34 / v25;
      v36 = CExpressionPerformanceCounter::GetDurationAverage(v35, 5LL);
      v62 = 8LL;
      v61 = &v45;
      v63 = &v65;
      v64 = 8LL;
      v45 = v36 / v25;
      TlgWrite((TraceLoggingHProvider)&pRelatedActivityId, &unk_18017D263, v37, v38, 0xAu, &pData);
    }
  }
  return v7;
}
