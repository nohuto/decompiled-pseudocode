/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_K@Z @ 0x180088FE0
 * Callers:
 *     ?SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ @ 0x1800868C0 (-SampleExpressionsAndStartingValue@CKeyframeAnimation@@IEAAJXZ.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ @ 0x180086954 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAXXZ.c)
 *     ?UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180087F90 (-UpdateExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x180148780 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ??9CExpressionValue@@QEBA_NAEBV0@@Z @ 0x18001A074 (--9CExpressionValue@@QEBA_NAEBV0@@Z.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18001AA98 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z @ 0x180087B00 (-UnregisterExpression@CExpressionManager@@QEAAXPEAVCBaseExpression@@@Z.c)
 *     ?GetTracingCookie@CBaseExpression@@QEBAIXZ @ 0x18008874C (-GetTracingCookie@CBaseExpression@@QEBAIXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x180088770 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z @ 0x18008C620 (-PeekStackValue@CExpressionValueStack@@QEAAPEAVCExpressionValue@@H@Z.c)
 *     ?AddMultiple@?$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z @ 0x1800A3700 (-AddMultiple@-$DynArrayImpl@$00@@IEAAJIIPEAPEAX@Z.c)
 *     ?StringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1800A6FC0 (-StringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z @ 0x1800AD090 (-CopyFrom@CExpressionValue@@QEAAXAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     memcmp_0 @ 0x1800BF656 (memcmp_0.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x180137834 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x180137960 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z @ 0x180146D94 (-EvaluateCurrentState@@YAHPEBUreg_FeatureDescriptor@@@Z.c)
 *     ?LogSetOutputValue@CBaseExpression@@AEAAXXZ @ 0x180146F10 (-LogSetOutputValue@CBaseExpression@@AEAAXXZ.c)
 *     ?MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z @ 0x180147888 (-MergeValueWithMask@CBaseExpression@@CAJPEBVCExpressionValue@@0PEBVSubchannelMaskInfo@@IPEAM@Z.c)
 *     ?AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z @ 0x18015CAF8 (-AddDurationSample@CExpressionPerformanceCounter@@QEAAXW4ExpressionPerformanceLabel@@_J@Z.c)
 *     ?GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ @ 0x18015D094 (-GetValueSizeInBytes@CExpressionValue@@QEBA_KXZ.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(CBaseExpression *this, struct CExpressionValueStack *a2, __int64 a3)
{
  __int64 v3; // rsi
  __int64 v4; // rbx
  __int64 v7; // r14
  bool v8; // zf
  __int64 v9; // rsi
  unsigned int v10; // edi
  __int64 v11; // rax
  unsigned int v12; // eax
  int v13; // edi
  int v14; // r15d
  unsigned int v15; // edx
  __int64 v16; // rax
  __int64 v17; // rax
  int v19; // ecx
  __int64 v20; // rdi
  int v21; // eax
  _OWORD *v22; // rsi
  __int128 v23; // xmm1
  __int128 v24; // xmm0
  __int128 v25; // xmm1
  int v26; // edx
  bool v27; // cl
  __int64 v28; // rdx
  __int64 v29; // r15
  int v30; // eax
  char v31; // si
  __int64 Elapsed; // rax
  __int64 v33; // rax
  CExpressionManager *v34; // rcx
  struct CExpressionValue *v35; // rax
  CBaseExpression *v36; // rcx
  _QWORD *v37; // rax
  int v38; // eax
  int v39; // eax
  CExpressionValue *v40; // rax
  struct CExpressionValue *v41; // rdi
  bool v42; // r15
  const struct reg_FeatureDescriptor *v43; // rcx
  int v44; // r15d
  int v45; // ecx
  _BYTE *v46; // rsi
  unsigned int TracingCookie; // eax
  int v48; // eax
  HANDLE EventW; // rdi
  __int64 *v50; // rax
  __int64 v51; // rdi
  __int64 v52; // rdx
  int v53; // eax
  unsigned int v54; // r9d
  __int64 v55; // r8
  int v56; // eax
  size_t ValueSizeInBytes; // rax
  int v58; // eax
  int v59; // eax
  __int64 v60; // rax
  unsigned int v61; // [rsp+28h] [rbp-E0h]
  __int64 v62; // [rsp+38h] [rbp-D0h] BYREF
  __int64 v63; // [rsp+40h] [rbp-C8h]
  __int64 v64; // [rsp+48h] [rbp-C0h]
  __int64 v65; // [rsp+50h] [rbp-B8h] BYREF
  _OWORD *v66; // [rsp+58h] [rbp-B0h] BYREF
  __int64 Buf2; // [rsp+60h] [rbp-A8h]
  _OWORD Buf2_8[2]; // [rsp+68h] [rbp-A0h] BYREF
  __int128 v69; // [rsp+88h] [rbp-80h]
  __int128 v70; // [rsp+98h] [rbp-70h]
  __int64 v71; // [rsp+A8h] [rbp-60h]
  int Buf1; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v73; // [rsp+BCh] [rbp-4Ch]
  __int64 v74; // [rsp+C4h] [rbp-44h]
  __int64 v75; // [rsp+CCh] [rbp-3Ch]
  __int64 v76; // [rsp+D4h] [rbp-34h]
  __int64 v77; // [rsp+DCh] [rbp-2Ch]
  __int64 v78; // [rsp+E4h] [rbp-24h]
  __int64 v79; // [rsp+ECh] [rbp-1Ch]
  int v80; // [rsp+F4h] [rbp-14h]
  WCHAR Name[64]; // [rsp+F8h] [rbp-10h] BYREF

  v3 = a3;
  v4 = 0LL;
  v7 = 0LL;
  v8 = (*(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000) == 0;
  Buf2 = a3;
  v65 = 0LL;
  v62 = 0LL;
  v63 = 0LL;
  if ( !v8 || CCommonRegistryData::m_fLogExpressionPerfStats )
  {
    v63 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v65);
    v7 = v65;
  }
  LODWORD(v64) = *((_DWORD *)a2 + 4);
  if ( !*((_QWORD *)this + 35) )
    *((_QWORD *)this + 35) = v3;
  if ( *((_BYTE *)this + 196) && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 160LL))(this) )
  {
    v9 = v63;
    v10 = 0;
    goto LABEL_17;
  }
  v11 = *(_QWORD *)this;
  *((_QWORD *)this + 27) = v3;
  v12 = (*(__int64 (__fastcall **)(CBaseExpression *))(v11 + 120))(this);
  v13 = *((_DWORD *)a2 + 4);
  if ( v12 <= -1 - v13 )
  {
    v19 = *((_DWORD *)a2 + 12);
    if ( v19 - v13 >= v12 )
      goto LABEL_27;
    LODWORD(v71) = 18;
    memset(Buf2_8, 0, sizeof(Buf2_8));
    v20 = v12 + v13 - v19;
    v69 = 0uLL;
    v70 = 0uLL;
    BYTE4(v71) = 0;
    v21 = DynArrayImpl<1>::AddMultiple((char *)a2 + 24, 72LL, (unsigned int)v20, &v66);
    v14 = v21;
    if ( v21 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0xE5u);
    }
    else if ( (_DWORD)v20 )
    {
      v22 = v66;
      v23 = Buf2_8[1];
      *v66 = Buf2_8[0];
      v24 = v69;
      v22[1] = v23;
      v25 = v70;
      v22[2] = v24;
      *(_QWORD *)&v24 = v71;
      v22[3] = v25;
      *((_QWORD *)v22 + 8) = v24;
      qmemcpy((char *)v22 + 72, v22, 8 * ((unsigned __int64)(72 * v20 - 72) >> 3));
      v3 = Buf2;
    }
    if ( v14 >= 0 )
LABEL_27:
      v14 = 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x49u);
    v10 = v14;
    if ( v14 < 0 )
      goto LABEL_11;
    v26 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL) & 0x40000000;
    if ( v26 || CCommonRegistryData::m_fLogExpressionPerfStats )
    {
      if ( *((_BYTE *)this + 228) )
      {
        v27 = v26 != 0;
        v28 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL);
        ++*(_DWORD *)(v28 + 388);
        if ( v27 )
          ++*(_DWORD *)(v28 + 392);
      }
    }
    v29 = v63;
    if ( v63 )
    {
      QpcStopwatch::Start((QpcStopwatch *)&v62);
      v4 = v62;
    }
    v30 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64))(*(_QWORD *)this + 144LL))(
            this,
            a2,
            v3);
    v10 = v30;
    if ( v30 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v30, 0x32Bu);
      goto LABEL_12;
    }
    v31 = 1;
    if ( v4 )
    {
      Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
      CExpressionPerformanceCounter::AddDurationSample(v29, 1LL, Elapsed);
      v4 = 0LL;
      v62 = 0LL;
    }
    if ( v10 == 1 )
      goto LABEL_47;
    v31 = 0;
    if ( !*((_DWORD *)a2 + 4) )
    {
      if ( *((_BYTE *)this + 228) )
      {
        v33 = *((_QWORD *)this + 2);
        if ( v33 )
        {
          v34 = *(CExpressionManager **)(v33 + 168);
          if ( v34 )
            CExpressionManager::UnregisterExpression(v34, this);
        }
      }
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x347u);
      goto LABEL_12;
    }
    v35 = CExpressionValueStack::PeekStackValue(a2, 0);
    if ( !CBaseExpression::IsExpressionValueValid(v36, v35) )
    {
LABEL_47:
      LODWORD(v71) = 18;
      memset(Buf2_8, 0, sizeof(Buf2_8));
      v69 = 0uLL;
      v70 = 0uLL;
      BYTE4(v71) = 0;
      v37 = (_QWORD *)*((_QWORD *)this + 29);
      if ( !v37 || !*v37 )
      {
        v10 = -2147024890;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024890, 0x351u);
        goto LABEL_12;
      }
      v38 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _OWORD *))(*(_QWORD *)*v37 + 88LL))(
              *v37,
              *((unsigned int *)this + 61),
              Buf2_8);
      v10 = v38;
      if ( v38 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v38, 0x353u);
        goto LABEL_12;
      }
      if ( (_DWORD)v71 != *((_DWORD *)this + 50) )
      {
        v10 = -2147024809;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x356u);
        goto LABEL_12;
      }
      if ( v31 )
      {
        v39 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)Buf2_8);
        v10 = v39;
        if ( v39 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v39, 0x35Bu);
          goto LABEL_12;
        }
      }
      else
      {
        v40 = CExpressionValueStack::PeekStackValue(a2, 0);
        CExpressionValue::CopyFrom(v40, (const struct CExpressionValue *)Buf2_8);
      }
    }
    if ( *((_DWORD *)a2 + 4) != (_DWORD)v64 + 1 )
    {
      v10 = -2147467259;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x36Fu);
      goto LABEL_12;
    }
    if ( v29 )
    {
      QpcStopwatch::Start((QpcStopwatch *)&v62);
      v4 = v62;
    }
    v41 = CExpressionValueStack::PeekStackValue(a2, 0);
    v42 = 0;
    if ( (unsigned int)EvaluateCurrentState(v43) && *((_DWORD *)v41 + 16) != *((_DWORD *)this + 50) )
    {
      v10 = -2147024809;
      v61 = 392;
LABEL_65:
      v44 = v10;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v10, v61);
