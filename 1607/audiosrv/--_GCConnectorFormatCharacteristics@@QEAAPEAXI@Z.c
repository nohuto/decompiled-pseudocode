/*
 * XREFs of ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x1800876BC
 * Callers:
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z @ 0x18002DA58 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIIII@Z.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x18008711C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 */

LPVOID *__fastcall CConnectorFormatCharacteristics::`scalar deleting destructor'(LPVOID *this)
{
  CoTaskMemFree(*this);
  *this = 0LL;
  operator delete(this);
  return this;
}
