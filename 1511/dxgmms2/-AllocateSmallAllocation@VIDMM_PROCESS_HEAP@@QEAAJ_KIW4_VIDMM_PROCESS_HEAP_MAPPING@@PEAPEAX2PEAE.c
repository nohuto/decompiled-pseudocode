/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C00886B8
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C0087C20 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011E30 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C0011EF0 (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     Template_qpxp @ 0x1C001E2B8 (Template_qpxp.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C001EB30 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C001EB64 (ExFreeToPagedLookasideList.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0059180 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0059558 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00881D0 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C0088C94 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C0089080 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        unsigned int a3,
        unsigned int a4,
        union _LARGE_INTEGER **a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
  _QWORD *v8; // r12
  unsigned int v11; // edi
  char v12; // bl
  _BYTE *v13; // rax
  union _LARGE_INTEGER *v14; // rax
  __int64 v15; // rcx
  union _LARGE_INTEGER *v16; // rsi
  NTSTATUS v17; // r15d
  __int64 v18; // rax
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // r8
  _QWORD **BlockListHead; // r15
  _QWORD *v23; // rbx
  struct _VIDMM_PROCESS_HEAP_BLOCK *v24; // rdi
  VIDMM_LINEAR_POOL *v25; // rcx
  __int64 v26; // rdx
  int v27; // eax
  int v28; // r8d
  int v29; // eax
  union _LARGE_INTEGER v30; // rbx
  ULONG AllocationType; // edx
  __int64 v32; // rcx
  __int64 v33; // rax
  struct _VIDMM_POOL_BLOCK *v34; // rdx
  _QWORD *v36; // rcx
  __int64 v37; // r8
  __int64 v38; // rdx
  struct _VIDMM_PROCESS_HEAP_BLOCK *v39; // [rsp+60h] [rbp-20h] BYREF
  PVOID BaseAddress; // [rsp+68h] [rbp-18h] BYREF
  struct _VIDMM_POOL_BLOCK *v41; // [rsp+70h] [rbp-10h] BYREF
  union _LARGE_INTEGER v42; // [rsp+78h] [rbp-8h] BYREF
  char v43; // [rsp+C0h] [rbp+40h]
  ULONG_PTR RegionSize; // [rsp+C8h] [rbp+48h] BYREF
  unsigned int v45; // [rsp+D0h] [rbp+50h]

  v45 = a3;
  RegionSize = a2;
  v8 = a6;
  v39 = 0LL;
  v42.QuadPart = 0LL;
  v41 = 0LL;
  v11 = a3;
  v43 = 0;
  v12 = 0;
  BaseAddress = 0LL;
  *a5 = 0LL;
  v13 = a7;
  *v8 = 0LL;
  *v13 = 0;
  v14 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v16 = v14;
  if ( !v14 )
  {
    v17 = -1073741801;
    _InterlockedIncrement(&dword_1C002F530);
    v18 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v18 + 24) = 672LL;
    WdLogEvent5_WdLowResource(v18);
    v20 = 0LL;
LABEL_18:
    v24 = v39;
LABEL_19:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v34 = v41;
    if ( v41 && v24 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v24 + 9), v41, v20, v19);
    if ( v43 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v24);
    if ( v16 )
      ExFreeToPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64), v16);
    if ( v12 )
      DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(a1 + 16), (__int64)v34, v20, v19);
    return (unsigned int)v17;
  }
  memset(v14, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(union _LARGE_INTEGER **)(a1 + 16));
  LOBYTE(a6) = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, a4, v21);
  v23 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_7:
    v27 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v11, a4, &v39, a8);
    v20 = 0LL;
    v17 = v27;
    if ( v27 < 0 )
    {
LABEL_17:
      v12 = (char)a6;
      goto LABEL_18;
    }
    v43 = 1;
    v28 = v11;
    v24 = v39;
    v29 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v39 + 9),
            RegionSize,
            v28,
            1,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v42,
            (void **)&v41);
    v20 = 0LL;
    v17 = v29;
    if ( v29 < 0 )
    {
      v12 = (char)a6;
      goto LABEL_19;
    }
  }
  else
  {
    while ( 1 )
    {
      v24 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v23 - 1);
      v25 = (VIDMM_LINEAR_POOL *)v23[8];
      v23 = (_QWORD *)*v23;
      v39 = v24;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(v25, RegionSize, v45, 1, 0LL, 0LL, 0, 0, 0LL, &v42, (void **)&v41) >= 0 )
        break;
      if ( v23 == BlockListHead )
      {
        v11 = v45;
        goto LABEL_7;
      }
    }
  }
  v30 = v42;
  if ( !*((_QWORD *)v24 + 7) && !*((_QWORD *)v24 + 11) )
  {
    AllocationType = 8392704;
    if ( *((_DWORD *)v24 + 20) == 2 )
      AllocationType = 4096;
    if ( a8 )
      AllocationType |= 0x800000u;
    BaseAddress = (PVOID)(v42.QuadPart + *((_QWORD *)v24 + 4));
    v17 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v24 + 12));
    if ( v17 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C002F5BC);
      v33 = WdLogNewEntry5_WdLowResource(v32);
      *(_QWORD *)(v33 + 24) = 795LL;
      WdLogEvent5_WdLowResource(v33);
      v20 = 0LL;
      goto LABEL_17;
    }
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 64LL) += RegionSize;
  v36 = *(_QWORD **)(a1 + 8);
  if ( a4 == 1 )
  {
    v36[11] += RegionSize;
  }
  else if ( a4 == 2 )
  {
    v36[13] += RegionSize;
  }
  else
  {
    v36[15] += RegionSize;
  }
  v16->LowPart &= ~1u;
  v16[7].QuadPart = RegionSize;
  v16[3].QuadPart = (LONGLONG)v41;
  LOBYTE(v16[9].LowPart) = 0;
  v16[1].QuadPart = (LONGLONG)v24;
  v16[2] = v30;
  v16[4].QuadPart = 0LL;
  ++*((_DWORD *)v24 + 6);
  DXGFASTMUTEX::Release(*(DXGFASTMUTEX **)(a1 + 16), v26, 0LL, v19);
  *a5 = v16;
  if ( a4 - 3 > 1 )
    *v8 = v16[2].QuadPart + *(_QWORD *)(v16[1].QuadPart + 32);
  else
    *v8 = 0LL;
  if ( bTracingEnabled )
  {
    v38 = a4 - 3 > 3 ? *((_QWORD *)v24 + 4) : *((_QWORD *)v24 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x400) != 0 )
      Template_qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v37,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v16,
        RegionSize,
        v38);
  }
  *a7 = 1;
  return 0LL;
}
