/*
 * XREFs of ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0003F70
 * Callers:
 *     ??_EDMMVIDPN@@WBI@EAAPEAXI@Z @ 0x1C0011080 (--_EDMMVIDPN@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WCI@EAAPEAXI@Z @ 0x1C0011090 (--_EDMMVIDPN@@WCI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WDI@EAAPEAXI@Z @ 0x1C00110A0 (--_EDMMVIDPN@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C0088C8C (--1DMMVIDPN@@UEAA@XZ.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::`vector deleting destructor'(DMMVIDPN *this, char a2)
{
  DMMVIDPN::~DMMVIDPN(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
