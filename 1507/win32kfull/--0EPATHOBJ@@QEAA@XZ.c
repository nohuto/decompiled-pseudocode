/*
 * XREFs of ??0EPATHOBJ@@QEAA@XZ @ 0x1C00CC4D8
 * Callers:
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C00CB3FC (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     NtGdiFastPolyPolyline @ 0x1C011CF30 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C015DB50 (-vInitPreCompute@EPATHOBJ@@QEAAXXZ.c)
 */

EPATHOBJ *__fastcall EPATHOBJ::EPATHOBJ(EPATHOBJ *this)
{
  *((_QWORD *)this + 10) = 0LL;
  EPATHOBJ::vInitPreCompute(this);
  return this;
}
