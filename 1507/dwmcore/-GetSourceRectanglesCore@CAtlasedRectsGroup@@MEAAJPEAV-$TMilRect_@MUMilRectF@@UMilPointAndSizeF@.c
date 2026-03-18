/*
 * XREFs of ?GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180017170
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?GetSourceRectanglesCore@CAtlasedRectsMesh@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006F570 (-GetSourceRectanglesCore@CAtlasedRectsMesh@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@.c)
 *     ?GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ @ 0x18006F5F0 (-GetRectangleCount@CAtlasedRectsMesh@@UEAAIXZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetSourceRectanglesCore(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // esi
  unsigned int v7; // eax
  __int64 i; // rbp
  CAtlasedRectsMesh *v9; // rbx
  unsigned int (__fastcall *v10)(CAtlasedRectsMesh *__hidden); // rsi
  unsigned int RectangleCount; // eax
  unsigned int v12; // r14d
  __int64 (__fastcall *v13)(CAtlasedRectsMesh *, __int64, _QWORD); // rsi
  int SourceRectanglesCore; // eax

  v3 = 0;
  v7 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v7;
  if ( (v7 & 6) == 2 )
  {
    for ( i = 0LL; (unsigned int)i < *(_DWORD *)(a1 + 144); i = (unsigned int)(i + 1) )
    {
      v9 = *(CAtlasedRectsMesh **)(*(_QWORD *)(a1 + 152) + 8 * i);
      if ( v9 )
      {
        v10 = *(unsigned int (__fastcall **)(CAtlasedRectsMesh *__hidden))(*(_QWORD *)v9 + 96LL);
        if ( v10 == CAtlasedRectsMesh::GetRectangleCount )
          RectangleCount = CAtlasedRectsMesh::GetRectangleCount(v9);
        else
          RectangleCount = v10(v9);
        v12 = RectangleCount;
        v13 = *(__int64 (__fastcall **)(CAtlasedRectsMesh *, __int64, _QWORD))(*(_QWORD *)v9 + 112LL);
        if ( (char *)v13 == (char *)CAtlasedRectsMesh::GetSourceRectanglesCore )
          SourceRectanglesCore = CAtlasedRectsMesh::GetSourceRectanglesCore(v9, a2, a3);
        else
          SourceRectanglesCore = v13(v9, a2, a3);
        v3 = SourceRectanglesCore;
        if ( SourceRectanglesCore < 0 )
        {
          MilInstrumentationCheckHR(0x14u, 0LL, 0, SourceRectanglesCore, 0xCCu);
          break;
        }
        a2 += 16LL * v12;
        a3 -= v12;
      }
    }
  }
  *(_DWORD *)(a1 + 32) ^= (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  return v3;
}
