/*
 * XREFs of ?AddAt@FxResourceCollection@@QEAAJKPEAVFxObject@@@Z @ 0x1C0085D1C
 * Callers:
 *     FxCmResourceListInsertDescriptor @ 0x1C0082C0C (FxCmResourceListInsertDescriptor.c)
 *     FxIoResourceListInsertDescriptor @ 0x1C0082CF4 (FxIoResourceListInsertDescriptor.c)
 *     FxIoResourceRequirementsListInsertIoResList @ 0x1C0082E44 (FxIoResourceRequirementsListInsertIoResList.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0012220 (-FxPoolFree@@YAXPEAX@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?DeleteFromFailedCreate@FxObject@@QEAAXXZ @ 0x1C00671C4 (-DeleteFromFailedCreate@FxObject@@QEAAXXZ.c)
 *     ?AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0067690 (-AllocateEntry@FxCollectionInternal@@IEAAPEAVFxCollectionEntry@@PEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

__int64 __fastcall FxResourceCollection::AddAt(FxResourceCollection *this, int Index, FxObject *Object)
{
  unsigned __int16 m_ObjectSize; // ax
  _FX_DRIVER_GLOBALS **p_m_Globals; // rbx
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  const void *v9; // rdi
  int v11; // ebp
  FxCollectionInternal *v12; // rcx
  FxCollectionEntry *Entry; // r8
  int v14; // edx
  _LIST_ENTRY **p_Blink; // rax
  _LIST_ENTRY *p_m_ListHead; // rdx
  _LIST_ENTRY *Blink; // rax
  unsigned __int8 irql; // [rsp+60h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 1) != 0 )
  {
    FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Object);
    v11 = 0;
    Entry = FxCollectionInternal::AllocateEntry(v12, this->m_Globals);
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
        v14 = 0;
        p_Blink = &this->m_ListHead.Flink[-1].Blink;
        while ( p_Blink != (_LIST_ENTRY **)&this->FxCollectionInternal )
        {
          if ( v14 == Index )
          {
            p_m_ListHead = (_LIST_ENTRY *)(p_Blink + 1);
            if ( p_Blink != (_LIST_ENTRY **)-8LL )
              goto LABEL_16;
            break;
          }
          p_Blink = &p_Blink[1][-1].Blink;
          ++v14;
        }
        FxPoolFree(Entry);
        v11 = -1073741684;
      }
    }
    else
    {
      v11 = -1073741670;
    }
    FxNonPagedObject::Unlock(this, irql, (unsigned __int8)Entry);
    if ( v11 < 0 )
      FxObject::DeleteFromFailedCreate(Object);
    return (unsigned int)v11;
  }
  else
  {
    m_ObjectSize = this->m_ObjectSize;
    p_m_Globals = &this->m_Globals;
    m_Globals = this->m_Globals;
    v9 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    if ( !m_ObjectSize )
      v9 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0xBu, WPP_FxResourceCollection_cpp_Traceguids, v9, Index);
    FxVerifierDbgBreakPoint(*p_m_Globals);
    return 3221225506LL;
  }
}
