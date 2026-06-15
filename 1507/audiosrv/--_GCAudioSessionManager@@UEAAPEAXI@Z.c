/*
 * XREFs of ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x18007EDB8
 * Callers:
 *     ??_ECAudioSessionManager@@W7EAAPEAXI@Z @ 0x180044D90 (--_ECAudioSessionManager@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x18007EC7C (--1CAudioSessionManager@@UEAA@XZ.c)
 */

CAudioSessionManager *__fastcall CAudioSessionManager::`scalar deleting destructor'(
        CAudioSessionManager *this,
        char a2)
{
  CAudioSessionManager::~CAudioSessionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}
