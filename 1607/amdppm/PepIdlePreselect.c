/*
 * XREFs of PepIdlePreselect @ 0x1C0002390
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C0003310 (AcpiCStateLegacySelect.c)
 */

__int64 __fastcall PepIdlePreselect(__int64 a1)
{
  AcpiCStateLegacySelect();
  if ( *(_DWORD *)(a1 + 16) + 1 == *(unsigned __int8 *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(a1 + 12);
}
