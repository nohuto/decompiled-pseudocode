/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0066D54
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C001D290 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C0066C90 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 */

unsigned __int8 __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r8
  __int64 _a2; // rdx
  const void *_a1; // r8
  unsigned __int8 v12; // r14
  FxDeviceDescriptionEntry *v13; // rbx
  unsigned __int8 (__fastcall *m_EvtChildListDeviceReenumerated)(WDFCHILDLIST__ *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // rax
  FxDevice *v15; // rdx
  unsigned __int64 v16; // rdx
  unsigned __int64 v17; // rcx
  _LIST_ENTRY *v18; // rax
  _FX_DRIVER_GLOBALS *v19; // rcx
  FxDevice *v20; // rax
  _DEVICE_OBJECT *_a3; // rdx
  const void *v22; // rax
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 result; // al

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_Pdo = Entry->m_Pdo;
    _a2 = (__int64)m_Pdo->m_DeviceObject.m_DeviceObject;
    if ( m_Pdo->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x16u, WPP_FxChildList_cpp_Traceguids, _a1, _a2, FromQDR);
  }
  v12 = 0;
  v13 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  if ( v13 )
  {
    m_EvtChildListDeviceReenumerated = this->m_EvtChildListDeviceReenumerated;
    if ( !m_EvtChildListDeviceReenumerated
      || ((v15 = Entry->m_Pdo, !v15->m_ObjectSize) ? (v16 = 0LL) : (v16 = (unsigned __int64)v15 ^ 0xFFFFFFFFFFFFFFF8uLL),
          !this->m_ObjectSize ? (v17 = 0LL) : (v17 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL),
          m_EvtChildListDeviceReenumerated(
            (WDFCHILDLIST__ *)v17,
            (WDFDEVICE__ *)v16,
            Entry->m_AddressDescription,
            v13->m_AddressDescription)) )
    {
      v19 = this->m_Globals;
      if ( v19->FxVerboseOn )
      {
        v20 = Entry->m_Pdo;
        _a3 = v20->m_DeviceObject.m_DeviceObject;
        if ( v20->m_ObjectSize )
          v22 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v22 = 0LL;
        WPP_IFR_SF_qqq(v19, 5u, 0xCu, 0x17u, WPP_FxChildList_cpp_Traceguids, v13, v22, _a3);
      }
      v13->m_DescriptionState = DescriptionPresentNeedsInstantiation;
      v13->m_ModificationState = ModificationUnspecified;
      Blink = this->m_DescriptionListHead.Blink;
      v13->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
      v13->m_DescriptionLink.Blink = Blink;
      if ( Blink->Flink != &this->m_DescriptionListHead )
        __fastfail(3u);
      Blink->Flink = (_LIST_ENTRY *)v13;
      this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v13;
      if ( !FromQDR )
      {
        Entry->m_DescriptionState = DescriptionNotPresent;
        v12 = 1;
      }
    }
    else
    {
      v18 = FreeListHead->Blink;
      v13->m_DescriptionLink.Flink = FreeListHead;
      v13->m_DescriptionLink.Blink = v18;
      if ( v18->Flink != FreeListHead )
        __fastfail(3u);
      v18->Flink = (_LIST_ENTRY *)v13;
      FreeListHead->Blink = (_LIST_ENTRY *)v13;
    }
  }
  result = v12;
  Entry->m_ModificationState = ModificationUnspecified;
  return result;
}
