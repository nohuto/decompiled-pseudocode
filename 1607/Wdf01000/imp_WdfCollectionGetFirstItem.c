/*
 * XREFs of imp_WdfCollectionGetFirstItem @ 0x1C00804F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z @ 0x1C0001BF0 (-FxObjectHandleGetPtr@@YAXPEAU_FX_DRIVER_GLOBALS@@PEAXGPEAPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 */

unsigned __int64 __fastcall imp_WdfCollectionGetFirstItem(
        _WDF_DRIVER_GLOBALS *DriverGlobals,
        WDFCOLLECTION__ *Collection)
{
  unsigned __int8 v2; // r8
  unsigned __int8 v3; // r8
  _LIST_ENTRY *p_m_ListHead; // rax
  _LIST_ENTRY *Blink; // rbx
  unsigned __int8 irql; // [rsp+30h] [rbp+8h] BYREF
  FxCollection *pCollection; // [rsp+40h] [rbp+18h] BYREF

  FxObjectHandleGetPtr(
    (_FX_DRIVER_GLOBALS *)&DriverGlobals[-8].DriverName[16],
    (unsigned __int64)Collection,
    0x100Eu,
    (void **)&pCollection);
  FxNonPagedObject::Lock(pCollection, &irql, v2);
  p_m_ListHead = &pCollection->m_ListHead;
  if ( p_m_ListHead->Flink == p_m_ListHead )
    Blink = 0LL;
  else
    Blink = p_m_ListHead->Flink[-1].Blink;
  FxNonPagedObject::Unlock(pCollection, irql, v3);
  if ( !Blink )
    return 0LL;
  if ( WORD1(Blink->Blink) )
    return (unsigned __int64)Blink ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    return 0LL;
}
