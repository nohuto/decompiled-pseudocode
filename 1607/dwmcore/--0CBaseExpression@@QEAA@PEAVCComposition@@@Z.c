/*
 * XREFs of ??0CBaseExpression@@QEAA@PEAVCComposition@@@Z @ 0x180088E9C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 *     ??0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z @ 0x180087A80 (--0CKeyframeAnimation@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CConditionalExpression@@QEAA@PEAVCComposition@@@Z @ 0x1801489EC (--0CConditionalExpression@@QEAA@PEAVCComposition@@@Z.c)
 *     ??0CScrollAnimation@@QEAA@PEAVCComposition@@@Z @ 0x18015D508 (--0CScrollAnimation@@QEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CBaseExpression *__fastcall CBaseExpression::CBaseExpression(CBaseExpression *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CBaseExpression::`vftable';
  memset_0((char *)this + 128, 0, 0x40uLL);
  *((_DWORD *)this + 48) = 18;
  *((_BYTE *)this + 196) = 0;
  *((_QWORD *)this + 26) = -1LL;
  *((_QWORD *)this + 27) = -1LL;
  *((_BYTE *)this + 260) = 1;
  *((_QWORD *)this + 33) = &CSparseStorage::s_defaultEmptyAllocatedStorage;
  return this;
}
