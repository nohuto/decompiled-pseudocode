/*
 * XREFs of ?pSurfobj@SURFMEM@@QEAAPEAU_SURFOBJ@@XZ @ 0x1C009DA88
 * Callers:
 *     ?bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z @ 0x1C00175C0 (-bLock@DEVLOCKBLTOBJ@@QEAAHAEAVXDCOBJ@@0H@Z.c)
 *     GreSetDIBitsToDeviceInternal @ 0x1C009A950 (GreSetDIBitsToDeviceInternal.c)
 * Callees:
 *     <none>
 */

struct _SURFOBJ *__fastcall SURFMEM::pSurfobj(struct _SURFOBJ **this)
{
  struct _SURFOBJ *result; // rax

  result = *this;
  if ( *this )
    return (struct _SURFOBJ *)((char *)result + 24);
  return result;
}
