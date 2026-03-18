/*
 * XREFs of ?bCheckXlate@@YAHPEAU_SURFOBJ@@PEAU_XLATEOBJ@@@Z @ 0x1C02ABE88
 * Callers:
 *     NtGdiEngAlphaBlend @ 0x1C02AC780 (NtGdiEngAlphaBlend.c)
 *     NtGdiEngBitBlt @ 0x1C02ACAB0 (NtGdiEngBitBlt.c)
 *     NtGdiEngCopyBits @ 0x1C02AD0A0 (NtGdiEngCopyBits.c)
 *     NtGdiEngPlgBlt @ 0x1C02AE640 (NtGdiEngPlgBlt.c)
 *     NtGdiEngStretchBlt @ 0x1C02AE9C0 (NtGdiEngStretchBlt.c)
 *     NtGdiEngStretchBltROP @ 0x1C02AEE10 (NtGdiEngStretchBltROP.c)
 *     NtGdiEngTransparentBlt @ 0x1C02AFDA0 (NtGdiEngTransparentBlt.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bCheckXlate(struct _SURFOBJ *a1, struct _XLATEOBJ *a2)
{
  unsigned int v2; // r8d
  ULONG v3; // ecx
  ULONG v4; // ecx
  bool v5; // zf

  v2 = 1;
  if ( !a1 || !a2 || (a2->flXlate & 1) != 0 )
    return v2;
  v3 = a1->iBitmapFormat - 1;
  if ( !v3 )
  {
    v2 = 0;
    v5 = a2->cEntries == 2;
    goto LABEL_10;
  }
  v4 = v3 - 1;
  if ( !v4 )
  {
    v2 = 0;
    v5 = ((a2->cEntries - 8) & 0xFFFFFFF7) == 0;
LABEL_10:
    LOBYTE(v2) = v5;
    return v2;
  }
  if ( v4 == 1 )
    return a2->cEntries <= 0x100;
  return v2;
}
