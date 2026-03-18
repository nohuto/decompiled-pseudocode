/*
 * XREFs of ??0CInk@@QEAA@PEAVCComposition@@@Z @ 0x18012AF5C
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18002FDA8 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCChannelContext@@W4MIL_RESOURCE_TYPE@@PEAPEAV.c)
 * Callees:
 *     ??0CResource@@IEAA@PEAVCComposition@@@Z @ 0x18008DD68 (--0CResource@@IEAA@PEAVCComposition@@@Z.c)
 */

CInk *__fastcall CInk::CInk(CInk *this, struct CComposition *a2)
{
  CResource::CResource(this, a2);
  *(_QWORD *)this = &CInk::`vftable';
  *((_QWORD *)this + 14) = &CDeviceResourceTable<CD2DInk,CInk,ID2DContext>::`vftable';
  *((_QWORD *)this + 15) = this;
  *((_QWORD *)this + 16) = (char *)this + 160;
  *((_QWORD *)this + 17) = (char *)this + 160;
  *((_DWORD *)this + 36) = 2;
  *(_QWORD *)((char *)this + 148) = 2LL;
  *((_OWORD *)this + 11) = *(_OWORD *)((char *)a2 + 252);
  *((_QWORD *)this + 26) = 0LL;
  *((_QWORD *)this + 27) = 0LL;
  *((_QWORD *)this + 28) = 0LL;
  *((_DWORD *)this + 58) = 0;
  return this;
}
