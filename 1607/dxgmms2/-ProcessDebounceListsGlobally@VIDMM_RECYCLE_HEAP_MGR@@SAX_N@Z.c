/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@SAX_N@Z @ 0x1C006A79C
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005F530 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C005FE00 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005FE80 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z @ 0x1C006A4A0 (-PurgeAllSegments@VIDMM_GLOBAL@@QEAAXU_VIDMM_PURGE_FLAGS@@PEAVVIDMM_PROCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C000FD00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000FEBC (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010388 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C00103E4 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0010408 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0013750 (__security_check_cookie.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C005F590 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(char a1)
{
  struct _LIST_ENTRY *i; // rbx
  PRKPROCESS **p_Blink; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // r9
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  _BYTE v10[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v11[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v11,
    (struct _KTHREAD **)VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( i = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        i != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        i = i->Flink )
  {
    p_Blink = (PRKPROCESS **)&i[-73].Blink;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v10, (struct DXGFASTMUTEX *const)&i[-17].Blink);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v10, v4, v5, v6);
    if ( p_Blink[138] != (PRKPROCESS *)(p_Blink + 138) || p_Blink[140] != (PRKPROCESS *)(p_Blink + 140) )
    {
      KeStackAttachProcess(*p_Blink[1], &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&i[-73].Blink, 0, a1);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v10[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v10, v7, v8, v9);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v11);
}
