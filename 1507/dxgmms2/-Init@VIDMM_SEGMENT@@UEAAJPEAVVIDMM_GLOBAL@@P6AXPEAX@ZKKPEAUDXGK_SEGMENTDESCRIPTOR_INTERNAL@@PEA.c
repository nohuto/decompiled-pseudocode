/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003D580
 * Callers:
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003F410 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTE.c)
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0040D90 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERN.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F500 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERN.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0005FC0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C0005FE0 (--3@YAXPEAX@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00061B0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0006AD0 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0008500 (memset.c)
 *     ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C003D2C4 (-ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C003D368 (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C003E930 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C003E9C0 (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0070F58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00760A0 (-MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(
        VIDMM_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        void (*a3)(void *),
        int a4,
        unsigned int a5,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6,
        union _LARGE_INTEGER *a7)
{
  unsigned __int64 v10; // rcx
  int v11; // ecx
  VIDMM_LINEAR_POOL *v12; // rax
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rsi
  __int64 v17; // rax
  LONGLONG QuadPart; // rax
  __int64 v19; // rax
  __int64 result; // rax
  unsigned int v21; // edi
  PMDL PagesForMdl; // rax
  __int64 v23; // rcx
  unsigned __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  _QWORD *v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  SIZE_T v33; // rax
  struct _DXGK_MEMORYRANGE *v34; // rax
  __int64 v35; // rcx
  struct _DXGK_MEMORYRANGE *v36; // rbp
  DXGADAPTER *v37; // rcx
  int v38; // eax
  __int64 v39; // rdx
  __int64 v40; // rcx
  __int64 v41; // r8
  __int64 v42; // r9
  _QWORD *v43; // rax
  __int64 v44; // rdx
  UINT64 SizeInBytes; // rcx
  int v46; // eax
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  __int64 v50; // r9
  SIZE_T v51; // rax
  PVOID v52; // rax
  __int64 v53; // rcx
  __int64 v54; // rax
  _WORD v55[2]; // [rsp+30h] [rbp-48h] BYREF
  int v56; // [rsp+34h] [rbp-44h]
  struct _DXGK_MEMORYRANGE *v57; // [rsp+38h] [rbp-40h]
  struct _DXGKARG_QUERYADAPTERINFO v58; // [rsp+40h] [rbp-38h] BYREF

  *((_QWORD *)this + 1) = a2;
  *((_DWORD *)this + 4) = a5;
  *((_DWORD *)this + 5) = a4;
  *((_QWORD *)this + 3) = *((_QWORD *)a6 + 1);
  *((_QWORD *)this + 4) = *((_QWORD *)a6 + 5);
  v10 = dword_1C0027120[a5];
  if ( (_DWORD)v10 )
  {
    if ( *((_QWORD *)a6 + 2) < v10 )
      v10 = *((_QWORD *)a6 + 2);
  }
  else
  {
    v10 = *((_QWORD *)a6 + 2);
  }
  *((_QWORD *)this + 5) = v10;
  v11 = *(_DWORD *)a6;
  *((_DWORD *)this + 14) = *(_DWORD *)a6;
  *((_QWORD *)this + 15) = *((_QWORD *)a6 + 4);
  if ( (v11 & 0x1000) == 0 )
  {
    v12 = (VIDMM_LINEAR_POOL *)operator new(0x140uLL, 0x37316956u, (POOL_TYPE)512);
    if ( v12 )
      v12 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v12);
    *((_QWORD *)this + 18) = v12;
    if ( !v12 )
    {
      _InterlockedIncrement(&dword_1C00274E0);
      v31 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v31 + 24) = 318LL;
      goto LABEL_26;
    }
    v14 = VIDMM_LINEAR_POOL::Init(v12, *((_QWORD *)this + 5), 1u, a3, (int (*)(void *))IsAllocationOffered);
    v16 = v14;
    if ( v14 < 0 )
    {
      _InterlockedIncrement(&dword_1C00274E4);
      v32 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v32 + 24) = v16;
      WdLogEvent5_WdLowResource(v32);
      return (unsigned int)v16;
    }
  }
  v17 = *((unsigned int *)a6 + 14);
  if ( !(_DWORD)v17 )
    goto LABEL_9;
  v33 = 16 * v17;
  if ( !is_mul_ok(*((unsigned int *)a6 + 14), 0x10uLL) )
    v33 = -1LL;
  v34 = (struct _DXGK_MEMORYRANGE *)operator new(v33, 0x30306956u, PagedPool);
  v36 = v34;
  if ( !v34 )
  {
    _InterlockedIncrement(&dword_1C00274E4);
    v31 = WdLogNewEntry5_WdLowResource(v35);
    *(_QWORD *)(v31 + 24) = -1073741801LL;
    goto LABEL_26;
  }
  memset(v34, 0, 16LL * *((unsigned int *)a6 + 14));
  v37 = (DXGADAPTER *)*((_QWORD *)a2 + 3);
  v55[0] = *((_WORD *)this + 8);
  v56 = *((_DWORD *)a6 + 14);
  v55[1] = *((_WORD *)this + 186);
  v58.pInputData = v55;
  v57 = v36;
  v58.InputDataSize = 16;
  v58.Type = DXGKQAITYPE_SEGMENTMEMORYSTATE;
  v38 = DXGADAPTER::DdiQueryAdapterInfo(v37, &v58);
  v16 = v38;
  if ( v38 >= 0 )
  {
    v44 = 0LL;
    if ( *((_DWORD *)a6 + 14) )
    {
      while ( 1 )
      {
        SizeInBytes = v36->SizeInBytes;
        if ( !SizeInBytes )
          break;
        v41 = *((_QWORD *)this + 6);
        if ( SizeInBytes >= *((_QWORD *)this + 5) - v41 )
          break;
        v44 = (unsigned int)(v44 + 1);
        *((_QWORD *)this + 6) = v41 + SizeInBytes;
        if ( (unsigned int)v44 >= *((_DWORD *)a6 + 14) )
          goto LABEL_39;
      }
      LODWORD(v16) = -1073741811;
      v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(SizeInBytes, v44, v41, v42);
      v43[3] = v36->SizeInBytes;
      v43[4] = -1073741811LL;
      v43[5] = 376LL;
      goto LABEL_42;
    }
LABEL_39:
    v46 = VIDMM_LINEAR_POOL::MarkBadMemoryBlocks(*((VIDMM_LINEAR_POOL **)this + 18), *((_DWORD *)a6 + 14), v36);
    v16 = v46;
    if ( v46 >= 0 )
      goto LABEL_43;
    v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v48, v47, v49, v50);
    v43[4] = 388LL;
  }
  else
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v40, v39, v41, v42);
  }
  v43[3] = v16;
