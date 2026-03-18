/*
 * XREFs of ??0CFloodEffect@@IEAA@PEAVCComposition@@@Z @ 0x180112A94
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CFloodEffect *__fastcall CFloodEffect::CFloodEffect(CFloodEffect *this, struct CComposition *a2)
{
  __int64 v2; // rcx
  CFloodEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1Flood);
  *(_DWORD *)(v2 + 204) = 1065353216;
  *(_QWORD *)(v2 + 192) = 0LL;
  *(_DWORD *)(v2 + 200) = 0;
  result = (CFloodEffect *)v2;
  *(_QWORD *)v2 = &CFloodEffect::`vftable';
  return result;
}
