/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0073908
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C00718EC (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C00719D0 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C0071B18 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C0023220 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C0056B68 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00573C0 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, FxObject *Object)
{
  const void *_a1; // rsi
  int v8; // ebp
  FxCollectionInternal *v9; // rcx
  FxCollectionEntry *Entry; // r8
  int v11; // edx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 1) != 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v8 = 0;
    Entry = FxCollectionInternal::AllocateEntry(v9, this->m_Globals);
    if ( Entry )
    {
      if ( Index == -1 || Index == this->m_Count )
      {
        p_m_ListHead = &this->m_ListHead;
LABEL_16:
        Blink = p_m_ListHead->Blink;
        Blink->Flink = &Entry->m_ListEntry;
        Entry->m_ListEntry.Flink = p_m_ListHead;
        Entry->m_ListEntry.Blink = Blink;
        p_m_ListHead->Blink = &Entry->m_ListEntry;
        Entry->m_Object = Object;
        FxObject::AddRef(
          Object,
          &this->FxCollectionInternal,
          185,
          "minkernel\\wdf\\framework\\shared\\inc\\private\\common\\FxCollection.hpp");
        ++this->m_Count;
        this->m_Changed = 1;
      }
      else
      {
        v11 = 0;
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        while ( p_Blink != (_LIST_ENTRY **)&this->FxCollectionInternal )
        {
          if ( v11 == Index )
          {
            p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = &p_Blink[1][-1].Blink;
          ++v11;
        }
        FxPoolFree(Entry);
        v8 = -1073741684;
      }
    }
    else
    {
      v8 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Entry);
    if ( v8 < 0 )
      FxObject::DeleteFromFailedCreate(Object);
    return (unsigned int)v8;
  }
  else
  {
    _a1 = 0LL;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
    return 3221225506LL;
  }
}