LABEL_66:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x37Cu);
      goto LABEL_12;
    }
    v45 = *(_DWORD *)(*((_QWORD *)this + 33) + 4LL);
    if ( (v45 & 0x40000000) != 0 || v45 < 0 )
      v42 = CExpressionValue::operator!=((_QWORD *)this + 16, v41) != 0;
    v46 = (char *)this + 128;
    switch ( *((_DWORD *)v41 + 16) )
    {
      case 0x11:
        *v46 = *(_BYTE *)v41;
        *((_DWORD *)this + 48) = 17;
        goto LABEL_80;
      case 0x12:
        *(_DWORD *)v46 = *(_DWORD *)v41;
        *((_DWORD *)this + 48) = 18;
        goto LABEL_80;
      case 0x23:
        *((_DWORD *)this + 48) = 35;
        *(_QWORD *)v46 = *(_QWORD *)v41;
        goto LABEL_80;
      case 0x34:
        *((_DWORD *)this + 48) = 52;
        *(_QWORD *)v46 = *(_QWORD *)v41;
        *((_DWORD *)this + 34) = *((_DWORD *)v41 + 2);
        goto LABEL_80;
      case 0x45:
        *((_DWORD *)this + 48) = 69;
        *(_OWORD *)v46 = *(_OWORD *)v41;
        goto LABEL_80;
      case 0x46:
        *((_DWORD *)this + 48) = 70;
        *(_OWORD *)v46 = *(_OWORD *)v41;
        goto LABEL_80;
      case 0x47:
        *((_DWORD *)this + 48) = 71;
        *(_OWORD *)v46 = *(_OWORD *)v41;
        goto LABEL_80;
      case 0x68:
        *((_DWORD *)this + 48) = 104;
        *(_OWORD *)v46 = *(_OWORD *)v41;
        *((_QWORD *)this + 18) = *((_QWORD *)v41 + 2);
        goto LABEL_80;
      case 0x109:
        *((_DWORD *)this + 48) = 265;
        *(_OWORD *)v46 = *(_OWORD *)v41;
        *((_OWORD *)this + 9) = *((_OWORD *)v41 + 1);
        *((_OWORD *)this + 10) = *((_OWORD *)v41 + 2);
        *((_OWORD *)this + 11) = *((_OWORD *)v41 + 3);
LABEL_80:
        *((_BYTE *)this + 196) = 1;
        break;
      default:
        break;
    }
    if ( v42 )
    {
      CBaseExpression::LogSetOutputValue(this);
      TracingCookie = CBaseExpression::GetTracingCookie(this);
      v48 = StringCchPrintfW(Name, 0x3CuLL, L"DwmExpression_SetValue_%d", TracingCookie);
      v44 = v48;
      if ( v48 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v48, 0x1AFu);
        goto LABEL_130;
      }
      EventW = CreateEventW(0LL, 1, 0, Name);
      SetEvent(EventW);
      CloseHandle(EventW);
    }
    if ( !*((_BYTE *)this + 228) || !*((_BYTE *)this + 260) )
      goto LABEL_129;
    v50 = (__int64 *)*((_QWORD *)this + 29);
    if ( !v50 || (v51 = *v50) == 0 )
    {
      v10 = -2147024890;
      v61 = 448;
      goto LABEL_65;
    }
    v52 = *((unsigned int *)this + 61);
    LODWORD(v71) = 18;
    memset(Buf2_8, 0, sizeof(Buf2_8));
    v69 = 0uLL;
    v70 = 0uLL;
    BYTE4(v71) = 0;
    v53 = (*(__int64 (__fastcall **)(__int64, __int64, _OWORD *))(*(_QWORD *)v51 + 88LL))(v51, v52, Buf2_8);
    v44 = v53;
    if ( v53 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v53, 0x1DCu);
    }
    else
    {
      v55 = *((_QWORD *)this + 31);
      if ( v55 && *(_BYTE *)(v55 + 4) )
      {
        v73 = 0LL;
        v74 = 0LL;
        v75 = 0LL;
        v76 = 0LL;
        v77 = 0LL;
        v78 = 0LL;
        v79 = 0LL;
        v80 = 0;
        Buf1 = 0;
        v56 = CBaseExpression::MergeValueWithMask(
                (const struct CExpressionValue *)Buf2_8,
                (CBaseExpression *)((char *)this + 128),
                (const struct SubchannelMaskInfo *)v55,
                v54,
                (float *)&Buf1);
        v44 = v56;
        if ( v56 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v56, 0x1EEu);
          goto LABEL_126;
        }
        ValueSizeInBytes = CExpressionValue::GetValueSizeInBytes((CExpressionValue *)Buf2_8);
        if ( memcmp_0(&Buf1, Buf2_8, ValueSizeInBytes) )
        {
          v58 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, int *))(*(_QWORD *)v51 + 80LL))(
                  v51,
                  *((unsigned int *)this + 61),
                  (unsigned int)v71,
                  &Buf1);
          v44 = v58;
          if ( v58 < 0 )
          {
            MilInstrumentationCheckHR(0x14u, 0LL, 0, v58, 0x1F2u);
            goto LABEL_126;
          }
        }
        goto LABEL_123;
      }
      if ( (_DWORD)v71 == *((_DWORD *)this + 48) && BYTE4(v71) == *((_BYTE *)this + 196) )
      {
        if ( BYTE4(v71) )
        {
          switch ( (int)v71 )
          {
            case 17:
              if ( LOBYTE(Buf2_8[0]) != *v46 )
                goto LABEL_122;
              break;
            case 18:
              if ( *(float *)Buf2_8 != *(float *)v46 )
                goto LABEL_122;
              break;
            case 35:
              if ( *(_QWORD *)&Buf2_8[0] != *(_QWORD *)v46 )
                goto LABEL_122;
              break;
            case 52:
              if ( *(_QWORD *)&Buf2_8[0] != *(_QWORD *)v46 || DWORD2(Buf2_8[0]) != *((_DWORD *)this + 34) )
                goto LABEL_122;
              break;
            case 69:
            case 70:
              if ( Buf2_8[0] == *((_OWORD *)this + 8) )
                break;
              goto LABEL_122;
            case 71:
              if ( *(float *)Buf2_8 != *(float *)v46
                || *((float *)Buf2_8 + 1) != *((float *)this + 33)
                || *((float *)Buf2_8 + 2) != *((float *)this + 34)
                || *((float *)Buf2_8 + 3) != *((float *)this + 35) )
              {
                goto LABEL_122;
              }
              break;
            case 104:
              if ( Buf2_8[0] != *((_OWORD *)this + 8) || *(_QWORD *)&Buf2_8[1] != *((_QWORD *)this + 18) )
                goto LABEL_122;
              break;
            case 265:
              if ( !memcmp_0(Buf2_8, (char *)this + 128, 0x40uLL) )
                break;
              goto LABEL_122;
            default:
              goto LABEL_122;
          }
        }
        if ( !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 152LL))(this) )
        {
LABEL_123:
          v44 = 0;
          goto LABEL_126;
        }
      }
