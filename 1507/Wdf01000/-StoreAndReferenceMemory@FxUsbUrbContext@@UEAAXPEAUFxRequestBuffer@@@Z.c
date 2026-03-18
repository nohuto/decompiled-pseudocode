/*
 * XREFs of ?StoreAndReferenceMemory@FxUsbUrbContext@@UEAAXPEAUFxRequestBuffer@@@Z @ 0x1C00919C0
 * Callers:
 *     <none>
 * Callees:
 *     ?_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@@Z @ 0x1C0028498 (-_StoreAndReferenceMemoryWorker@FxRequestContext@@KAXPEAXPEAPEAVIFxMemory@@PEAUFxRequestBuffer@@.c)
 *     ?AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z @ 0x1C00A6CFC (-AssignValues@FxRequestBuffer@@QEAAXPEAPEAXPEAPEAU_MDL@@PEAK@Z.c)
 */

void __fastcall FxUsbUrbContext::StoreAndReferenceMemory(FxUsbUrbContext *this, FxRequestBuffer *Buffer)
{
  unsigned int dummy; // [rsp+30h] [rbp+8h] BYREF

  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
  FxRequestBuffer::AssignValues(Buffer, (void **)&this->m_pUrb, 0LL, &dummy);
}
