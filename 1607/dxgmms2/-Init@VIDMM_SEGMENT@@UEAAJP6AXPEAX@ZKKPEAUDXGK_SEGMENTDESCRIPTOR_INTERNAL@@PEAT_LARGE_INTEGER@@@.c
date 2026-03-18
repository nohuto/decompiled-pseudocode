/*
 * XREFs of ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940
 * Callers:
 *     ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006CBB0 (-Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INT.c)
 *     ?Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006D1D0 (-Init@VIDMM_APERTURE_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_I.c)
 *     ?Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0072110 (-Init@VIDMM_MEMORY_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INT.c)
 * Callees:
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0001390 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_V@YAXPEAX@Z @ 0x1C0001ACC (--_V@YAXPEAX@Z.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C000F920 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C0012D58 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C006F6EC (-InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ.c)
 *     ?ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ @ 0x1C006F7AC (-ComputeBaseAddressAndSizeOfPageableRegion@VIDMM_SEGMENT@@IEAAXXZ.c)
 *     ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C006FB3C (-Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z.c)
 *     ??0VIDMM_LINEAR_POOL@@QEAA@XZ @ 0x1C006FC04 (--0VIDMM_LINEAR_POOL@@QEAA@XZ.c)
 *     ?ReportSegment@VIDMM_SEGMENT@@QEAAXXZ @ 0x1C0099C58 (-ReportSegment@VIDMM_SEGMENT@@QEAAXXZ.c)
 *     ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C009F438 (-MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::Init(
        VIDMM_SEGMENT *this,
        void (*a2)(void *),
        int a3,
        int a4,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a5,
        union _LARGE_INTEGER *a6)
{
  unsigned __int64 v8; // rcx
  int v9; // ecx
  VIDMM_LINEAR_POOL *v10; // rax
  __int64 v11; // rcx
  int v12; // eax
  __int64 v13; // rcx
  __int64 v14; // rsi
  __int64 v15; // rax
  LONGLONG QuadPart; // rax
  __int64 v17; // rax
  __int64 result; // rax
  unsigned int v19; // edi
  PMDL PagesForMdl; // rax
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // r8
  __int64 v26; // r9
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  _QWORD *v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  SIZE_T v35; // rax
  struct _DXGK_MEMORYRANGE *v36; // rax
  __int64 v37; // rcx
  struct _DXGK_MEMORYRANGE *v38; // r14
  __int64 v39; // rax
  int v40; // eax
  __int64 v41; // rdx
  __int64 v42; // rcx
  _QWORD *v43; // rax
  __int64 v44; // rdx
  UINT64 SizeInBytes; // rcx
  __int64 v46; // r8
  int v47; // eax
  __int64 v48; // rdx
  __int64 v49; // rcx
  SIZE_T v50; // rax
  PVOID v51; // rax
  __int64 v52; // rcx
  __int64 v53; // rax
  __int16 v54; // [rsp+30h] [rbp-40h] BYREF
  _BYTE v55[14]; // [rsp+32h] [rbp-3Eh]
  struct _DXGKARG_QUERYADAPTERINFO v56; // [rsp+40h] [rbp-30h] BYREF

  *((_DWORD *)this + 4) = a4;
  *((_DWORD *)this + 5) = a3;
  *((_QWORD *)this + 3) = *((_QWORD *)a5 + 1);
  *((_QWORD *)this + 4) = *((_QWORD *)a5 + 5);
  v8 = dword_1C0035170[a4];
  if ( (_DWORD)v8 )
  {
    if ( *((_QWORD *)a5 + 2) < v8 )
      v8 = *((_QWORD *)a5 + 2);
  }
  else
  {
    v8 = *((_QWORD *)a5 + 2);
  }
  *((_QWORD *)this + 5) = v8;
  v9 = *(_DWORD *)a5;
  *((_DWORD *)this + 14) = *(_DWORD *)a5;
  *((_QWORD *)this + 15) = *((_QWORD *)a5 + 4);
  if ( (v9 & 0x1000) == 0 )
  {
    v10 = (VIDMM_LINEAR_POOL *)operator new(0x140uLL, 0x37316956u, (POOL_TYPE)512);
    if ( v10 )
      v10 = VIDMM_LINEAR_POOL::VIDMM_LINEAR_POOL(v10);
    *((_QWORD *)this + 18) = v10;
    if ( !v10 )
    {
      _InterlockedIncrement(&dword_1C0035570);
      v33 = WdLogNewEntry5_WdLowResource(v11);
      *(_QWORD *)(v33 + 24) = 314LL;
      goto LABEL_26;
    }
    v12 = VIDMM_LINEAR_POOL::Init(v10, *((_QWORD *)this + 5), 1u, a2, (int (*)(void *))IsAllocationOffered);
    v14 = v12;
    if ( v12 < 0 )
    {
      _InterlockedIncrement(&dword_1C0035574);
      v34 = WdLogNewEntry5_WdLowResource(v13);
      *(_QWORD *)(v34 + 24) = v14;
      WdLogEvent5_WdLowResource(v34);
      return (unsigned int)v14;
    }
  }
  v15 = *((unsigned int *)a5 + 14);
  if ( !(_DWORD)v15 )
    goto LABEL_9;
  v35 = 16 * v15;
  if ( !is_mul_ok(*((unsigned int *)a5 + 14), 0x10uLL) )
    v35 = -1LL;
  v36 = (struct _DXGK_MEMORYRANGE *)operator new(v35, 0x30306956u, PagedPool);
  v38 = v36;
  if ( !v36 )
  {
    _InterlockedIncrement(&dword_1C0035574);
    v33 = WdLogNewEntry5_WdLowResource(v37);
    *(_QWORD *)(v33 + 24) = -1073741801LL;
    goto LABEL_26;
  }
  memset(v36, 0, 16LL * *((unsigned int *)a5 + 14));
  v56.InputDataSize = 16;
  *(_QWORD *)v55 = 0LL;
  v54 = *((_WORD *)this + 8);
  *(_DWORD *)&v55[2] = *((_DWORD *)a5 + 14);
  *(_WORD *)v55 = *((_WORD *)this + 186);
  v56.pInputData = &v54;
  v39 = *((_QWORD *)this + 1);
  *(_QWORD *)&v55[6] = v38;
  v56.Type = DXGKQAITYPE_SEGMENTMEMORYSTATE;
  v40 = DXGADAPTER::DdiQueryAdapterInfo(*(DXGADAPTER **)(v39 + 24), &v56);
  v14 = v40;
  if ( v40 >= 0 )
  {
    v44 = 0LL;
    if ( *((_DWORD *)a5 + 14) )
    {
      while ( 1 )
      {
        SizeInBytes = v38->SizeInBytes;
        if ( !SizeInBytes )
          break;
        v46 = *((_QWORD *)this + 6);
        if ( SizeInBytes >= *((_QWORD *)this + 5) - v46 )
          break;
        v44 = (unsigned int)(v44 + 1);
        *((_QWORD *)this + 6) = v46 + SizeInBytes;
        if ( (unsigned int)v44 >= *((_DWORD *)a5 + 14) )
          goto LABEL_39;
      }
      LODWORD(v14) = -1073741811;
      v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(SizeInBytes, v44);
      v43[3] = v38->SizeInBytes;
      v43[4] = -1073741811LL;
      v43[5] = 372LL;
      goto LABEL_42;
    }
LABEL_39:
    v47 = VIDMM_LINEAR_POOL::MarkBadMemoryBlocks(*((VIDMM_LINEAR_POOL **)this + 18), *((_DWORD *)a5 + 14), v38);
    v14 = v47;
    if ( v47 >= 0 )
      goto LABEL_43;
    v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v49, v48);
    v43[4] = 384LL;
  }
  else
  {
    v43 = (_QWORD *)WdLogNewEntry5_WdAssertion(v42, v41);
  }
  v43[3] = v14;
LABEL_42:
  WdLogEvent5_WdAssertion(v43);
LABEL_43:
  operator delete[](v38);
  if ( (int)v14 < 0 )
    return (unsigned int)v14;
LABEL_9:
  if ( a6 )
    QuadPart = a6->QuadPart;
  else
    QuadPart = *(_QWORD *)(*(_QWORD *)(*((_QWORD *)this + 1) + 24LL) + 1456LL);
  *((_QWORD *)this + 14) = QuadPart;
  v17 = *((_QWORD *)a5 + 3);
  *((_QWORD *)this + 25) = v17;
  if ( !v17 )
    *((_QWORD *)this + 25) = *((_QWORD *)this + 5) - *((_QWORD *)this + 6);
  *((_DWORD *)this + 92) = (*(_DWORD *)a5 & 0x800) != 0 ? 0x10000 : 4096;
  result = VIDMM_SEGMENT::InitializeForwardProgressMdl((PHYSICAL_ADDRESS *)this);
  v19 = result;
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
      v22 = (unsigned int)dword_1C003516C;
      *((_QWORD *)this + 29) = (unsigned int)dword_1C003516C;
      if ( (_DWORD)v22 )
      {
        v50 = 16 * v22;
        if ( !is_mul_ok(v22, 0x10uLL) )
          v50 = -1LL;
        v51 = operator new[](v50, 0x36336956u, (POOL_TYPE)512);
        *((_QWORD *)this + 30) = v51;
        if ( v51 )
        {
          memset(v51, 0, 16LL * *((unsigned int *)this + 58));
        }
        else
        {
          *((_DWORD *)this + 58) = 0;
          _InterlockedIncrement(&dword_1C0035640);
          v53 = WdLogNewEntry5_WdLowResource(v52);
          *(_QWORD *)(v53 + 24) = 652LL;
          WdLogEvent5_WdLowResource(v53);
        }
      }
      VIDMM_SEGMENT::ComputeBaseAddressAndSizeOfPageableRegion(this);
      v27 = WdLogNewEntry5_WdEvent(v24, v23, v25, v26);
      WdLogEvent5_WdEvent(v27);
      v32 = (_QWORD *)WdLogNewEntry5_WdEvent(v29, v28, v30, v31);
      v32[3] = *((_QWORD *)this + 5);
      v32[4] = *((int *)this + 7);
      v32[5] = *((unsigned int *)this + 6);
      v32[6] = *((unsigned int *)this + 4);
      WdLogEvent5_WdEvent(v32);
      if ( bTracingEnabled )
        VIDMM_SEGMENT::ReportSegment(this);
      return v19;
    }
    _InterlockedIncrement(&dword_1C0035604);
    v33 = WdLogNewEntry5_WdLowResource(v21);
    *(_QWORD *)(v33 + 24) = 441LL;
LABEL_26:
    WdLogEvent5_WdLowResource(v33);
    return 3221225495LL;
  }
  return result;
}
