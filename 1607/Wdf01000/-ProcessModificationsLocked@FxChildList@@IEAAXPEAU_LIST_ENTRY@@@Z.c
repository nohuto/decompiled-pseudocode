/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50
 * Callers:
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0021900 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C0021C28 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00222F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002267C (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027610 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C006DA20 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C006DC00 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006DDC8 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C006DFEC (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C006E0A8 (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C006E180 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_q @ 0x1C001CF1C (WPP_IFR_SF_q.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001E914 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_qq @ 0x1C002F548 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C00650B0 (WPP_IFR_SF_ql.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006D304 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C006E2BC (WPP_IFR_SF_qdd.c)
 */

void __fastcall FxChildList::ProcessModificationsLocked(FxChildList *this, _LIST_ENTRY *FreeListHead)
{
  FxChildListState m_State; // ecx
  _FX_DRIVER_GLOBALS *v5; // rcx
  _LIST_ENTRY *p_m_ModificationListHead; // rdi
  _LIST_ENTRY *Flink; // rax
  unsigned __int8 v8; // si
  _FX_DRIVER_GLOBALS *v9; // rcx
  _LIST_ENTRY *v10; // rcx
  _LIST_ENTRY *v11; // r12
  _LIST_ENTRY *v12; // rax
  _LIST_ENTRY **_a1; // r12
  _FX_DRIVER_GLOBALS *v14; // rcx
  int v15; // eax
  _FX_DRIVER_GLOBALS *v16; // rcx
  _LIST_ENTRY *Blink; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v20; // rax
  _FX_DRIVER_GLOBALS *v21; // rcx
  _FX_DRIVER_GLOBALS *v22; // rcx
  _LIST_ENTRY *v23; // rax
  _LIST_ENTRY *_a2; // rdx
  const void *v25; // rax
  _FX_DRIVER_GLOBALS *v26; // rcx
  _LIST_ENTRY *v27; // rcx
  _LIST_ENTRY *v28; // rax
  _LIST_ENTRY *v29; // rax
  const void *v30; // rbx
  const void *v31; // r14

  m_State = this->m_State;
  if ( m_State != ListUnlocked || this->m_ScanCount )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v31 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v31 = 0LL;
      WPP_IFR_SF_qdd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v31, m_State, this->m_ScanCount);
    }
  }
  else
  {
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v20 = 0LL;
      WPP_IFR_SF_q(v5, 5u, 0xCu, 0x19u, WPP_FxChildList_cpp_Traceguids, v20);
    }
    p_m_ModificationListHead = &this->m_ModificationListHead;
    Flink = this->m_ModificationListHead.Flink;
    if ( Flink != &this->m_ModificationListHead )
    {
      do
      {
        v10 = Flink->Flink;
        if ( LODWORD(Flink[1].Flink) == 3 )
          LODWORD(Flink[1].Flink) = 2;
        Flink = v10;
      }
      while ( v10 != p_m_ModificationListHead );
    }
    v8 = 0;
    while ( p_m_ModificationListHead->Flink != p_m_ModificationListHead )
    {
      v11 = p_m_ModificationListHead->Flink;
      v12 = p_m_ModificationListHead->Flink->Flink;
      if ( p_m_ModificationListHead->Flink->Blink != p_m_ModificationListHead || v12->Blink != v11 )
        __fastfail(3u);
      p_m_ModificationListHead->Flink = v12;
      v12->Blink = p_m_ModificationListHead;
      v11->Blink = v11;
      v11->Flink = v11;
      _a1 = &v11[-3].Blink;
      v14 = this->m_Globals;
      if ( v14->FxVerboseOn )
        WPP_IFR_SF_ql(v14, 5u, 0xCu, 0x1Au, WPP_FxChildList_cpp_Traceguids, _a1, *((_DWORD *)_a1 + 14));
      v15 = *((_DWORD *)_a1 + 14);
      switch ( v15 )
      {
        case 1:
          *((_DWORD *)_a1 + 4) = 1;
          v16 = this->m_Globals;
          if ( v16->FxVerboseOn )
            WPP_IFR_SF_q(v16, 5u, 0xCu, 0x1Eu, WPP_FxChildList_cpp_Traceguids, _a1);
          Blink = this->m_DescriptionListHead.Blink;
          if ( Blink->Flink != &this->m_DescriptionListHead )
            __fastfail(3u);
          *_a1 = &this->m_DescriptionListHead;
          v8 = 1;
          _a1[1] = Blink;
          Blink->Flink = (_LIST_ENTRY *)_a1;
          this->m_DescriptionListHead.Blink = (_LIST_ENTRY *)_a1;
          *((_DWORD *)_a1 + 14) = 0;
          break;
        case 2:
          *((_DWORD *)_a1 + 14) = 0;
          v21 = this->m_Globals;
          if ( v21->FxVerboseOn )
            WPP_IFR_SF_ql(v21, 5u, 0xCu, 0x1Bu, WPP_FxChildList_cpp_Traceguids, _a1, *((_DWORD *)_a1 + 4));
          if ( *((_DWORD *)_a1 + 4) == 1 )
          {
            v26 = this->m_Globals;
            if ( v26->FxVerboseOn )
              WPP_IFR_SF_q(v26, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, _a1);
            v27 = *_a1;
            v28 = _a1[1];
            if ( (_LIST_ENTRY **)(*_a1)->Blink != _a1 || (_LIST_ENTRY **)v28->Flink != _a1 )
              __fastfail(3u);
            v28->Flink = v27;
            v27->Blink = v28;
            v29 = FreeListHead->Blink;
            if ( v29->Flink != FreeListHead )
              __fastfail(3u);
            *_a1 = FreeListHead;
            _a1[1] = v29;
            v29->Flink = (_LIST_ENTRY *)_a1;
            FreeListHead->Blink = (_LIST_ENTRY *)_a1;
          }
          else if ( *((_DWORD *)_a1 + 4) == 2 )
          {
            v22 = this->m_Globals;
            if ( v22->FxVerboseOn )
            {
              v23 = _a1[8];
              _a2 = v23[9].Flink;
              if ( WORD1(v23->Blink) )
                v25 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v25 = 0LL;
              WPP_IFR_SF_qq(v22, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v25, _a2);
            }
            *((_DWORD *)_a1 + 4) = 4;
            v8 = 1;
          }
          break;
        case 4:
          v8 = FxChildList::CloneEntryLocked(this, FreeListHead, (FxDeviceDescriptionEntry *)_a1, 0);
          break;
      }
    }
    if ( v8 )
    {
      if ( this->m_ScanCount || (SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device)) == 0LL )
      {
        this->m_InvalidationNeeded = 1;
      }
      else
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    v9 = this->m_Globals;
    if ( v9->FxVerboseOn )
    {
      if ( this->m_ObjectSize )
        v30 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v30 = 0LL;
      WPP_IFR_SF_q(v9, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, v30);
    }
  }
}
