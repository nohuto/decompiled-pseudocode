/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C005E180
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C005D9B4 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00120EC (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C005E4B0 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C005E5B0 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005E694 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0061DF0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        _BYTE *a5,
        _BYTE *a6)
{
  _BYTE *v6; // rbp
  void *v7; // rbx
  void *v8; // r14
  VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *v9; // rax
  unsigned __int64 v10; // r13
  int v11; // r8d
  struct VIDMM_MDL_RANGE *v13; // rsi
  struct VIDMM_MDL_RANGE *i; // r12
  VIDMM_MDL_RANGE *v15; // rax
  __int64 v16; // rcx
  VIDMM_MDL_RANGE *v17; // rdi
  __int64 v18; // r8
  int v19; // edx
  int v20; // ebp
  int v21; // eax
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rbp
  int v26; // ecx
  void *v27; // rbx
  void *v28; // rax
  _QWORD *v29; // rax
  __int64 CurrentProcess; // rax
  __int64 v31; // rax

  v6 = a6;
  v7 = a5;
  v8 = 0LL;
  v9 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)*((_QWORD *)this + 1);
  v10 = a6 - a5;
  v11 = -1;
  v13 = 0LL;
  for ( i = 0LL; v9 != (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)this + 8); v9 = *(VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW **)v9 )
  {
    if ( v11 >= 0 )
      break;
    if ( *((_QWORD *)v9 - 1) > (unsigned __int64)a5 )
    {
      if ( *((_QWORD *)v9 - 2) < (unsigned __int64)a6 )
      {
        v11 = 0;
      }
      else
      {
        v11 = 1;
        i = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v9 - 24);
      }
    }
    else
    {
      v11 = -1;
      v13 = (VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *)((char *)v9 - 24);
    }
  }
  v15 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
  v17 = v15;
  if ( v15 )
  {
    *(_QWORD *)v15 = 0LL;
    *((_QWORD *)v15 + 1) = v7;
    *((_QWORD *)v15 + 2) = v6;
    *((_QWORD *)v15 + 5) = this;
    *((_QWORD *)v15 + 3) = 0LL;
    *((_QWORD *)v15 + 4) = 0LL;
    v18 = *(_QWORD *)this;
    a6 = 0LL;
    a5 = 0LL;
    v19 = **(_DWORD **)(v18 + 32);
    if ( (unsigned int)(v19 - 3) <= 3 && (unsigned int)(v19 - 5) > 1 )
    {
      v23 = VidMmRecycleHeapMapSection(
              *(PVOID *)(v18 + 56),
              (unsigned __int64)v7,
              v10,
              ((v19 - 4) & 0xFFFFFFFD) == 0,
              (void **)&a6,
              (void **)&a5,
              0,
              0LL);
      v25 = v23;
      if ( v23 < 0 )
      {
        v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v24);
        v29[3] = v10;
        v29[4] = v7;
        v29[5] = *(_QWORD *)this;
        v29[6] = v25;
        WdLogEvent5_WdWarning(v29);
        return (unsigned int)v25;
      }
      v7 = a6;
      v8 = a5;
    }
    v20 = VIDMM_MDL_RANGE::Lock(v17, v7, (enum _LOCK_OPERATION)v18, a4, a2);
    v21 = **(_DWORD **)(*(_QWORD *)this + 32LL);
    if ( (unsigned int)(v21 - 3) <= 3 && (unsigned int)(v21 - 5) > 1 )
    {
      if ( (unsigned __int64)qword_1C002F118 <= 0x53333333 )
        v26 = dword_1C002F33C;
      else
        v26 = dword_1C002F32C;
      if ( v10 <= (unsigned int)(v26 << 20) )
      {
        CurrentProcess = PsGetCurrentProcess();
        MmUnmapViewOfSection(CurrentProcess, v8);
      }
      else
      {
        v27 = *(void **)(*(_QWORD *)this + 56LL);
        v28 = (void *)PsGetCurrentProcess();
        VidMmUnmapViewAsync(v28, v27, v8);
      }
    }
    if ( v20 < 0 )
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v17);
    else
      VIDMM_MDL_RANGE::InsertBetween(v17, v13, i);
    return (unsigned int)v20;
  }
  else
  {
    _InterlockedIncrement(&dword_1C002F5B0);
    v31 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v31 + 24) = 5339LL;
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
}
