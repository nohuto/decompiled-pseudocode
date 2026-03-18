/*
 * XREFs of ??0CAtlasedRectsCommandList@@IEAA@PEAVCD2DCommandList@@PEAUID2D1Bitmap@@@Z @ 0x180013B94
 * Callers:
 *     ?Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z @ 0x180013A4C (-Create@CAtlasedRectsCommandList@@SAJPEAVCD2DCommandList@@PEAUID2D1Bitmap@@PEAPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CAtlasedRectsCommandList *__fastcall CAtlasedRectsCommandList::CAtlasedRectsCommandList(
        CAtlasedRectsCommandList *this,
        struct CD2DCommandList *a2,
        struct ID2D1Bitmap *a3)
{
  CAtlasedRectsCommandList *result; // rax

  *((_DWORD *)this + 2) = 0;
  *(_QWORD *)this = &CAtlasedRectsCommandList::`vftable';
  *((_QWORD *)this + 3) = a2;
  (*(void (__fastcall **)(struct CD2DCommandList *))(*(_QWORD *)a2 + 8LL))(a2);
  result = this;
  *((_QWORD *)this + 2) = a3;
  return result;
}
