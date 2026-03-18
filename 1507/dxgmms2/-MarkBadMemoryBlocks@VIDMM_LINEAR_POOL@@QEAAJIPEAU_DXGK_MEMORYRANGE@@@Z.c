/*
 * XREFs of ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C00760A0
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003D580 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 * Callees:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C0075B8C (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkBadMemoryBlocks(
        VIDMM_LINEAR_POOL ***this,
        unsigned int a2,
        struct _DXGK_MEMORYRANGE *a3)
{
  unsigned int v3; // ebx
  struct _DXGK_MEMORYRANGE *v7; // rdi
  union _LARGE_INTEGER SegmentOffset; // rdx
  __int64 SizeInBytes; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rbp
  _DWORD *v16; // r8
  VIDMM_LINEAR_POOL *v17; // rax
  void **v18; // rdx
  VIDMM_LINEAR_POOL **v19; // rcx
  VIDMM_LINEAR_POOL **v20; // rdx
  _QWORD *v22; // rax
  void *v23; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return 0LL;
  v7 = a3;
  while ( 1 )
  {
    SegmentOffset = (union _LARGE_INTEGER)v7->SegmentOffset;
    SizeInBytes = v7->SizeInBytes;
    v23 = 0LL;
    v10 = VIDMM_LINEAR_POOL::AllocateAt((VIDMM_LINEAR_POOL *)this, SegmentOffset, SizeInBytes, 0LL, &v23);
    v15 = v10;
    if ( v10 < 0 )
      break;
    v16 = v23;
    v17 = (VIDMM_LINEAR_POOL *)((char *)v23 + 32);
    v18 = (void **)*((_QWORD *)v23 + 4);
    v19 = (VIDMM_LINEAR_POOL **)*((_QWORD *)v23 + 5);
    if ( v18[1] != (char *)v23 + 32 || *v19 != v17 )
      __fastfail(3u);
    *v19 = (VIDMM_LINEAR_POOL *)v18;
    v18[1] = v19;
    v20 = this[16];
    *(_QWORD *)v17 = this + 15;
    *((_QWORD *)v17 + 1) = v20;
    if ( *v20 != (VIDMM_LINEAR_POOL *)(this + 15) )
      __fastfail(3u);
    *v20 = v17;
    ++v3;
    ++v7;
    this[16] = (VIDMM_LINEAR_POOL **)v17;
    *v16 = 5;
    if ( v3 >= a2 )
      return 0LL;
  }
  v22 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
  v22[3] = a3[v3].SegmentOffset;
  v22[4] = a3[v3].SizeInBytes;
  v22[5] = v15;
  WdLogEvent5_WdAssertion(v22);
  return (unsigned int)v15;
}
