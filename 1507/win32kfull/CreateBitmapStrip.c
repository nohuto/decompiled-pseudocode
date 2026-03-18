/*
 * XREFs of CreateBitmapStrip @ 0x1C00FC5F0
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxSetWindowNCMetrics @ 0x1C00FC280 (xxxSetWindowNCMetrics.c)
 * Callees:
 *     ?CreateDPIBitmapStrip@@YAHH@Z @ 0x1C0055E40 (-CreateDPIBitmapStrip@@YAHH@Z.c)
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
