/*
 * XREFs of PnpFreeDevProperty @ 0x14043E89C
 * Callers:
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1404406CC (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpCopyDevProperty @ 0x14045B91C (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x1405575E8 (PiDqActionDataGetChangedProperties.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall PnpFreeDevProperty(__int64 a1, ULONG a2)
{
  void *v4; // rcx
  void *v5; // rcx

  v4 = *(void **)(a1 + 24);
  if ( v4 )
    ExFreePoolWithTag(v4, a2);
  v5 = *(void **)(a1 + 40);
  if ( v5 )
    ExFreePoolWithTag(v5, a2);
}
