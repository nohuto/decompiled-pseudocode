/*
 * XREFs of ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801489EC
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180088E9C (--0CBaseExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 *     ?Reset@CConditionalExpression@@QEAAXXZ @ 0x180149440 (-Reset@CConditionalExpression@@QEAAXXZ.c)
 */

CConditionalExpression *__fastcall CConditionalExpression::CConditionalExpression(
        CConditionalExpression *this,
        struct CComposition *a2)
{
  __int64 v3; // r9

  CBaseExpression::CBaseExpression(this, a2);
  *((_DWORD *)this + 72) = -1;
  *(_QWORD *)this = &CConditionalExpression::`vftable';
  *((_DWORD *)this + 73) = 0x7FFFFFFF;
  DynArrayImpl<1>::DynArrayImpl<1>((__int64)this + 296, 0LL, 0, v3, 16);
  *((_QWORD *)this + 41) = 0LL;
  CConditionalExpression::Reset(this);
  return this;
}
