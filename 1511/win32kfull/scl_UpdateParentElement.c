/*
 * XREFs of scl_UpdateParentElement @ 0x1C00ADA44
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00AD7C8 (fsg_MergeGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_UpdateParentElement(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v3; // r8d
  __int64 v4; // rcx
  __int16 v5; // r10
  __int64 v6; // rcx
  __int64 v7; // r9

  v2 = *(__int16 *)(a2 + 80);
  v3 = v2 + *(__int16 *)(a1 + 80);
  if ( (unsigned int)(v3 + 0x8000) > 0xFFFF )
    return 5123LL;
  if ( !(_WORD)v2 )
  {
LABEL_7:
    *(_WORD *)(a2 + 80) = v3;
    return 0LL;
  }
  v4 = *(_QWORD *)(a2 + 64);
  v5 = *(_WORD *)(v4 + 2LL * (__int16)v2 - 2) + 1;
  if ( (unsigned int)(*(__int16 *)(v4 + 2LL * (__int16)v3 - 2) + 0x8000 + v5) <= 0xFFFF )
  {
    if ( (__int16)v2 < (__int16)v3 )
    {
      v6 = 2LL * (__int16)v2;
      v7 = (unsigned __int16)(v3 - v2);
      do
      {
        *(_WORD *)(*(_QWORD *)(a2 + 56) + v6) += v5;
        *(_WORD *)(v6 + *(_QWORD *)(a2 + 64)) += v5;
        v6 += 2LL;
        --v7;
      }
      while ( v7 );
    }
    goto LABEL_7;
  }
  return 5121LL;
}
