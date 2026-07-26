/*
 * XREFs of ??_G_NDIS_FILTER_DRIVER_BLOCK@@QEAAPEAXI@Z @ 0x1C0057220
 * Callers:
 *     NdisFRegisterFilterDriver @ 0x1C00141F0 (NdisFRegisterFilterDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C001A4E8 (ndisDereferenceFilterDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ @ 0x1C00A1440 (-unref@-$KRef@UNDIS_BIND_FILTER_DRIVER@@@@AEAAXXZ.c)
 */

_NDIS_FILTER_DRIVER_BLOCK *__fastcall _NDIS_FILTER_DRIVER_BLOCK::`scalar deleting destructor'(
        _NDIS_FILTER_DRIVER_BLOCK *this)
{
  KRef<NDIS_BIND_FILTER_DRIVER>::unref(&this->Bind);
  return this;
}
