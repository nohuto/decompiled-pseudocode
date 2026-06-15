/*
 * XREFs of ??1CWatchDogTimer@@QEAA@XZ @ 0x140026568
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$2 @ 0x14001BA38 (_CStreamGroup--CreateStream_--_1_--dtor$2.c)
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
