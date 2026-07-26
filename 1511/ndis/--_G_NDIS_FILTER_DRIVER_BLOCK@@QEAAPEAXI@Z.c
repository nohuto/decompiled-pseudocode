/*
 * XREFs of ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0052650
 * Callers:
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 *     NdisFRegisterFilterDriver @ 0x1C001EE40 (NdisFRegisterFilterDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A6B74 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

_NDIS_FILTER_DRIVER_BLOCK *__fastcall _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(
        _NDIS_FILTER_DRIVER_BLOCK *this)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&this->Bind);
  return this;
}
