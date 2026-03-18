/*
 * XREFs of ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C002D804 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002DBB8 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C0071444 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0071624 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C0071724 (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00717F8 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C0071A28 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0071AEC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0071BC8 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxChildList::DrainFreeListHead(FxChildList *this, _LIST_ENTRY *FreeListHead, unsigned __int8 a3)
{
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY *v6; // rax
  _LIST_ENTRY *Blink; // rcx
  void (__fastcall *m_EvtAddressDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  _LIST_ENTRY *v9; // rbp
  unsigned __int64 v10; // rcx
  void (__fastcall *m_EvtIdentificationDescriptionCleanup)(WDFCHILDLIST__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *); // rax
  unsigned __int64 v12; // rcx

  while ( 1 )
  {
    Flink = FreeListHead->Flink;
    if ( FreeListHead->Flink == FreeListHead )
      break;
    v6 = Flink->Flink;
    if ( Flink->Blink != FreeListHead || v6->Blink != Flink )
      __fastfail(3u);
    FreeListHead->Flink = v6;
    v6->Blink = FreeListHead;
    Flink->Blink = Flink;
    Flink->Flink = Flink;
    if ( this->m_StaticList && (LODWORD(Flink[1].Flink) == 1 || LODWORD(Flink[3].Blink) == 5) )
    {
      Blink = Flink[1].Blink->Blink;
      if ( LODWORD(Flink[3].Blink) == 5 )
        LODWORD(Flink[3].Blink) = 0;
      LODWORD(Flink[1].Flink) = 3;
      FxPkgPnp::PnpProcessEvent((FxPkgPnp *)Blink[40].Blink, PnpEventRemove, a3);
    }
    else
    {
      m_EvtAddressDescriptionCleanup = this->m_EvtAddressDescriptionCleanup;
      v9 = Flink[1].Blink;
      if ( m_EvtAddressDescriptionCleanup && Flink[2].Flink )
      {
        v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v10 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v10);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v9 )
      {
        v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !this->m_ObjectSize )
          v12 = 0LL;
        m_EvtIdentificationDescriptionCleanup((WDFCHILDLIST__ *)v12, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v9);
      }
      ((void (__fastcall *)(_LIST_ENTRY *, _LIST_ENTRY *, __int64, const char *))Flink[4].Blink->Flink[1].Flink)(
        Flink[4].Blink,
        Flink,
        77LL,
        "minkernel\\wdf\\framework\\kmdf\\src\\core\\fxchildlist.cpp");
      FxPoolFree(Flink);
    }
  }
}
