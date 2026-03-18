/*
 * XREFs of ?AllocateSmallAllocation@VIDMM_PROCESS_HEAP@@QEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEE@Z @ 0x1C009D444
 * Callers:
 *     ?Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z @ 0x1C009C960 (-Allocate@VIDMM_PROCESS_HEAP@@UEAAJ_KIW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAX2PEAEEE@Z.c)
 * Callees:
 *     ?Acquire@DXGFASTMUTEX@@QEAAXXZ @ 0x1C00102A0 (-Acquire@DXGFASTMUTEX@@QEAAXXZ.c)
 *     ?Release@DXGFASTMUTEX@@QEAAXXZ @ 0x1C001033C (-Release@DXGFASTMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ExAllocateFromPagedLookasideList @ 0x1C001F9C4 (ExAllocateFromPagedLookasideList.c)
 *     ExFreeToPagedLookasideList @ 0x1C001F9F8 (ExFreeToPagedLookasideList.c)
 *     Template_qpxp @ 0x1C001FE08 (Template_qpxp.c)
 *     ?Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z @ 0x1C0065924 (-Allocate@VIDMM_LINEAR_POOL@@QEAAJ_KKE00EEPEAXPEAT_LARGE_INTEGER@@PEAPEAX@Z.c)
 *     ?Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z @ 0x1C0065BF4 (-Free@VIDMM_LINEAR_POOL@@QEAAXPEAX@Z.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C009CF44 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 *     ?FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z @ 0x1C009DAA0 (-FreeBlock@VIDMM_PROCESS_HEAP@@AEAAXPEAU_VIDMM_PROCESS_HEAP_BLOCK@@@Z.c)
 *     ?GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z @ 0x1C009DF18 (-GetBlockListHead@VIDMM_PROCESS_HEAP@@AEAAPEAU_LIST_ENTRY@@W4_VIDMM_PROCESS_HEAP_MAPPING@@@Z.c)
 */

__int64 __fastcall VIDMM_PROCESS_HEAP::AllocateSmallAllocation(
        __int64 a1,
        ULONG_PTR a2,
        __int64 a3,
        __int64 a4,
        union _LARGE_INTEGER **a5,
        _QWORD *a6,
        _BYTE *a7,
        char a8)
{
  __int64 v8; // rbx
  unsigned int v9; // r13d
  _QWORD *v11; // rax
  struct _PAGED_LOOKASIDE_LIST *v12; // r12
  union _LARGE_INTEGER *v13; // rax
  __int64 v14; // rcx
  union _LARGE_INTEGER *v15; // rsi
  int v16; // r15d
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // r8
  __int64 v21; // rdx
  __int64 v22; // rcx
  _QWORD **BlockListHead; // r12
  _QWORD *v24; // r15
  struct _VIDMM_PROCESS_HEAP_BLOCK *v25; // rdi
  VIDMM_LINEAR_POOL *v26; // rcx
  char v27; // r12
  union _LARGE_INTEGER v28; // rbx
  ULONG AllocationType; // edx
  __int64 v30; // rax
  struct _VIDMM_POOL_BLOCK *v31; // rdx
  _QWORD *v33; // rax
  _QWORD *v34; // rcx
  ULONG_PTR v35; // rax
  __int64 v36; // r8
  __int64 v37; // rdx
  char v38; // [rsp+60h] [rbp-29h]
  struct _VIDMM_PROCESS_HEAP_BLOCK *v39; // [rsp+68h] [rbp-21h] BYREF
  PVOID BaseAddress; // [rsp+70h] [rbp-19h] BYREF
  union _LARGE_INTEGER v41; // [rsp+78h] [rbp-11h] BYREF
  struct _VIDMM_POOL_BLOCK *v42[8]; // [rsp+80h] [rbp-9h] BYREF
  char v43; // [rsp+D0h] [rbp+47h]
  ULONG_PTR RegionSize; // [rsp+D8h] [rbp+4Fh] BYREF

  RegionSize = a2;
  v8 = (unsigned int)a3;
  BaseAddress = 0LL;
  v41.QuadPart = 0LL;
  v9 = a4;
  v39 = 0LL;
  v42[0] = 0LL;
  v43 = 0;
  v38 = 0;
  if ( g_IsInternalReleaseOrDbg )
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdTrace(a1, a2, a3, a4);
    v11[3] = RegionSize;
    v11[4] = v8;
    v11[5] = a1;
  }
  v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
  *a5 = 0LL;
  *a6 = 0LL;
  *a7 = 0;
  v13 = (union _LARGE_INTEGER *)ExAllocateFromPagedLookasideList((PPAGED_LOOKASIDE_LIST)(a1 + 64));
  v15 = v13;
  if ( !v13 )
  {
    v16 = -1073741801;
    _InterlockedIncrement(&dword_1C00355B0);
    v17 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v17 + 24) = 675LL;
    WdLogEvent5_WdLowResource(v17);
LABEL_25:
    v25 = v39;
