/*
 * XREFs of ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x140019690
 * Callers:
 *     ATL::_dynamic_initializer_for__g_strmgr__ @ 0x140001100 (ATL--_dynamic_initializer_for__g_strmgr__.c)
 * Callees:
 *     <none>
 */

void *__fastcall ATL::CAtlStringMgr::CAtlStringMgr(ATL::CAtlStringMgr *this, struct ATL::IAtlMemMgr *a2)
{
  void *result; // rax

  dword_140054DB0 = 2;
  ATL::g_strmgr = &ATL::CAtlStringMgr::`vftable';
  qword_140054D98 = (__int64)&ATL::g_strheap;
  qword_140054DA8 = 0LL;
  dword_140054DB8 = 0;
  result = &ATL::g_strmgr;
  qword_140054DA0 = (__int64)&ATL::g_strmgr;
  return result;
}
