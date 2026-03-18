/*
 * XREFs of ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0088C94
 * Callers:
 *     ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8 (-AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAE.c)
 *     ?FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C0088DE8 (-FreeSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAXPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 * Callees:
 *     Template_pxqqt @ 0x1C001E214 (Template_pxqqt.c)
 *     ??_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z @ 0x1C001E6F0 (--_GVIDMM_LINEAR_POOL@@QEAAPEAXI@Z.c)
 *     ?VidMmDereferenceObjectAsync@@YAXPEAX@Z @ 0x1C005E70C (-VidMmDereferenceObjectAsync@@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_PROCESS_HEAP::FreeBlock(VIDMM_PROCESS_HEAP *this, struct _VIDMM_PROCESS_HEAP_BLOCK *a2)
{
  char *v2; // rax
  __int64 v4; // rcx
  char **v6; // rdx
  int v7; // ecx
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r8
  void *v11; // rcx
  int v12; // eax
  _QWORD *v13; // rcx
  bool v14; // zf
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r9
  VIDMM_LINEAR_POOL *v18; // rcx

  v2 = (char *)a2 + 8;
  v4 = *((_QWORD *)a2 + 1);
  v6 = (char **)*((_QWORD *)a2 + 2);
  if ( *(char **)(v4 + 8) != v2 || *v6 != v2 )
    __fastfail(3u);
  *v6 = (char *)v4;
  *(_QWORD *)(v4 + 8) = v6;
  v7 = *((_DWORD *)a2 + 20);
  if ( (unsigned int)(v7 - 3) > 3 )
  {
    v11 = (void *)*((_QWORD *)a2 + 7);
    if ( v11 )
      MmUnsecureVirtualMemory(v11);
    ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)a2 + 4, (PSIZE_T)a2 + 5, 0x8000u);
  }
  else
  {
    if ( (unsigned int)(v7 - 5) <= 1 )
      MmUnmapViewInSystemSpace(*((PVOID *)a2 + 4));
    ObCloseHandle(*((HANDLE *)a2 + 12), (*((_QWORD *)a2 + 12) & 0xFFFFFFFF80000000uLL) == 0);
    VidMmDereferenceObjectAsync(*((PVOID *)a2 + 11), v8, v9);
  }
  *(_QWORD *)(*((_QWORD *)this + 1) + 72LL) -= *((_QWORD *)a2 + 5);
  --*(_DWORD *)(*((_QWORD *)this + 1) + 80LL);
  v12 = *((_DWORD *)a2 + 20);
  v13 = (_QWORD *)*((_QWORD *)this + 1);
  if ( v12 == 1 )
  {
    v13[12] -= *((_QWORD *)a2 + 5);
  }
  else
  {
    v14 = v12 == 2;
    v15 = *((_QWORD *)a2 + 5);
    if ( v14 )
      v13[14] -= v15;
    else
      v13[16] -= v15;
  }
  if ( bTracingEnabled )
  {
    v16 = *((unsigned int *)a2 + 20);
    v17 = (unsigned int)(v16 - 3) > 3 ? *((_QWORD *)a2 + 4) : *((_QWORD *)a2 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x10000) != 0 )
      Template_pxqqt(
        v16,
        &EventDestroyProcessAllocation,
        v10,
        v17,
        *((_QWORD *)a2 + 5),
        *((_DWORD *)a2 + 20),
        *(_DWORD *)(*((_QWORD *)this + 1) + 8LL),
        1);
  }
  v18 = (VIDMM_LINEAR_POOL *)*((_QWORD *)a2 + 9);
  if ( v18 )
    VIDMM_LINEAR_POOL::`scalar deleting destructor'(v18);
  operator delete(a2);
}
