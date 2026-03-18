/*
 * XREFs of ?GetGeometryBounds@CAtlasedRectsGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x180017050
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004DEE0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetGeometryBounds@CAtlasedRectsMesh@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18006F600 (-GetGeometryBounds@CAtlasedRectsMesh@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetGeometryBounds(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r14
  void (__fastcall *v7)(__int64, _BYTE *); // r15
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 i; // [rsp+20h] [rbp-48h] BYREF
  _BYTE v11[16]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 180) & 1) != 0 )
    {
      v5 = 0LL;
      for ( i = 0uLL; (unsigned int)v5 < *(_DWORD *)(a1 + 144); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 152) + 8 * v5);
        if ( v6 )
        {
          v7 = *(void (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v6 + 104LL);
          if ( (char *)v7 == (char *)CAtlasedRectsMesh::GetGeometryBounds )
            CAtlasedRectsMesh::GetGeometryBounds(v6, v11);
          else
            v7(v6, v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe(&i, v11);
        }
      }
      v8 = i;
      *(_DWORD *)(a1 + 180) &= ~1u;
      *(_OWORD *)(a1 + 164) = v8;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 164);
  }
  else
  {
    *(_DWORD *)(a2 + 12) = 0;
    *(_DWORD *)(a2 + 8) = 0;
    *(_DWORD *)(a2 + 4) = 0;
    *(_DWORD *)a2 = 0;
  }
  result = (*(_DWORD *)(a1 + 32) ^ (2 * (*(_DWORD *)(a1 + 32) >> 1) - 2)) & 6;
  *(_DWORD *)(a1 + 32) ^= result;
  return result;
}
