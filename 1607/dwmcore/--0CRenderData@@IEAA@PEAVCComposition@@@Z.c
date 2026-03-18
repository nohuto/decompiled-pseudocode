/*
 * XREFs of ??0CRenderData@@IEAA@PEAVCComposition@@@Z @ 0x18004E330
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0?$DynArrayImpl@$00@@IEAA@PEAXIII@Z @ 0x1800A36B8 (--0-$DynArrayImpl@$00@@IEAA@PEAXIII@Z.c)
 */

CRenderData *__fastcall CRenderData::CRenderData(CRenderData *this, struct CComposition *a2)
{
  CRenderData *result; // rax

  CResource::CResource(this, a2);
  *(_QWORD *)this = &CRenderData::`vftable';
  *((_QWORD *)this + 15) = (char *)this + 112;
  *((_QWORD *)this + 14) = (char *)this + 112;
  *((_QWORD *)this + 16) = 0LL;
  *((_DWORD *)this + 34) = 0;
  *((_DWORD *)this + 35) = 0;
  *((_QWORD *)this + 18) = 0LL;
  *((_DWORD *)this + 38) = 0;
  DynArrayImpl<1>::DynArrayImpl<1>((char *)this + 160, 0LL, 0LL);
  result = this;
  *((_WORD *)this + 96) = 256;
  return result;
}
