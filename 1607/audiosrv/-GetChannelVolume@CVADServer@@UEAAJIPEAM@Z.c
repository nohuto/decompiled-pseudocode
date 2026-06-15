/*
 * XREFs of ?GetChannelVolume@CVADServer@@UEAAJIPEAM@Z @ 0x180071230
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qD @ 0x180038C8C (WPP_SF_qD.c)
 *     ?GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z @ 0x180064900 (-GetStreamChannelVolume@CAudioStream@@QEAAJIPEAM@Z.c)
 */

__int64 __fastcall CVADServer::GetChannelVolume(CVADServer *this, unsigned int a2, float *a3)
{
  CAudioStream *v6; // rcx
  int StreamChannelVolume; // ebx
  LPCRITICAL_SECTION v10; // [rsp+30h] [rbp-18h] BYREF
  char v11; // [rsp+38h] [rbp-10h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x33u,
      (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      this,
      a2);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  v6 = (CAudioStream *)*((_QWORD *)this + 26);
  if ( v6 && *((_DWORD *)this + 50) )
    StreamChannelVolume = CAudioStream::GetStreamChannelVolume(v6, a2, a3);
  else
    StreamChannelVolume = -2004287487;
  if ( StreamChannelVolume < 0 )
    AudSrvTraceLoggingErrorHelper("CVADServer::GetChannelVolume", 2442, StreamChannelVolume);
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return (unsigned int)StreamChannelVolume;
}
