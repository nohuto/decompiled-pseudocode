/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180134268
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x180092F84 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x18001A8C8 (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  __int64 v2; // rcx
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1LinearTransfer);
  *(_QWORD *)(v2 + 196) = 1065353216LL;
  *(_QWORD *)v2 = &CLinearTransferEffect::`vftable';
  result = (CLinearTransferEffect *)v2;
  *(_QWORD *)(v2 + 208) = 1065353216LL;
  *(_DWORD *)(v2 + 192) = 0;
  *(_DWORD *)(v2 + 204) = 0;
  *(_DWORD *)(v2 + 216) = 0;
  *(_DWORD *)(v2 + 228) = 0;
  *(_DWORD *)(v2 + 240) = 0;
  *(_QWORD *)(v2 + 220) = 1065353216LL;
  *(_QWORD *)(v2 + 232) = 1065353216LL;
  return result;
}
