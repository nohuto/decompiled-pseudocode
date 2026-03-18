/*
 * XREFs of ?vDone@RESTORESAVEDCATTRS@@QEAAXXZ @ 0x1C0266FF0
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0265CA4 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0266018 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C0267EB0 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C02688D0 (NtGdiStartPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C02670F0 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::vDone(XDCOBJ **this)
{
  XDCOBJ *v2; // rcx

  v2 = *this;
  if ( v2 )
    XDCOBJ::vSaveAttributesAlways(v2);
  *this = 0LL;
}
