/*
 * XREFs of ?CanReleaseToFrame@CScatterToken@@IEAAJPEBVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C00E11E0
 * Callers:
 *     ?InFrame@CScatterToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z @ 0x1C00E1390 (-InFrame@CScatterToken@@UEAAJPEAVCCompositionFrame@DirectComposition@@PEA_N@Z.c)
 * Callees:
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C0021BFC (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C0021C34 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

__int64 __fastcall CScatterToken::CanReleaseToFrame(
        CScatterToken *this,
        const struct DirectComposition::CCompositionFrame *a2,
        bool *a3)
{
  __int64 v4; // rbx
  char v5; // si
  __int64 v6; // rbp
  __int64 v7; // rcx
  __int64 Object; // rax

  *a3 = 0;
  if ( *((_DWORD *)this + 6) == 2 )
  {
    v4 = *((_QWORD *)this + 14);
    v5 = 0;
    v6 = *((_QWORD *)a2 + 8);
    DirectComposition::CCriticalSection::AcquireExclusive(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
               v7,
               v4);
    if ( Object && (*(_BYTE *)(Object + 32) & 2) == 0 && (*(int *)(Object + 48) > 0 || *(_QWORD *)(Object + 56) != v6) )
      v5 = 1;
    ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    KeLeaveCriticalRegion();
    *a3 = v5 == 0;
  }
  return 0LL;
}
