/*
 * XREFs of ??_G_NDIS_PROTOCOL_BLOCK@@QEAAPEAXI@Z @ 0x1C005A2D4
 * Callers:
 *     ndisDereferenceProtocol @ 0x1C00160E0 (ndisDereferenceProtocol.c)
 *     NdisRegisterProtocolDriver @ 0x1C00A1E20 (NdisRegisterProtocolDriver.c)
 * Callees:
 *     ?unref@?$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ @ 0x1C00A4494 (-unref@-$KRef@UNDIS_BIND_PROTOCOL_DRIVER@@@@AEAAXXZ.c)
 */

_NDIS_PROTOCOL_BLOCK *__fastcall _NDIS_PROTOCOL_BLOCK::`scalar deleting destructor'(_NDIS_PROTOCOL_BLOCK *this)
{
  KRef<NDIS_BIND_PROTOCOL_DRIVER>::unref(&this->Bind);
  return this;
}
