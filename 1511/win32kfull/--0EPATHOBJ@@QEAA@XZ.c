/*
 * XREFs of ??0EPATHOBJ@@QEAA@XZ @ 0x1C00161C4
 * Callers:
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0013B44 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     NtGdiFastPolyPolyline @ 0x1C013B590 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C015355C (-vInitPreCompute@EPATHOBJ@@QEAAXXZ.c)
 */

EPATHOBJ *__fastcall EPATHOBJ::EPATHOBJ(EPATHOBJ *this)
{
  *((_QWORD *)this + 10) = 0LL;
  EPATHOBJ::vInitPreCompute(this);
  return this;
}
