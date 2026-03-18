/*
 * XREFs of ?MarkBadMemoryBlocks@VIDMM_LINEAR_POOL@@QEAAJIPEAU_DXGK_MEMORYRANGE@@@Z @ 0x1C009F438
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@.c)
 * Callees:
 *     ?AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z @ 0x1C009EDA8 (-AllocateAt@VIDMM_LINEAR_POOL@@QEAAJT_LARGE_INTEGER@@_KPEAXPEAPEAX@Z.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::MarkBadMemoryBlocks(
        VIDMM_LINEAR_POOL ***this,
        unsigned int a2,
        struct _DXGK_MEMORYRANGE *a3)
{
  unsigned int v3; // ebx
  struct _DXGK_MEMORYRANGE *v7; // rdi
  union _LARGE_INTEGER SegmentOffset; // rdx
  unsigned __int64 SizeInBytes; // r8
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // rbp
  _BYTE *v14; // r8
  VIDMM_LINEAR_POOL *v15; // rax
  void **v16; // rdx
  VIDMM_LINEAR_POOL **v17; // rcx
  VIDMM_LINEAR_POOL **v18; // rdx
  _QWORD *v20; // rax
  void *v21; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0;
  if ( !a2 )
    return 0LL;
  v7 = a3;
  while ( 1 )
  {
    SegmentOffset = (union _LARGE_INTEGER)v7->SegmentOffset;
    SizeInBytes = v7->SizeInBytes;
    v21 = 0LL;
    v10 = VIDMM_LINEAR_POOL::AllocateAt((VIDMM_LINEAR_POOL *)this, SegmentOffset, SizeInBytes, 0LL, &v21);
    v13 = v10;
    if ( v10 < 0 )
      break;
    v14 = v21;
    v15 = (VIDMM_LINEAR_POOL *)((char *)v21 + 24);
    v16 = (void **)*((_QWORD *)v21 + 3);
    v17 = (VIDMM_LINEAR_POOL **)*((_QWORD *)v21 + 4);
    if ( v16[1] != (char *)v21 + 24 || *v17 != v15 )
      __fastfail(3u);
    *v17 = (VIDMM_LINEAR_POOL *)v16;
    v16[1] = v17;
    v18 = this[16];
    if ( *v18 != (VIDMM_LINEAR_POOL *)(this + 15) )
      __fastfail(3u);
    *(_QWORD *)v15 = this + 15;
    ++v3;
    *((_QWORD *)v15 + 1) = v18;
    ++v7;
    *v18 = v15;
    this[16] = (VIDMM_LINEAR_POOL **)v15;
    v14[56] = 6;
    if ( v3 >= a2 )
      return 0LL;
  }
  v20 = (_QWORD *)WdLogNewEntry5_WdAssertion(v12, v11);
  v20[3] = a3[v3].SegmentOffset;
  v20[4] = a3[v3].SizeInBytes;
  v20[5] = v13;
  WdLogEvent5_WdAssertion(v20);
  return (unsigned int)v13;
}
