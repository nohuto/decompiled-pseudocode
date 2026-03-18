/*
 * XREFs of ?GetMultirangeForRange@VIDMM_RECYCLE_MULTIRANGE@@AEAAPEAV1@PEAVVIDMM_RECYCLE_RANGE@@@Z @ 0x1C0066CBC
 * Callers:
 *     ?MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ @ 0x1C00686A4 (-MergeWithNeighborsIfPossible@VIDMM_RECYCLE_MULTIRANGE@@QEAAPEAV1@XZ.c)
 * Callees:
 *     <none>
 */

struct VIDMM_RECYCLE_MULTIRANGE *__fastcall VIDMM_RECYCLE_MULTIRANGE::GetMultirangeForRange(
        VIDMM_RECYCLE_MULTIRANGE *this,
        struct VIDMM_RECYCLE_RANGE *a2)
{
  int v2; // r8d
  int v3; // r8d
  _QWORD *v4; // rax

  v2 = *((_DWORD *)this + 54);
  if ( !v2 )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 17);
  v3 = v2 - 1;
  if ( !v3 )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 18);
  if ( v3 == 1 )
    return (struct VIDMM_RECYCLE_MULTIRANGE *)*((_QWORD *)a2 + 19);
  v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2);
  v4[3] = 270LL;
  v4[4] = 52LL;
  v4[5] = 10LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  WdLogEvent5_WdCriticalError(v4);
  return 0LL;
}
