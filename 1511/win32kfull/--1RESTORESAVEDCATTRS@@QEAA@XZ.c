/*
 * XREFs of ??1RESTORESAVEDCATTRS@@QEAA@XZ @ 0x1C0267484
 * Callers:
 *     ?GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z @ 0x1C0267A20 (-GreStartDocInternal@@YAHPEAUHDC__@@PEAU_DOCINFOW@@PEAHH@Z.c)
 *     ?bEndDocInternal@@YAHPEAUHDC__@@K@Z @ 0x1C0267D78 (-bEndDocInternal@@YAHPEAUHDC__@@K@Z.c)
 *     NtGdiEndPage @ 0x1C0269A00 (NtGdiEndPage.c)
 *     NtGdiStartPage @ 0x1C026A420 (NtGdiStartPage.c)
 * Callees:
 *     ?vSaveAttributesAlways@XDCOBJ@@AEAAXXZ @ 0x1C0268D94 (-vSaveAttributesAlways@XDCOBJ@@AEAAXXZ.c)
 */

void __fastcall RESTORESAVEDCATTRS::~RESTORESAVEDCATTRS(XDCOBJ **this)
{
  XDCOBJ *v1; // rcx

  v1 = *this;
  if ( v1 )
    XDCOBJ::vSaveAttributesAlways(v1);
}
