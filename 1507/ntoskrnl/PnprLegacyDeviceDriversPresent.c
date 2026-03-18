/*
 * XREFs of PnprLegacyDeviceDriversPresent @ 0x14069049C
 * Callers:
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 */

bool PnprLegacyDeviceDriversPresent()
{
  bool v0; // bl
  int v2; // [rsp+30h] [rbp+8h] BYREF
  PVOID P; // [rsp+38h] [rbp+10h] BYREF

  P = 0LL;
  v0 = 0;
  if ( (int)IoGetLegacyVetoList(&P, &v2) >= 0 )
    v0 = v2 != 0;
  if ( P )
    ExFreePoolWithTag(P, 0);
  return v0;
}
