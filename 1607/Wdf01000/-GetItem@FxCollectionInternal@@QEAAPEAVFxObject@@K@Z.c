/*
 * XREFs of ?GetItem@FxCollectionInternal@@QEAAPEAVFxObject@@K@Z @ 0x1C0019BBC
 * Callers:
 *     imp_WdfIoResourceListUpdateDescriptor @ 0x1C00302A0 (imp_WdfIoResourceListUpdateDescriptor.c)
 *     imp_WdfIoResourceRequirementsListGetIoResList @ 0x1C00386A0 (imp_WdfIoResourceRequirementsListGetIoResList.c)
 * Callees:
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C0019CB0 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

FxObject_vtbl *__fastcall FxCollectionInternal::GetItem(FxCollectionInternal *this, unsigned int Index)
{
  FxObject_vtbl *result; // rax

  result = (FxObject_vtbl *)FxCollectionInternal::FindEntry(this, Index);
  if ( result )
    return (FxObject_vtbl *)result->SelfDestruct;
  return result;
}
