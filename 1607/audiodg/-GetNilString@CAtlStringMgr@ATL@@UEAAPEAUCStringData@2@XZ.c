/*
 * XREFs of ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1400172E0
 * Callers:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1400164B0 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 * Callees:
 *     <none>
 */

struct ATL::CStringData *__fastcall ATL::CAtlStringMgr::GetNilString(ATL::CAtlStringMgr *this)
{
  _InterlockedIncrement((volatile signed __int32 *)this + 8);
  return (ATL::CAtlStringMgr *)((char *)this + 16);
}
