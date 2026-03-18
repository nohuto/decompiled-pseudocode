/*
 * XREFs of PnpFreeDevProperty @ 0x140441BE4
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x140441688 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpFreeDevPropertyArray @ 0x140441B8C (PnpFreeDevPropertyArray.c)
 *     PiDqActionDataGetChangedProperties @ 0x140460C90 (PiDqActionDataGetChangedProperties.c)
 *     PnpCopyDevProperty @ 0x1404E4784 (PnpCopyDevProperty.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
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
