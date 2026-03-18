/*
 * XREFs of fsSelectionFlags @ 0x1C001C8F8
 * Callers:
 *     vVtfdFill_IFIMetrics @ 0x1C00174B8 (vVtfdFill_IFIMetrics.c)
 *     bConvertFontRes @ 0x1C00193B8 (bConvertFontRes.c)
 *     vBmfdFill_IFIMETRICS @ 0x1C0019518 (vBmfdFill_IFIMETRICS.c)
 *     bBMFDIFIMETRICS @ 0x1C001C7D8 (bBMFDIFIMETRICS.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall fsSelectionFlags(__int64 a1)
{
  __int16 result; // ax

  result = *(_BYTE *)(a1 + 80) != 0;
  if ( *(_BYTE *)(a1 + 81) )
    result |= 2u;
  if ( *(_BYTE *)(a1 + 82) )
    result |= 0x10u;
  if ( *(_WORD *)(a1 + 83) > 0x190u )
    return result | 0x20;
  return result;
}
