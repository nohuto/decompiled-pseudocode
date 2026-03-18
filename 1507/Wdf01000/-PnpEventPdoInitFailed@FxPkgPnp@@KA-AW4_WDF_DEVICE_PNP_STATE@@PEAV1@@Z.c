/*
 * XREFs of ?PnpEventPdoInitFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0099F40
 * Callers:
 *     <none>
 * Callees:
 *     ?ParentDeleteEvent@FxObject@@AEAAXXZ @ 0x1C0015898 (-ParentDeleteEvent@FxObject@@AEAAXXZ.c)
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C0015EE0 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventPdoInitFailed(FxPkgPnp *This)
{
  _LIST_ENTRY *p_m_ChildListHead; // rbx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v4; // rax
  FxObject *p_Blink; // rcx

  FxObject::EarlyDispose(This->m_DeviceBase);
  p_m_ChildListHead = &This->m_DeviceBase->m_ChildListHead;
  while ( p_m_ChildListHead->Flink != p_m_ChildListHead )
  {
    Flink = p_m_ChildListHead->Flink;
    v4 = p_m_ChildListHead->Flink->Flink;
    if ( p_m_ChildListHead->Flink->Blink != p_m_ChildListHead || v4->Blink != Flink )
      __fastfail(3u);
    p_m_ChildListHead->Flink = v4;
    p_Blink = (FxObject *)&Flink[-5].Blink;
    v4->Blink = p_m_ChildListHead;
    p_Blink->m_ChildEntry.Blink = &p_Blink->m_ChildEntry;
    p_Blink->m_ChildEntry.Flink = &p_Blink->m_ChildEntry;
    FxObject::ParentDeleteEvent(p_Blink);
  }
  return 309LL;
}
