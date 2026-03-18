/*
 * XREFs of PnpFreeDevProperty @ 0x140502788
 * Callers:
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x14048A28C (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PnpCopyDevProperty @ 0x1404C7168 (PnpCopyDevProperty.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404ED5CC (PiDqActionDataGetChangedProperties.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
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
