/*
 * XREFs of ?NotifySessionTerminate@CAudioSessionManagerProvider@@QEAAXK@Z @ 0x180064070
 * Callers:
 *     VADServerUserSessionChanged @ 0x18002B458 (VADServerUserSessionChanged.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z @ 0x180062A64 (-NotifySessionTerminate@CAudioSessionManager@@QEAAJK@Z.c)
 */

void __fastcall CAudioSessionManagerProvider::NotifySessionTerminate(CAudioSessionManagerProvider *this, int a2)
{
  unsigned int v4; // edi
  __int64 v5; // rax
  LPCRITICAL_SECTION v6; // [rsp+20h] [rbp-18h] BYREF
  char v7; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v6, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
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
  if ( v7 )
    ATL::CCritSecLock::Unlock(&v6);
}
