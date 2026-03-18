/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0035890
 * Callers:
 *     <none>
 * Callees:
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C0001E60 (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C00323C8 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 */

void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  unsigned int dummy; // [rsp+30h] [rbp+8h] BYREF

  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(Buffer, (void **)&this->m_pUrb, 0LL, &dummy);
}
