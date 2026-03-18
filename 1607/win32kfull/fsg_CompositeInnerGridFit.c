/*
 * XREFs of fsg_CompositeInnerGridFit @ 0x1C001E1A8
 * Callers:
 *     fsg_ExecuteGlyph @ 0x1C00C8060 (fsg_ExecuteGlyph.c)
 * Callees:
 *     scl_CopyCurrentPhantomPoints @ 0x1C001E3D4 (scl_CopyCurrentPhantomPoints.c)
 *     scl_ScaleOldPhantomPoints @ 0x1C001E434 (scl_ScaleOldPhantomPoints.c)
 *     scl_AdjustOldSideBearingPoints @ 0x1C001E590 (scl_AdjustOldSideBearingPoints.c)
 *     itrp_SetSameTransformFlag @ 0x1C001E60C (itrp_SetSameTransformFlag.c)
 *     itrp_ExecuteGlyphPgm @ 0x1C001E630 (itrp_ExecuteGlyphPgm.c)
 *     scl_CalcOrigPhantomPoints @ 0x1C00C9A58 (scl_CalcOrigPhantomPoints.c)
 *     scl_RoundCurrentSideBearingPnt @ 0x1C00CA08C (scl_RoundCurrentSideBearingPnt.c)
 *     scl_ScaleBackCurrentCharPoints @ 0x1C014C6E4 (scl_ScaleBackCurrentCharPoints.c)
 *     scl_ScaleBackCurrentPhantomPoints @ 0x1C014C778 (scl_ScaleBackCurrentPhantomPoints.c)
 *     scl_ScaleFixedCurrentCharPoints @ 0x1C014CE7C (scl_ScaleFixedCurrentCharPoints.c)
 *     scl_InitializeChildScaling @ 0x1C0152AA0 (scl_InitializeChildScaling.c)
 *     memmove @ 0x1C015A040 (memmove.c)
 *     memset @ 0x1C015A380 (memset.c)
 *     scl_OriginalPhantomPointsToCurrentFixedFUnits @ 0x1C02DCC88 (scl_OriginalPhantomPointsToCurrentFixedFUnits.c)
 */

__int64 __fastcall fsg_CompositeInnerGridFit(
        __int64 a1,
        int a2,
        __int64 a3,
        int a4,
        __int64 a5,
        unsigned __int16 a6,
        __int16 a7,
        __int16 a8,
        unsigned __int16 a9,
        unsigned __int16 a10,
        unsigned int a11,
        __int64 a12,
        __int64 a13,
        unsigned __int16 a14,
        __int64 a15,
        _WORD *a16,
        _WORD *a17,
        _DWORD *a18)
{
  __int64 v22; // rcx
  __int64 result; // rax
  __int128 v24; // xmm1
  int v25; // eax
  _OWORD v26[2]; // [rsp+50h] [rbp-58h] BYREF
  int v27; // [rsp+70h] [rbp-38h]

  *(_BYTE *)(a1 + 341) = 1;
  *(_BYTE *)(a1 + 397) = 1;
  *a16 = *(_WORD *)(a1 + 118);
  *a17 = *(_WORD *)(a1 + 116);
  *a18 = 0;
  scl_CalcOrigPhantomPoints(a3, a13, a9, a10, a7, a8);
  memmove(
    *(void **)(a3 + 16),
    *(const void **)a3,
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 1));
  memmove(
    *(void **)(a3 + 24),
    *(const void **)(a3 + 8),
    4LL * (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 1));
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
  itrp_SetSameTransformFlag(a1, a11);
  if ( !a11 )
  {
    v24 = *(_OWORD *)(a12 + 16);
    v25 = *(_DWORD *)(a12 + 32);
    v26[0] = *(_OWORD *)a12;
    v26[1] = v24;
    v27 = v25;
    scl_InitializeChildScaling(v22, v26, a6);
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
          (unsigned __int16)(*(_WORD *)(*(_QWORD *)(a3 + 64) + 2LL * (*(__int16 *)(a3 + 80) - 1)) + 9)),
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
