/*
 * XREFs of ?ndisCmFindCompartment@@YAPEAXI@Z @ 0x1C0061590
 * Callers:
 *     NdisSetJobObjectCompartmentId @ 0x1C00D8140 (NdisSetJobObjectCompartmentId.c)
 * Callees:
 *     ndisIfReferenceCompartmentForUser @ 0x1C0021CBC (ndisIfReferenceCompartmentForUser.c)
 */

struct _NDIS_IF_COMPARTMENT_BLOCK *__fastcall ndisCmFindCompartment(unsigned int a1)
{
  struct _NDIS_IF_COMPARTMENT_BLOCK *v2; // [rsp+38h] [rbp+10h] BYREF

  v2 = 0LL;
  ndisIfReferenceCompartmentForUser(0LL, a1, &v2);
  return v2;
}
