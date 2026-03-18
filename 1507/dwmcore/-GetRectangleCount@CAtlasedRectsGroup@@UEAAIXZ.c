/*
 * XREFs of ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x1800172A0
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x180029C90 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18006F5F0 (-GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetRectangleCount(CAtlasedRectsGroup *this)
{
  unsigned int v1; // edi
  unsigned int v3; // eax
  __int64 result; // rax
  int v5; // ebp
  unsigned int i; // esi
  CAtlasedRectsMesh *v7; // r14
  unsigned int (__fastcall *v8)(CAtlasedRectsMesh *__hidden); // r15
  unsigned int RectangleCount; // eax

  v1 = 0;
  v3 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v3;
  if ( (v3 & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 180) & 2) != 0 )
    {
      v5 = 0;
      for ( i = 0; i < *((_DWORD *)this + 36); ++i )
      {
        v7 = *(CAtlasedRectsMesh **)(*((_QWORD *)this + 19) + 8LL * i);
        if ( v7 )
        {
          v8 = *(unsigned int (__fastcall **)(CAtlasedRectsMesh *__hidden))(*(_QWORD *)v7 + 96LL);
          if ( v8 == CAtlasedRectsMesh::GetRectangleCount )
            RectangleCount = CAtlasedRectsMesh::GetRectangleCount(v7);
          else
            RectangleCount = v8(v7);
          v5 += RectangleCount;
        }
      }
      *((_DWORD *)this + 45) &= ~2u;
      *((_DWORD *)this + 40) = v5;
    }
    v1 = *((_DWORD *)this + 40);
  }
  result = v1;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return result;
}
