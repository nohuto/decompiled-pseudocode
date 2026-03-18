/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x18011DABC
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x180129AF0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180119D78 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?GetElapsed@QpcStopwatch@@QEAA_JXZ @ 0x18011B788 (-GetElapsed@QpcStopwatch@@QEAA_JXZ.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@PEAVSubchannelMaskInfo@@@Z @ 0x18011E31C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?Start@QpcStopwatch@@QEAAXXZ @ 0x18011EEB8 (-Start@QpcStopwatch@@QEAAXXZ.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18012B334 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x18012B5E0 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        unsigned __int64 a4)
{
  struct CExpressionValue *v8; // r12
  int v9; // eax
  int v10; // edi
  struct SubchannelMaskInfo *v11; // rbx
  __int64 v12; // rax
  int v13; // ebx
  __int64 v14; // rbx
  __int64 v15; // rsi
  int v16; // eax
  LONGLONG Elapsed; // rax
  int v19; // eax
  int v20; // eax
  int ObjectPropertyValue; // eax
  int v22; // eax
  bool v23; // [rsp+30h] [rbp-28h] BYREF
  _QWORD v24[4]; // [rsp+38h] [rbp-20h] BYREF

  v8 = 0LL;
  v9 = CExpressionValueStack::CheckAvailableStackSpace(this);
  v10 = v9;
  if ( v9 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v9, 0x2D5u);
    goto LABEL_16;
  }
  ++*((_DWORD *)this + 4);
  v11 = 0LL;
  v12 = *((_QWORD *)this + 3);
  v8 = (struct CExpressionValue *)(v12 + 24LL * (unsigned int)(*((_DWORD *)this + 4) - 1));
  if ( *((_DWORD *)a3 + 7) == 1 )
    v11 = (struct SubchannelMaskInfo *)*((_QWORD *)a2 + 14);
  if ( *((_DWORD *)a3 + 5) == 1 )
  {
    v20 = CExpression::ReadValueFromCache(
            a2,
            *((_DWORD *)a3 + 6),
            (struct CExpressionValue *)(v12 + 24LL * (unsigned int)(*((_DWORD *)this + 4) - 1)),
            &v23);
    v10 = v20;
    if ( v20 >= 0 )
    {
      if ( v23 )
        goto LABEL_15;
      ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(this, a2, a3, a4, v8, v11);
      v10 = ObjectPropertyValue;
      if ( ObjectPropertyValue >= 0 )
      {
        v22 = CExpression::StoreValueToCache(a2, *((_DWORD *)a3 + 6), v8);
        v10 = v22;
        if ( v22 >= 0 )
          goto LABEL_15;
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v22, 0x32Cu);
      }
      else
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, ObjectPropertyValue, 0x326u);
      }
    }
    else
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v20, 0x31Cu);
    }
LABEL_16:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_17;
  }
  if ( *((_DWORD *)a3 + 5) == 2 )
  {
    v13 = CExpressionValueStack::QueryObjectPropertyValue(this, a2, a3, a4, v8, v11);
    if ( v13 >= 0 )
    {
      v14 = 0LL;
      v15 = 0LL;
      v24[0] = 0LL;
      if ( *((_DWORD *)a2 + 30) )
      {
        v15 = *(_QWORD *)(*((_QWORD *)a2 + 2) + 168LL) + 104LL;
        QpcStopwatch::Start((QpcStopwatch *)v24);
        v14 = v24[0];
      }
      v16 = CExpression::StoreValueToCache(a2, *((_DWORD *)a3 + 6), v8);
      v10 = v16;
      if ( v16 < 0 )
      {
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x2FAu);
        goto LABEL_16;
      }
      if ( v14 )
      {
        Elapsed = QpcStopwatch::GetElapsed((QpcStopwatch *)v24);
        ++*(_DWORD *)(v15 + 16);
        *(_QWORD *)(v15 + 56) += Elapsed;
      }
      goto LABEL_15;
    }
    v19 = CExpression::ReadValueFromCache(a2, *((_DWORD *)a3 + 6), v8, &v23);
    v10 = v19;
    if ( v19 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v19, 0x30Bu);
      goto LABEL_16;
    }
    if ( !v23 )
    {
      v10 = v13;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x30Fu);
      goto LABEL_16;
    }
LABEL_15:
    v10 = 0;
    goto LABEL_16;
  }
  v10 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x332u);
LABEL_17:
  if ( v8 )
    --*((_DWORD *)this + 4);
  return (unsigned int)v10;
}
