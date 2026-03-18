/*
 * XREFs of RtlReadUShortFromUser @ 0x1403E2240
 * Callers:
 *     NtUserfnINCNTOUTSTRING @ 0x14024EE50 (NtUserfnINCNTOUTSTRING.c)
 *     ?TryGlyphSetHasSameContent@QueryFontTreeRequest@@CA_NPEAX0I@Z @ 0x1402872A0 (-TryGlyphSetHasSameContent@QueryFontTreeRequest@@CA_NPEAX0I@Z.c)
 *     ??$wcsncpycch@PEAGV?$UserModePointer@G@@@@YAKPEAGV?$UserModePointer@G@@K@Z @ 0x14029073C (--$wcsncpycch@PEAGV-$UserModePointer@G@@@@YAKPEAGV-$UserModePointer@G@@K@Z.c)
 *     RtlReadUShortFromUser$thunk$44378091108827265 @ 0x140357070 (RtlReadUShortFromUser$thunk$44378091108827265.c)
 * Callees:
 *     ProbeForRead_0 @ 0x140298384 (ProbeForRead_0.c)
 */

__int64 __fastcall RtlReadUShortFromUser(unsigned __int16 *a1)
{
  ProbeForRead_0(a1, 2uLL, 1u);
  return *a1;
}
