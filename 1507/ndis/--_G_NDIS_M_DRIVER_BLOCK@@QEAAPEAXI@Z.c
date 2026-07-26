/*
 * XREFs of ??_G_NDIS_M_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C000F3EC
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C009BAA0 (NdisMDeregisterMiniportDriver.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0011424 (--3@YAXPEAX@Z.c)
 */

_NDIS_M_DRIVER_BLOCK *__fastcall _NDIS_M_DRIVER_BLOCK::`scalar deleting destructor'(_NDIS_M_DRIVER_BLOCK *this)
{
  _NDIS_MINIPORT_DRIVER_CHARACTERISTICS *p; // rcx

  p = this->UnhookedCharacteristics._p;
  if ( p )
    operator delete(p);
  return this;
}
