/*
 * XREFs of ?MustRecomputeValue@CExpression@@MEBA_NXZ @ 0x18008B4E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

bool __fastcall CExpression::MustRecomputeValue(CExpression *this)
{
  return !CCommonRegistryData::m_fOptimizeForDirtyExpressions || *((_QWORD *)this + 35) > *((_QWORD *)this + 27);
}