LABEL_26:
    if ( BaseAddress )
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x4000u);
    v31 = v42[0];
    if ( v42[0] && v25 )
      VIDMM_LINEAR_POOL::Free(*((VIDMM_LINEAR_POOL **)v25 + 9), v42[0], v18, v19);
    if ( v43 == 1 )
      VIDMM_PROCESS_HEAP::FreeBlock((VIDMM_PROCESS_HEAP *)a1, v25);
    if ( v15 )
      ExFreeToPagedLookasideList(v12, v15);
    if ( v38 )
      DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), (__int64)v31, v18, v19);
    return (unsigned int)v16;
  }
  memset(v13, 0, 0x70uLL);
  DXGFASTMUTEX::Acquire(*(DXGFASTMUTEX **)(a1 + 16));
  v38 = 1;
  BlockListHead = (_QWORD **)VIDMM_PROCESS_HEAP::GetBlockListHead(a1, v9, v20);
  v24 = *BlockListHead;
  if ( *BlockListHead == BlockListHead )
  {
LABEL_8:
    if ( g_IsInternalReleaseOrDbg )
      WdLogNewEntry5_WdTrace(v22, v21, v18, v19);
    v27 = a8;
    v16 = VIDMM_PROCESS_HEAP::AllocateBlock(a1, RegionSize, v8, v9, &v39, a8);
    if ( v16 < 0 )
      goto LABEL_24;
    LOBYTE(v19) = 1;
    v43 = 1;
    v25 = v39;
    v16 = VIDMM_LINEAR_POOL::Allocate(
            *((VIDMM_LINEAR_POOL **)v39 + 9),
            RegionSize,
            (unsigned int)v8,
            v19,
            0LL,
            0LL,
            0,
            0,
            0LL,
            &v41,
            (void **)v42);
    if ( v16 < 0 )
    {
      if ( g_IsInternalReleaseOrDbg )
        WdLogNewEntry5_WdTrace(v22, v21, v18, v19);
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_26;
    }
  }
  else
  {
    while ( 1 )
    {
      v25 = (struct _VIDMM_PROCESS_HEAP_BLOCK *)(v24 - 1);
      v26 = (VIDMM_LINEAR_POOL *)v24[8];
      v24 = (_QWORD *)*v24;
      LOBYTE(v19) = 1;
      v39 = v25;
      if ( (int)VIDMM_LINEAR_POOL::Allocate(
                  v26,
                  RegionSize,
                  (unsigned int)v8,
                  v19,
                  0LL,
                  0LL,
                  0,
                  0,
                  0LL,
                  &v41,
                  (void **)v42) >= 0 )
        break;
      if ( v24 == BlockListHead )
        goto LABEL_8;
    }
    v27 = a8;
  }
  v28 = v41;
  if ( !*((_QWORD *)v25 + 7) && !*((_QWORD *)v25 + 11) )
  {
    AllocationType = 8392704;
    if ( *((_DWORD *)v25 + 20) == 2 )
      AllocationType = 4096;
    if ( v27 )
      AllocationType |= 0x800000u;
    BaseAddress = (PVOID)(v41.QuadPart + *((_QWORD *)v25 + 4));
    v16 = ZwAllocateVirtualMemory(
            (HANDLE)0xFFFFFFFFFFFFFFFFLL,
            &BaseAddress,
            0LL,
            &RegionSize,
            AllocationType,
            *((_DWORD *)v25 + 12));
    if ( v16 < 0 )
    {
      BaseAddress = 0LL;
      _InterlockedIncrement(&dword_1C003563C);
      v30 = WdLogNewEntry5_WdLowResource(v22);
      *(_QWORD *)(v30 + 24) = 798LL;
      WdLogEvent5_WdLowResource(v30);
LABEL_24:
      v12 = (struct _PAGED_LOOKASIDE_LIST *)(a1 + 64);
      goto LABEL_25;
    }
  }
  if ( g_IsInternalReleaseOrDbg )
  {
    v33 = (_QWORD *)WdLogNewEntry5_WdTrace(v22, v21, v18, v19);
    v33[4] = v41.HighPart;
    v33[5] = v28.LowPart;
    v33[3] = v25;
  }
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 88LL) += RegionSize;
  v34 = *(_QWORD **)(a1 + 8);
  if ( v9 == 1 )
  {
    v34[14] += RegionSize;
  }
  else if ( v9 == 2 )
  {
    v34[16] += RegionSize;
  }
  else
  {
    v34[18] += RegionSize;
  }
  v15->LowPart &= ~1u;
  v35 = RegionSize;
  v15[4].QuadPart = 0LL;
  v15[7].QuadPart = v35;
  v15[3] = (union _LARGE_INTEGER)v42[0];
  LOBYTE(v15[9].LowPart) = 0;
  v15[1].QuadPart = (LONGLONG)v25;
  v15[2] = v28;
  ++*((_DWORD *)v25 + 6);
  DXGFASTMUTEX::Release(*(struct _KTHREAD ***)(a1 + 16), v21, v18, v19);
  *a5 = v15;
  if ( v9 - 3 > 1 )
    *a6 = v15[2].QuadPart + *(_QWORD *)(v15[1].QuadPart + 32);
  else
    *a6 = 0LL;
  if ( bTracingEnabled )
  {
    v37 = v9 - 3 > 3 ? *((_QWORD *)v25 + 4) : *((_QWORD *)v25 + 11);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200) != 0 )
      Template_qpxp(
        *(_QWORD *)(a1 + 8),
        &EventCreateProcessAllocationDetails,
        v36,
        *(_DWORD *)(*(_QWORD *)(a1 + 8) + 8LL),
        (char)v15,
        RegionSize,
        v37);
  }
  *a7 = 1;
  return 0LL;
}
