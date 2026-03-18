/*
 * XREFs of ??0CCommandListBitmapRepresentation@@IEAA@XZ @ 0x1800B0E8C
 * Callers:
 *     ??0CHwndBitmap@@IEAA@PEAVCComposition@@@Z @ 0x18000A79C (--0CHwndBitmap@@IEAA@PEAVCComposition@@@Z.c)
 *     ??0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z @ 0x180093564 (--0CCompositionSurfaceBitmap@@IEAA@PEAVCComposition@@@Z.c)
 * Callees:
 *     memset_0 @ 0x1800BF66E (memset_0.c)
 */

CCommandListBitmapRepresentation *__fastcall CCommandListBitmapRepresentation::CCommandListBitmapRepresentation(
        CCommandListBitmapRepresentation *this)
{
  *((_QWORD *)this + 38) = 0LL;
  *(_QWORD *)this = &CCommandListBitmapRepresentation::`vftable';
  *((_DWORD *)this + 84) = 0;
  *((_QWORD *)this + 39) = (char *)this + 344;
  *((_QWORD *)this + 40) = (char *)this + 344;
  *((_DWORD *)this + 82) = 2;
  *((_DWORD *)this + 83) = 2;
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
