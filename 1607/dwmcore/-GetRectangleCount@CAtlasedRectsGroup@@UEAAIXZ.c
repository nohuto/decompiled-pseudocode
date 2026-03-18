/*
 * XREFs of ?GetRectangleCount@CAtlasedRectsGroup@@UEAAIXZ @ 0x18009D5E0
 * Callers:
 *     ?DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z @ 0x1800691B0 (-DrawAtlasedRects@CDrawingContext@@UEAAJPEAVCAtlasedRects@@PEAVCImageSource@@@Z.c)
 * Callees:
 *     ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18009CC90 (-GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetRectangleCount(CAtlasedRectsGroup *this)
{
  unsigned int v1; // edi
  unsigned int v3; // eax
  __int64 result; // rax
  int v5; // ebp
  unsigned int i; // esi
  CAtlasedRectsMesh *v7; // rcx
  __int64 (*v8)(void); // rax
  int RectangleCount; // eax

  v1 = 0;
  v3 = *((_DWORD *)this + 8) ^ (*((_DWORD *)this + 8) ^ ((*((_DWORD *)this + 8) & 0xFFFFFFFE) + 2)) & 6;
  *((_DWORD *)this + 8) = v3;
  if ( (v3 & 6) == 2 )
  {
    if ( (*((_BYTE *)this + 252) & 2) != 0 )
    {
      v5 = 0;
      for ( i = 0; i < *((_DWORD *)this + 54); ++i )
      {
        v7 = *(CAtlasedRectsMesh **)(*((_QWORD *)this + 28) + 8LL * i);
        if ( v7 )
        {
          v8 = *(__int64 (**)(void))(*(_QWORD *)v7 + 112LL);
          if ( (char *)v8 == (char *)CAtlasedRectsMesh::GetRectangleCount )
            RectangleCount = CAtlasedRectsMesh::GetRectangleCount(v7);
          else
            RectangleCount = v8();
          v5 += RectangleCount;
        }
      }
      *((_DWORD *)this + 63) &= ~2u;
      *((_DWORD *)this + 58) = v5;
    }
    v1 = *((_DWORD *)this + 58);
  }
  result = v1;
  *((_DWORD *)this + 8) ^= (*((_DWORD *)this + 8) ^ (2 * (*((_DWORD *)this + 8) >> 1) - 2)) & 6;
  return result;
}
