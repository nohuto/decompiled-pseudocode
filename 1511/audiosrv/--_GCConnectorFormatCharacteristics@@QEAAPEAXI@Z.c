/*
 * XREFs of ??_GCConnectorFormatCharacteristics@@QEAAPEAXI@Z @ 0x180066DB4
 * Callers:
 *     ?SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z @ 0x18001B6E0 (-SetDuckingGainForId@CWindowsPolicyManager@@UEAAJKPEBGM@Z.c)
 *     ?AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z @ 0x18003FA94 (-AddConnectorFormat@CConnectorProcessingModeCharacteristics@@QEAAJPEBUtWAVEFORMATEX@@IIII@Z.c)
 *     ??1CConnectorProcessingModeCharacteristics@@QEAA@XZ @ 0x1800A4B9C (--1CConnectorProcessingModeCharacteristics@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

LPVOID *__fastcall CConnectorFormatCharacteristics::`scalar deleting destructor'(LPVOID *this)
{
  CoTaskMemFree(*this);
  *this = 0LL;
  operator delete(this);
  return this;
}
