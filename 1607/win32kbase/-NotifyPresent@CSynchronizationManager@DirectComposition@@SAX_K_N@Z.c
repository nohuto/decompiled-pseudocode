/*
 * XREFs of ?NotifyPresent@CSynchronizationManager@DirectComposition@@SAX_K_N@Z @ 0x1C000E0E0
 * Callers:
 *     ?NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C000DE98 (-NotifyPendingCompositionBuffersPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z @ 0x1C0017058 (-NotifyPendingFlipPresent@@YAJHPEAU_D3DKMT_PRESENTHISTORYTOKEN@@@Z.c)
 *     ?ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@@Z @ 0x1C0019E20 (-ResolveCompositionHandleToken@CTokenManager@@IEAAJAEBU_D3DKMT_COMPOSITION_PRESENTHISTORYTOKEN@@.c)
 *     ?CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z @ 0x1C0019ED4 (-CreateFlipExToken@CTokenManager@@IEAAJ_KAEBU_D3DKMT_FLIPMODEL_PRESENTHISTORYTOKEN@@PEA_N@Z.c)
 * Callees:
 *     ?FindObject@?$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAAPEAVCBatch@2@_K@Z @ 0x1C000E13C (-FindObject@-$CGenericTable@_KVCBatch@DirectComposition@@$0GFHDEDEE@$0A@@DirectComposition@@QEAA.c)
 *     ?AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ @ 0x1C000E1A0 (-AcquireExclusive@CCriticalSection@DirectComposition@@QEAAXXZ.c)
 */

void __fastcall DirectComposition::CSynchronizationManager::NotifyPresent(__int64 a1, char a2)
{
  __int64 v4; // rcx
  __int64 Object; // rax

  if ( a1 )
  {
    DirectComposition::CCriticalSection::AcquireExclusive((DirectComposition::CCriticalSection *)DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    Object = DirectComposition::CGenericTable<unsigned __int64,DirectComposition::CBatch,1702052676,0>::FindObject(
               v4,
               a1);
    if ( Object )
    {
      if ( a2 )
        --*(_DWORD *)(Object + 48);
      else
        ++*(_DWORD *)(Object + 48);
    }
    ExReleaseResourceLite(DirectComposition::CSynchronizationManager::s_pSyncTableLock);
    KeLeaveCriticalRegion();
  }
}
