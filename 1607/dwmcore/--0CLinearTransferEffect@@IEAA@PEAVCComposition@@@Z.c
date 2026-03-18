/*
 * XREFs of ??0CLinearTransferEffect@@IEAA@PEAVCComposition@@@Z @ 0x180156948
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z @ 0x180014E8C (--0CFilterEffect@@IEAA@PEAVCComposition@@AEBU_GUID@@@Z.c)
 */

CLinearTransferEffect *__fastcall CLinearTransferEffect::CLinearTransferEffect(
        CLinearTransferEffect *this,
        struct CComposition *a2)
{
  CLinearTransferEffect *result; // rax

  CFilterEffect::CFilterEffect(this, a2, &CLSID_D2D1LinearTransfer);
  *(_QWORD *)((char *)this + 276) = 1065353216LL;
  *((_DWORD *)this + 68) = 0;
  *(_QWORD *)this = &CLinearTransferEffect::`vftable';
  result = this;
  *((_DWORD *)this + 71) = 0;
  *((_QWORD *)this + 36) = 1065353216LL;
  *((_DWORD *)this + 74) = 0;
  *(_QWORD *)((char *)this + 300) = 1065353216LL;
  *((_DWORD *)this + 77) = 0;
  *((_QWORD *)this + 39) = 1065353216LL;
  *((_DWORD *)this + 80) = 0;
  return result;
}
