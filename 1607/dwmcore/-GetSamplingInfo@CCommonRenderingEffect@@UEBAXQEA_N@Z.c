/*
 * XREFs of ?GetSamplingInfo@CCommonRenderingEffect@@UEBAXQEA_N@Z @ 0x180056510
 * Callers:
 *     ?UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W4D2D1_ANTIALIAS_MODE@@PEBVCMILMatrix@@PEAVCShape@@_NPEAVCDrawListCache@@@Z @ 0x180094B10 (-UpdateHWDrawListCache@CPrimitiveGroupDrawListGenerator@@QEAAJ_KPEAVCDrawListPrimitiveBuilder@@W.c)
 * Callees:
 *     <none>
 */

void __fastcall CCommonRenderingEffect::GetSamplingInfo(CCommonRenderingEffect *this, bool *const a2)
{
  _QWORD *v2; // rcx
  __int64 v3; // r8
  bool v4; // zf

  v2 = (_QWORD *)((char *)this + 8);
  v3 = 2LL;
  do
  {
    v4 = *v2++ == 0LL;
    *a2++ = !v4;
    --v3;
  }
  while ( v3 );
}
