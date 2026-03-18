/*
 * XREFs of ?QueryObjectPropertyValue@CExpressionValueStack@@AEAAJPEAVCBaseExpression@@PEAUExpressionReferenceNode@@_KPEAVCExpressionValue@@@Z @ 0x180101D7C
 * Callers:
 *     ?ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@_K@Z @ 0x180101850 (-ProcessReferenceNode@CExpressionValueStack@@QEAAJPEAVCExpression@@PEAUExpressionReferenceNode@@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ?ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z @ 0x1800E3B2C (-ResolveExpressionSourceReference@CComposition@@QEAAJIIPEAPEAUIExpressionSource@@@Z.c)
 *     ?FindElement@?$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMapEntry@@UObjectPropertyReference@@@Z @ 0x180100F74 (-FindElement@-$CGenericTableMap@UObjectPropertyReference@@VCTargetMapEntry@@@@QEAAPEAVCTargetMap.c)
 *     ?CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z @ 0x18010D618 (-CalculateValue@CBaseExpression@@QEAAJPEAVCExpressionValueStack@@_KPEA_N@Z.c)
 */

__int64 __fastcall CExpressionValueStack::QueryObjectPropertyValue(
        CExpressionValueStack *this,
        struct CBaseExpression *a2,
        struct ExpressionReferenceNode *a3,
        unsigned __int64 a4,
        struct CExpressionValue *a5)
{
  int v5; // eax
  __int64 v7; // rcx
  int v11; // eax
  _QWORD *Element; // rax
  __int64 v13; // rbx
  int v14; // eax
  unsigned int v15; // edi
  int v16; // eax
  int v17; // eax
  int v19[4]; // [rsp+30h] [rbp-10h] BYREF
  bool v20; // [rsp+70h] [rbp+30h] BYREF
  struct IExpressionSource *v21; // [rsp+78h] [rbp+38h] BYREF

  v5 = *((_DWORD *)a2 + 24);
  v7 = *((_QWORD *)this + 1);
  v21 = 0LL;
  v19[0] = v5;
  v19[1] = *((_DWORD *)a3 + 1);
  v11 = *((_DWORD *)a3 + 2);
  v20 = 0;
  v19[2] = v11;
  Element = CGenericTableMap<ObjectPropertyReference,CTargetMapEntry>::FindElement(
              (struct _RTL_GENERIC_TABLE *)(v7 + 168),
              v19);
  if ( Element )
    v13 = Element[2];
  else
    v13 = 0LL;
  while ( v13 )
  {
    v14 = CBaseExpression::CalculateValue(*(CBaseExpression **)(v13 + 8), this, a4, &v20);
    v15 = v14;
    if ( v14 < 0 )
    {
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x26Fu);
      goto LABEL_14;
    }
    v13 = *(_QWORD *)(v13 + 16);
  }
  v16 = CComposition::ResolveExpressionSourceReference(
          *((CComposition **)a2 + 2),
          *((_DWORD *)a2 + 24),
          *((_DWORD *)a3 + 1),
          &v21);
  v15 = v16;
  if ( v16 >= 0 )
  {
    v17 = (*(__int64 (__fastcall **)(struct IExpressionSource *, _QWORD, struct CExpressionValue *))(*(_QWORD *)v21 + 24LL))(
            v21,
            *((unsigned int *)a3 + 2),
            a5);
    v15 = v17;
    if ( v17 >= 0 )
      v15 = 0;
    else
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v17, 0x27Fu);
  }
  else
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v16, 0x27Eu);
  }
LABEL_14:
  if ( v21 )
    (*(void (__fastcall **)(struct IExpressionSource *))(*(_QWORD *)v21 + 16LL))(v21);
  return v15;
}
