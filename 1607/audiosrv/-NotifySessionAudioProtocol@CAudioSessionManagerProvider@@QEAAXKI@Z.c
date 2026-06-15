/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x18000DD14
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002B458 (VADServerUserSessionChanged.c)
 * Callees:
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017B70 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x180062938 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionAudioProtocol(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  lpCriticalSection = (LPCRITICAL_SECTION)((char *)this + 64);
  v9 = 0;
  ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
  v6 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v7 = 0LL;
    do
    {
      CAudioSessionManager::NotifySessionAudioProtocol(
        *(CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v7),
        a2,
        a3);
      v7 = ++v6;
    }
    while ( (unsigned __int64)v6 < *((_QWORD *)this + 14) );
  }
  if ( v9 )
    LeaveCriticalSection(lpCriticalSection);
}
