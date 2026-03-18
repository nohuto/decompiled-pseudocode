/*
 * XREFs of ?Init@VIDMM_SYSMEM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006CBB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@Z @ 0x1C006F940 (-Init@VIDMM_SEGMENT@@UEAAJP6AXPEAX@ZKKPEAUDXGK_SEGMENTDESCRIPTOR_INTERNAL@@PEAT_LARGE_INTEGER@@@.c)
 */

__int64 __fastcall VIDMM_SYSMEM_SEGMENT::Init(
        VIDMM_SYSMEM_SEGMENT *this,
        void (*a2)(void *),
        __int64 a3,
        __int64 a4,
        struct DXGK_SEGMENTDESCRIPTOR_INTERNAL *a5,
        union _LARGE_INTEGER *a6)
{
  unsigned int v6; // esi
  __int64 v7; // rdi
  __int64 v10; // rax
  __int64 result; // rax
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int v16; // edi
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // r9
  _QWORD *v22; // rax

  v6 = a3;
  v7 = (unsigned int)a4;
  if ( g_IsInternalReleaseOrDbg )
  {
    v10 = WdLogNewEntry5_WdTrace(this, a2, a3, a4);
    *(_QWORD *)(v10 + 24) = v7;
    *(_QWORD *)(v10 + 32) = this;
  }
  result = VIDMM_SEGMENT::Init(this, a2, v6, v7, a5, a6);
  v16 = result;
  if ( (int)result >= 0 )
  {
    *((_QWORD *)this + 15) = 0LL;
    v17 = WdLogNewEntry5_WdEvent(v13, v12, v14, v15);
    WdLogEvent5_WdEvent(v17);
    v22 = (_QWORD *)WdLogNewEntry5_WdEvent(v19, v18, v20, v21);
    v22[3] = *((_QWORD *)this + 5);
    v22[4] = *((int *)this + 7);
    v22[5] = *((unsigned int *)this + 6);
    v22[6] = *((unsigned int *)this + 4);
    WdLogEvent5_WdEvent(v22);
    return v16;
  }
  return result;
}
