/*
 * XREFs of ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0005010
 * Callers:
 *     ??_EDMMVIDPN@@WBI@EAAPEAXI@Z @ 0x1C00127D0 (--_EDMMVIDPN@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WCI@EAAPEAXI@Z @ 0x1C00127E0 (--_EDMMVIDPN@@WCI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WDI@EAAPEAXI@Z @ 0x1C00127F0 (--_EDMMVIDPN@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C0065F88 (--3@YAXPEAX@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C00917A8 (--1DMMVIDPN@@UEAA@XZ.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::`vector deleting destructor'(DMMVIDPN *this, char a2)
{
  DMMVIDPN::~DMMVIDPN(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
