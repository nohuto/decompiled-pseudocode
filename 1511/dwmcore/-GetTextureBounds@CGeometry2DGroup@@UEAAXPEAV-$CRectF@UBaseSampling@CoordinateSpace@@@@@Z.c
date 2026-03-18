/*
 * XREFs of ?GetTextureBounds@CGeometry2DGroup@@UEAAXPEAV?$CRectF@UBaseSampling@CoordinateSpace@@@@@Z @ 0x180133140
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x180036C00 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CGeometry2DGroup::GetTextureBounds(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // r15
  __int128 v7; // xmm0
  __int64 result; // rax
  __int128 i; // [rsp+20h] [rbp-48h] BYREF
  float v10[4]; // [rsp+30h] [rbp-38h] BYREF

  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 136) & 1) != 0 )
    {
      v5 = 0LL;
      for ( i = 0uLL; (unsigned int)v5 < *(_DWORD *)(a1 + 80); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 88) + 8 * v5);
        if ( v6 )
        {
          (*(void (__fastcall **)(__int64, float *))(*(_QWORD *)v6 + 128LL))(v6, v10);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&i, v10);
        }
      }
      v7 = i;
      *(_DWORD *)(a1 + 136) &= ~1u;
      *(_OWORD *)(a1 + 120) = v7;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 120);
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
