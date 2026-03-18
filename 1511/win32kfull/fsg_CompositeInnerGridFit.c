/*
 * XREFs of fsg_CompositeInnerGridFit @ 0x1C00B2D90
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00AEC30 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_CalcOrigPhantomPoints @ 0x1C00B0584 (scl_CalcOrigPhantomPoints.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00B0BA0 (scl_RoundCurrentSideBearingPnt.c)
 *     scl_CopyCurrentPhantomPoints @ 0x1C00B2FA4 (scl_CopyCurrentPhantomPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C00B2FF8 (scl_ScaleOldPhantomPoints.c)
 *     scl_AdjustOldSideBearingPoints @ 0x1C00ECB3C (scl_AdjustOldSideBearingPoints.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C00EFD3C (itrp_ExecuteGlyphPgm.c)
 *     itrp_SetSameTransformFlag @ 0x1C00F2A6C (itrp_SetSameTransformFlag.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C0147FE0 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C0148060 (scl_ScaleBackCurrentPhantomPoints.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C014851C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_InitializeChildScaling @ 0x1C014D298 (scl_InitializeChildScaling.c)
 *     memmove @ 0x1C0152980 (memmove.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DC994 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 */

__int64 __fastcall fsg_CompositeInnerGridFit(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6,
        unsigned __int16 a7,
        unsigned __int16 a8,
        __int16 a9,
        __int16 a10,
        unsigned int a11,
        __int64 a12,
        __int16 *a13,
        unsigned __int16 a14,
        __int64 a15,
        _WORD *a16,
        _WORD *a17,
        _DWORD *a18)
{
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 result; // rax
  __int128 v25; // xmm1
  int v26; // eax
  _OWORD v27[2]; // [rsp+50h] [rbp-58h] BYREF
  int v28; // [rsp+70h] [rbp-38h]

  *a16 = *(_WORD *)(a1 + 118);
  *a17 = *(_WORD *)(a1 + 116);
  *(_BYTE *)(a1 + 341) = 1;
  *(_BYTE *)(a1 + 397) = 1;
  *a18 = 0;
  scl_CalcOrigPhantomPoints(a3, a13, a9, a10, a7, a8);
  memmove(
    *(void **)(a3 + 16),
    *(const void **)a3,
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * *(__int16 *)(a3 + 80) - 2) + 1));
  memmove(
    *(void **)(a3 + 24),
    *(const void **)(a3 + 8),
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * *(__int16 *)(a3 + 80) - 2) + 1));
  if ( (*(_DWORD *)(a1 + 120) & 1) != 0 || !a4 )
  {
    if ( a11 )
    {
      scl_ScaleOldPhantomPoints(a3, a1);
      scl_CopyCurrentPhantomPoints(a3);
    }
    else
    {
      scl_OriginalPhantomPointsToCurrentFixedFUnits(a3);
    }
    return 0LL;
  }
  itrp_SetSameTransformFlag(a1, a11, v22);
  if ( !a11 )
  {
    v25 = *(_OWORD *)(a12 + 16);
    v26 = *(_DWORD *)(a12 + 32);
    v27[0] = *(_OWORD *)a12;
    v27[1] = v25;
    v28 = v26;
    scl_InitializeChildScaling(v23, v27, a6);
    scl_ScaleFixedCurrentCharPoints(a3, a1);
  }
  scl_ScaleOldPhantomPoints(a3, a1);
  scl_AdjustOldSideBearingPoints(a3, a1);
  scl_CopyCurrentPhantomPoints(a3);
  scl_RoundCurrentSideBearingPnt(a3, a1, a6);
  if ( !a14
    || (memset(
          *(void **)(a3 + 72),
          0,
          (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * *(__int16 *)(a3 + 80) - 2) + 9)),
        result = itrp_ExecuteGlyphPgm(
                   a2,
                   a3,
                   a15,
                   (unsigned int)a15 + a14,
                   a1,
                   a5,
                   (__int64)a16,
                   (__int64)a17,
                   (__int64)a18),
        !(_DWORD)result) )
  {
    if ( !a11 )
    {
      scl_ScaleBackCurrentCharPoints(a3, a1);
      scl_ScaleBackCurrentPhantomPoints(a3, a1);
    }
    return 0LL;
  }
  return result;
}
