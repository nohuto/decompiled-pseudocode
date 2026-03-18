/*
 * XREFs of ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008
 * Callers:
 *     ?ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z @ 0x180085CF4 (-ProcessExpressions@CExpressionManager@@QEAAJ_K0@Z.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ @ 0x18012C030 (-ProcessExpressionKeyFrames@CKeyframeAnimation@@AEAAJXZ.c)
 *     ?ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z @ 0x18012C0C0 (-ProcessInnerExpression@CKeyframeAnimation@@UEAAJIPEAM@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 *     ?EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z @ 0x1800FE96C (-EnsureAvailableStackSpace@CExpressionValueStack@@QEAAJI@Z.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1801015C0 (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18011B788 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z @ 0x18011E068 (-PushConstant@CExpressionValueStack@@QEAAJAEBVCExpressionValue@@@Z.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18011EEB8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z @ 0x1801283D8 (-IsExpressionValueValid@CBaseExpression@@AEAA_NPEAVCExpressionValue@@@Z.c)
 *     ?SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z @ 0x18012965C (-SetOutputValue@CBaseExpression@@IEAAJPEBVCExpressionValue@@@Z.c)
 *     ?CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z @ 0x1801368EC (-CopyFrom@CExpressionValue@@QEAAJAEBV1@@Z.c)
 *     ?Reset@CExpressionValue@@AEAAX_N@Z @ 0x180136C70 (-Reset@CExpressionValue@@AEAAX_N@Z.c)
 */

__int64 __fastcall CBaseExpression::CalculateValue(
        CBaseExpression *this,
        struct CExpressionValueStack *a2,
        __int64 a3,
        bool *a4)
{
  __int64 v4; // rdi
  __int64 v5; // rbx
  __int64 v6; // r15
  bool *v7; // rax
  int v11; // esi
  unsigned int v12; // eax
  int v13; // eax
  LONGLONG Elapsed; // rax
  int v15; // eax
  LONGLONG v16; // rax
  unsigned int v17; // edx
  __int64 v18; // rcx
  LONGLONG v19; // rax
  unsigned int v21; // [rsp+20h] [rbp-49h]
  unsigned int v22; // [rsp+20h] [rbp-49h]
  __int64 v23; // [rsp+30h] [rbp-39h] BYREF
  unsigned int v24; // [rsp+38h] [rbp-31h]
  struct CResource *v25; // [rsp+40h] [rbp-29h] BYREF
  __int64 v26; // [rsp+48h] [rbp-21h] BYREF
  bool *v27; // [rsp+50h] [rbp-19h]
  __int64 v28; // [rsp+58h] [rbp-11h]
  int v29; // [rsp+60h] [rbp-9h] BYREF
  char v30; // [rsp+64h] [rbp-5h]

  v25 = 0LL;
  v4 = 0LL;
  v5 = 0LL;
  v26 = 0LL;
  v6 = 0LL;
  v23 = 0LL;
  v7 = a4;
  v27 = a4;
  if ( *((_DWORD *)this + 30) )
  {
    v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v26);
    v7 = v27;
    v4 = v26;
  }
  v24 = *((_DWORD *)a2 + 4);
  if ( *((_QWORD *)this + 11) == a3 )
    goto LABEL_4;
  if ( *((_QWORD *)this + 10) == a3 )
  {
    *v7 = 1;
LABEL_4:
    v11 = 0;
    goto LABEL_57;
  }
  *v7 = 0;
  v28 = *((_QWORD *)this + 11);
  *((_QWORD *)this + 10) = a3;
  if ( *((_BYTE *)this + 52) && !(*(unsigned __int8 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 128LL))(this) )
  {
    *((_QWORD *)this + 11) = a3;
    goto LABEL_4;
  }
  if ( CBaseExpression::s_recursionLevel > 0x10 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x206u);
