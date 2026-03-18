/*
 * XREFs of ?Init@VIDMM_LINEAR_POOL@@QEAAJ_KEP6AXPEAX@ZP6AH1@Z@Z @ 0x1C0069CD0
 * Callers:
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0069AC0 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 *     ?AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_HEAP_BLOCK@@E@Z @ 0x1C00881D0 (-AllocateBlock@VIDMM_PROCESS_HEAP@@AEAAJ_KKW4_VIDMM_PROCESS_HEAP_MAPPING@@PEAPEAU_VIDMM_PROCESS_.c)
 * Callees:
 *     memset @ 0x1C0016C00 (memset.c)
 *     ?AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ @ 0x1C0058C5C (-AllocateBlock@VIDMM_LINEAR_POOL@@IEAAPEAU_VIDMM_POOL_BLOCK@@XZ.c)
 */

__int64 __fastcall VIDMM_LINEAR_POOL::Init(
        VIDMM_LINEAR_POOL *this,
        __int64 a2,
        char a3,
        void (*a4)(void *),
        int (*a5)(void *))
{
  unsigned int v7; // esi
  struct _VIDMM_POOL_BLOCK *Block; // rax
  struct _VIDMM_POOL_BLOCK *v9; // rbx
  char *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rbx
  __int64 v13; // rcx

  *((_QWORD *)this + 3) = a4;
  *(_BYTE *)this = a3;
  *((_QWORD *)this + 1) = (a2 + 4095) & 0xFFFFFFFFFFFFF000uLL;
  *((_QWORD *)this + 4) = a5;
  v7 = -1073741801;
  Block = VIDMM_LINEAR_POOL::AllocateBlock(this);
  v9 = Block;
  if ( Block )
  {
    memset(Block, 0, 0x40uLL);
    *((_QWORD *)v9 + 1) = 0LL;
    *(_DWORD *)v9 = 2;
    v10 = (char *)v9 + 32;
    *((_QWORD *)v9 + 2) = a2;
    v11 = *((_QWORD *)this + 5);
    *((_QWORD *)v9 + 4) = v11;
    *((_QWORD *)v9 + 5) = (char *)this + 40;
    if ( *(VIDMM_LINEAR_POOL **)(v11 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 40) )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v10;
    v12 = (_QWORD *)((char *)v9 + 48);
    *((_QWORD *)this + 5) = v10;
    v13 = *((_QWORD *)this + 9);
    *v12 = v13;
    v12[1] = (char *)this + 72;
    if ( *(VIDMM_LINEAR_POOL **)(v13 + 8) != (VIDMM_LINEAR_POOL *)((char *)this + 72) )
      __fastfail(3u);
    *(_QWORD *)(v13 + 8) = v12;
    v7 = 0;
    *((_QWORD *)this + 9) = v12;
  }
  return v7;
}
