/*
 * XREFs of ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C0068AE4
 * Callers:
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00668E0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C00688D0 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C006A7C0 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C000DE9C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DED4 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C000DF24 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z @ 0x1C00689C8 (-ProcessDebounceList@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N0@Z.c)
 */

void __fastcall VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceListsGlobally(VIDMM_RECYCLE_HEAP_MGR *this, char a2)
{
  __int64 v3; // r8
  __int64 v4; // r9
  struct _LIST_ENTRY *i; // rbx
  PRKPROCESS **p_Blink; // rdi
  __int64 v7; // rdx
  __int64 v8; // rdx
  _BYTE v9[16]; // [rsp+20h] [rbp-68h] BYREF
  _BYTE v10[24]; // [rsp+30h] [rbp-58h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+48h] [rbp-40h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v10,
    VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListLock);
  for ( i = VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead.Flink;
        i != &VIDMM_RECYCLE_HEAP_MGR::_GlobalHeapManagerListHead;
        i = i->Flink )
  {
    p_Blink = (PRKPROCESS **)&i[-43].Blink;
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v9, (struct DXGFASTMUTEX *const)&i[-17].Blink, v3, v4);
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v9, v7);
    if ( p_Blink[78] != (PRKPROCESS *)(p_Blink + 78) || p_Blink[80] != (PRKPROCESS *)(p_Blink + 80) )
    {
      KeStackAttachProcess(*p_Blink[1], &ApcState);
      VIDMM_RECYCLE_HEAP_MGR::ProcessDebounceList((VIDMM_RECYCLE_HEAP_MGR *)&i[-43].Blink, 0, a2);
      KeUnstackDetachProcess(&ApcState);
    }
    if ( v9[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v9, v8, v3, v4);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v10);
}
