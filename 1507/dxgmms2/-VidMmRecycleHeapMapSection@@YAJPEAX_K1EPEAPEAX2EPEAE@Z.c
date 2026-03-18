/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C006B000
 * Callers:
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C00678EC (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0067D74 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C0067E7C (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C006A838 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C006B1F0 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        unsigned __int64 a3,
        __int64 a4,
        void **a5,
        void **a6,
        unsigned __int8 a7,
        unsigned __int8 *ViewSize)
{
  unsigned __int8 *v8; // rsi
  int v9; // ebx
  NTSTATUS v12; // edi
  __int64 v13; // rax
  unsigned __int8 v14; // bl
  void **v15; // rcx
  char *v16; // rcx
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 CurrentProcess; // rax
  char *v20; // rdx
  __int64 v22; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a3;
  v8 = ViewSize;
  v9 = 4;
  v22 = a2;
  if ( !(_BYTE)a4 )
    v9 = 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (gVidMmGlobalFault & 0x1000) != 0 )
  {
    v12 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess(Section, a2, a3, a4);
    v12 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v24, &v22, &v24, 2, 0, v9);
    if ( v12 >= 0 )
    {
      v20 = (char *)MappedBase;
      *a6 = MappedBase;
      v15 = a5;
      *a5 = &v20[a2 - v22];
      goto LABEL_12;
    }
  }
  _InterlockedAdd(&dword_1C00275D0, 1u);
  v13 = WdLogNewEntry5_WdLowResource(Section);
  v14 = a7;
  *(_QWORD *)(v13 + 24) = a7;
  WdLogEvent5_WdLowResource(v13);
  if ( v14 )
    goto LABEL_12;
  ViewSize = 0LL;
  v12 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
  if ( v12 >= 0 )
  {
    if ( v8 )
      *v8 = 1;
    v16 = (char *)MappedBase;
    *a6 = MappedBase;
    v15 = (void **)&v16[a2];
    *a5 = v15;
LABEL_12:
    if ( v12 >= 0 )
      return (unsigned int)v12;
  }
  _InterlockedAdd(&dword_1C00275D0, 1u);
  v17 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v17 + 24) = 738LL;
  WdLogEvent5_WdLowResource(v17);
  if ( v24 < 0x100000 )
  {
    v18 = 6598LL;
LABEL_29:
    DxgkSqmGenericDword(&Dxgk_SqmIncrementDwordEvt, v18, 1LL);
    return (unsigned int)v12;
  }
  if ( v24 < 0x200000 )
  {
    v18 = 6599LL;
    goto LABEL_29;
  }
  if ( v24 < 0x400000 )
  {
    v18 = 6600LL;
    goto LABEL_29;
  }
  if ( v24 < 0x800000 )
  {
    v18 = 6601LL;
    goto LABEL_29;
  }
  if ( v24 < 0x1000000 )
  {
    v18 = 6613LL;
    goto LABEL_29;
  }
  if ( v24 < 0x2000000 )
  {
    v18 = 6602LL;
    goto LABEL_29;
  }
  if ( v24 < 0x4000000 )
  {
    v18 = 6603LL;
    goto LABEL_29;
  }
  return (unsigned int)v12;
}
