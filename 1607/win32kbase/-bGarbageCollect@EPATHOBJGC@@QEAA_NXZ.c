/*
 * XREFs of ?bGarbageCollect@EPATHOBJGC@@QEAA_NXZ @ 0x1C00BE080
 * Callers:
 *     ??$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z @ 0x1C00CCAE0 (--$vGarbageCollectObject@VEPATHOBJGC@@@@YAXPEAUHOBJ__@@@Z.c)
 * Callees:
 *     FreeObject @ 0x1C00366E0 (FreeObject.c)
 *     ?vFreeBlocks@EPATHOBJ@@QEAAXXZ @ 0x1C0047390 (-vFreeBlocks@EPATHOBJ@@QEAAXXZ.c)
 *     ?HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z @ 0x1C00C04FC (-HmgRemoveObjectImpl@@YAPEAXPEAUHOBJ__@@JJKEPEAK@Z.c)
 */

char __fastcall EPATHOBJGC::bGarbageCollect(EPATHOBJGC *this)
{
  __int64 v2; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 88) & 1) != 0 || !HmgRemoveObjectImpl(*(struct HOBJ__ **)v2, 0, 1, 2u, 7, 0LL) )
    return 0;
  EPATHOBJ::vFreeBlocks(this);
  FreeObject(*((_QWORD *)this + 1));
  *((_QWORD *)this + 1) = 0LL;
  return 1;
}
