/*
 * XREFs of PnpFreeDevProperty @ 0x1404E5718
 * Callers:
 *     PnpCopyDevProperty @ 0x140487EE8 (PnpCopyDevProperty.c)
 *     PiDqPnPGetObjectPropertyInBestLocale @ 0x1404895F8 (PiDqPnPGetObjectPropertyInBestLocale.c)
 *     PiDqActionDataGetChangedProperties @ 0x1404CF684 (PiDqActionDataGetChangedProperties.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
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
