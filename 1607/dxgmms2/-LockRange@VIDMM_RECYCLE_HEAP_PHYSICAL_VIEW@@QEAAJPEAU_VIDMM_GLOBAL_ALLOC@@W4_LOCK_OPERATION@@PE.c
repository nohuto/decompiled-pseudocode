/*
 * XREFs of ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00664E8
 * Callers:
 *     ?Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@Z @ 0x1C0061EB0 (-Lock@VIDMM_RECYCLE_RANGE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@@.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z @ 0x1C0010524 (--_G_VIDMM_GLOBAL_ALLOC@@QEAAPEAXI@Z.c)
 *     ?Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C006681C (-Lock@VIDMM_MDL_RANGE@@QEAAJPEAXW4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@PEAU_VIDMM_GLOBAL_ALLOC@@@.c)
 *     ?InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z @ 0x1C006691C (-InsertBetween@VIDMM_MDL_RANGE@@QEAAXPEAV1@0@Z.c)
 *     ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0066CD0 (-VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z.c)
 *     ?VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z @ 0x1C0069B80 (-VidMmUnmapViewAsync@@YAXPEAU_EPROCESS@@PEAX1@Z.c)
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
  _VIDMM_GLOBAL_ALLOC *v16; // rax
  __int64 v17; // rcx
  enum _LOCK_OPERATION v18; // r8d
  _VIDMM_GLOBAL_ALLOC *v19; // rdi
  __int64 v20; // rdx
  void *v21; // rsi
  int v22; // ecx
  int v23; // ebp
  int v24; // eax
  int v26; // eax
  __int64 v27; // rsi
  int v28; // ecx
  unsigned __int64 v29; // rcx
  void *v30; // rbx
  void *v31; // rax
  __int64 v32; // rax
  __int64 v33; // rcx
  _QWORD *v34; // rax
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
  v16 = (_VIDMM_GLOBAL_ALLOC *)operator new(0x30uLL, 0x32316956u, PagedPool);
  v18 = IoReadAccess;
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
    _InterlockedIncrement(&dword_1C0035630);
    v32 = WdLogNewEntry5_WdLowResource(v17);
    *(_QWORD *)(v32 + 24) = 5444LL;
    WdLogEvent5_WdLowResource(v32);
    return 3221225495LL;
  }
  v20 = *(_QWORD *)this;
  v21 = 0LL;
  a6 = 0LL;
  a5 = 0LL;
  v22 = **(_DWORD **)(v20 + 32);
  if ( (unsigned int)(v22 - 3) <= 3 && (unsigned int)(v22 - 5) > 1 )
  {
    v26 = VidMmRecycleHeapMapSection(
            *(PVOID *)(v20 + 56),
            (unsigned __int64)v8,
            v11,
            ((v22 - 4) & 0xFFFFFFFD) == 0,
            (void **)&a6,
            &a5,
            0,
            0LL);
    v27 = v26;
    if ( v26 < 0 )
    {
      _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v19);
      v34 = (_QWORD *)WdLogNewEntry5_WdWarning(v33);
      v34[3] = v11;
      v34[4] = v8;
      v34[5] = *(_QWORD *)this;
      v34[6] = v27;
      WdLogEvent5_WdWarning(v34);
      return (unsigned int)v27;
    }
    v8 = a6;
    v21 = a5;
  }
  v23 = VIDMM_MDL_RANGE::Lock(v19, v8, v18, a4, a2);
  v24 = **(_DWORD **)(*(_QWORD *)this + 32LL);
  if ( (unsigned int)(v24 - 3) <= 3 && (unsigned int)(v24 - 5) > 1 )
  {
    v28 = dword_1C003534C;
    if ( (unsigned __int64)qword_1C0035148 > 0x53333333 )
      v28 = dword_1C003533C;
    v29 = (unsigned int)(v28 << 20);
    if ( v11 <= v29 )
    {
      CurrentProcess = PsGetCurrentProcess(v29);
      MmUnmapViewOfSection(CurrentProcess, v21);
    }
    else
    {
      v30 = *(void **)(*(_QWORD *)this + 56LL);
      v31 = (void *)PsGetCurrentProcess(v29);
      VidMmUnmapViewAsync(v31, v30, v21);
    }
  }
  if ( v23 < 0 )
    _VIDMM_GLOBAL_ALLOC::`scalar deleting destructor'(v19);
  else
    VIDMM_MDL_RANGE::InsertBetween(v19, v12, v14);
  return (unsigned int)v23;
}
