/*
 * XREFs of ??1CWatchDogTimer@@QEAA@XZ @ 0x180066708
 * Callers:
 *     AudioServerCreateStream @ 0x18002B8A0 (AudioServerCreateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall CWatchDogTimer::~CWatchDogTimer(HANDLE *this)
{
  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, 0LL);
    *this = 0LL;
  }
}
