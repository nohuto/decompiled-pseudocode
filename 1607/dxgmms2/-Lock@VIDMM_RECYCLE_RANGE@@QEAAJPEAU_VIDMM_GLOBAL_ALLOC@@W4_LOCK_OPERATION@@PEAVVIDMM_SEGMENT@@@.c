/*
 * XREFs of ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0061EB0
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@E@Z @ 0x1C005EF4C (-Lock@VIDMM_RECYCLE_MULTIRANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@_K1W4_LOCK_OPERATION@@PEAVVIDMM_SE.c)
 * Callees:
 *     Template_q @ 0x1C0013A2C (Template_q.c)
 *     ?RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C005F9EC (-RemoveFromDebounce@VIDMM_RECYCLE_HEAP_MGR@@QEAAXPEAVVIDMM_RECYCLE_RANGE@@@Z.c)
 *     ?Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z @ 0x1C00618F0 (-Transition@VIDMM_RECYCLE_RANGE@@QEAAXW4VIDMM_RECYCLE_RANGE_STATE@@@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00664E8 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 */

__int64 __fastcall VIDMM_RECYCLE_RANGE::Lock(
        VIDMM_RECYCLE_RANGE *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        struct VIDMM_SEGMENT *a4)
{
  __int64 v4; // rdi
  __int64 v8; // rcx
  __int64 v9; // rcx
  int v10; // edi
  __int64 v11; // r8
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  VIDMM_RECYCLE_HEAP_MGR *v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  _QWORD *v19; // rax
  __int64 v20; // rax

  v4 = *((int *)this + 16);
  v8 = (unsigned int)(*((_DWORD *)this + 16) - 1);
  if ( (_DWORD)v8 )
  {
    v16 = (VIDMM_RECYCLE_HEAP_MGR *)(unsigned int)(v8 - 1);
    if ( (_DWORD)v16 )
    {
      if ( (_DWORD)v16 != 1 )
      {
        v19 = (_QWORD *)WdLogNewEntry5_WdCriticalError(v16, a2, a3, a4);
        v19[7] = 0LL;
        v19[3] = 270LL;
        v19[4] = 52LL;
        v19[5] = 2LL;
        v19[6] = v4;
        WdLogEvent5_WdCriticalError(v19);
        return 3221225473LL;
      }
      VIDMM_RECYCLE_HEAP_MGR::RemoveFromDebounce(v16, this, a3, (__int64)a4);
      ++*((_DWORD *)this + 23);
      VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL, v17, v18);
    }
    else
    {
      ++*((_DWORD *)this + 23);
    }
    return 0LL;
  }
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v8, &EventProfilerEnter, a3, 8000);
  v10 = VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
          (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)(*((_QWORD *)this + 9) + 88LL),
          a2,
          (enum _LOCK_OPERATION)a3,
          a4,
          *((_QWORD *)this + 4),
          *((_QWORD *)this + 5));
  if ( v10 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v9);
    *(_QWORD *)(v20 + 24) = this;
    *(_QWORD *)(v20 + 32) = a2;
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
    ++*((_DWORD *)this + 23);
    VIDMM_RECYCLE_RANGE::Transition((__int64)this, 2LL, v11, v12);
  }
  if ( (qword_1C0035050 & 2) != 0 && (Microsoft_Windows_DxgKrnlEnableBits & 0x2000) != 0 )
    Template_q(v13, &EventProfilerExit, v14, 8000);
  return (unsigned int)v10;
}
