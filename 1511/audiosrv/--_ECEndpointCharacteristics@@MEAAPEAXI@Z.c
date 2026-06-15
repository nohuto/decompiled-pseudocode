/*
 * XREFs of ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x1800A5070
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800A4C30 (--1CEndpointCharacteristics@@MEAA@XZ.c)
 */

CEndpointCharacteristics *__fastcall CEndpointCharacteristics::`vector deleting destructor'(
        CEndpointCharacteristics *this,
        char a2)
{
  CEndpointCharacteristics::~CEndpointCharacteristics(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
