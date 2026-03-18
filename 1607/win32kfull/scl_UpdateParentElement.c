/*
 * XREFs of scl_UpdateParentElement @ 0x1C00C5560
 * Callers:
 *     fsg_MergeGlyphData @ 0x1C00C52D0 (fsg_MergeGlyphData.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall scl_UpdateParentElement(__int64 a1, __int64 a2)
{
  int v2; // r9d
  int v4; // r8d
  __int64 v5; // rdx
  __int16 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdx

  v2 = *(__int16 *)(a2 + 80);
  v4 = v2 + *(__int16 *)(a1 + 80);
  if ( (unsigned int)(v4 + 0x8000) > 0xFFFF )
    return 5123LL;
  if ( !(_WORD)v2 )
  {
LABEL_7:
    *(_WORD *)(a2 + 80) = v4;
    return 0LL;
  }
  v5 = *(_QWORD *)(a2 + 64);
  v6 = *(_WORD *)(v5 + 2LL * (v2 - 1)) + 1;
  if ( (unsigned int)(*(__int16 *)(v5 + 2LL * ((__int16)v4 - 1)) + 0x8000 + v6) <= 0xFFFF )
  {
    if ( (__int16)v2 < (__int16)v4 )
    {
      v7 = 2LL * (__int16)v2;
      v8 = (unsigned __int16)(v4 - v2);
      do
      {
        *(_WORD *)(*(_QWORD *)(a2 + 56) + v7) += v6;
        *(_WORD *)(v7 + *(_QWORD *)(a2 + 64)) += v6;
        v7 += 2LL;
        --v8;
      }
      while ( v8 );
    }
    goto LABEL_7;
  }
  return 5121LL;
}
