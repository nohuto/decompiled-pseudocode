/*
 * XREFs of ?pSurfobj@SURFREF@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C0035564
 * Callers:
 *     GreSetDIBitsToDeviceInternal @ 0x1C0035580 (GreSetDIBitsToDeviceInternal.c)
 *     ?bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z @ 0x1C00C98FC (-bSpDwmUpdateSurface@@YAHPEAUHWND__@@I_KAEAVXDCOBJ@@PEAUHSURF__@@MHHAEAVERECTL@@PEAVREGION@@@Z.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFREF::pSurfobj(struct _SURFOBJ **this)
{
  struct _SURFOBJ *result; // rax

  result = *this;
  if ( *this )
    return (struct _SURFOBJ *)((char *)result + 24);
  return result;
}
