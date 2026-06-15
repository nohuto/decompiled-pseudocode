/*
 * XREFs of ??1CWatchdogTimer@@QEAA@XZ @ 0x1400253C8
 * Callers:
 *     _CStreamGroup::CreateStream_::_1_::dtor$0 @ 0x14001A4D0 (_CStreamGroup--CreateStream_--_1_--dtor$0.c)
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
