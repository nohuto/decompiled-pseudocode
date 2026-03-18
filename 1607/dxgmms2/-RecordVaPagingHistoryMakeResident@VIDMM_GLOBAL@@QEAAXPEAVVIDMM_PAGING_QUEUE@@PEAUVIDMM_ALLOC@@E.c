/*
 * XREFs of ?RecordVaPagingHistoryMakeResident@VIDMM_GLOBAL@@QEAAXPEAVVIDMM_PAGING_QUEUE@@PEAUVIDMM_ALLOC@@E_K@Z @ 0x1C005A950
 * Callers:
 *     ?CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z @ 0x1C004C6C8 (-CommitAllocationList@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_PAGING_QUEUE@@PEAPEAUVIDMM_ALLOC@@_KPEA_K@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C000F8B0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

void __fastcall VIDMM_GLOBAL::RecordVaPagingHistoryMakeResident(
        VIDMM_GLOBAL *this,
        struct VIDMM_PAGING_QUEUE *a2,
        struct VIDMM_ALLOC *a3,
        char a4,
        unsigned __int64 a5)
{
  _BYTE *v9; // rbx
  void *v10; // rcx
  __int64 v11; // rax

  if ( *((_QWORD *)this + 5115) )
  {
    v9 = operator new(0x30uLL, 0x32356956u, PagedPool);
    if ( v9 )
    {
      KeEnterCriticalRegion();
      ExAcquirePushLockExclusiveEx((char *)this + 40936, 0LL);
      *((_QWORD *)this + 5118) = KeGetCurrentThread();
      if ( *((_DWORD *)this + 10232) == dword_1C0035314 )
        *((_DWORD *)this + 10232) = 0;
      v10 = *(void **)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16);
      if ( v10 )
        operator delete(v10);
      v9[32] = a4;
      *((_QWORD *)v9 + 1) = a2;
      *((_QWORD *)v9 + 2) = a3;
      *((_QWORD *)v9 + 5) = a5 & -(__int64)(a4 != 0);
      v11 = *((_QWORD *)a3 + 2);
      if ( v11 )
        v11 = *(_QWORD *)(v11 + 32);
      *(_QWORD *)v9 = 0LL;
      *((_QWORD *)v9 + 3) = v11;
      if ( a2 )
        *(_QWORD *)v9 = **(_QWORD **)(*((_QWORD *)a2 + 18) + 8LL);
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232)) = MEMORY[0xFFFFF78000000014];
      *(_QWORD *)(*((_QWORD *)this + 5115) + 24LL * *((unsigned int *)this + 10232) + 16) = v9;
      *(_DWORD *)(*((_QWORD *)this + 5115) + 24LL * (unsigned int)(*((_DWORD *)this + 10232))++ + 8) = 11;
      *((_QWORD *)this + 5118) = 0LL;
      ExReleasePushLockExclusiveEx((char *)this + 40936, 0LL);
      KeLeaveCriticalRegion();
    }
  }
}
