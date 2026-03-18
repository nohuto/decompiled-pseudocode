/*
 * XREFs of ?GetDestinationRectanglesCore@CAtlasedRectsMesh@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180026DC0
 * Callers:
 *     ?GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@I@Z @ 0x180026320 (-GetDestinationRectanglesCore@CAtlasedRectsGroup@@MEAAJPEAV-$TMilRect_@MUMilRectF@@UMilPointAndS.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CAtlasedRectsMesh::GetDestinationRectanglesCore(__int64 a1, __int64 a2, unsigned int a3)
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
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xC3u);
  }
  else if ( v3 )
  {
    v6 = 0LL;
    v7 = v3;
    do
    {
      *(_OWORD *)(v6 + a2) = *(_OWORD *)(v6 + *(_QWORD *)(a1 + 168));
      v6 += 16LL;
      --v7;
    }
    while ( v7 );
  }
  return v4;
}
