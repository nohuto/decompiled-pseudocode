/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C003DC40
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0003524 (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0031AF0 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 */

void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  unsigned int dummy; // [rsp+30h] [rbp+8h] BYREF

  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(Buffer, (_MDL **)&this->m_pUrb, 0LL, &dummy);
}