LABEL_50:
    v17 = *((_DWORD *)a2 + 4);
    if ( v17 > v24 )
    {
      v18 = v17 - v24;
      do
      {
        --v17;
        --v18;
      }
      while ( v18 );
      *((_DWORD *)a2 + 4) = v17;
    }
    *((_QWORD *)this + 10) = v28;
    goto LABEL_55;
  }
  ++CBaseExpression::s_recursionLevel;
  v12 = (*(__int64 (__fastcall **)(CBaseExpression *))(*(_QWORD *)this + 112LL))(this);
  v13 = CExpressionValueStack::EnsureAvailableStackSpace(a2, v12);
  v11 = v13;
  if ( v13 < 0 )
  {
    v21 = 531;
LABEL_14:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, v21);
    goto LABEL_49;
  }
  if ( *((_DWORD *)this + 30) && v6 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v23);
    v5 = v23;
  }
  v13 = (*(__int64 (__fastcall **)(CBaseExpression *, struct CExpressionValueStack *, __int64, bool *))(*(_QWORD *)this + 120LL))(
          this,
          a2,
          a3,
          v27);
  v11 = v13;
  if ( v13 < 0 )
  {
    v21 = 545;
    goto LABEL_14;
  }
  if ( v5 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v23);
    ++*(_DWORD *)(v6 + 4);
    *(_QWORD *)(v6 + 32) += Elapsed;
  }
  if ( v11 == 1
    || !CBaseExpression::IsExpressionValueValid(
          (CBaseExpression *)(3LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)),
          (struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 24LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1))) )
  {
    v29 = 18;
    v30 = 0;
    CExpressionValue::Reset((CExpressionValue *)&v29, 1);
    v15 = CComposition::ResolveExpressionSourceReference(
            *((CComposition **)this + 2),
            *((_DWORD *)this + 24),
            *((_DWORD *)this + 26),
            &v25);
    v11 = v15;
    if ( v15 < 0 )
    {
      v22 = 566;
LABEL_27:
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, v22);
LABEL_28:
      CExpressionValue::Reset((CExpressionValue *)&v29, 0);
      goto LABEL_49;
    }
    v15 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, int *))(*(_QWORD *)v25 + 88LL))(
            v25,
            *((unsigned int *)this + 27),
            &v29);
    v11 = v15;
    if ( v15 < 0 )
    {
      v22 = 568;
      goto LABEL_27;
    }
    if ( v29 != *((_DWORD *)this + 18) )
    {
      v11 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x23Bu);
      goto LABEL_28;
    }
    if ( v15 == 1 )
    {
      v15 = CExpressionValueStack::PushConstant(a2, (const struct CExpressionValue *)&v29);
      v11 = v15;
      if ( v15 < 0 )
      {
        v22 = 576;
        goto LABEL_27;
      }
    }
    else
    {
      v15 = CExpressionValue::CopyFrom(
              (CExpressionValue *)(*((_QWORD *)a2 + 3) + 24LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)),
              (const struct CExpressionValue *)&v29);
      v11 = v15;
      if ( v15 < 0 )
      {
        v22 = 580;
        goto LABEL_27;
      }
    }
    CExpressionValue::Reset((CExpressionValue *)&v29, 0);
  }
  if ( *((_DWORD *)a2 + 4) != v24 + 1 )
  {
    v11 = -2147467259;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147467259, 0x253u);
    goto LABEL_49;
  }
  if ( *((_DWORD *)this + 30) && v6 )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v23);
    v5 = v23;
  }
  v13 = CBaseExpression::SetOutputValue(
          (LPCGUID)this,
          (const struct CExpressionValue *)(*((_QWORD *)a2 + 3) + 24LL * (unsigned int)(*((_DWORD *)a2 + 4) - 1)));
  v11 = v13;
  if ( v13 < 0 )
  {
    v21 = 609;
    goto LABEL_14;
  }
  if ( v5 )
  {
    v16 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v23);
    ++*(_DWORD *)(v6 + 20);
    *(_QWORD *)(v6 + 64) += v16;
  }
  --*((_DWORD *)a2 + 4);
  v11 = 0;
  *((_QWORD *)this + 11) = a3;
LABEL_49:
  --CBaseExpression::s_recursionLevel;
  if ( v11 < 0 )
    goto LABEL_50;
LABEL_55:
  if ( v25 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v25 + 16LL))(v25);
LABEL_57:
  if ( v4 )
  {
    v19 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v26);
    ++*(_DWORD *)v6;
    *(_QWORD *)(v6 + 24) += v19;
  }
  return (unsigned int)v11;
}
