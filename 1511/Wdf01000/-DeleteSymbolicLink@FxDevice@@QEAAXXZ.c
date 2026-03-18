/*
 * XREFs of ?DeleteSymbolicLink@FxDevice@@QEAAXXZ @ 0x1C006A7DC
 * Callers:
 *     ?Destroy@FxDevice@@QEAAXXZ @ 0x1C006A82C (-Destroy@FxDevice@@QEAAXXZ.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C006ADD8 (--1FxDevice@@UEAA@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z @ 0x1C00843D0 (-DeleteSymbolicLinkOverload@FxPkgPdo@@EEAAXE@Z.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0084670 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z @ 0x1C008A820 (-DeleteSymbolicLinkOverload@FxPkgFdo@@EEAAXE@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 */

void __fastcall FxDevice::DeleteSymbolicLink(FxDevice *this)
{
  _UNICODE_STRING *p_m_SymbolicLinkName; // rbx

  if ( this->m_SymbolicLinkName.Buffer )
  {
    p_m_SymbolicLinkName = &this->m_SymbolicLinkName;
    if ( this->m_SymbolicLinkName.Length )
      IoDeleteSymbolicLink(&this->m_SymbolicLinkName);
    FxPoolFree((_QWORD *)this->m_SymbolicLinkName.Buffer);
    *(_QWORD *)&p_m_SymbolicLinkName->Length = 0LL;
    p_m_SymbolicLinkName->Buffer = 0LL;
  }
}
