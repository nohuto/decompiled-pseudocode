/*
 * XREFs of ?CreateVidMmObjects@VIDMM_PAGE_TABLE_BASE@@QEAAJPEAVCVirtualAddressAllocator@@II@Z @ 0x1C003DBCC
 * Callers:
 *     ?InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z @ 0x1C003D644 (-InitializePageTable@VIDMM_PAGE_TABLE@@QEAAJPEAVCVirtualAddressAllocator@@IE@Z.c)
 *     ?InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z @ 0x1C003F8B4 (-InitializePageDirectory@VIDMM_PAGE_DIRECTORY@@QEAAJPEAVCVirtualAddressAllocator@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1C00155E0 (__security_check_cookie.c)
 *     ?OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALLOCATION@@PEAPEAUVIDMM_ALLOC@@PEAE@Z @ 0x1C004D7B0 (-OpenOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@PEAU_VIDMM_GLOBAL_ALLOC@@PEAXHPEAVDXGALL.c)
 *     ?CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXGK_ALLOCATIONINFOFLAGS@@PEAVDXGADAPTERALLOCATION@@PEAX5KE5PEAPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C004E540 (-CreateOneAllocation@VIDMM_GLOBAL@@QEAAJPEAVVIDMM_DEVICE@@K_K1KKKU_DXGK_SEGMENTPREFERENCE@@U_DXG.c)
 */

__int64 __fastcall VIDMM_PAGE_TABLE_BASE::CreateVidMmObjects(
        struct VIDMM_ALLOC **this,
        struct CVirtualAddressAllocator *a2,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rdi
  struct VIDMM_DEVICE *v6; // r15
  __int64 v8; // r12
  unsigned int v10; // r8d
  __int64 v11; // rbx
  int v12; // eax
  __int64 v13; // rsi
  int v14; // eax
  int v15; // edx
  __int64 v16; // r9
  int v17; // edx
  int v18; // r10d
  struct _VIDMM_GLOBAL_ALLOC **v19; // rbx
  __int64 v20; // rcx
  int OneAllocation; // esi
  int v22; // ebx
  __int64 v23; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int8 v27[4]; // [rsp+90h] [rbp-88h] BYREF
  int v28; // [rsp+94h] [rbp-84h]
  __int64 v29; // [rsp+98h] [rbp-80h]
  struct _KAPC_STATE ApcState; // [rsp+A0h] [rbp-78h] BYREF

  v4 = *((_QWORD *)a2 + 8);
  v6 = (struct VIDMM_DEVICE *)*((_QWORD *)a2 + 10);
  v8 = a3;
  v10 = *(_DWORD *)this;
  v11 = 456LL * ((*(_DWORD *)this >> 7) & 0x1F);
  v12 = 0;
  v13 = v11 + *(_QWORD *)(v4 + 40048);
  if ( (*(_BYTE *)(v4 + 40608) & 8) != 0 || !((__int16)v10 >> 13) )
    v12 = 1;
  v27[0] = 0;
  v14 = v12 | 0x40;
  v15 = *(_DWORD *)(*(_QWORD *)(v4 + 24) + 284LL);
  if ( (v15 & 8) != 0 || (v15 & 0x10) != 0 )
    v14 |= 4u;
  v16 = *(_QWORD *)(v4 + 40048);
  v29 = 0LL;
  v28 = 0;
  if ( a4 )
    v17 = a4 - 1;
  else
    v17 = *(unsigned __int16 *)(v11 + v16 + 12) - *(_DWORD *)(v11 + v16 + 4);
  v18 = *(_DWORD *)(v13 + 48LL * (v10 & 7) + 84);
  if ( !v18 )
    v18 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 3712) + 8LL * (unsigned int)(*(_DWORD *)(v11 + v16 + 4) + v17))
                    + 368LL);
  v19 = this + 1;
  OneAllocation = VIDMM_GLOBAL::CreateOneAllocation(
                    v4,
                    v6,
                    (v10 >> 7) & 0x1F,
                    v8,
                    v8,
                    v18,
                    1 << v17,
                    0,
                    v29,
                    v14,
                    0LL,
                    0LL,
                    0LL,
                    -1610612736,
                    0,
                    0LL,
                    this + 1);
  if ( OneAllocation < 0 )
  {
    _InterlockedIncrement(&dword_1C002F508);
    v25 = WdLogNewEntry5_WdLowResource(v20);
    *(_QWORD *)(v25 + 24) = 3465LL;
    WdLogEvent5_WdLowResource(v25);
    return (unsigned int)OneAllocation;
  }
  else
  {
    *((_DWORD *)*v19 + 19) |= 0x100u;
    if ( (*((_DWORD *)a2 + 30) & 4) != 0 )
      *((_DWORD *)*v19 + 19) |= 0x200u;
    KeStackAttachProcess(**((PRKPROCESS **)a2 + 9), &ApcState);
    v22 = VIDMM_GLOBAL::OpenOneAllocation((VIDMM_GLOBAL *)v4, v6, *v19, 0LL, 0, 0LL, this + 2, v27);
    KeUnstackDetachProcess(&ApcState);
    if ( v22 < 0 )
    {
      _InterlockedIncrement(&dword_1C002F50C);
      v26 = WdLogNewEntry5_WdLowResource(v23);
      *(_QWORD *)(v26 + 24) = 3496LL;
      WdLogEvent5_WdLowResource(v26);
      return (unsigned int)v22;
    }
    else
    {
      return 0LL;
    }
  }
}
