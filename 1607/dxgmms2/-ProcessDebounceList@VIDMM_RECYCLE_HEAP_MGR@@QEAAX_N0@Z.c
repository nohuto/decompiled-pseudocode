/*
 * XREFs of ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590
 * Callers:
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C005F6D0 (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C005FBB0 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C005FF40 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006A79C (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z.c)
 * Callees:
 *     ?IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ @ 0x1C0010238 (-IsOverLimits@VIDMM_RECYCLE_HEAP_MGR@@SA_NXZ.c)
 *     ?MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z @ 0x1C005E730 (-MergeSubrangesWherePossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAEE@Z.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005FA6C (-AddToUnlockDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ @ 0x1C0061CCC (-DebouncedUnlock@VIDMM_RECYCLE_RANGE@@QEAAJXZ.c)
 *     ?DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z @ 0x1C0061DC0 (-DebouncedDecommit@VIDMM_RECYCLE_RANGE@@QEAAXAEAW4VIDMM_RECYCLE_BLOCK_SHRINK_RESULT@@@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList(VIDMM_RECYCLE_HEAP_MGR *this, char a2, char a3)
{
  VIDMM_RECYCLE_HEAP_MGR *v3; // rsi
  VIDMM_RECYCLE_HEAP_MGR *v5; // rdi
  _QWORD *v6; // rbx
  bool IsOverLimits; // al
  VIDMM_RECYCLE_HEAP_MGR *v10; // rcx
  _QWORD *v11; // rbx
  VIDMM_RECYCLE_HEAP_MGR *v12; // rbx
  bool v13; // al
  VIDMM_RECYCLE_HEAP_MGR *v14; // rcx
  char *v15; // rdi
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // r15
  VIDMM_RECYCLE_MULTIRANGE *v19; // rcx
  __int64 v20; // rax
  _QWORD *v21; // rcx
  _QWORD *v22; // rax
  _QWORD *v23; // rdx
  _QWORD *v24; // rax
  __int64 v25; // r8
  _QWORD *v26; // rcx
  _QWORD *v27; // [rsp+20h] [rbp-10h] BYREF
  _QWORD **v28; // [rsp+28h] [rbp-8h]
  int v29; // [rsp+60h] [rbp+30h] BYREF

  v3 = (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1104);
  v5 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 138);
  v28 = &v27;
  v6 = &v27;
  v27 = &v27;
  if ( v5 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1104) )
  {
    do
    {
      IsOverLimits = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
      v11 = (_QWORD *)((char *)v5 - 104);
      if ( a3 )
      {
        if ( !IsOverLimits )
          break;
      }
      else if ( a2 && v11[12] > *((_QWORD *)this + 142) )
      {
        break;
      }
      v5 = *(VIDMM_RECYCLE_HEAP_MGR **)v5;
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v10, (struct VIDMM_RECYCLE_RANGE *)v11);
      v16 = VIDMM_RECYCLE_RANGE::DebouncedUnlock((VIDMM_RECYCLE_RANGE *)v11);
      v18 = v16;
      if ( v16 < 0 )
      {
        v20 = WdLogNewEntry5_WdWarning(v17);
        *(_QWORD *)(v20 + 24) = v11;
        *(_QWORD *)(v20 + 32) = v18;
        WdLogEvent5_WdWarning(v20);
        v21 = v28;
        v22 = v11 + 13;
        if ( *v28 != &v27 )
          __fastfail(3u);
        v11[14] = v28;
        *v22 = &v27;
        *v21 = v22;
        v28 = (_QWORD **)(v11 + 13);
      }
      v19 = (VIDMM_RECYCLE_MULTIRANGE *)v11[17];
      if ( v19 )
        VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(v19, 0);
    }
    while ( v5 != v3 );
    v6 = v27;
  }
  while ( v6 != &v27 )
  {
    v23 = v6 - 13;
    v6 = (_QWORD *)*v6;
    v24 = v23 + 13;
    v25 = v23[13];
    v26 = (_QWORD *)v23[14];
    if ( *(_QWORD **)(v25 + 8) != v23 + 13 || (_QWORD *)*v26 != v24 )
      __fastfail(3u);
    *v26 = v25;
    *(_QWORD *)(v25 + 8) = v26;
    v23[14] = 0LL;
    *v24 = 0LL;
    VIDMM_RECYCLE_HEAP_MGR::AddToUnlockDebounce(this, (struct VIDMM_RECYCLE_RANGE *)v23);
  }
  v12 = (VIDMM_RECYCLE_HEAP_MGR *)*((_QWORD *)this + 140);
  while ( v12 != (VIDMM_RECYCLE_HEAP_MGR *)((char *)this + 1120) )
  {
    v13 = VIDMM_RECYCLE_HEAP_MGR::IsOverLimits();
    v15 = (char *)v12 - 104;
    if ( a3 )
    {
      if ( !v13 )
        return;
    }
    else if ( a2 && *((_QWORD *)v15 + 12) > *((_QWORD *)this + 142) )
    {
      return;
    }
    v12 = *(VIDMM_RECYCLE_HEAP_MGR **)v12;
    VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v14, (struct VIDMM_RECYCLE_RANGE *)v15);
    VIDMM_RECYCLE_RANGE::DebouncedDecommit((VIDMM_RECYCLE_RANGE *)v15, (enum VIDMM_RECYCLE_BLOCK_SHRINK_RESULT *)&v29);
    if ( !v29 )
      VIDMM_RECYCLE_MULTIRANGE::MergeSubrangesWherePossible(*((VIDMM_RECYCLE_MULTIRANGE **)v15 + 17), 0);
  }
}
