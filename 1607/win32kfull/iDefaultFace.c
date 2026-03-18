/*
 * XREFs of iDefaultFace @ 0x1C0017AB8
 * Callers:
 *     bVtfdLoadFont @ 0x1C0017264 (bVtfdLoadFont.c)
 *     vVtfdFill_IFIMetrics @ 0x1C00174B8 (vVtfdFill_IFIMetrics.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall iDefaultFace(__int64 a1)
{
  char v1; // al

  v1 = *(_BYTE *)(a1 + 80);
  if ( *(unsigned __int16 *)(a1 + 83) > 0x190u )
    return v1 != 0 ? 3 : 1;
  else
    return v1 != 0 ? 2 : 0;
}
