/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180076F10
 * Callers:
 *     ??_ECAudioSession@@OCA@EAAPEAXI@Z @ 0x180044B60 (--_ECAudioSession@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CAudioSession@@MEAA@XZ @ 0x18000FB3C (--1CAudioSession@@MEAA@XZ.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
