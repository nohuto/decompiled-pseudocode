/*
 * XREFs of ??_GCResourcePriorityTracker@@QEAAPEAXI@Z @ 0x1800680FC
 * Callers:
 *     ??1?$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ @ 0x180068198 (--1-$CAutoPtr@VCResourcePriorityTracker@@@ATL@@QEAA@XZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?_Erase@?$_Tree@V?$_Tmap_traits@KKU?$less@K@std@@V?$allocator@U?$pair@$$CBKK@std@@@2@$0A@@std@@@std@@IEAAXPEAU?$_Tree_node@U?$pair@$$CBKK@std@@PEAX@2@@Z @ 0x180066F40 (-_Erase@-$_Tree@V-$_Tmap_traits@KKU-$less@K@std@@V-$allocator@U-$pair@$$CBKK@std@@@2@$0A@@std@@@.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall CResourcePriorityTracker::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this)
{
  struct _RTL_CRITICAL_SECTION *v1; // rbx
  struct _RTL_CRITICAL_SECTION *CriticalSection; // rsi
  struct _RTL_CRITICAL_SECTION *i; // rdi
  PRTL_CRITICAL_SECTION_DEBUG DebugInfo; // rcx

  v1 = this + 1;
  CriticalSection = this[1].DebugInfo->CriticalSection;
  for ( i = CriticalSection; !BYTE1(i->LockSemaphore); CriticalSection = i )
  {
    std::_Tree<std::_Tmap_traits<unsigned long,unsigned long,std::less<unsigned long>,std::allocator<std::pair<unsigned long const,unsigned long>>,0>>::_Erase(
      (__int64)v1,
      i->OwningThread);
    i = (struct _RTL_CRITICAL_SECTION *)i->DebugInfo;
    operator delete(CriticalSection);
  }
  v1->DebugInfo->CriticalSection = (struct _RTL_CRITICAL_SECTION *)v1->DebugInfo;
  *(_QWORD *)&v1->DebugInfo->Type = v1->DebugInfo;
  v1->DebugInfo->ProcessLocksList.Flink = (struct _LIST_ENTRY *)v1->DebugInfo;
  DebugInfo = v1->DebugInfo;
  *(_QWORD *)&v1->LockCount = 0LL;
  operator delete(DebugInfo);
  DeleteCriticalSection(this);
  operator delete(this);
  return this;
}
