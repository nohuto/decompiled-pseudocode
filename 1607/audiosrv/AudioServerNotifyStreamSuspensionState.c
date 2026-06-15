/*
 * XREFs of AudioServerNotifyStreamSuspensionState @ 0x1800021E0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z @ 0x1800022C4 (-NotifyStreamSuspensionStateChanged@CVADServer@@QEAAJ_K_N@Z.c)
 *     ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90 (-UpdateOffloadPowerRequest@@YAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     memset @ 0x180036D30 (memset.c)
 */

__int64 __fastcall AudioServerNotifyStreamSuspensionState(CVADServer *this, unsigned __int64 a2, int a3)
{
  __int64 v4; // rdi
  int v6; // ebx
  _QWORD v8[14]; // [rsp+28h] [rbp-19h] BYREF

  v4 = a3;
  if ( g_u32AEWMILogLevel >= 4 )
  {
    memset(v8, 0, 0x40uLL);
    v8[6] = 0LL;
    LODWORD(v8[7]) = 0;
    v8[12] = 0LL;
    LOWORD(v8[0]) = 104;
    v8[9] = *((unsigned int *)this + 16);
    HIDWORD(v8[5]) = 0x20000;
    *(_OWORD *)&v8[3] = AEWMIGUID_AUDIOSRV;
    WORD2(v8[0]) = 1025;
    v8[8] = this;
    v8[10] = a2;
    v8[11] = v4;
    EtwLogTraceEvent(g_hAEWMITraceHandle, v8);
  }
  v6 = CVADServer::NotifyStreamSuspensionStateChanged(this, a2, (_DWORD)v4 != 0);
  UpdateOffloadPowerRequest();
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerNotifyStreamSuspensionState", 0xCB2u, v6);
  return (unsigned int)v6;
}
