/*
 * XREFs of ACPIInterruptInitialize @ 0x1C008DDA4
 * Callers:
 *     ACPIInitialize @ 0x1C00A90EC (ACPIInitialize.c)
 * Callees:
 *     WPP_RECORDER_SF_ @ 0x1C000E748 (WPP_RECORDER_SF_.c)
 *     OSInterruptVector @ 0x1C00A8488 (OSInterruptVector.c)
 */

__int64 ACPIInterruptInitialize()
{
  int v0; // edx
  int v1; // ebx

  if ( *((_BYTE *)AcpiInformation + 133) )
  {
    return 0;
  }
  else
  {
    v1 = OSInterruptVector();
    if ( v1 < 0 )
    {
      LOBYTE(v0) = 2;
      WPP_RECORDER_SF_(
        WPP_GLOBAL_Control->DeviceExtension,
        v0,
        22,
        39,
        (__int64)&WPP_37e0335c93fc3714a3de242c1cbb5d62_Traceguids);
    }
  }
  return (unsigned int)v1;
}
