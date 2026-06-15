/*
 * XREFs of ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x1400187A8
 * Callers:
 *     _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x14001C050 (_dynamic_atexit_destructor_for__CVpoContext--s_mapVpoContext__.c)
 * Callees:
 *     <none>
 */

void ATL::CSimpleMap<unsigned long,CVpoContext *,ATL::CSimpleMapEqualHelper<unsigned long,CVpoContext *>>::RemoveAll()
{
  if ( CVpoContext::s_mapVpoContext )
  {
    free(CVpoContext::s_mapVpoContext);
    CVpoContext::s_mapVpoContext = 0LL;
  }
  if ( Block )
  {
    free(Block);
    Block = 0LL;
  }
  dword_140055E18 = 0;
}
