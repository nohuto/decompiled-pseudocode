/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00678EC
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C00677A0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C00040C0 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C005BA68 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C0066F24 (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0067348 (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C006B000 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 */

__int64 __fastcall VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW::LockRange(
        VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        enum _LOCK_OPERATION a3,
        struct VIDMM_SEGMENT *a4,
        void *a5,
        _BYTE *a6)
{
  unsigned __int64 v6; // rsi
  void *v8; // rbx
  _QWORD **v10; // rcx
  unsigned __int64 v11; // r15
  struct VIDMM_MDL_RANGE *v12; // r12
  int v13; // r10d
  struct VIDMM_MDL_RANGE *v14; // r13
  _QWORD *i; // r8
  VIDMM_MDL_RANGE *v16; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  VIDMM_MDL_RANGE *v19; // rdi
  __int64 v20; // rax
  __int64 v22; // rdx
  void *v23; // rsi
  int v24; // ecx
  int v25; // eax
  __int64 v26; // rdx
  __int64 v27; // rcx
  __int64 v28; // rsi
  _QWORD *v29; // rax
  __int64 v30; // rdx
  int v31; // ebp
  __int64 v32; // r8
  __int64 v33; // r9
  int v34; // eax
  int v35; // ecx
  unsigned __int64 v36; // rcx
  void *v37; // rbx
  void *v38; // rax
  __int64 CurrentProcess; // rax

  v6 = (unsigned __int64)a6;
  v8 = a5;
  v10 = (_QWORD **)((char *)this + 8);
  v11 = a6 - (_BYTE *)a5;
  v12 = 0LL;
  v13 = -1;
  v14 = 0LL;
  for ( i = *v10; i != v10 && v13 < 0; i = (_QWORD *)*i )
  {
    if ( *(i - 1) > (unsigned __int64)a5 )
    {
      if ( *(i - 2) < (unsigned __int64)a6 )
      {
        v13 = 0;
      }
      else
      {
        v13 = 1;
        v14 = (struct VIDMM_MDL_RANGE *)(i - 3);
      }
    }
    else
    {
      v13 = -1;
      v12 = (struct VIDMM_MDL_RANGE *)(i - 3);
    }
  }
  v16 = (VIDMM_MDL_RANGE *)operator new(0x30uLL, 0x32316956u, PagedPool);
  LODWORD(v18) = 0;
  v19 = v16;
  if ( v16 )
  {
    *(_QWORD *)v16 = 0LL;
    *((_QWORD *)v16 + 1) = v8;
    *((_QWORD *)v16 + 2) = v6;
    *((_QWORD *)v16 + 5) = this;
    *((_QWORD *)v16 + 3) = 0LL;
    *((_QWORD *)v16 + 4) = 0LL;
  }
  else
  {
    v19 = 0LL;
  }
  if ( !v19 )
  {
    _InterlockedIncrement(&dword_1C00275A0);
    v20 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v20 + 24) = 5241LL;
    WdLogEvent5_WdLowResource(v20);
    return 3221225495LL;
  }
  v22 = *(_QWORD *)this;
  v23 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  v24 = **(_DWORD **)(v22 + 32);
  if ( (unsigned int)(v24 - 3) <= 3 && (unsigned int)(v24 - 5) > 1 )
  {
    v25 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v22 + 56),
            (unsigned __int64)v8,
            v11,
            ((v24 - 4) & 0xFFFFFFFD) == 0,
            (void **)&a6,
            &a5,
            0,
            0LL);
    v28 = v25;
    if ( v25 < 0 )
    {
      v29 = (_QWORD *)WdLogNewEntry5_WdWarning(v27, v26, v18);
      v29[3] = v11;
      v29[4] = v8;
      v29[5] = *(_QWORD *)this;
      v29[6] = v28;
      WdLogEvent5_WdWarning(v29);
      return (unsigned int)v28;
    }
    v8 = a6;
    v23 = a5;
  }
  v31 = VIDMM_MDL_RANGE::Lock(v19, v8, (enum _LOCK_OPERATION)v18, a4, a2);
  v34 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v34 - 3) <= 3 && (unsigned int)(v34 - 5) > 1 )
  {
    v35 = dword_1C0027314;
    if ( (unsigned __int64)qword_1C00270F8 > 0x53333333 )
      v35 = dword_1C0027304;
    v36 = (unsigned int)(v35 << 20);
    if ( v11 <= v36 )
    {
      CurrentProcess = PsGetCurrentProcess(v36, v30, v32, v33);
      MmUnmapViewOfSection(CurrentProcess, v23);
    }
    else
    {
      v37 = *(void **)(*(_QWORD *)this + 56LL);
      v38 = (void *)PsGetCurrentProcess(v36, v30, v32, v33);
      VidMmUnmapViewAsync(v38, v37, v23);
    }
  }
  if ( v31 < 0 )
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v19);
  else
    VIDMM_MDL_RANGE::InsertBetween(v19, v12, v14);
  return (unsigned int)v31;
}
