/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x140019CA0
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140001140 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     ??0CNilStringData@ATL@@QEAA@XZ @ 0x14001A408 (--0CNilStringData@ATL@@QEAA@XZ.c)
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_140055D78 = (__int64)&ATL::g_strheap;
  ATL::CNilStringData::CNilStringData((ATL::CNilStringData *)&qword_140055D80);
  result = &ATL::g_strmgr;
  qword_140055D80 = &ATL::g_strmgr;
  return result;
}
