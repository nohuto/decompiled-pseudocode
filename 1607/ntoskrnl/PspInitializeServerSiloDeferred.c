/*
 * XREFs of PspInitializeServerSiloDeferred @ 0x14067E960
 * Callers:
 *     PspQueueDeferredWorkAndWait @ 0x14067E9D4 (PspQueueDeferredWorkAndWait.c)
 * Callees:
 *     PsGetServerSiloGlobals @ 0x1400766B0 (PsGetServerSiloGlobals.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     ObInitServerSilo @ 0x140579FFC (ObInitServerSilo.c)
 *     PspSiloInitializeUserSharedData @ 0x14067EDB8 (PspSiloInitializeUserSharedData.c)
 *     PspSiloLoadApiSets @ 0x14067EE40 (PspSiloLoadApiSets.c)
 *     PspNotifyServerSiloCreation @ 0x140681200 (PspNotifyServerSiloCreation.c)
 *     SeInitServerSilo @ 0x14068CAF4 (SeInitServerSilo.c)
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
