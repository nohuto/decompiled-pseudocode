/*
 * XREFs of ?VidMmRecycleHeapMapSection@@YAJPEAX_K1EPEAPEAX2EPEAE@Z @ 0x1C0061DF0
 * Callers:
 *     ?UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z @ 0x1C005DD30 (-UnlockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJ_K0@Z.c)
 *     ?LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PEAVVIDMM_SEGMENT@@_K3@Z @ 0x1C005E180 (-LockRange@VIDMM_RECYCLE_HEAP_PHYSICAL_VIEW@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@W4_LOCK_OPERATION@@PE.c)
 *     ?Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z @ 0x1C0061BB8 (-Map@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAX_K0H@Z.c)
 *     ?ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ @ 0x1C0061CE4 (-ZeroMultirangeMemory@VIDMM_RECYCLE_MULTIRANGE@@QEAAXXZ.c)
 *     ?MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ @ 0x1C00824DC (-MapLocked@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAXXZ.c)
 *     ?MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z @ 0x1C0082840 (-MapViewOfAllocationExternal@VIDMM_RECYCLE_HEAP_MGR@@UEAAPEAXPEAX_K@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall VidMmRecycleHeapMapSection(
        PVOID Section,
        __int64 a2,
        unsigned __int64 a3,
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
  __int64 v20; // rdx
  NTSTATUS v21; // eax
  char *v22; // rcx
  __int64 v23; // [rsp+50h] [rbp-10h] BYREF
  PVOID MappedBase; // [rsp+98h] [rbp+38h] BYREF
  unsigned __int64 v25; // [rsp+A0h] [rbp+40h] BYREF

  v25 = a3;
  v8 = ViewSize;
  v9 = 4;
  v23 = a2;
  if ( !a4 )
    v9 = 1028;
  MappedBase = 0LL;
  if ( ViewSize )
    *ViewSize = 0;
  if ( (gVidMmGlobalFault & 0x1000) != 0 )
  {
    v13 = -1073741823;
  }
  else
  {
    CurrentProcess = PsGetCurrentProcess();
    v13 = MmMapViewOfSection(Section, CurrentProcess, &MappedBase, 0LL, v25, &v23, &v25, 2, 0, v9);
    if ( v13 >= 0 )
    {
      v14 = (char *)MappedBase;
      *a6 = MappedBase;
      v15 = a5;
      *a5 = &v14[a2 - v23];
      goto LABEL_8;
    }
  }
  _InterlockedAdd(&dword_1C002F5E0, 1u);
  v17 = WdLogNewEntry5_WdLowResource(Section);
  v18 = a7;
  *(_QWORD *)(v17 + 24) = a7;
  WdLogEvent5_WdLowResource(v17);
  if ( v18 )
  {
LABEL_8:
    if ( v13 >= 0 )
      return (unsigned int)v13;
    goto LABEL_12;
  }
  ViewSize = 0LL;
  v21 = MmMapViewInSystemSpace(Section, &MappedBase, (PSIZE_T)&ViewSize);
  v13 = v21;
  if ( v21 >= 0 )
  {
    if ( v8 )
      *v8 = 1;
    v22 = (char *)MappedBase;
    *a6 = MappedBase;
    v15 = (void **)&v22[a2];
    *a5 = v15;
    goto LABEL_8;
  }
LABEL_12:
  _InterlockedAdd(&dword_1C002F5E0, 1u);
  v19 = WdLogNewEntry5_WdLowResource(v15);
  *(_QWORD *)(v19 + 24) = 738LL;
  WdLogEvent5_WdLowResource(v19);
  if ( v25 >= 0x100000 )
  {
    if ( v25 >= 0x200000 )
    {
      if ( v25 >= 0x400000 )
      {
        if ( v25 >= 0x800000 )
        {
          if ( v25 >= 0x1000000 )
          {
            if ( v25 >= 0x2000000 )
            {
              if ( v25 >= 0x4000000 )
                return (unsigned int)v13;
              v20 = 6603LL;
            }
            else
            {
              v20 = 6602LL;
            }
          }
          else
          {
            v20 = 6613LL;
          }
        }
        else
        {
          v20 = 6601LL;
        }
      }
      else
      {
        v20 = 6600LL;
      }
    }
    else
    {
      v20 = 6599LL;
    }
  }
  else
  {
    v20 = 6598LL;
  }
  DxgkSqmGenericDword(&Dxgk_SqmIncrementDwordEvt, v20, 1LL);
  return (unsigned int)v13;
}
