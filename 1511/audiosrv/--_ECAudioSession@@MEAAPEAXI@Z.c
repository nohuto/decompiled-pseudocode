/*
 * XREFs of ??_ECAudioSession@@MEAAPEAXI@Z @ 0x180071958
 * Callers:
 *     ??_ECAudioSession@@OCA@EAAPEAXI@Z @ 0x180048D80 (--_ECAudioSession@@OCA@EAAPEAXI@Z.c)
 * Callees:
 *     ??1CAudioSession@@MEAA@XZ @ 0x180027698 (--1CAudioSession@@MEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 */

CAudioSession *__fastcall CAudioSession::`vector deleting destructor'(CAudioSession *this, char a2)
{
  CAudioSession::~CAudioSession(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
