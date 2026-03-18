/*
 * XREFs of ?RecordVaPagingHistoryCommit@VIDMM_GLOBAL@@QEAAXPEAU_EPROCESS@@_K1I1PEAU_MDL@@PEAXW4VIDMM_VAD_OWNER_TYPE@@@Z @ 0x1C006178C
 * Callers:
 *     ?CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_VA_STATE@@_K222EPEAPEAUVIDMM_ALLOC@@@Z @ 0x1C005D910 (-CommitVirtualAddressRange@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@PEBUCOMMIT_V.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryCommit(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        __int64 a6,
        __int64 a7,
        __int64 a8,
        int a9)
{
  __int64 v13; // rdi
  _DWORD *v14; // rsi
  void *v15; // rcx

  if ( *(_QWORD *)(a1 + 40600) )
  {
    v13 = a1 + 40616;
    KeEnterCriticalRegion();
    ExAcquirePushLockExclusiveEx(v13, 0LL);
    *(_QWORD *)(v13 + 8) = KeGetCurrentThread();
    v14 = operator new(0x38uLL, 0x32356956u, PagedPool);
    if ( v14 )
    {
      if ( *(_DWORD *)(a1 + 40608) == dword_1C00272E4 )
        *(_DWORD *)(a1 + 40608) = 0;
      v15 = *(void **)(*(_QWORD *)(a1 + 40600) + 24LL * *(unsigned int *)(a1 + 40608) + 16);
      if ( v15 )
        operator delete(v15);
      v14[13] = a9;
      *((_QWORD *)v14 + 4) = a7;
      *((_QWORD *)v14 + 5) = a8;
      v14[12] = a5;
      *((_QWORD *)v14 + 3) = a6;
      *(_QWORD *)v14 = a2;
      *((_QWORD *)v14 + 1) = a3;
      *((_QWORD *)v14 + 2) = a4;
      *(_QWORD *)(*(_QWORD *)(a1 + 40600) + 24LL * *(unsigned int *)(a1 + 40608)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*(_QWORD *)(a1 + 40600) + 24LL * *(unsigned int *)(a1 + 40608) + 16) = v14;
      *(_DWORD *)(*(_QWORD *)(a1 + 40600) + 24LL * (unsigned int)(*(_DWORD *)(a1 + 40608))++ + 8) = 1;
    }
    *(_QWORD *)(v13 + 8) = 0LL;
    ExReleasePushLockExclusiveEx(v13, 0LL);
    KeLeaveCriticalRegion();
  }
}
