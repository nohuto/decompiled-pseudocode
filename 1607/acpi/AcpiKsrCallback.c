/*
 * XREFs of AcpiKsrCallback @ 0x1C009D3F0
 * Callers:
 *     <none>
 * Callees:
 *     KsrFreePersistedMemory_0 @ 0x1C0001028 (KsrFreePersistedMemory_0.c)
 *     AcpiKsrPreparePersistentContext @ 0x1C009D430 (AcpiKsrPreparePersistentContext.c)
 */

void __fastcall AcpiKsrCallback(PVOID CallbackContext, PVOID Argument1, PVOID Argument2)
{
  int v3; // eax

  if ( Argument1 )
  {
    if ( Argument1 == (PVOID)1 )
    {
      KsrFreePersistedMemory_0();
      AcpiKsrInProgress = 0;
    }
  }
  else
  {
    v3 = AcpiKsrPreparePersistentContext(CallbackContext, 0LL, Argument2);
    AcpiKsrInProgress = 1;
    AcpiKsrUseFallback = v3 < 0;
  }
}
