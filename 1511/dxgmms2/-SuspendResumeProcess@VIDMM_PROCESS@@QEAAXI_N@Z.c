/*
 * XREFs of ?SuspendResumeProcess@VIDMM_PROCESS@@QEAAXI_N@Z @ 0x1C007F774
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C003D0B0 (-CommitVirtualAddressRange@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_ST.c)
 *     ?CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MDL@@EPEAPEAUVIDMM_ALLOC@@EE@Z @ 0x1C0040390 (-CommitVirtualAddressRange@CVirtualAddressAllocator@@QEAAJPEAUVIDMM_MAPPED_VA_RANGE@@II_KPEAU_MD.c)
 *     ?FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z @ 0x1C0044320 (-FlushGpuVaTlb@VIDMM_GLOBAL@@QEAAXIU_D3DGPU_PHYSICAL_ADDRESS@@PEAVVIDMM_PROCESS@@PEAX_K3@Z.c)
 * Callees:
 *     VidSchSuspendResumeDevice @ 0x1C0011190 (VidSchSuspendResumeDevice.c)
 */

void __fastcall VIDMM_PROCESS::SuspendResumeProcess(VIDMM_PROCESS *this, unsigned int a2, char a3)
{
  int v3; // ebx
  __int64 v6; // rdi
  __int64 v7; // rdx
  unsigned int i; // esi
  __int64 v9; // r15
  _QWORD *v10; // rax
  _QWORD *v11; // r14
  __int64 v12; // rax
  __int64 v13; // rcx

  v3 = 0;
  v6 = *(_QWORD *)(*((_QWORD *)this + 2) + 8LL * a2);
  if ( v6 )
  {
    v7 = *(_QWORD *)(v6 + 16);
    if ( v7 )
    {
      if ( *(_DWORD *)(**(_QWORD **)v6 + 16LL) == 1 )
      {
        for ( i = 0; i < *(_DWORD *)(v6 + 12); ++i )
        {
          v9 = 184LL * i;
          v10 = (_QWORD *)(v9 + v7 + 40);
          v11 = (_QWORD *)*v10;
          while ( v11 != v10 )
          {
            v12 = v11[4];
            v13 = *(_QWORD *)(v12 + 24);
            if ( v13 && !*(_QWORD *)(v12 + 168) )
              VidSchSuspendResumeDevice(*(_QWORD *)(v13 + 544), a3, 0);
            v7 = *(_QWORD *)(v6 + 16);
            v11 = (_QWORD *)*v11;
            v10 = (_QWORD *)(v9 + v7 + 40);
          }
        }
      }
    }
  }
  LOBYTE(v3) = a3 != 0;
  *((_DWORD *)this + 12) ^= (*((_DWORD *)this + 12) ^ (4 * v3)) & 4;
}
