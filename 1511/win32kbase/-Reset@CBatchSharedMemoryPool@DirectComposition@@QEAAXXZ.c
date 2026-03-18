/*
 * XREFs of ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A230
 * Callers:
 *     ?Clear@CBatch@DirectComposition@@QEAAXXZ @ 0x1C001A344 (-Clear@CBatch@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A1DC (-UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::Reset(DirectComposition::CBatchSharedMemoryPool *this)
{
  *((_QWORD *)this + 4) = 0LL;
  *((_QWORD *)this + 5) = 0LL;
  if ( *((_QWORD *)this + 6) )
    DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(this);
}
