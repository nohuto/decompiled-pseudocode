/*
 * XREFs of ??_ECEndpointCharacteristics@@MEAAPEAXI@Z @ 0x180087720
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??1CEndpointCharacteristics@@MEAA@XZ @ 0x1800871E4 (--1CEndpointCharacteristics@@MEAA@XZ.c)
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
