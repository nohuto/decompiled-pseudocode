/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x18011D818
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180002CCC (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1LinearTransfer);
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  *(_DWORD *)(v2 + 224) = 0;
  result = (CLinearTransferEffect *)v2;
  *(_DWORD *)(v2 + 176) = 1065353216;
  *(_QWORD *)(v2 + 180) = 1065353216LL;
  *(_DWORD *)(v2 + 188) = 1065353216;
  *(_QWORD *)(v2 + 192) = 1065353216LL;
  *(_DWORD *)(v2 + 200) = 1065353216;
  *(_QWORD *)(v2 + 204) = 1065353216LL;
  *(_DWORD *)(v2 + 212) = 1065353216;
  *(_QWORD *)(v2 + 216) = 1065353216LL;
  return result;
}
