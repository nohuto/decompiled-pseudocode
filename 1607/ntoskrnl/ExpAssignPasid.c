/*
 * XREFs of ExpAssignPasid @ 0x1406B6B08
 * Callers:
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 * Callees:
 *     ObfReferenceObject @ 0x140069BE0 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14006A780 (ObfDereferenceObject.c)
 *     ExpFreeAsid @ 0x14022EF5C (ExpFreeAsid.c)
 */

__int64 __fastcall ExpAssignPasid(volatile signed __int32 *Object, signed __int32 a2)
{
  ObfReferenceObject((PVOID)Object);
  if ( !_InterlockedCompareExchange(Object + 436, a2, 0) )
    return 1LL;
  ExpFreeAsid(a2 - 1);
  ObfDereferenceObject((PVOID)Object);
  return 0LL;
}
