/*
 * XREFs of ?GetBoundsFromInputs@CGaussianBlurEffect@@MEBAXAEBV?$DynArray@UInputBoundsPair@@$0A@@@PEAV?$TMilRect_@MUMilRectF@@UMilPointAndSizeF@@UNotNeeded@RectUniqueness@@@@@Z @ 0x18001A1B0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?IsEmpty@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ @ 0x180036DF0 (-IsEmpty@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEBA_NXZ.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

void __fastcall CGaussianBlurEffect::GetBoundsFromInputs(__int64 a1, __int64 a2, _OWORD *a3)
{
  __int128 v3; // xmm0
  __int64 v4; // r10
  __int64 i; // r9
  __int64 v6; // r11
  float v7; // xmm4_4
  int v8; // r9d
  __int128 v9; // [rsp+20h] [rbp-20h] BYREF

  v3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v4 = a2;
  *a3 = TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::sc_rcEmpty;
  v9 = v3;
  for ( i = 0LL; (unsigned int)i < *(_DWORD *)(v4 + 24); i = (unsigned int)(v8 + 1) )
  {
    v9 = *(_OWORD *)(*(_QWORD *)v4 + 20 * i + 4);
    if ( !(unsigned __int8)TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::IsEmpty(&v9) )
    {
      *(float *)&v9 = *(float *)&v9 - v7;
      *((float *)&v9 + 1) = *((float *)&v9 + 1) - v7;
      *((float *)&v9 + 2) = *((float *)&v9 + 2) + v7;
      *((float *)&v9 + 3) = *((float *)&v9 + 3) + v7;
    }
    TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(v6, &v9);
  }
}
