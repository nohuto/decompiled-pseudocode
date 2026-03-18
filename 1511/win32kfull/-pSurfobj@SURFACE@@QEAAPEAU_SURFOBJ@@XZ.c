/*
 * XREFs of ?pSurfobj@SURFACE@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0038D34
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFACE::pSurfobj(SURFACE *this)
{
  if ( this )
    return (struct _SURFOBJ *)((char *)this + 24);
  else
    return 0LL;
}
