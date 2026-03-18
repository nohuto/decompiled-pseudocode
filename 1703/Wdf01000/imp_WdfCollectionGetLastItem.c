/*
 * XREFs of imp_WdfCollectionGetLastItem @ 0x1C0084B40
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0002960 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetLastItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8
  _LIST_ENTRY *Blink; // rbx
  __int16 v5; // cx
  unsigned __int64 v6; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)DriverGlobals[-8].DriverName,
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql, v2);
  if ( pCollection->m_ListHead.Flink == &pCollection->m_ListHead )
    Blink = 0LL;
  else
    Blink = pCollection->m_ListHead.Blink[-1].Blink;
  FxNonPagedObject::Unlock(pCollection, irql, v3);
  if ( !Blink )
    return 0LL;
  v5 = WORD1(Blink->Blink);
  v6 = (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  if ( !v5 )
    return 0LL;
  return v6;
}
