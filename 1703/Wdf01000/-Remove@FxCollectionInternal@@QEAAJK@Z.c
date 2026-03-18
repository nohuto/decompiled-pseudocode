/*
 * XREFs of ?Remove@FxCollectionInternal@@QEAAJK@Z @ 0x1C00309BC
 * Callers:
 *     imp_WdfRegistryQueryMultiString @ 0x1C0018BD0 (imp_WdfRegistryQueryMultiString.c)
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C0025C00 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Clear@FxCollectionInternal@@QEAAXXZ @ 0x1C0030940 (-Clear@FxCollectionInternal@@QEAAXXZ.c)
 *     ??1WDFDEVICE_INIT@@QEAA@XZ @ 0x1C0030CD0 (--1WDFDEVICE_INIT@@QEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C003090C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 */

__int64 __fastcall FxCollectionInternal::Remove(FxCollectionInternal *this, unsigned int Index)
{
  _LIST_ENTRY **Entry; // rax
  _LIST_ENTRY **v4; // rdi
  _LIST_ENTRY *v5; // rcx
  _LIST_ENTRY *v6; // rax

  Entry = FxCollectionInternal::FindEntry(this, Index);
  v4 = Entry;
  if ( !Entry )
    return 3221226021LL;
  ((void (__fastcall *)(_LIST_ENTRY *, FxCollectionInternal *, __int64, const char *))(*Entry)->Flink[1].Flink)(
    *Entry,
    this,
    127LL,
    "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
  v5 = v4[1];
  v6 = v4[2];
  if ( (_LIST_ENTRY **)v5->Blink != v4 + 1 || (_LIST_ENTRY **)v6->Flink != v4 + 1 )
    __fastfail(3u);
  v6->Flink = v5;
  v5->Blink = v6;
  FxPoolFree(v4);
  --this->m_Count;
  return 0LL;
}
