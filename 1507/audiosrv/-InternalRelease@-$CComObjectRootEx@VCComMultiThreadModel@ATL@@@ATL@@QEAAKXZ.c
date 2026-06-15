/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x180074D4C
 * Callers:
 *     ?InternalFinalConstructRelease@CVADServer@@QEAAXXZ @ 0x18008B41C (-InternalFinalConstructRelease@CVADServer@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(
        Microsoft::WRL::Details *a1,
        volatile int *a2)
{
  return Microsoft::WRL::Details::SafeUnknownDecrementReference(a1, a2);
}