LABEL_42:
  WdLogEvent5_WdAssertion(v43);
LABEL_43:
  operator delete(v36);
  if ( (int)v16 < 0 )
    return (unsigned int)v16;
LABEL_9:
  if ( a7 )
    QuadPart = a7->QuadPart;
  else
    QuadPart = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1312LL);
  *((_QWORD *)this + 14) = QuadPart;
  v19 = *((_QWORD *)a6 + 3);
  *((_QWORD *)this + 25) = v19;
  if ( !v19 )
    *((_QWORD *)this + 25) = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  *((_DWORD *)this + 92) = (*(_DWORD *)a6 & 0x800) != 0 ? 0x10000 : 4096;
  result = VIDMM_SEGMENT::InitializeForwardProgressMdl((PHYSICAL_ADDRESS *)this);
  v21 = result;
  if ( (int)result >= 0 )
  {
    PagesForMdl = MmAllocatePagesForMdl(
                    gs_PhysicalAddressZero,
                    *(PHYSICAL_ADDRESS *)((char *)this + 112),
                    gs_PhysicalAddressZero,
                    0x1000uLL);
    *((_QWORD *)this + 33) = PagesForMdl;
    if ( PagesForMdl )
    {
      v24 = (unsigned int)dword_1C002711C;
      *((_QWORD *)this + 29) = (unsigned int)dword_1C002711C;
      if ( (_DWORD)v24 )
      {
        v51 = 16 * v24;
        if ( !is_mul_ok(v24, 0x10uLL) )
          v51 = -1LL;
        v52 = operator new[](v51, 0x36336956u, (POOL_TYPE)512);
        *((_QWORD *)this + 30) = v52;
        if ( v52 )
        {
          memset(v52, 0, 16LL * *((unsigned int *)this + 58));
        }
        else
        {
          *((_DWORD *)this + 58) = 0;
          _InterlockedIncrement(&dword_1C00275B0);
          v54 = WdLogNewEntry5_WdLowResource(v53);
          *(_QWORD *)(v54 + 24) = 656LL;
          WdLogEvent5_WdLowResource(v54);
        }
      }
      VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(this);
      v27 = WdLogNewEntry5_WdEvent(v26, v25);
      WdLogEvent5_WdEvent(v27);
      v30 = (_QWORD *)WdLogNewEntry5_WdEvent(v29, v28);
      v30[3] = *((_QWORD *)this + 5);
      v30[4] = *((int *)this + 7);
      v30[5] = *((unsigned int *)this + 6);
      v30[6] = *((unsigned int *)this + 4);
      WdLogEvent5_WdEvent(v30);
      if ( bTracingEnabled )
        VIDMM_SEGMENT::ReportSegment(this);
      return v21;
    }
    _InterlockedIncrement(&dword_1C0027574);
    v31 = WdLogNewEntry5_WdLowResource(v23);
    *(_QWORD *)(v31 + 24) = 445LL;
LABEL_26:
    WdLogEvent5_WdLowResource(v31);
    return 3221225495LL;
  }
  return result;
}
