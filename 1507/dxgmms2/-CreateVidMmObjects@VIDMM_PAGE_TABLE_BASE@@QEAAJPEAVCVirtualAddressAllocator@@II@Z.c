/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C005EB98
 * Callers:
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C0060648 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z @ 0x1C0060824 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0006E70 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C00341E0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C0034880 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        VIDMM_PAGE_TABLE_BASE *this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdi
  struct VIDMM_PROCESS **v6; // r15
  unsigned __int64 v8; // r12
  unsigned int v10; // r8d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // edx
  __int64 v15; // r9
  int v16; // edx
  unsigned int v17; // r10d
  struct _VIDMM_GLOBAL_ALLOC **v18; // rbx
  __int64 v19; // rcx
  int OneAllocation; // esi
  __int64 v21; // rax
  int v23; // ebx
  __int64 v24; // rcx
  __int64 v25; // rax
  unsigned __int8 v26[4]; // [rsp+90h] [rbp-88h] BYREF
  int v27; // [rsp+94h] [rbp-84h]
  __int64 v28; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v4 = *((_QWORD *)a2 + 8);
  v6 = (struct VIDMM_PROCESS **)*((_QWORD *)a2 + 10);
  v8 = a3;
  v10 = *(_DWORD *)this;
  v11 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v12 = 0;
  v13 = v11 + *(_QWORD *)(v4 + 39992);
  if ( (*(_BYTE *)(v4 + 40552) & 8) != 0 || !((__int16)v10 >> 13) )
    v12 = 1;
  v26[0] = 0;
  v14 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 284LL);
  if ( (v14 & 4) != 0 || (v14 & 8) != 0 )
    v12 |= 4u;
  v15 = *(_QWORD *)(v4 + 39992);
  v28 = 0LL;
  v27 = 0;
  if ( a4 )
    v16 = a4 - 1;
  else
    v16 = *(unsigned __int16 *)(v11 + v15 + 12) - *(_DWORD *)(v11 + v15 + 4);
  v17 = *(_DWORD *)(v13 + 48LL * (v10 & 7) + 84);
  if ( !v17 )
    v17 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 3712) + 8LL * (unsigned int)(*(_DWORD *)(v11 + v15 + 4) + v16))
                    + 368LL);
  v18 = (struct _VIDMM_GLOBAL_ALLOC **)((char *)this + 8);
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v4,
                    (__int64)v6,
                    (v10 >> 7) & 0x1F,
                    v8,
                    v8,
                    v17,
                    1 << v16,
                    0,
                    v28,
                    v12,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    (unsigned __int64 **)this + 1);
  if ( OneAllocation >= 0 )
  {
    *((_DWORD *)*v18 + 19) |= 0x100u;
    if ( (*((_DWORD *)a2 + 30) & 4) != 0 )
      *((_DWORD *)*v18 + 19) |= 0x200u;
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 9), &ApcState);
    v23 = VIDMM_GLOBAL::OpenOneAllocation(
            (DXGADAPTER **)v4,
            v6,
            *v18,
            0LL,
            0,
            0LL,
            (struct VIDMM_ALLOC **)this + 2,
            v26);
    KeUnstackDetachProcess(&ApcState);
    if ( v23 >= 0 )
    {
      return 0LL;
    }
    else
    {
      _InterlockedIncrement(&dword_1C00274FC);
      v25 = WdLogNewEntry5_WdLowResource(v24);
      *(_QWORD *)(v25 + 24) = 3516LL;
      WdLogEvent5_WdLowResource(v25);
      return (unsigned int)v23;
    }
  }
  else
  {
    _InterlockedIncrement(&dword_1C00274F8);
    v21 = WdLogNewEntry5_WdLowResource(v19);
    *(_QWORD *)(v21 + 24) = 3485LL;
    WdLogEvent5_WdLowResource(v21);
    return (unsigned int)OneAllocation;
  }
}
