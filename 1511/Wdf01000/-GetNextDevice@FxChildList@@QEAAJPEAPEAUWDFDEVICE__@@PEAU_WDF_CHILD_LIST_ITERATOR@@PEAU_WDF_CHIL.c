/*
 * XREFs of ?GetNextDevice@FxChildList@@QEAAJPEAPEAUWDFDEVICE__@@PEAU_WDF_CHILD_LIST_ITERATOR@@PEAU_WDF_CHILD_RETRIEVE_INFO@@@Z @ 0x1C0026F44
 * Callers:
 *     imp_WdfChildListRetrieveNextDevice @ 0x1C0028CB0 (imp_WdfChildListRetrieveNextDevice.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z @ 0x1C000F6EC (-CopyId@FxChildList@@QEAAXPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@0@Z.c)
 *     ?GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ @ 0x1C0035AD0 (-GetHandle@FxWmiProvider@@QEAAPEAUWDFWMIPROVIDER__@@XZ.c)
 *     ?CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z @ 0x1C005F844 (-CopyAddress@FxChildList@@IEAAXPEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@0@Z.c)
 */

__int64 __fastcall FxChildList::GetNextDevice(
        FxChildList *this,
        WDFDEVICE__ **Device,
        _WDF_CHILD_LIST_ITERATOR *Iterator,
        _WDF_CHILD_RETRIEVE_INFO *Info)
{
  unsigned int v7; // ebp
  const void *_a1; // rbx
  FxChildList *v9; // r14
  FxChildList_vtbl *v10; // r14
  unsigned int v11; // ecx
  unsigned int Flags; // ecx
  void (__fastcall *SelfDestruct)(FxObject *); // rax
  WDFDEVICE__ *v15; // rax
  _WDF_CHILD_LIST_RETRIEVE_DEVICE_STATUS v16; // ebp
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *IdentificationDescription; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *AddressDescription; // rdx
  _LIST_ENTRY *p_m_DescriptionListHead; // rcx
  _LIST_ENTRY *i; // rax
  WDFWORKITEM__ *Handle; // rax
  unsigned __int8 (__fastcall *v22)(WDFWORKITEM__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, unsigned int (__fastcall *)(FxObject *, unsigned __int16, void *, int, char *)); // r9
  _LIST_ENTRY *Flink; // r14
  unsigned int v24; // r12d
  WDFWORKITEM__ *v25; // rax
  __int64 (__fastcall *v26)(WDFWORKITEM__ *, _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *, _LIST_ENTRY *); // r9
  _WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *v27; // rdx
  _WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *v28; // rdx
  KIRQL NewIrql; // [rsp+40h] [rbp-48h]
  unsigned int v30; // [rsp+44h] [rbp-44h]
  PKSPIN_LOCK SpinLock; // [rsp+48h] [rbp-40h]
  char v32; // [rsp+90h] [rbp+8h]

  SpinLock = &this->m_ListLock;
  v7 = -2147483622;
  _a1 = 0LL;
  NewIrql = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  if ( !this->m_ScanCount )
  {
    v7 = -1073741436;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0x13u, WPP_FxChildList_cpp_Traceguids, _a1, -1073741436);
    goto $Done_19;
  }
  v9 = (FxChildList *)Iterator->Reserved[0];
  if ( v9 )
  {
    if ( this->m_Globals->FxVerifierOn )
    {
      p_m_DescriptionListHead = &this->m_DescriptionListHead;
      if ( v9 != (FxChildList *)&this->m_DescriptionListHead )
      {
        for ( i = p_m_DescriptionListHead->Flink; ; i = i->Flink )
        {
          if ( i == p_m_DescriptionListHead )
          {
            v7 = -1073741811;
            goto $Done_19;
          }
          if ( v9 == (FxChildList *)i )
            break;
        }
      }
    }
    v10 = v9->__vftable;
    if ( v10 == (FxChildList_vtbl *)&this->m_DescriptionListHead )
    {
LABEL_5:
      Iterator->Reserved[0] = 0LL;
    }
    else
    {
      while ( 1 )
      {
        if ( (Flags = Iterator->Flags, (Flags & 1) != 0) && LODWORD(v10->Release) == 2
          || (Flags & 2) != 0 && (unsigned int)(LODWORD(v10->Release) - 3) <= 1
          || (Flags & 4) != 0 && LODWORD(v10->Release) == 1 )
        {
          if ( !Info )
            break;
          if ( !Info->EvtChildListIdentificationDescriptionCompare )
            break;
          Handle = FxWmiProvider::GetHandle((FxWorkItem *)this);
          if ( v22(Handle, Info->IdentificationDescription, v10->AddRefOverride) )
            break;
        }
        v10 = (FxChildList_vtbl *)v10->SelfDestruct;
        if ( v10 == (FxChildList_vtbl *)&this->m_DescriptionListHead )
          goto LABEL_5;
      }
      Iterator->Reserved[0] = v10;
      SelfDestruct = v10[1].SelfDestruct;
      if ( SelfDestruct )
      {
        if ( *((_WORD *)SelfDestruct + 5) )
          v15 = (WDFDEVICE__ *)((unsigned __int64)SelfDestruct ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        v16 = WdfChildListRetrieveDeviceSuccess;
        *Device = v15;
      }
      else
      {
        v16 = WdfChildListRetrieveDeviceNotYetCreated;
      }
      if ( Info )
      {
        IdentificationDescription = Info->IdentificationDescription;
        if ( IdentificationDescription )
          FxChildList::CopyId(
            this,
            IdentificationDescription,
            (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)v10->AddRefOverride);
        AddressDescription = Info->AddressDescription;
        if ( AddressDescription )
          FxChildList::CopyAddress(
            this,
            AddressDescription,
            (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)v10->ReleaseOverride);
        Info->Status = v16;
      }
      v7 = 0;
    }
  }
  v11 = (unsigned int)Iterator->Reserved[1];
  v30 = v11;
  if ( (Iterator->Flags & 4) == 0 || !v11 )
    goto $Done_19;
  v32 = 0;
  Flink = this->m_ModificationListHead.Flink;
  v24 = 1;
  if ( Flink == &this->m_ModificationListHead )
    goto LABEL_60;
  while ( 1 )
  {
    if ( LODWORD(Flink[1].Flink) != 1 )
      goto LABEL_50;
    if ( ++v24 <= v11 )
      goto LABEL_50;
    v32 = 1;
    if ( !Info )
      break;
    if ( !Info->EvtChildListIdentificationDescriptionCompare )
      break;
    v25 = FxWmiProvider::GetHandle((FxWorkItem *)this);
    v32 = v26(v25, Info->IdentificationDescription, Flink[-1].Flink);
    if ( v32 )
      break;
    v11 = v30;
LABEL_50:
    Flink = Flink->Flink;
    if ( Flink == &this->m_ModificationListHead )
      goto LABEL_59;
  }
  Iterator->Reserved[1] = (void *)v24;
  if ( Info )
  {
    v27 = Info->IdentificationDescription;
    if ( v27 )
      FxChildList::CopyId(this, v27, (_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER *)Flink[-1].Flink);
    v28 = Info->AddressDescription;
    if ( v28 )
      FxChildList::CopyAddress(this, v28, (_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER *)Flink[-1].Blink);
    Info->Status = WdfChildListRetrieveDeviceNotYetCreated;
  }
  v7 = 0;
LABEL_59:
  if ( !v32 )
LABEL_60:
    Iterator->Reserved[1] = 0LL;
$Done_19:
  KeReleaseSpinLock(SpinLock, NewIrql);
  return v7;
}
