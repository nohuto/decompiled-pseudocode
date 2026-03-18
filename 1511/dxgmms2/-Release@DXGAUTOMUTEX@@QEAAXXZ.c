/*
 * XREFs of ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0011F94
 * Callers:
 *     ?ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z @ 0x1C00384A0 (-ResetUndo@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAX@Z.c)
 *     ?CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0059E7C (-CurationThread@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ @ 0x1C005A2D0 (-FlushTransitions@VIDMM_RECYCLE_HEAP_MGR@@UEAAJXZ.c)
 *     ?GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z @ 0x1C005A320 (-GetMDLForRange@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAU_MDL@@PEAX_K1@Z.c)
 *     ?Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z @ 0x1C005A450 (-Reset@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@PEAXE@Z.c)
 *     ?Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP6AJ331@Z1HPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005A4C0 (-Rotate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAVVIDMM_GLOBAL@@PEAXW4_MM_ROTATE_DIRECTION@@PEAU_MDL@@_KP.c)
 *     ?UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z @ 0x1C005A580 (-UnlockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX_K1E@Z.c)
 *     ?ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005A600 (-ProbeAndLockAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATI.c)
 *     ?Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C005A6C0 (-Free@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C005A720 (-Allocate@VIDMM_RECYCLE_HEAP_MGR@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 *     ??1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ @ 0x1C005A9B0 (--1VIDMM_RECYCLE_HEAP_MGR@@UEAA@XZ.c)
 *     ?GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z @ 0x1C00823C0 (-GetBackingAddress@VIDMM_RECYCLE_HEAP_MGR@@UEAA_KPEAX@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z @ 0x1C0082490 (-MapLocked@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX@Z.c)
 *     ?MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z @ 0x1C00827D0 (-MapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K1H@Z.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C0082840 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 *     ?ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z @ 0x1C00828E0 (-ProcessDebounceListsGlobally@VIDMM_RECYCLE_HEAP_MGR@@QEAAX_N@Z.c)
 *     ?ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ @ 0x1C0082B2C (-ReportHeapStates@VIDMM_RECYCLE_HEAP_MGR@@QEAAXXZ.c)
 *     ?UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z @ 0x1C0082D10 (-UnmapViewOfAllocation@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX@Z.c)
 *     ?UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z @ 0x1C0082D60 (-UnmapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAXPEAX0@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall DXGAUTOMUTEX::Release(DXGAUTOMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rbx
  _QWORD *v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax

  if ( !*((_BYTE *)this + 8) )
  {
    v7 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v7[3] = 275LL;
    v7[4] = 4LL;
    v7[5] = this;
    v7[6] = 0LL;
    v7[7] = 0LL;
    WdLogEvent5_WdCriticalError(v7);
  }
  *((_BYTE *)this + 8) = 0;
  v5 = *(_QWORD *)this;
  if ( *(struct _KTHREAD **)v5 != KeGetCurrentThread() )
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v8[3] = 275LL;
    v8[4] = 4LL;
    v8[5] = v5;
    v8[6] = 0LL;
    v8[7] = 0LL;
    WdLogEvent5_WdCriticalError(v8);
  }
  if ( *(int *)(v5 + 12) <= 0 )
  {
    v9 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v9 + 24) = 374LL;
    WdLogEvent5_WdAssertion(v9);
  }
  if ( (*(_DWORD *)(v5 + 12))-- == 1 )
  {
    *(_QWORD *)v5 = 0LL;
    if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF) != 1 )
      KeSetEvent((PRKEVENT)(v5 + 24), 0, 0);
  }
  else
  {
    _InterlockedAdd((volatile signed __int32 *)(v5 + 8), 0xFFFFFFFF);
  }
  KeLeaveCriticalRegion();
}
