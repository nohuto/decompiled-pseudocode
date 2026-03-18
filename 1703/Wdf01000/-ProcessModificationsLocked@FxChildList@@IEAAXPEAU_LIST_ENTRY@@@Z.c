/*
 * XREFs of ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0
 * Callers:
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027290 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C002CE60 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z @ 0x1C002D1A4 (-CreateDevice@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@PEAE@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C002D804 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_DESCRIPTION_HEADER@@PEAK@Z @ 0x1C002DBB8 (-Add@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@PEAU_WDF_CHILD_ADDRESS_.c)
 *     ?NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z @ 0x1C0071444 (-NotifyDeviceRemove@FxChildList@@QEAAXPEAJ@Z.c)
 *     ?NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ @ 0x1C0071624 (-NotifyDeviceSurpriseRemove@FxChildList@@QEAAXXZ.c)
 *     ?ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z @ 0x1C00717F8 (-ReenumerateEntry@FxChildList@@QEAAXPEAUFxDeviceDescriptionEntry@@@Z.c)
 *     ?UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z @ 0x1C0071A28 (-UpdateAllAsPresent@FxChildList@@QEAAXPEAK@Z.c)
 *     ?UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z @ 0x1C0071AEC (-UpdateAsMissing@FxChildList@@QEAAJPEAU_WDF_CHILD_IDENTIFICATION_DESCRIPTION_HEADER@@@Z.c)
 *     ?UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z @ 0x1C0071BC8 (-UpdateDeviceAsMissing@FxChildList@@QEAAJPEAVFxDevice@@@Z.c)
 * Callees:
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001EE80 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_ql @ 0x1C0068770 (WPP_IFR_SF_ql.c)
 *     ?CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0070CD0 (-CloneEntryLocked@FxChildList@@IEAAEPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     WPP_IFR_SF_qdd @ 0x1C0071D08 (WPP_IFR_SF_qdd.c)
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
  _LIST_ENTRY *v11; // rax
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY **_a1; // r12
  _FX_DRIVER_GLOBALS *v14; // rcx
  int v15; // eax
  _FX_DRIVER_GLOBALS *v16; // rcx
  _LIST_ENTRY *Blink; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // r10
  const void *v20; // rdx
  _FX_DRIVER_GLOBALS *v21; // rcx
  _FX_DRIVER_GLOBALS *v22; // rcx
  _LIST_ENTRY *v23; // r8
  _LIST_ENTRY *_a2; // rdx
  __int16 v25; // ax
  const void *v26; // r8
  _FX_DRIVER_GLOBALS *v27; // rcx
  _LIST_ENTRY *v28; // rcx
  _LIST_ENTRY *v29; // rax
  _LIST_ENTRY *v30; // rax
  unsigned __int16 m_ObjectSize; // ax
  const void *v32; // rbx
  const void *v33; // rdx

  m_State = this->m_State;
  if ( m_State != ListUnlocked || this->m_ScanCount )
  {
    m_Globals = this->m_Globals;
    if ( m_Globals->FxVerboseOn )
    {
      v33 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v33 = 0LL;
      WPP_IFR_SF_qdd(m_Globals, 5u, 0xCu, 0x18u, WPP_FxChildList_cpp_Traceguids, v33, m_State, this->m_ScanCount);
    }
  }
  else
  {
    v5 = this->m_Globals;
    if ( v5->FxVerboseOn )
    {
      v20 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
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
      _a1 = &v11[-3].Blink;
      v12->Blink = p_m_ModificationListHead;
      v11->Blink = v11;
      v11->Flink = v11;
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
            v27 = this->m_Globals;
            if ( v27->FxVerboseOn )
              WPP_IFR_SF_q(v27, 5u, 0xCu, 0x1Cu, WPP_FxChildList_cpp_Traceguids, _a1);
            v28 = *_a1;
            v29 = _a1[1];
            if ( (_LIST_ENTRY **)(*_a1)->Blink != _a1 || (_LIST_ENTRY **)v29->Flink != _a1 )
              __fastfail(3u);
            v29->Flink = v28;
            v28->Blink = v29;
            v30 = FreeListHead->Blink;
            if ( v30->Flink != FreeListHead )
              __fastfail(3u);
            *_a1 = FreeListHead;
            _a1[1] = v30;
            v30->Flink = (_LIST_ENTRY *)_a1;
            FreeListHead->Blink = (_LIST_ENTRY *)_a1;
          }
          else if ( *((_DWORD *)_a1 + 4) == 2 )
          {
            v22 = this->m_Globals;
            if ( v22->FxVerboseOn )
            {
              v23 = _a1[8];
              _a2 = v23[9].Flink;
              v25 = WORD1(v23->Blink);
              v26 = (const void *)((unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v25 )
                v26 = 0LL;
              WPP_IFR_SF_qq(v22, 5u, 0xCu, 0x1Du, WPP_FxChildList_cpp_Traceguids, v26, _a2);
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
      m_ObjectSize = this->m_ObjectSize;
      v32 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !m_ObjectSize )
        v32 = 0LL;
      WPP_IFR_SF_q(v9, 5u, 0xCu, 0x1Fu, WPP_FxChildList_cpp_Traceguids, v32);
    }
  }
}
