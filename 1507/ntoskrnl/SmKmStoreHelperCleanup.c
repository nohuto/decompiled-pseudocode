/*
 * XREFs of SmKmStoreHelperCleanup @ 0x1400DA9CC
 * Callers:
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     ObfDereferenceObjectWithTag @ 0x14004FD20 (ObfDereferenceObjectWithTag.c)
 *     SmKmStoreHelperSendCommand @ 0x1400DAA14 (SmKmStoreHelperSendCommand.c)
 */

LONG_PTR __fastcall SmKmStoreHelperCleanup(PVOID *a1)
{
  LONG_PTR result; // rax

  if ( *a1 )
  {
    SmKmStoreHelperSendCommand(a1, 1LL, 0LL, 1LL);
    KeWaitForSingleObject(*a1, Executive, 0, 0, 0LL);
    return ObfDereferenceObjectWithTag(*a1, 0x746C6644u);
  }
  return result;
}
