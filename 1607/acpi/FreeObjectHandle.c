/*
 * XREFs of FreeObjectHandle @ 0x1C005CBAC
 * Callers:
 *     ACPIGet @ 0x1C00015D0 (ACPIGet.c)
 *     EnableDisableCMOSRegions @ 0x1C0006EB0 (EnableDisableCMOSRegions.c)
 *     AMLIIterateSiblingsNext @ 0x1C000DB94 (AMLIIterateSiblingsNext.c)
 *     PciConfigSpaceHandlerWorker @ 0x1C001CF10 (PciConfigSpaceHandlerWorker.c)
 *     GetPciAddressWorker @ 0x1C001D450 (GetPciAddressWorker.c)
 * Callees:
 *     DereferenceObjectEx @ 0x1C0019F6C (DereferenceObjectEx.c)
 */

void __fastcall FreeObjectHandle(_QWORD *a1)
{
  _QWORD *v2; // rcx

  v2 = (_QWORD *)*a1;
  if ( a1 == v2 + 15 )
  {
    DereferenceObjectEx(v2);
  }
  else
  {
    DereferenceObjectEx(v2);
    HeapFree((__int64)a1);
  }
}
