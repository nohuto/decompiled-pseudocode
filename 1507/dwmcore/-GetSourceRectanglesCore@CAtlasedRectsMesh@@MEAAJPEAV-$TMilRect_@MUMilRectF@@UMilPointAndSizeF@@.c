/*
 * XREFs of ?GetSourceRectanglesCore@CAtlasedRectsMesh@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x18006F570
 * Callers:
 *     ?GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180017170 (-GetSourceRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndSizeF@.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedRectsMesh::GetSourceRectanglesCore(__int64 a1, __int64 a2, unsigned int a3)
{
  unsigned int v3; // r9d
  unsigned int v4; // ebx
  __int64 v6; // rax
  __int64 v7; // rdx

  v3 = *(_DWORD *)(a1 + 144);
  v4 = 0;
  if ( a3 < v3 )
  {
    v4 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x9Fu);
  }
  else if ( v3 )
  {
    v6 = 0LL;
    v7 = v3;
    do
    {
      *(_OWORD *)(v6 + a2) = *(_OWORD *)(v6 + *(_QWORD *)(a1 + 152));
      v6 += 16LL;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
