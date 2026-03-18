/*
 * XREFs of ?GetGeometryBounds@CAtlasedRectsGroup@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18009D3A0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnionUnsafe@?$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z @ 0x18004BAF0 (-UnionUnsafe@-$TMilRect@MUMilRectF@@UNotNeeded@RectUniqueness@@@@QEAA_NAEBV1@@Z.c)
 *     ?GetGeometryBounds@CAtlasedRectsMesh@@UEAAXPEAV?$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z @ 0x18009CCA0 (-GetGeometryBounds@CAtlasedRectsMesh@@UEAAXPEAV-$CRectF@ULocalRenderingHPC@CoordinateSpace@@@@@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CAtlasedRectsGroup::GetGeometryBounds(__int64 a1, __int64 a2)
{
  unsigned int v4; // eax
  __int64 v5; // rbp
  __int64 v6; // rcx
  void (__fastcall *v7)(__int64, __int128 *); // rax
  __int128 v8; // xmm0
  __int64 result; // rax
  __int128 i; // [rsp+20h] [rbp-38h] BYREF
  __int128 v11; // [rsp+30h] [rbp-28h] BYREF

  v4 = *(_DWORD *)(a1 + 32) ^ (*(_DWORD *)(a1 + 32) ^ ((*(_DWORD *)(a1 + 32) & 0xFFFFFFFE) + 2)) & 6;
  *(_DWORD *)(a1 + 32) = v4;
  if ( (v4 & 6) == 2 )
  {
    if ( (*(_BYTE *)(a1 + 252) & 1) != 0 )
    {
      v5 = 0LL;
      for ( i = 0uLL; (unsigned int)v5 < *(_DWORD *)(a1 + 216); v5 = (unsigned int)(v5 + 1) )
      {
        v6 = *(_QWORD *)(*(_QWORD *)(a1 + 224) + 8 * v5);
        if ( v6 )
        {
          v7 = *(void (__fastcall **)(__int64, __int128 *))(*(_QWORD *)v6 + 120LL);
          if ( v7 == CAtlasedRectsMesh::GetGeometryBounds )
            CAtlasedRectsMesh::GetGeometryBounds(v6, &v11);
          else
            v7(v6, &v11);
          TMilRect<float,MilRectF,RectUniqueness::NotNeeded>::UnionUnsafe((float *)&i, (float *)&v11);
        }
      }
      v8 = i;
      *(_DWORD *)(a1 + 252) &= ~1u;
      *(_OWORD *)(a1 + 236) = v8;
    }
    *(_OWORD *)a2 = *(_OWORD *)(a1 + 236);
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
