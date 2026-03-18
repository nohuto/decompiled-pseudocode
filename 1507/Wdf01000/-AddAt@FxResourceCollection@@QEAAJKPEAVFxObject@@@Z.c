/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0080E1C
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C007E184 (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C007E2B8 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C007E484 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0030D4C (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C005D418 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, FxObject *Object)
{
  const void *_a1; // rax
  __int64 v7; // rax
  int v9; // esi
  FxCollectionInternal *v10; // rcx
  FxCollectionEntry *Entry; // r8
  int v12; // edx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned int v16; // edx
  _LIST_ENTRY *Flink; // rcx
  _LIST_ENTRY *v18; // rcx
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF
  int v20; // [rsp+78h] [rbp+20h]

  if ( (this->m_AccessFlags & 1) != 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v9 = 0;
    Entry = FxCollectionInternal::AllocateEntry(v10, this->m_Globals);
    if ( Entry )
    {
      if ( Index == -1 || Index == this->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_19:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = &Entry->m_ListEntry;
        Entry->m_ListEntry.Flink = p_m_ListHead;
        Entry->m_ListEntry.Blink = Blink;
        p_m_ListHead->Blink = &Entry->m_ListEntry;
        Entry->m_Object = Object;
        v16 = _InterlockedIncrement(&Object->m_Refcnt);
        if ( SLOBYTE(Object->m_ObjectFlags) >= 0 )
          Flink = 0LL;
        else
          Flink = Object[-1].m_ChildEntry.Flink;
        if ( Flink )
          FxTagTracker::UpdateTagHistory(
            (FxTagTracker *)Flink,
            &this->FxCollectionInternal,
            185,
            "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp",
            TagAddRef,
            v16);
        ++this->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        v12 = 0;
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        while ( p_Blink != (_LIST_ENTRY **)&this->FxCollectionInternal )
        {
          if ( v12 == Index )
          {
            p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_19;
            break;
          }
          p_Blink = &p_Blink[1][-1].Blink;
          ++v12;
        }
        FxPoolFree(Entry);
        v9 = -1073741684;
      }
    }
    else
    {
      v9 = -1073741670;
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v18 = this[-1].m_ListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v18, irql, (unsigned __int8)Entry);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    if ( v9 < 0 )
      FxObject::DeleteFromFailedCreate(Object);
    return (unsigned int)v9;
  }
  else
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    v20 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( *(_BYTE *)(v7 + 318) )
      DbgBreakPoint();
    return 3221225506LL;
  }
}
