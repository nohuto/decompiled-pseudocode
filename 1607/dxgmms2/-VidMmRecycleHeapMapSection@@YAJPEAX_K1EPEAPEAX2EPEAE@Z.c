/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0066CD0
 * Callers:
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C005F1B4 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C0066098 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00664E8 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0069A54 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0095AAC (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C0095E10 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        __int64 a3,
        char a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // rsi
  int v9; // ebx
  __int64 CurrentProcess; // rax
  int v13; // edi
  char *v14; // rdx
  void **v15; // rcx
  __int64 v17; // rax
  unsigned __int8 v18; // bl
  __int64 v19; // rax
  NTSTATUS v20; // eax
  char *v21; // rcx
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a3;
  v8 = ViewSize;
  v9 = 4;
  v22 = a2;
  if ( !a4 )
    v9 = 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (VIDMM_GLOBAL::_Config & 0x200) != 0 )
  {
    v13 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section);
    v13 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v24, &v22, &v24, 2, 0, v9);
    if ( v13 >= 0 )
    {
      v14 = (char *)MappedBase;
      *a6 = MappedBase;
      v15 = a5;
      *a5 = &v14[a2 - v22];
      goto LABEL_8;
    }
  }
  _InterlockedIncrement(&dword_1C0035660);
  v17 = WdLogNewEntry5_WdLowResource(Section);
  v18 = a7;
  *(_QWORD *)(v17 + 24) = a7;
  WdLogEvent5_WdLowResource(v17);
  if ( !v18 )
  {
    ViewSize = 0LL;
    v20 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
    v13 = v20;
    if ( v20 < 0 )
      goto LABEL_12;
    if ( v8 )
      *v8 = 1;
    v21 = (char *)MappedBase;
    *a6 = MappedBase;
    v15 = (void **)&v21[a2];
    *a5 = v15;
  }
LABEL_8:
  if ( v13 < 0 )
  {
LABEL_12:
    _InterlockedIncrement(&dword_1C0035660);
    v19 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v19 + 24) = 759LL;
    WdLogEvent5_WdLowResource(v19);
  }
  return (unsigned int)v13;
}
