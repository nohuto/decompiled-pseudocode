/*
 * XREFs of ?RegisterSourceForAnimation@CExpression@@AEAAJPEAVCBaseExpression@@PEBUExpressionReferenceInfo@@@Z @ 0x18008B648
 * Callers:
 *     ?RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z @ 0x1801486F4 (-RegisterSourcesForAnimation@CExpression@@QEAAJPEAVCBaseExpression@@@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z @ 0x18008DB70 (-AddSourceAnimation@CResource@@QEAAJPEAVCBaseExpression@@I@Z.c)
 */

__int64 __fastcall CExpression::RegisterSourceForAnimation(
        CExpression *this,
        struct CBaseExpression *a2,
        const struct ExpressionReferenceInfo *a3)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  CResource **v6; // rcx
  CResource *v7; // rcx
  int v8; // eax

  v4 = *((unsigned int *)a3 + 7);
  if ( (unsigned int)v4 < *((_DWORD *)this + 100) )
  {
    v6 = *(CResource ***)(*((_QWORD *)this + 47) + 16 * v4 + 8);
    if ( v6 && (v7 = *v6) != 0LL && (v8 = CResource::AddSourceAnimation(v7, a2, *((_DWORD *)a3 + 1)), v5 = v8, v8 < 0) )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v8, 0x19Eu);
    else
      return 0;
  }
  else
  {
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x195u);
  }
  return v5;
}
