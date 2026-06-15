/*
 * XREFs of ??1CWatchDogTimer@@QEAA@XZ @ 0x1800680D0
 * Callers:
 *     AudioServerCreateStream @ 0x18002F590 (AudioServerCreateStream.c)
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
