/*
 * XREFs of ??_EDMMVIDPN@@UEAAPEAXI@Z @ 0x1C0002F30
 * Callers:
 *     ??_EDMMVIDPN@@WBI@EAAPEAXI@Z @ 0x1C0012C30 (--_EDMMVIDPN@@WBI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WCI@EAAPEAXI@Z @ 0x1C0012C40 (--_EDMMVIDPN@@WCI@EAAPEAXI@Z.c)
 *     ??_EDMMVIDPN@@WDI@EAAPEAXI@Z @ 0x1C0012C50 (--_EDMMVIDPN@@WDI@EAAPEAXI@Z.c)
 * Callees:
 *     ??1DMMVIDPN@@UEAA@XZ @ 0x1C007DB44 (--1DMMVIDPN@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 */

DMMVIDPN *__fastcall DMMVIDPN::`vector deleting destructor'(DMMVIDPN *this, char a2)
{
  DMMVIDPN::~DMMVIDPN(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
