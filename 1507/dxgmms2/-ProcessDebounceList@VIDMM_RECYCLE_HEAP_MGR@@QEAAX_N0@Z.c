/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8
 * Callers:
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00654E0 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0066278 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C0068AE4 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C00108DC (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0064FA4 (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0066380 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C00664D8 (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ @ 0x1C00685CC (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEXZ.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0068BDC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  char *v3; // rsi
  char *v5; // rdi
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v9; // rcx
  struct VIDMM_RECYCLE_RANGE *v10; // rbx
  __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r14
  __int64 v18; // rax
  struct _SLIST_ENTRY *v19; // rcx
  VIDMM_RECYCLE_HEAP_MGR *v20; // rbx
  bool v21; // al
  VIDMM_RECYCLE_HEAP_MGR *v22; // rcx
  char *v23; // rdi
  int v24; // [rsp+50h] [rbp+8h] BYREF

  v3 = (char *)this + 624;
  v5 = (char *)*((_QWORD *)this + 78);
  while ( v5 != v3 )
  {
    IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v10 = (struct VIDMM_RECYCLE_RANGE *)(v5 - 104);
    if ( a3 )
    {
      if ( !IsOverLimits )
        break;
    }
    else if ( a2 && *((_QWORD *)v10 + 12) > *((_QWORD *)this + 82) )
    {
      break;
    }
    v5 = *(char **)v5;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v9, v10);
    v13 = VIDMM_RECYCLE_RANGE::DebouncedUnlock(v10, v11, v12);
    v17 = v13;
    if ( v13 < 0 )
    {
      v18 = WdLogNewEntry5_WdWarning(v15, v14, v16);
      *(_QWORD *)(v18 + 24) = v10;
      *(_QWORD *)(v18 + 32) = v17;
      WdLogEvent5_WdWarning(v18);
      VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, v10);
    }
    v19 = (struct _SLIST_ENTRY *)*((_QWORD *)v10 + 17);
    if ( v19 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v19);
  }
  v20 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 80);
  while ( v20 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 640) )
  {
    v21 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v23 = (char *)v20 - 104;
    if ( a3 )
    {
      if ( !v21 )
        return;
    }
    else if ( a2 && *((_QWORD *)v23 + 12) > *((_QWORD *)this + 82) )
    {
      return;
    }
    v20 = *(VIDMM_RECYCLE_HEAP_MGR **)v20;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v22, (struct VIDMM_RECYCLE_RANGE *)v23);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v23, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v24);
    if ( !v24 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(*((struct _SLIST_ENTRY **)v23 + 17));
  }
}
