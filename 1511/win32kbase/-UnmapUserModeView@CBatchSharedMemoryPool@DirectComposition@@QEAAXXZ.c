/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A1DC
 * Callers:
 *     NtDCompositionConfirmFrame @ 0x1C0011A20 (NtDCompositionConfirmFrame.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001A230 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C001AE40 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C007387C (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  if ( *((_QWORD *)this + 6) )
  {
    if ( *(_QWORD *)(*((_QWORD *)this + 2) + 16LL) )
      MmUnmapViewOfSection();
    *((_QWORD *)this + 6) = 0LL;
  }
}
