/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18011DABC (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z @ 0x1801015C0 (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAVCResource@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x18011B680 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18011B788 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18011EEB8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180128008 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 *     ?ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z @ 0x18013665C (-ApplyMaskToValue@CExpressionValue@@QEAAJPEAVSubchannelMaskInfo@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CBaseExpression *a2,
        struct ExpressionReferenceNode *a3,
        unsigned __int64 a4,
        struct CExpressionValue *a5,
        struct SubchannelMaskInfo *a6)
{
  __int64 v6; // r14
  unsigned __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v12; // rsi
  __int64 v13; // rcx
  _QWORD *Element; // rax
  int v15; // eax
  unsigned int v16; // edi
  LONGLONG Elapsed; // rax
  int v18; // eax
  struct CResource *v19; // r14
  LONGLONG v20; // rax
  int v21; // eax
  int v22; // eax
  int v24[6]; // [rsp+30h] [rbp-18h] BYREF
  bool v25; // [rsp+90h] [rbp+48h] BYREF
  __int64 v26; // [rsp+98h] [rbp+50h] BYREF
  struct CResource *v27; // [rsp+A0h] [rbp+58h] BYREF
  unsigned __int64 v28; // [rsp+A8h] [rbp+60h]

  v28 = a4;
  v6 = 0LL;
  v7 = a4;
  v8 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  v12 = 0LL;
  v25 = 0;
  if ( *((_DWORD *)a2 + 30) )
  {
    v12 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 168LL) + 104LL;
    QpcStopwatch::Start((QpcStopwatch *)&v26);
    v8 = v26;
  }
  v13 = *((_QWORD *)this + 1);
  v24[0] = *((_DWORD *)a2 + 24);
  v24[1] = *((_DWORD *)a3 + 1);
  v24[2] = *((_DWORD *)a3 + 2);
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(v13 + 248),
              v24);
  if ( Element )
    v6 = Element[2];
  while ( v6 )
  {
    v15 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v6 + 8), this, v7, &v25);
    v16 = v15;
    if ( v15 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x286u);
      return v16;
    }
    v6 = *(_QWORD *)(v6 + 16);
    v7 = v28;
  }
  if ( v8 )
  {
    Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)&v26);
    ++*(_DWORD *)(v12 + 8);
    *(_QWORD *)(v12 + 40) += Elapsed;
  }
  if ( *((_DWORD *)a2 + 30) )
  {
    QpcStopwatch::Start((QpcStopwatch *)&v26);
    v8 = v26;
  }
  v18 = CComposition::ResolveExpressionSourceReference(
          *((CComposition **)a2 + 2),
          *((_DWORD *)a2 + 24),
          *((_DWORD *)a3 + 1),
          &v27);
  v19 = v27;
  v16 = v18;
  if ( v18 >= 0 )
  {
    if ( v8 )
    {
      v20 = QpcStopwatch::GetElapsed((QpcStopwatch *)&v26);
      ++*(_DWORD *)(v12 + 12);
      *(_QWORD *)(v12 + 48) += v20;
    }
    v21 = (*(__int64 (__fastcall **)(struct CResource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v19 + 88LL))(
            v19,
            *((unsigned int *)a3 + 2),
            a5);
    v16 = v21;
    if ( v21 >= 0 )
    {
      if ( a6 && *(_BYTE *)a6 && (v22 = CExpressionValue::ApplyMaskToValue(a5, a6), v16 = v22, v22 < 0) )
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x2B1u);
      else
        v16 = 0;
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v21, 0x2A7u);
    }
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v18, 0x2A0u);
  }
  if ( v19 )
    (*(void (__fastcall **)(struct CResource *))(*(_QWORD *)v19 + 16LL))(v19);
  return v16;
}
