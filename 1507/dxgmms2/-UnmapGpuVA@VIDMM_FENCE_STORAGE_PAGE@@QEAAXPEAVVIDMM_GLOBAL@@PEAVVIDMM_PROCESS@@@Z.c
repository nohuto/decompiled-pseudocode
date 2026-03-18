/*
 * XREFs of ?UnmapGpuVA@VIDMM_FENCE_STORAGE_PAGE@@QEAAXPEAVVIDMM_GLOBAL@@PEAVVIDMM_PROCESS@@@Z @ 0x1C005B1BC
 * Callers:
 *     ?UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z @ 0x1C005B2EC (-UnmapGpuVA@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PROCESS@@PEAUVIDMM_MONITORED_FENCE_STORAGE@@@Z.c)
 * Callees:
 *     ?CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z @ 0x1C00317CC (-CloseAdapter@VIDMM_PROCESS@@QEAAXPEAVVIDMM_GLOBAL@@@Z.c)
 *     ?VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDRESS@@E@Z @ 0x1C005556C (-VidMmFreeGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PROCESS@@PEAU_D3DKMT_FREEGPUVIRTUALADDR.c)
 *     ?GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z @ 0x1C00583C8 (-GetVirtualAddressAllocator@VIDMM_PROCESS@@QEAAPEAVCVirtualAddressAllocator@@KI@Z.c)
 *     ?RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C005AFE4 (-RemoveMappedFenceGpuVa@VIDMM_GLOBAL@@QEAAXPEAU_LIST_ENTRY@@@Z.c)
 */

void __fastcall VIDMM_FENCE_STORAGE_PAGE::UnmapGpuVA(
        VIDMM_FENCE_STORAGE_PAGE *this,
        struct VIDMM_GLOBAL *a2,
        struct VIDMM_PROCESS *a3)
{
  char *v6; // rdi
  char *v7; // rcx
  char *v8; // rax
  char *v9; // rbx
  VIDMM_PROCESS *v11; // rcx
  __int64 v12; // rax
  struct CVirtualAddressAllocator *VirtualAddressAllocator; // rax
  __int64 v14; // rdx
  char **v15; // rcx
  _D3DKMT_FREEGPUVIRTUALADDRESS v16; // [rsp+20h] [rbp-28h] BYREF

  if ( (*((_BYTE *)a2 + 40552) & 1) != 0 )
  {
    v6 = (char *)this + 48;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v6, 0LL);
    v7 = (char *)this + 32;
    *((_QWORD *)v6 + 1) = KeGetCurrentThread();
    v8 = (char *)*((_QWORD *)this + 4);
    while ( v8 != v7 )
    {
      v9 = v8 - 64;
      v8 = *(char **)v8;
      if ( a3 == *((struct VIDMM_PROCESS **)v9 + 4) && a2 == *((struct VIDMM_GLOBAL **)v9 + 5) )
      {
        if ( (*((_DWORD *)v9 + 20))-- == 1 )
        {
          if ( v9[16] )
          {
            v11 = (VIDMM_PROCESS *)*((_QWORD *)v9 + 4);
            *(_QWORD *)&v16.hAdapter = 0LL;
            v16.BaseAddress = *(_QWORD *)v9;
            v12 = *((_QWORD *)a2 + 3);
            v16.Size = 4096LL;
            VirtualAddressAllocator = VIDMM_PROCESS::GetVirtualAddressAllocator(v11, *(_DWORD *)(v12 + 184), 0xFFFFFFFF);
            VIDMM_GLOBAL::VidMmFreeGpuVirtualAddress(
              a2,
              *((struct VIDMM_PROCESS **)VirtualAddressAllocator + 9),
              &v16,
              1);
            VIDMM_GLOBAL::RemoveMappedFenceGpuVa(a2, (struct _LIST_ENTRY *)v9 + 3);
            VIDMM_PROCESS::CloseAdapter(*((VIDMM_PROCESS **)v9 + 4), a2);
          }
          v14 = *((_QWORD *)v9 + 8);
          v15 = (char **)*((_QWORD *)v9 + 9);
          if ( *(char **)(v14 + 8) != v9 + 64 || *v15 != v9 + 64 )
            __fastfail(3u);
          *v15 = (char *)v14;
          *(_QWORD *)(v14 + 8) = v15;
          ExFreePoolWithTag(v9, 0);
        }
        break;
      }
    }
    *((_QWORD *)v6 + 1) = 0LL;
    ExReleasePushLockExclusiveEx(v6, 0LL);
    KeLeaveCriticalRegion();
  }
}
