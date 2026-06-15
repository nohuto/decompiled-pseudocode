/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x180038F34
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x180001170 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  dword_1800CB020 = 2;
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_1800CB008 = (__int64)&ATL::g_strheap;
  qword_1800CB018 = 0LL;
  dword_1800CB028 = 0;
  result = &ATL::g_strmgr;
  qword_1800CB010 = (__int64)&ATL::g_strmgr;
  return result;
}
