/*
 * XREFs of PepIdlePreselect @ 0x1C00039D0
 * Callers:
 *     <none>
 * Callees:
 *     AcpiCStateLegacySelect @ 0x1C00020A4 (AcpiCStateLegacySelect.c)
 */

__int64 __fastcall PepIdlePreselect(__int64 a1, __int64 a2)
{
  AcpiCStateLegacySelect(a1, a2);
  if ( *(_DWORD *)(a1 + 16) + 1 == *(unsigned __int8 *)(a1 + 20) )
    return 0xFFFFFFFFLL;
  else
    return *(unsigned int *)(a1 + 12);
}
