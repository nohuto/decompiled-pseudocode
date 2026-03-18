/*
 * XREFs of ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850
 * Callers:
 *     ?CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010EBC0 (-CalculateValueWorker@CExpression@@MEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z @ 0x180100B74 (-CheckAvailableStackSpace@CExpressionValueStack@@AEAAJI@Z.c)
 *     ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@@Z @ 0x180101D7C (-QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferen.c)
 *     ?ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z @ 0x18010FFE0 (-ReadValueFromCache@CExpression@@AEAAJIPEAVCExpressionValue@@PEA_N@Z.c)
 *     ?StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z @ 0x180110228 (-StoreValueToCache@CExpression@@AEAAJIPEAVCExpressionValue@@@Z.c)
 */

__int64 __fastcall CExpressionValueStack::ProcessReferenceNode(
        CExpressionValueStack *this,
        struct CExpression *a2,
        struct ExpressionReferenceNode *a3,
        unsigned __int64 a4)
{
  struct CExpressionValue *v8; // r14
  int ValueFromCache; // eax
  int v10; // ebx
  __int64 v11; // rax
  int ObjectPropertyValue; // eax
  unsigned int v13; // edx
  int v14; // ebp
  unsigned int v16; // [rsp+20h] [rbp-38h]
  bool v17[40]; // [rsp+30h] [rbp-28h] BYREF

  v8 = 0LL;
  ValueFromCache = CExpressionValueStack::CheckAvailableStackSpace(this);
  v10 = ValueFromCache;
  if ( ValueFromCache < 0 )
  {
    v16 = 675;
LABEL_21:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, ValueFromCache, v16);
LABEL_24:
    if ( v10 >= 0 )
      return (unsigned int)v10;
    goto LABEL_25;
  }
  ++*((_DWORD *)this + 4);
  v11 = *((_QWORD *)this + 3);
  v8 = (struct CExpressionValue *)(v11 + 24LL * (unsigned int)(*((_DWORD *)this + 4) - 1));
  if ( *((_DWORD *)a3 + 5) == 1 )
  {
    ValueFromCache = CExpression::ReadValueFromCache(
                       a2,
                       *((_DWORD *)a3 + 6),
                       (struct CExpressionValue *)(v11 + 24LL * (unsigned int)(*((_DWORD *)this + 4) - 1)),
                       v17);
    v10 = ValueFromCache;
    if ( ValueFromCache < 0 )
    {
      v16 = 724;
      goto LABEL_21;
    }
    if ( !v17[0] )
    {
      ValueFromCache = CExpressionValueStack::QueryObjectPropertyValue(this, a2, a3, a4, v8);
      v10 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v16 = 734;
        goto LABEL_21;
      }
      ValueFromCache = CExpression::StoreValueToCache(a2, *((_DWORD *)a3 + 6), v8);
      v10 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v16 = 740;
        goto LABEL_21;
      }
    }
    goto LABEL_23;
  }
  if ( *((_DWORD *)a3 + 5) == 2 )
  {
    ObjectPropertyValue = CExpressionValueStack::QueryObjectPropertyValue(
                            this,
                            a2,
                            a3,
                            a4,
                            (struct CExpressionValue *)(v11 + 24LL * (unsigned int)(*((_DWORD *)this + 4) - 1)));
    v13 = *((_DWORD *)a3 + 6);
    v14 = ObjectPropertyValue;
    if ( ObjectPropertyValue < 0 )
    {
      ValueFromCache = CExpression::ReadValueFromCache(a2, v13, v8, v17);
      v10 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v16 = 707;
        goto LABEL_21;
      }
      if ( !v17[0] )
      {
        v10 = v14;
        if ( v14 < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x2C7u);
          goto LABEL_24;
        }
      }
    }
    else
    {
      ValueFromCache = CExpression::StoreValueToCache(a2, v13, v8);
      v10 = ValueFromCache;
      if ( ValueFromCache < 0 )
      {
        v16 = 695;
        goto LABEL_21;
      }
    }
LABEL_23:
    v10 = 0;
    goto LABEL_24;
  }
  v10 = -2147418113;
  MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147418113, 0x2EAu);
LABEL_25:
  if ( v8 )
    --*((_DWORD *)this + 4);
  return (unsigned int)v10;
}
