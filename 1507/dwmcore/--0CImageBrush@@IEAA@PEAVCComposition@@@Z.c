/*
 * XREFs of ??0CImageBrush@@IEAA@PEAVCComposition@@@Z @ 0x180085440
 * Callers:
 *     ?Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVCResource@@@Z @ 0x18006D070 (-Create@CResourceFactory@@SAJPEAVCComposition@@PEAVCResourceTable@@W4MIL_RESOURCE_TYPE@@PEAPEAVC.c)
 * Callees:
 *     ??0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z @ 0x180080FBC (--0CMILBrushBitmap@@IEAA@PEAVCMILFactory@@@Z.c)
 */

CImageBrush *__fastcall CImageBrush::CImageBrush(CImageBrush *this, struct CComposition *a2)
{
  *((_DWORD *)this + 2) = 0;
  *((_QWORD *)this + 2) = a2;
  *((_QWORD *)this + 3) = 0LL;
  *((_DWORD *)this + 8) = 0;
  *((_DWORD *)this + 8) |= 1u;
  *(_QWORD *)this = &CTileBrush::`vftable';
  *(_QWORD *)((char *)this + 76) = 0LL;
  *((_DWORD *)this + 21) = 0;
  *((_BYTE *)this + 88) = 0;
  *((_DWORD *)this + 14) = 1065353216;
  *((_DWORD *)this + 15) = 1065353216;
  *((_DWORD *)this + 16) = 1065353216;
  *(_QWORD *)((char *)this + 68) = 1065353216LL;
  *((_DWORD *)this + 23) = 0;
  CMILBrushBitmap::CMILBrushBitmap((CImageBrush *)((char *)this + 96), a2);
  *((_QWORD *)this + 12) = &LocalMILObject<CMILBrushBitmap>::`vftable';
  *((_QWORD *)this + 15) = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILBrush'};
  *((_QWORD *)this + 19) = &LocalMILObject<CMILBrushBitmap>::`vftable'{for `CMILResourceCache'};
  *(_QWORD *)this = &CImageBrush::`vftable';
  return this;
}
