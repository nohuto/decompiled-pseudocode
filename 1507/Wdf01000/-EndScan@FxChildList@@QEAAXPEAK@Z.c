/*
 * XREFs of ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C001DBF0
 * Callers:
 *     ?EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z @ 0x1C001E0E8 (-EndIteration@FxChildList@@QEAAXPEAU_WDF_CHILD_LIST_ITERATOR@@@Z.c)
 *     imp_WdfChildListEndScan @ 0x1C002F190 (imp_WdfChildListEndScan.c)
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     WPP_IFR_SF_q @ 0x1C000B530 (WPP_IFR_SF_q.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D78C (-DrainFreeListHead@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C001D7E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00673E8 (-MarkDescriptionNotPresentWorker@FxChildList@@IEAAXPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntry@@@Z @ 0x1C006742C (-MarkModificationNotPresentWorker@FxChildList@@IEAAXPEAU_LIST_ENTRY@@PEAUFxDeviceDescriptionEntr.c)
 *     WPP_IFR_SF_qll @ 0x1C0068020 (WPP_IFR_SF_qll.c)
 */

void __fastcall FxChildList::EndScan(FxChildList *this, unsigned int *ScanTag)
{
  unsigned __int64 *p_m_ListLock; // r14
  KIRQL v4; // al
  unsigned __int16 v5; // r9
  KIRQL v6; // r15
  unsigned int m_ScanCount; // edx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const _GUID *v9; // r8
  FxChildList *Flink; // rdi
  FxChildList *v11; // rbp
  unsigned int *p_m_ScanCount; // rdi
  _FX_DRIVER_GLOBALS *v13; // rcx
  _LIST_ENTRY *i; // rdi
  unsigned __int8 v15; // r8
  _LIST_ENTRY *v16; // rax
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *v18; // rcx
  __int64 v19; // rax
  const void *_a2; // rdx
  const void *v21; // rax
  _QWORD *v22; // rdi
  __int64 v23; // rcx
  _QWORD *v24; // rax
  _LIST_ENTRY *v25; // r8
  _LIST_ENTRY **p_Blink; // rdx
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *v28; // rax
  _FX_DRIVER_GLOBALS *v29; // rcx
  _LIST_ENTRY *v30; // rdx
  const void *v31; // rax
  _FX_DRIVER_GLOBALS *v32; // rcx
  FxDeviceBase *m_DeviceBase; // rcx
  _DEVICE_OBJECT *m_DeviceObject; // rcx
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  _LIST_ENTRY freeHead; // [rsp+40h] [rbp-38h] BYREF

  freeHead.Blink = &freeHead;
  p_m_ListLock = &this->m_ListLock;
  freeHead.Flink = &freeHead;
  v4 = KeAcquireSpinLockRaiseToDpc(&this->m_ListLock);
  --this->m_ScanCount;
  v6 = v4;
  m_ScanCount = this->m_ScanCount;
  m_Globals = this->m_Globals;
  v9 = WPP_FxChildList_cpp_Traceguids;
  if ( m_Globals->FxVerboseOn )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 5u, 0xCu, 0xCu, WPP_FxChildList_cpp_Traceguids, _a1, this->m_ScanCount);
  }
  if ( !this->m_ScanCount )
  {
    Flink = (FxChildList *)this->m_ModificationListHead.Flink;
    if ( Flink != (FxChildList *)&this->m_ModificationListHead )
    {
      do
      {
        v11 = (FxChildList *)Flink->__vftable;
        p_m_ScanCount = &Flink[-1].m_ScanCount;
        v13 = this->m_Globals;
        if ( v13->FxVerboseOn )
          WPP_IFR_SF_qll(
            v13,
            m_ScanCount,
            (unsigned int)v9,
            v5,
            traceGuid,
            p_m_ScanCount,
            p_m_ScanCount[14],
            p_m_ScanCount[4]);
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
              _a2 = *(const void **)(v19 + 144);
              if ( *(_WORD *)(v19 + 10) )
                v21 = (const void *)(v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
              else
                v21 = 0LL;
              WPP_IFR_SF_qq(v18, 5u, 0xCu, 0xEu, WPP_FxChildList_cpp_Traceguids, v21, _a2);
            }
            p_m_ScanCount[14] = 3;
            v22 = p_m_ScanCount + 10;
            v23 = *v22;
            v24 = (_QWORD *)v22[1];
            if ( *(_QWORD **)(*v22 + 8LL) != v22 || (_QWORD *)*v24 != v22 )
              __fastfail(3u);
            *v24 = v23;
            *(_QWORD *)(v23 + 8) = v24;
            v22[1] = v22;
            *v22 = v22;
          }
        }
        Flink = v11;
      }
      while ( v11 != (FxChildList *)&this->m_ModificationListHead );
    }
    for ( i = this->m_DescriptionListHead.Flink; i != &this->m_DescriptionListHead; i = i->Flink )
    {
      v16 = i;
      if ( BYTE2(i[5].Flink) )
      {
        v25 = i->Flink;
        p_Blink = &i->Blink;
        i = i->Blink;
        if ( v16->Flink->Blink != v16 || i->Flink != v16 )
          __fastfail(3u);
        i->Flink = v25;
        v25->Blink = i;
        Blink = freeHead.Blink;
        *p_Blink = freeHead.Blink;
        v16->Flink = &freeHead;
        if ( Blink->Flink != &freeHead )
          __fastfail(3u);
        Blink->Flink = v16;
        freeHead.Blink = v16;
      }
      else if ( (unsigned int)(LODWORD(i[1].Flink) - 1) <= 1 && !LOBYTE(i[5].Flink) )
      {
        v28 = i[4].Flink;
        if ( v28 )
        {
          v29 = this->m_Globals;
          if ( v29->FxVerboseOn )
          {
            v30 = v28[9].Flink;
            if ( WORD1(v28->Blink) )
              v31 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
            else
              v31 = 0LL;
            WPP_IFR_SF_qq(v29, 5u, 0xCu, 0xFu, WPP_FxChildList_cpp_Traceguids, v31, v30);
          }
        }
        else
        {
          v32 = this->m_Globals;
          if ( v32->FxVerboseOn )
            WPP_IFR_SF_q(v32, 5u, 0xCu, 0x10u, WPP_FxChildList_cpp_Traceguids, i);
        }
        FxChildList::MarkDescriptionNotPresentWorker(this, (FxDeviceDescriptionEntry *)i, 1u);
      }
    }
    FxChildList::ProcessModificationsLocked(this, &freeHead);
    if ( this->m_InvalidationNeeded )
    {
      m_DeviceBase = this->m_DeviceBase;
      if ( LOBYTE(m_DeviceBase[1].m_ChildEntry.Blink) )
      {
        m_DeviceObject = m_DeviceBase->m_PhysicalDevice.m_DeviceObject;
        if ( m_DeviceObject )
        {
          this->m_InvalidationNeeded = 0;
          IoInvalidateDeviceRelations(m_DeviceObject, BusRelations);
        }
      }
    }
    KeSetEvent(&this->m_ScanEvent.m_Event, 0, 0);
  }
  KeReleaseSpinLock(p_m_ListLock, v6);
  FxChildList::DrainFreeListHead(this, &freeHead, v15);
}
