/*
 * XREFs of ?RemoveAll@?$CSimpleMap@KPEAVCVpoContext@@V?$CSimpleMapEqualHelper@KPEAVCVpoContext@@@ATL@@@ATL@@QEAAXXZ @ 0x140017EE8
 * Callers:
 *     _dynamic_atexit_destructor_for__CVpoContext::s_mapVpoContext__ @ 0x14001BB60 (_dynamic_atexit_destructor_for__CVpoContext--s_mapVpoContext__.c)
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
  if ( qword_140054F88 )
  {
    free(qword_140054F88);
    qword_140054F88 = 0LL;
  }
  dword_140054F90 = 0;
}
