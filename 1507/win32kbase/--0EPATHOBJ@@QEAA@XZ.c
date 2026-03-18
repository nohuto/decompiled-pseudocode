/*
 * XREFs of ??0EPATHOBJ@@QEAA@XZ @ 0x1C00261E8
 * Callers:
 *     ??0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ @ 0x1C0025738 (--0THREAD_GUARDED_EPATHOBJ@@QEAA@XZ.c)
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00BF368 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     ?vInitPreCompute@EPATHOBJ@@QEAAXXZ @ 0x1C0085F54 (-vInitPreCompute@EPATHOBJ@@QEAAXXZ.c)
 */

EPATHOBJ *__fastcall EPATHOBJ::EPATHOBJ(EPATHOBJ *this)
{
  *((_QWORD *)this + 10) = 0LL;
  EPATHOBJ::vInitPreCompute(this);
  return this;
}
