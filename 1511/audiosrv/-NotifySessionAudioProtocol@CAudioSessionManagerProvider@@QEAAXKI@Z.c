/*
 * XREFs of ?NotifySessionAudioProtocol@CAudioSessionManagerProvider@@QEAAXKI@Z @ 0x180013A70
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z @ 0x18007B0F0 (-NotifySessionAudioProtocol@CAudioSessionManager@@QEAAJKI@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionAudioProtocol(
        CAudioSessionManagerProvider *this,
        unsigned int a2,
        unsigned int a3)
{
  unsigned int v6; // edi
  __int64 v7; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
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
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
