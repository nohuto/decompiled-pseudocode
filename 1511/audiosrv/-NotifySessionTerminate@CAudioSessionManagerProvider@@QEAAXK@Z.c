/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x18007C948
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002FDEC (VADServerUserSessionChanged.c)
 * Callees:
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x18007B214 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionTerminate(CAudioSessionManagerProvider *this, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax

  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
  v4 = 0;
  if ( *((_QWORD *)this + 14) )
  {
    v5 = 0LL;
    do
    {
      CAudioSessionManager::NotifySessionTerminate(*(CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v5), a2);
      v5 = ++v4;
    }
    while ( (unsigned __int64)v4 < *((_QWORD *)this + 14) );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 64));
}