LABEL_122:
      v59 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, char *))(*(_QWORD *)v51 + 80LL))(
              v51,
              *((unsigned int *)this + 61),
              *((unsigned int *)this + 50),
              (char *)this + 128);
      v44 = v59;
      if ( v59 >= 0 )
        goto LABEL_123;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v59, 0x1E3u);
    }
LABEL_126:
    if ( v44 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v44, 0x1C1u);
      goto LABEL_130;
    }
LABEL_129:
    v44 = 0;
LABEL_130:
    v10 = v44;
    if ( v44 >= 0 )
    {
      if ( v4 )
      {
        v60 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v62);
        v9 = v63;
        CExpressionPerformanceCounter::AddDurationSample(v63, 5LL, v60);
        --*((_DWORD *)a2 + 4);
      }
      else
      {
        --*((_DWORD *)a2 + 4);
        v9 = v63;
      }
      v10 = 0;
      goto LABEL_17;
    }
    goto LABEL_66;
  }
  v14 = -2147024882;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024882, 0x41u);
  v10 = -2147024882;
LABEL_11:
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x314u);
LABEL_12:
  v15 = *((_DWORD *)a2 + 4);
  if ( v15 > (unsigned int)v64 )
  {
    v16 = v15 - (unsigned int)v64;
    do
    {
      --v15;
      --v16;
    }
    while ( v16 );
    *((_DWORD *)a2 + 4) = v15;
  }
  v9 = v63;
LABEL_17:
  if ( v7 )
  {
    v17 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v65);
    CExpressionPerformanceCounter::AddDurationSample(v9, 0LL, v17);
  }
  return v10;
}
