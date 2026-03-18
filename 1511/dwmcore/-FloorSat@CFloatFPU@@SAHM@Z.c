/*
 * XREFs of ?FloorSat@CFloatFPU@@SAHM@Z @ 0x1801381B4
 * Callers:
 *     ?CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@MMMMPEAHPEAIPEAM33@Z @ 0x180137D24 (-CalculateSurfaceSizeAndMapping1D@CViewportAlignedIntermediateRealizer@@AEAAXW4Enum@TileMode1D@@.c)
 * Callees:
 *     floorf_0 @ 0x1800BC87E (floorf_0.c)
 */

__int64 __fastcall CFloatFPU::FloorSat(float a1)
{
  if ( a1 < -2147483600.0 )
    return 0x80000000LL;
  if ( a1 >= 2147483600.0 )
    return 0x7FFFFFFFLL;
  return (unsigned int)(int)floorf_0(a1);
}
