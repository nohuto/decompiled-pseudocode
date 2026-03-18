/*
 * XREFs of ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C000FCA8
 * Callers:
 *     imp_WdfCollectionGetItem @ 0x1C002EF30 (imp_WdfCollectionGetItem.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C002F560 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C002FEB0 (imp_WdfIoResourceListUpdateDescriptor.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

FxObject_vtbl *__fastcall FxCollectionInternal::GetItem(FxCollectionInternal *this, unsigned int Index)
{
  FxObject_vtbl *result; // rax

  result = (FxObject_vtbl *)FxCollectionInternal::FindEntry(this, Index);
  if ( result )
    return (FxObject_vtbl *)result->SelfDestruct;
  return result;
}
