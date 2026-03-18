/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C0059D70
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0059E7C (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C005A2D0 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C005A720 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C00828E0 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0011F5C (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A144 (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005A1AC (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005B670 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C005D7CC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C005D8C4 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  char *v3; // rsi
  char *v5; // rdi
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  struct VIDMM_RECYCLE_RANGE *v10; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v11; // rbx
  bool v12; // al
  VIDMM_RECYCLE_HEAP_MGR *v13; // rcx
  char *v14; // rdi
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r14
  VIDMM_RECYCLE_MULTIRANGE *v18; // rcx
  __int64 v19; // rax
  int v20; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this + 648;
  v5 = (char *)*((_QWORD *)this + 81);
  while ( v5 != v3 )
  {
    IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v10 = (struct VIDMM_RECYCLE_RANGE *)(v5 - 104);
    if ( a3 )
    {
      if ( !IsOverLimits )
        break;
    }
    else if ( a2 && *((_QWORD *)v10 + 12) > *((_QWORD *)this + 85) )
    {
      break;
    }
    v5 = *(char **)v5;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v9, v10);
    v15 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v10);
    v17 = v15;
    if ( v15 < 0 )
    {
      v19 = WdLogNewEntry5_WdWarning(v16);
      *(_QWORD *)(v19 + 24) = v10;
      *(_QWORD *)(v19 + 32) = v17;
      WdLogEvent5_WdWarning(v19);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v10);
    }
    v18 = (VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)v10 + 17);
    if ( v18 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v18, 0);
  }
  v11 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 83);
  while ( v11 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 664) )
  {
    v12 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v14 = (char *)v11 - 104;
    if ( a3 )
    {
      if ( !v12 )
        return;
    }
    else if ( a2 && *((_QWORD *)v14 + 12) > *((_QWORD *)this + 85) )
    {
      return;
    }
    v11 = *(VIDMM_RECYCLE_HEAP_MGR **)v11;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v13, (struct VIDMM_RECYCLE_RANGE *)v14);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v14, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v20);
    if ( !v20 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(*((VIDMM_RECYCLE_MULTIRANGE **)v14 + 17), 0);
  }
}
