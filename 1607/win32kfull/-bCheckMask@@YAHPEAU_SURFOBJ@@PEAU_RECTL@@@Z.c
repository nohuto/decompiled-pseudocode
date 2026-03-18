/*
 * XREFs of ?bCheckMask@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@@Z @ 0x1C02ABAF0
 * Callers:
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 * Callees:
 *     ?bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z @ 0x1C02ABBC0 (-bCheckSurfaceRect@@YAHPEAU_SURFOBJ@@PEAU_RECTL@@PEAU_CLIPOBJ@@@Z.c)
 */

__int64 __fastcall bCheckMask(struct _SURFOBJ *a1, struct _RECTL *a2)
{
  __int64 result; // rax

  result = 1LL;
  if ( a1 )
  {
    if ( a1->iBitmapFormat == 1 )
      return bCheckSurfaceRect(a1, a2, 0LL);
    else
      return 0LL;
  }
  return result;
}
