/*
 * XREFs of ?InitializeForwardProgressMdl@VIDMM_SEGMENT@@IEAAJXZ @ 0x1C0069888
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0069AC0 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00115F0 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall VIDMM_SEGMENT::InitializeForwardProgressMdl(PHYSICAL_ADDRESS *this)
{
  unsigned int v2; // ebx
  _QWORD *v3; // rax
  __int64 v4; // rcx
  struct _MDL *v5; // rcx
  PVOID v6; // rax
  __int64 v7; // rcx
  __int64 v9; // rax

  v2 = -1073741801;
  v3 = operator new(0x18uLL, 0x35336956u, PagedPool);
  this[32].QuadPart = (LONGLONG)v3;
  if ( !v3 )
  {
    _InterlockedIncrement(&dword_1C002F5B0);
    v9 = WdLogNewEntry5_WdLowResource(v4);
    *(_QWORD *)(v9 + 24) = 557LL;
    goto LABEL_9;
  }
  *v3 = 0LL;
  v3[1] = 0LL;
  v3[2] = 0LL;
  *(_QWORD *)(this[32].QuadPart + 8) = MmAllocatePagesForMdl(0LL, this[14], 0LL, 0x10000uLL);
  v5 = *(struct _MDL **)(this[32].QuadPart + 8);
  if ( !v5 )
  {
    _InterlockedIncrement(&dword_1C002F57C);
    v9 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v9 + 24) = 551LL;
    goto LABEL_9;
  }
  v6 = MmMapLockedPagesSpecifyCache(v5, 0, MmWriteCombined, 0LL, 0, 0x40000020u);
  this[31].QuadPart = (LONGLONG)v6;
  if ( !v6 )
  {
    _InterlockedIncrement(&dword_1C002F5AC);
    v9 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v9 + 24) = 545LL;
LABEL_9:
    WdLogEvent5_WdLowResource(v9);
    return v2;
  }
  return 0;
}
