/*
 * XREFs of ??0CExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010EAD4
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x18010D50C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 */

CExpression *__fastcall CExpression::CExpression(CExpression *this, struct CComposition *a2)
{
  CBaseExpression::CBaseExpression(this, a2);
  *(_QWORD *)this = &CExpression::`vftable';
  return this;
}
