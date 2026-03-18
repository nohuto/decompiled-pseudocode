/*
 * XREFs of CreateBitmapStrip @ 0x1C00D7F70
 * Callers:
 *     xxxSetWindowNCMetrics @ 0x1C00D7C00 (xxxSetWindowNCMetrics.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0017A20 (-CreateDPIBitmapStrip@@YAHH@Z.c)
 */

__int64 CreateBitmapStrip()
{
  unsigned int v0; // ebx

  if ( !(unsigned int)CreateDPIBitmapStrip(0) )
    return 0;
  v0 = 1;
  if ( !(unsigned int)CreateDPIBitmapStrip(1) )
    return 0;
  return v0;
}
