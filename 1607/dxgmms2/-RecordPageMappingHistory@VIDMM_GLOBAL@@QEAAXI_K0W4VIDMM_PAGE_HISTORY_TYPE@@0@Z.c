/*
 * XREFs of ?RecordPageMappingHistory@VIDMM_GLOBAL@@QEAAXI_K0W4VIDMM_PAGE_HISTORY_TYPE@@0@Z @ 0x1C004B970
 * Callers:
 *     ?MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00125C0 (-MapRange@VIDMM_CPU_HOST_APERTURE@@QEAAJPEAU_VIDMM_GLOBAL_ALLOC@@@Z.c)
 *     ?InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z @ 0x1C0046AA0 (-InvalidatePageTable@VIDMM_PAGE_TABLE@@QEAAEPEAVVIDMM_GLOBAL@@II@Z.c)
 *     ?EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z @ 0x1C00621F0 (-EvictResource@VIDMM_MEMORY_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@EEEPEAU_VIDMM_LOCAL_ALLOC@@@Z.c)
 *     ?CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z @ 0x1C00629C0 (-CommitResource@VIDMM_MEMORY_SEGMENT@@UEAAJPEAU_VIDMM_GLOBAL_ALLOC@@E@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_GLOBAL::RecordPageMappingHistory(__int64 a1, int a2, __int64 a3, __int64 a4, int a5, __int64 a6)
{
  __int64 v10; // rdi
  __int64 v11; // rdx

  if ( *(_QWORD *)(a1 + 40952) )
  {
    v10 = a1 + 40936;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v10, 0LL);
    *(_QWORD *)(v10 + 8) = KeGetCurrentThread();
    if ( *(_DWORD *)(a1 + 40960) == dword_1C0035318 )
      *(_DWORD *)(a1 + 40960) = 0;
    v11 = *(_QWORD *)(a1 + 40952) + 48LL * *(unsigned int *)(a1 + 40960);
    *(_QWORD *)v11 = MEMORY[0xFFFFF78000000014];
    *(_DWORD *)(v11 + 32) = a5;
    *(_QWORD *)(v11 + 24) = a6;
    *(_DWORD *)(v11 + 36) = a2;
    *(_QWORD *)(v11 + 8) = a3;
    *(_QWORD *)(v11 + 16) = a4;
    *(_DWORD *)(v11 + 40) = *(_DWORD *)(a1 + 40928);
    ++*(_DWORD *)(a1 + 40960);
    *(_QWORD *)(v10 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v10, 0LL);
    KeLeaveCriticalRegion();
  }
}
