/*
 * XREFs of ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0026988
 * Callers:
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C00267B8 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0026DE4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C0027090 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C005FDA0 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C005FF80 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ @ 0x1C006007C (-ProcessDeviceRemoved@FxDeviceDescriptionEntry@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C0060148 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C006036C (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0060428 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0060500 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
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
        if ( this->m_ObjectSize )
          v10 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v10 = 0LL;
        ((void (__fastcall *)(unsigned __int64))m_EvtAddressDescriptionCleanup)(v10);
      }
      m_EvtIdentificationDescriptionCleanup = this->m_EvtIdentificationDescriptionCleanup;
      if ( m_EvtIdentificationDescriptionCleanup && v9 )
      {
        if ( this->m_ObjectSize )
          v12 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
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
