/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x180048CD0
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x1800011C0 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     ??0CNilStringData@ATL@@QEAA@XZ @ 0x180049630 (--0CNilStringData@ATL@@QEAA@XZ.c)
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_1800E6490 = (__int64)&ATL::g_strheap;
  ATL::CNilStringData::CNilStringData((ATL::CNilStringData *)&qword_1800E6498);
  result = &ATL::g_strmgr;
  qword_1800E6498 = (__int64)&ATL::g_strmgr;
  return result;
}
