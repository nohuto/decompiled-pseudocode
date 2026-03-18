/*
 * XREFs of ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0012028
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
 *     Template_q @ 0x1C00158A0 (Template_q.c)
 */

void __fastcall DXGAUTOMUTEX::Acquire(DXGAUTOMUTEX *this, __int64 a2, __int64 a3, __int64 a4)
{
  union _LARGE_INTEGER *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 LowPart; // r9
  __int64 v13; // rax
  __int64 v14; // rax

  if ( *((_BYTE *)this + 8) )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
    v10[3] = 275LL;
    v10[4] = 4LL;
    v10[5] = this;
    v10[6] = 0LL;
    v10[7] = 0LL;
    WdLogEvent5_WdCriticalError(v10);
  }
  v5 = *(union _LARGE_INTEGER **)this;
  KeEnterCriticalRegion();
  if ( _InterlockedIncrement((volatile signed __int32 *)&v5[1]) <= 1 )
    goto LABEL_4;
  if ( (struct _KTHREAD *)v5->QuadPart != KeGetCurrentThread() )
  {
    if ( bTracingEnabled )
    {
      LowPart = v5[7].LowPart;
      if ( (_DWORD)LowPart != -1 && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
        Template_q(v7, &EventBlockThread, v8, LowPart);
    }
    ExInterlockedAddLargeInteger(v5 + 2, (LARGE_INTEGER)1LL, (PKSPIN_LOCK)&v5[6].QuadPart);
    KeWaitForSingleObject(&v5[3], Executive, 0, 0, 0LL);
LABEL_4:
    if ( v5->QuadPart )
    {
      v13 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v13 + 24) = 354LL;
      WdLogEvent5_WdAssertion(v13);
    }
    if ( v5[1].HighPart )
    {
      v14 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
      *(_QWORD *)(v14 + 24) = 355LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v5->QuadPart = (LONGLONG)KeGetCurrentThread();
    v5[1].HighPart = 1;
    goto LABEL_9;
  }
  if ( v5[1].HighPart <= 0 )
  {
    v11 = WdLogNewEntry5_WdAssertion(v7, v6, v8, v9);
    *(_QWORD *)(v11 + 24) = 328LL;
    WdLogEvent5_WdAssertion(v11);
  }
  ++v5[1].HighPart;
LABEL_9:
  *((_BYTE *)this + 8) = 1;
}
