/*
 * XREFs of ??_GCAudioSessionManager@@UEAAPEAXI@Z @ 0x1800619E8
 * Callers:
 *     ??_ECAudioSessionManager@@W7EAAPEAXI@Z @ 0x180039260 (--_ECAudioSessionManager@@W7EAAPEAXI@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180036490 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??1CAudioSessionManager@@UEAA@XZ @ 0x1800618B4 (--1CAudioSessionManager@@UEAA@XZ.c)
 */

CAudioSessionManager *__fastcall CAudioSessionManager::`scalar deleting destructor'(
        CAudioSessionManager *this,
        char a2)
{
  CAudioSessionManager::~CAudioSessionManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this, (const struct std::nothrow_t *)0x108);
  return this;
}
