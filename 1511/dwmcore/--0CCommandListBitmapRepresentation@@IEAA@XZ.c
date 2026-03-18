/*
 * XREFs of ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x18002C4E8
 * Callers:
 *     ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18000F31C (--0CHwndBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18002DFB4 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BC8D2 (memset_0.c)
 */

CCommandListBitmapRepresentation *__fastcall CCommandListBitmapRepresentation::CCommandListBitmapRepresentation(
        CCommandListBitmapRepresentation *this)
{
  *(_QWORD *)this = &CCommandListBitmapRepresentation::`vftable';
  *((_DWORD *)this + 82) = 0;
  *((_QWORD *)this + 38) = (char *)this + 336;
  *((_QWORD *)this + 39) = (char *)this + 336;
  *((_DWORD *)this + 80) = 2;
  *((_DWORD *)this + 81) = 2;
  memset_0((char *)this + 8, 0, 0x90uLL);
  *((_DWORD *)this + 2) = 1;
  *((_DWORD *)this + 7) = 1;
  *((_DWORD *)this + 4) = -1;
  *((_DWORD *)this + 13) = 1;
  *((_DWORD *)this + 16) = -1;
  memset_0((char *)this + 152, 0, 0x94uLL);
  *((_DWORD *)this + 74) = -1;
  *((_DWORD *)this + 42) = 1065353216;
  *((_DWORD *)this + 45) = 1065353216;
  *((_DWORD *)this + 53) = 1065353216;
  *((_DWORD *)this + 50) = 1065353216;
  *((_DWORD *)this + 51) = 1065353216;
  *((_DWORD *)this + 52) = 1065353216;
  *((_DWORD *)this + 62) = 1065353216;
  *((_DWORD *)this + 63) = 1065353216;
  return this;
}
