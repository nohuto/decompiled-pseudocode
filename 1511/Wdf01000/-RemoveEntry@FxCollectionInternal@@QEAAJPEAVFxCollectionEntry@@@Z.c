/*
 * XREFs of ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001F968
 * Callers:
 *     ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0024E0C (-RemoveAndDelete@FxResourceCollection@@QEAAEK@Z.c)
 *     imp_WdfCmResourceListRemoveByDescriptor @ 0x1C0071C70 (imp_WdfCmResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceListRemoveByDescriptor @ 0x1C0071EB0 (imp_WdfIoResourceListRemoveByDescriptor.c)
 *     imp_WdfIoResourceRequirementsListRemoveByIoResList @ 0x1C00720A0 (imp_WdfIoResourceRequirementsListRemoveByIoResList.c)
 * Callees:
 *     ?CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z @ 0x1C001F924 (-CleanupEntry@FxCollectionInternal@@QEAAXPEAVFxCollectionEntry@@@Z.c)
 */

__int64 __fastcall FxCollectionInternal::RemoveEntry(FxCollectionInternal *this, FxCollectionEntry *Entry)
{
  Entry->m_Object->Release(
    Entry->m_Object,
    this,
    127,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  FxCollectionInternal::CleanupEntry(this, Entry);
  return 0LL;
}
