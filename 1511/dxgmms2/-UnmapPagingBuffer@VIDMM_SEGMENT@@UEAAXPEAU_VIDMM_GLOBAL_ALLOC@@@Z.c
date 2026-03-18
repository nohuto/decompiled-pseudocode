/*
 * XREFs of ?UnmapPagingBuffer@VIDMM_SEGMENT@@UEAAXPEAU_VIDMM_GLOBAL_ALLOC@@@Z @ 0x1C00858C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall VIDMM_SEGMENT::UnmapPagingBuffer(
        VIDMM_SEGMENT *this,
        struct _VIDMM_GLOBAL_ALLOC *a2,
        __int64 a3,
        __int64 a4)
{
  _QWORD *v4; // rax

  v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[3] = 270LL;
  v4[4] = 13LL;
  WdLogEvent5_WdCriticalError(v4);
}
