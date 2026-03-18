/*
 * XREFs of ?StoreAndReferenceMemory@FxInternalIoctlOthersContext@@EEAAXPEAUFxRequestBuffer@@@Z @ 0x1C0031A70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall FxInternalIoctlOthersContext::StoreAndReferenceMemory(
        FxInternalIoctlOthersContext *this,
        FxRequestBuffer *Buffer)
{
  FxRequestContext::_StoreAndReferenceMemoryWorker(this, &this->m_RequestMemory, Buffer);
}
