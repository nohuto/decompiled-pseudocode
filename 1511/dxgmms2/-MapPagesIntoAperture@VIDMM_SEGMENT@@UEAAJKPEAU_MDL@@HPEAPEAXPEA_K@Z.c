/*
 * XREFs of ?MapPagesIntoAperture@VIDMM_SEGMENT@@UEAAJKPEAU_MDL@@HPEAPEAXPEA_K@Z @ 0x1C00851D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall VIDMM_SEGMENT::MapPagesIntoAperture(VIDMM_SEGMENT *this, __int64 a2, struct _MDL *a3, __int64 a4)
{
  _QWORD *v4; // rax

  v4 = (_QWORD *)WdLogNewEntry5_WdCriticalError(this, a2, a3, a4);
  v4[5] = 0LL;
  v4[6] = 0LL;
  v4[7] = 0LL;
  v4[3] = 270LL;
  v4[4] = 13LL;
  WdLogEvent5_WdCriticalError(v4);
  return 3221225473LL;
}
