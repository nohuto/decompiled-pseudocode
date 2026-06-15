/*
 * XREFs of ??_GCCrossProcessBaseServerEndpoint@@UEAAPEAXI@Z @ 0x140036070
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCrossProcessBaseServerEndpoint@@UEAA@XZ @ 0x140015C8C (--1CCrossProcessBaseServerEndpoint@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x140018AB8 (--3@YAXPEAX@Z.c)
 */

CCrossProcessBaseServerEndpoint *__fastcall CCrossProcessBaseServerEndpoint::`scalar deleting destructor'(
        CCrossProcessBaseServerEndpoint *this,
        char a2)
{
  CCrossProcessBaseServerEndpoint::~CCrossProcessBaseServerEndpoint(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
