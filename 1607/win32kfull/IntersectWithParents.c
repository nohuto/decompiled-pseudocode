/*
 * XREFs of IntersectWithParents @ 0x1C005CC28
 * Callers:
 *     ?SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z @ 0x1C000D0AC (-SpbTransfer@@YAHPEAUtagSPB@@PEAUtagWND@@H@Z.c)
 *     ?ValidateParents@@YAHPEAUtagWND@@H@Z @ 0x1C005E984 (-ValidateParents@@YAHPEAUtagWND@@H@Z.c)
 *     xxxInternalInvalidate @ 0x1C005EB10 (xxxInternalInvalidate.c)
 *     xxxGetUpdateRect @ 0x1C01173D4 (xxxGetUpdateRect.c)
 *     xxxGetUpdateRgn @ 0x1C020E404 (xxxGetUpdateRgn.c)
 * Callees:
 *     PhysicalToLogicalInPlaceRect @ 0x1C005C39C (PhysicalToLogicalInPlaceRect.c)
 *     IntersectRect @ 0x1C005D934 (IntersectRect.c)
 */

__int64 __fastcall IntersectWithParents(__int64 a1, __int64 a2)
{
  __int64 i; // rbx
  char v5; // al
  __int128 v6; // [rsp+20h] [rbp-18h] BYREF

  if ( (*(_BYTE *)(a1 + 51) & 0x20) == 0 )
  {
    for ( i = *(_QWORD *)(a1 + 88); i; i = *(_QWORD *)(i + 88) )
    {
      v5 = *(_BYTE *)(i + 55);
      if ( (v5 & 0x10) == 0 )
        return 0LL;
      if ( (v5 & 0x20) != 0 )
        return 0LL;
      v6 = *(_OWORD *)(i + 128);
      PhysicalToLogicalInPlaceRect(a1, &v6);
      if ( !(unsigned int)IntersectRect(a2, a2, &v6) )
        return 0LL;
      if ( (*(_BYTE *)(i + 51) & 0x20) != 0 )
        return 1LL;
      a1 = i;
    }
  }
  return 1LL;
}
