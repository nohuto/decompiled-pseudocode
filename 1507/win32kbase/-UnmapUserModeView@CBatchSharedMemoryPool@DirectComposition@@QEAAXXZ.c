/*
 * XREFs of ?UnmapUserModeView@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031430
 * Callers:
 *     ?FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ @ 0x1C0011708 (-FreeAllPools@CBatchSharedMemoryPoolSet@DirectComposition@@QEAAXXZ.c)
 *     NtDCompositionConfirmFrame @ 0x1C001DB90 (NtDCompositionConfirmFrame.c)
 *     ?CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z @ 0x1C002DAE0 (-CompleteDisconnection@CApplicationChannel@DirectComposition@@MEAAX_N@Z.c)
 *     ?Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ @ 0x1C0031484 (-Reset@CBatchSharedMemoryPool@DirectComposition@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall DirectComposition::CBatchSharedMemoryPool::UnmapUserModeView(
        DirectComposition::CBatchSharedMemoryPool *this)
{
  __int64 v1; // rdx
  __int64 v3; // rcx

  v1 = *((_QWORD *)this + 6);
  if ( v1 )
  {
    v3 = *(_QWORD *)(*((_QWORD *)this + 2) + 16LL);
    if ( v3 )
      MmUnmapViewOfSection(v3, v1);
    *((_QWORD *)this + 6) = 0LL;
  }
}
