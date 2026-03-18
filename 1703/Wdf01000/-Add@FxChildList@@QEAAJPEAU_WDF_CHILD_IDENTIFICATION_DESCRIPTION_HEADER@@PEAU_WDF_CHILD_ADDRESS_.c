/*
 * XREFs of ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002DBB8
 * Callers:
 *     imp_WdfChildListAddOrUpdateChildDescriptionAsPresent @ 0x1C002FC10 (imp_WdfChildListAddOrUpdateChildDescriptionAsPresent.c)
 *     imp_WdfFdoAddStaticChild @ 0x1C003B6B0 (imp_WdfFdoAddStaticChild.c)
 * Callees:
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C001CCC0 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     ?DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C002CD90 (-DuplicateId@FxChildList@@IEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002D2DC (-SearchBackwardsForMatchingDescriptionLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU.c)
 *     ?SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C002D344 (-SearchBackwardsForMatchingModificationLocked@FxChildList@@IEAAPEAUFxDeviceDescriptionEntry@@PEA.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ??0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z @ 0x1C002FB2C (--0FxDeviceDescriptionEntry@@QEAA@PEAVFxChildList@@KK@Z.c)
 *     ??2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z @ 0x1C002FBAC (--2FxDeviceDescriptionEntry@@SAPEAX_KPEAU_FX_DRIVER_GLOBALS@@0@Z.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C0070E98 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 *     ?DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C0070F70 (-DuplicateAddress@FxChildList@@IEAAJPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::Add(
        FxChildList *this,
        _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription,
        _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription,
        unsigned int *a4)
{
  unsigned __int64 *p_m_ListLock; // r12
  int v8; // ebp
  KIRQL v9; // r13
  FxDeviceDescriptionEntry *v10; // rax
  unsigned __int64 v11; // rcx
  FxDeviceDescriptionEntry *v12; // rbx
  FxDeviceDescriptionEntry *v13; // rax
  FxDeviceDescriptionEntry *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rsi
  _LIST_ENTRY *v17; // rdx
  _LIST_ENTRY *v18; // rax
  unsigned __int8 v19; // r8
  __int64 v21; // rbx
  FxChildListModificationState m_ModificationState; // eax
  _LIST_ENTRY *Blink; // rax
  _LIST_ENTRY freeHead; // [rsp+20h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v8 = -1073741823;
  v9 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  v10 = FxChildList::SearchBackwardsForMatchingModificationLocked(this, IdentificationDescription);
  v12 = v10;
  if ( v10 )
  {
    m_ModificationState = v10->m_ModificationState;
    if ( m_ModificationState == ModificationInsert )
    {
LABEL_15:
      if ( this->m_AddressDescriptionSize )
        FxChildList::CopyAddress(this, v12->m_AddressDescription, AddressDescription);
      v12->m_FoundInLastScan = 1;
      v8 = 0x40000000;
      goto LABEL_13;
    }
    if ( (unsigned int)(m_ModificationState - 2) > 1 )
      goto LABEL_13;
  }
  else
  {
    v13 = FxChildList::SearchBackwardsForMatchingDescriptionLocked(this, IdentificationDescription);
    v12 = v13;
    if ( v13 && (unsigned int)(v13->m_DescriptionState - 1) <= 1 )
      goto LABEL_15;
  }
  v14 = (FxDeviceDescriptionEntry *)FxDeviceDescriptionEntry::operator new(
                                      v11,
                                      this->m_Globals,
                                      this->m_TotalDescriptionSize);
  if ( v14 )
  {
    FxDeviceDescriptionEntry::FxDeviceDescriptionEntry(
      v14,
      this,
      this->m_IdentificationDescriptionSize,
      this->m_AddressDescriptionSize);
    v16 = v15;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v8 = FxChildList::DuplicateId(
           this,
           *(_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER **)(v16 + 24),
           IdentificationDescription);
    if ( v8 < 0 )
      goto LABEL_23;
    if ( this->m_AddressDescriptionSize )
      v8 = FxChildList::DuplicateAddress(
             this,
             *(_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER **)(v16 + 32),
             AddressDescription);
    if ( v8 < 0 )
    {
LABEL_23:
      Blink = freeHead.Blink;
      if ( freeHead.Blink->Flink != &freeHead )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = freeHead.Blink;
      *(_QWORD *)v16 = &freeHead;
      Blink->Flink = (_LIST_ENTRY *)v16;
      freeHead.Blink = (_LIST_ENTRY *)v16;
    }
    else
    {
      *(_BYTE *)(v16 + 80) = 1;
      v17 = this->m_ModificationListHead.Blink;
      v18 = (_LIST_ENTRY *)(v16 + 40);
      if ( v17->Flink != &this->m_ModificationListHead )
        __fastfail(3u);
      v18->Flink = &this->m_ModificationListHead;
      *(_QWORD *)(v16 + 48) = v17;
      v17->Flink = v18;
      this->m_ModificationListHead.Blink = v18;
      if ( this->m_StaticList )
      {
        v21 = *(_QWORD *)(*(_QWORD *)(v16 + 24) + 8LL);
        FxObject::MarkNoDeleteDDI((FxObject *)v21, ObjectLock);
        *(_QWORD *)(*(_QWORD *)(v21 + 648) + 1592LL) = v16;
        *(_BYTE *)(*(_QWORD *)(v21 + 648) + 1666LL) = 1;
      }
    }
  }
  else
  {
    v8 = -1073741670;
  }
LABEL_13:
  FxChildList::ProcessModificationsLocked(this, &freeHead);
  KeReleaseSpinLock(p_m_ListLock, v9);
  FxChildList::DrainFreeListHead(this, &freeHead, v19);
  return (unsigned int)v8;
}
