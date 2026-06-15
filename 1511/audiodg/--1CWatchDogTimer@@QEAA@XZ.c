/*
 * XREFs of ??1CWatchDogTimer@@QEAA@XZ @ 0x1400265C8
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14001AB58 (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
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
