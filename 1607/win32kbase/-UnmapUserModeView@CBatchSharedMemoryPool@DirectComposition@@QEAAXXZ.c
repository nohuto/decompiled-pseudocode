/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001AF3C
 * Callers:
 *     ?ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ @ 0x1C0018540 (-ConfirmFrame@CConnection@DirectComposition@@QEAAXXZ.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C001AF90 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C003F3D0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C00427DC (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
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
