/*
 * XREFs of ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0070CD0
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 *     WPP_IFR_SF_qqq @ 0x1C006AA34 (WPP_IFR_SF_qqq.c)
 *     ?Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z @ 0x1C0070C04 (-Clone@FxDeviceDescriptionEntry@@QEAAPEAU1@PEAU_LIST_ENTRY@@@Z.c)
 */

unsigned __int8 __fastcall FxChildList::CloneEntryLocked(
        FxChildList *this,
        _LIST_ENTRY *FreeListHead,
        FxDeviceDescriptionEntry *Entry,
        unsigned __int8 FromQDR)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxDevice *m_Pdo; // r10
  __int64 _a2; // r8
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // r10
  unsigned __int8 v13; // r14
  FxDeviceDescriptionEntry *v14; // rax
  FxDeviceDescriptionEntry *v15; // rbx
  unsigned __int8 (__fastcall *m_EvtChildListDeviceReenumerated)(WDFCHILDLIST__ *, WDFDEVICE__ *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *, _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *); // r10
  FxDevice *v17; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *m_AddressDescription; // r9
  unsigned __int16 v19; // ax
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rcx
  _LIST_ENTRY *v22; // rax
  _FX_DRIVER_GLOBALS *v23; // rcx
  FxDevice *v24; // r11
  unsigned __int16 v25; // ax
  _DEVICE_OBJECT *_a3; // r10
  const void *v27; // r11
  _LIST_ENTRY *Blink; // rcx
  unsigned __int8 result; // al

  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    m_Pdo = Entry->m_Pdo;
    _a2 = (__int64)m_Pdo->m_DeviceObject.m_DeviceObject;
    m_ObjectSize = m_Pdo->m_ObjectSize;
    _a1 = (const void *)((unsigned __int64)m_Pdo ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 5u, 0xCu, 0x16u, WPP_FxChildList_cpp_Traceguids, _a1, _a2, FromQDR);
  }
  v13 = 0;
  v14 = FxDeviceDescriptionEntry::Clone(Entry, FreeListHead);
  v15 = v14;
  if ( v14 )
  {
    m_EvtChildListDeviceReenumerated = this->m_EvtChildListDeviceReenumerated;
    if ( !m_EvtChildListDeviceReenumerated )
      goto LABEL_15;
    v17 = Entry->m_Pdo;
    m_AddressDescription = v14->m_AddressDescription;
    v19 = v17->m_ObjectSize;
    v20 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !v19 )
      v20 = 0LL;
    v21 = (unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !this->m_ObjectSize )
      v21 = 0LL;
    if ( m_EvtChildListDeviceReenumerated(
           (WDFCHILDLIST__ *)v21,
           (WDFDEVICE__ *)v20,
           Entry->m_AddressDescription,
           m_AddressDescription) )
    {
LABEL_15:
      v23 = this->m_Globals;
      if ( v23->FxVerboseOn )
      {
        v24 = Entry->m_Pdo;
        v25 = v24->m_ObjectSize;
        _a3 = v24->m_DeviceObject.m_DeviceObject;
        v27 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
        if ( !v25 )
          v27 = 0LL;
        WPP_IFR_SF_qqq(v23, 5u, 0xCu, 0x17u, WPP_FxChildList_cpp_Traceguids, v15, v27, _a3);
      }
      v15->m_DescriptionState = DescriptionPresentNeedsInstantiation;
      v15->m_ModificationState = ModificationUnspecified;
      Blink = this->m_DescriptionListHead.Blink;
      if ( Blink->Flink != &this->m_DescriptionListHead )
        __fastfail(3u);
      v15->m_DescriptionLink.Flink = &this->m_DescriptionListHead;
      v15->m_DescriptionLink.Blink = Blink;
      Blink->Flink = (_LIST_ENTRY *)v15;
      this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)v15;
      if ( !FromQDR )
      {
        Entry->m_DescriptionState = DescriptionNotPresent;
        v13 = 1;
      }
    }
    else
    {
      v22 = FreeListHead->Blink;
      if ( v22->Flink != FreeListHead )
        __fastfail(3u);
      v15->m_DescriptionLink.Flink = FreeListHead;
      v15->m_DescriptionLink.Blink = v22;
      v22->Flink = (_LIST_ENTRY *)v15;
      FreeListHead->Blink = (_LIST_ENTRY *)v15;
    }
  }
  result = v13;
  Entry->m_ModificationState = ModificationUnspecified;
  return result;
}
