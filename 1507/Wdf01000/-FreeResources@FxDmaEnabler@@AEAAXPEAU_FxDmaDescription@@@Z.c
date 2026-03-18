/*
 * XREFs of ?FreeResources@FxDmaEnabler@@AEAAXPEAU_FxDmaDescription@@@Z @ 0x1C0064ED4
 * Callers:
 *     ?ReleaseResources@FxDmaEnabler@@AEAAXXZ @ 0x1C0064F40 (-ReleaseResources@FxDmaEnabler@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDmaEnabler::FreeResources(FxDmaEnabler *this, _FxDmaDescription *AdapterInfo)
{
  _DMA_ADAPTER *AdapterObject; // rcx

  AdapterObject = AdapterInfo->AdapterObject;
  if ( AdapterObject )
  {
    ((void (*)(void))AdapterObject->DmaOperations->PutDmaAdapter)();
    AdapterInfo->AdapterObject = 0LL;
  }
}
