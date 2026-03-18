/*
 * XREFs of ?FreeDataChain@CAtlPlex@ATL@@QEAAXXZ @ 0x18008DA04
 * Callers:
 *     ?FreePlexes@?$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@2@V?$CElementTraits@W4DwmEventType@DwmCoreAsimov@@@ATL@@V?$CElementTraits@UThrottleEventInfo@?$CAsimovEventManager@W4DwmEventType@DwmCoreAsimov@@@DwmCoreAsimov@@@6@@ATL@@AEAAXXZ @ 0x18008D91C (-FreePlexes@-$CAtlMap@W4DwmEventType@DwmCoreAsimov@@UThrottleEventInfo@-$CAsimovEventManager@W4D.c)
 * Callees:
 *     <none>
 */

void __fastcall ATL::CAtlPlex::FreeDataChain(ATL::CAtlPlex **this)
{
  ATL::CAtlPlex *v1; // rbx

  if ( this )
  {
    do
    {
      v1 = *this;
      free(this);
      this = (ATL::CAtlPlex **)v1;
    }
    while ( v1 );
  }
}
