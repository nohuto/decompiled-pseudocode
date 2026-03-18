/*
 * XREFs of ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C02687E0
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0268D84 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@KG@Z @ 0x1C0269108 (-bEndDocInternal@@YAHPEAUHDC__@@KG@Z.c)
 *     NtGdiEndPage @ 0x1C026AE80 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C026B8A0 (NtGdiStartPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C026A1F0 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(XDCOBJ **this)
{
  XDCOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    XDCOBJ::vSaveAttributesAlways(v1);
}
