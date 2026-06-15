/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x180050D5C
 * Callers:
 *     AudioServerCreateStream @ 0x180006340 (AudioServerCreateStream.c)
 * Callees:
 *     <none>
 */

void __fastcall CWatchdogTimer::~CWatchdogTimer(HANDLE *this)
{
  if ( *this )
  {
    DeleteTimerQueueTimer(0LL, *this, (HANDLE)0xFFFFFFFFFFFFFFFFLL);
    *this = 0LL;
  }
}
