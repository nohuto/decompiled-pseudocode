/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C0040D90
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C003D580 (-Init@VIDMM_SEGMENT@@UEAAJPEAVVIDMM_GLOBAL@@P6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEA.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(
        VIDMM_SYSMEM_SEGMENT *this,
        struct VIDMM_GLOBAL *a2,
        void (*a3)(void *),
        int a4,
        unsigned int a5,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a6,
        union _LARGE_INTEGER *a7)
{
  __int64 result; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  _QWORD *v15; // rax

  result = VIDMM_SEGMENT::Init(this, a2, a3, a4, a5, a6, a7);
  v11 = result;
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 15) = 0LL;
    v12 = WdLogNewEntry5_WdEvent(v10, v9);
    WdLogEvent5_WdEvent(v12);
    v15 = (_QWORD *)WdLogNewEntry5_WdEvent(v14, v13);
    v15[3] = *((_QWORD *)this + 5);
    v15[4] = *((int *)this + 7);
    v15[5] = *((unsigned int *)this + 6);
    v15[6] = *((unsigned int *)this + 4);
    WdLogEvent5_WdEvent(v15);
    return v11;
  }
  return result;
}
