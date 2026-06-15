/*
 * XREFs of ??_GCCrossProcessBaseEndpoint@@UEAAPEAXI@Z @ 0x140035450
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseEndpoint@@UEAA@XZ @ 0x140013F5C (--1CCrossProcessBaseEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140017F34 (--3@YAXPEAX@Z.c)
 */

CCrossProcessBaseEndpoint *__fastcall CCrossProcessBaseEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseEndpoint *this,
        char a2)
{
  CCrossProcessBaseEndpoint::~CCrossProcessBaseEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
