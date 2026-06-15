/*
 * XREFs of ??0CNilStringData@ATL@@QEAA@XZ @ 0x14001A408
 * Callers:
 *     ??0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z @ 0x140019CA0 (--0CAtlStringMgr@ATL@@QEAA@PEAUIAtlMemMgr@1@@Z.c)
 * Callees:
 *     <none>
 */

ATL::CNilStringData *__fastcall ATL::CNilStringData::CNilStringData(ATL::CNilStringData *this)
{
  *((_DWORD *)this + 4) = 2;
  *(_QWORD *)this = 0LL;
  *((_QWORD *)this + 1) = 0LL;
  *((_DWORD *)this + 6) = 0;
  return this;
}
