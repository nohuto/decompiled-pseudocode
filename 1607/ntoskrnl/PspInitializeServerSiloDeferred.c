/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x14067EA44
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x14067EAB8 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x140076730 (PsGetServerSiloGlobals.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x14057A53C (ObInitServerSilo.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EE9C (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EF24 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x1406812E4 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14068CBD8 (SeInitServerSilo.c)
 */

int __fastcall PspInitializeServerSiloDeferred(__int64 a1)
{
  int result; // eax

  PsGetServerSiloGlobals(a1);
  result = ObInitServerSilo(a1);
  if ( result >= 0 )
  {
    result = SeInitServerSilo(a1);
    if ( result >= 0 )
    {
      result = EtwInitializeSiloState(a1);
      if ( result >= 0 )
      {
        result = PspSiloLoadApiSets(a1);
        if ( result >= 0 )
        {
          result = PspNotifyServerSiloCreation(a1);
          if ( result >= 0 )
            return PspSiloInitializeUserSharedData(a1);
        }
      }
    }
  }
  return result;
}
