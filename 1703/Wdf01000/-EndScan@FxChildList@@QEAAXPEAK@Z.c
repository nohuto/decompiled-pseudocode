/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C002D804
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C002DB70 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfChildListEndScan @ 0x1C003AFD0 (imp_WdfChildListEndScan.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ @ 0x1C001EE80 (-GetSafePhysicalDevice@FxDevice@@QEAAPEAU_DEVICE_OBJECT@@XZ.c)
 *     WPP_IFR_SF_q @ 0x1C0022210 (WPP_IFR_SF_q.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3A0 (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C002D3F0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C0071330 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C0071384 (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x1C0071E58 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v4; // al
  unsigned __int8 v5; // dl
  unsigned __int16 v6; // r9
  KIRQL v7; // r15
  unsigned int _a2; // r8d
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxChildList *Flink; // rdi
  _LIST_ENTRY *i; // rdi
  unsigned __int8 v12; // r8
  FxChildList *v13; // rbp
  unsigned int *p_m_ScanCount; // rdi
  _FX_DRIVER_GLOBALS *v15; // rcx
  _LIST_ENTRY *v16; // rax
  const void *_a1; // rdx
  _FX_DRIVER_GLOBALS *v18; // rcx
  __int64 v19; // r8
  const void *v20; // rdx
  __int16 v21; // ax
  const void *v22; // r8
  _QWORD *v23; // rdi
  __int64 v24; // rcx
  _QWORD *v25; // rax
  _LIST_ENTRY *v26; // r8
  _LIST_ENTRY **p_Blink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v29; // r8
  _FX_DRIVER_GLOBALS *v30; // rcx
  _LIST_ENTRY *v31; // rdx
  __int16 v32; // ax
  const void *v33; // r8
  _FX_DRIVER_GLOBALS *v34; // rcx
  _DEVICE_OBJECT *SafePhysicalDevice; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  --this->m_ScanCount;
  v7 = v4;
  _a2 = this->m_ScanCount;
  m_Globals = this->m_Globals;
  if ( m_Globals->FxVerboseOn )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, _a2);
  }
  if ( !this->m_ScanCount )
  {
    Flink = (FxChildList *)this->m_ModificationListHead.Flink;
    if ( Flink != (FxChildList *)&this->m_ModificationListHead )
    {
      do
      {
        v13 = (FxChildList *)Flink->__vftable;
        p_m_ScanCount = &Flink[-1].m_ScanCount;
        v15 = this->m_Globals;
        if ( v15->FxVerboseOn )
          WPP_IFR_SF_qll(v15, v5, _a2, v6, traceGuid, p_m_ScanCount, p_m_ScanCount[14], p_m_ScanCount[4]);
        if ( !*((_BYTE *)p_m_ScanCount + 80) )
        {
          if ( p_m_ScanCount[14] == 1 )
          {
            FxChildList::MarkModificationNotPresentWorker(this, &freeHead, (FxDeviceDescriptionEntry *)p_m_ScanCount);
          }
          else if ( p_m_ScanCount[14] == 4 )
          {
            v18 = this->m_Globals;
            if ( v18->FxVerboseOn )
            {
              v19 = *((_QWORD *)p_m_ScanCount + 8);
              v20 = *(const void **)(v19 + 144);
              v21 = *(_WORD *)(v19 + 10);
              v22 = (const void *)(v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
              if ( !v21 )
                v22 = 0LL;
              WPP_IFR_SF_qq(v18, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v22, v20);
            }
            p_m_ScanCount[14] = 3;
            v23 = p_m_ScanCount + 10;
            v24 = *v23;
            v25 = (_QWORD *)v23[1];
            if ( *(_QWORD **)(*v23 + 8LL) != v23 || (_QWORD *)*v25 != v23 )
              __fastfail(3u);
            *v25 = v24;
            *(_QWORD *)(v24 + 8) = v25;
            v23[1] = v23;
            *v23 = v23;
          }
        }
        Flink = v13;
      }
      while ( v13 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v16 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v26 = i->Flink;
        p_Blink = &i->Blink;
        i = i->Blink;
        if ( v16->Flink->Blink != v16 || i->Flink != v16 )
          __fastfail(3u);
        i->Flink = v26;
        v26->Blink = i;
        Blink = freeHead.Blink;
        if ( freeHead.Blink->Flink != &freeHead )
          __fastfail(3u);
        *p_Blink = freeHead.Blink;
        v16->Flink = &freeHead;
        Blink->Flink = v16;
        freeHead.Blink = v16;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v29 = i[4].Flink;
        if ( v29 )
        {
          v30 = this->m_Globals;
          if ( v30->FxVerboseOn )
          {
            v31 = v29[9].Flink;
            v32 = WORD1(v29->Blink);
            v33 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
            if ( !v32 )
              v33 = 0LL;
            WPP_IFR_SF_qq(v30, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v33, v31);
          }
        }
        else
        {
          v34 = this->m_Globals;
          if ( v34->FxVerboseOn )
            WPP_IFR_SF_q(v34, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      SafePhysicalDevice = FxDevice::GetSafePhysicalDevice(this->m_Device);
      if ( SafePhysicalDevice )
      {
        this->m_InvalidationNeeded = 0;
        IoInvalidateDeviceRelations(SafePhysicalDevice, BusRelations);
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v7);
  FxChildList::DrainFreeListHead(this, &freeHead, v12);
}
