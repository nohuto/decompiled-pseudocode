/*
 * XREFs of ?SetChannelVolume@CVADServer@@UEAAJIM@Z @ 0x180072030
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 *     ?SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z @ 0x180065164 (-SetStreamChannelVolume@CAudioStream@@QEAAJIM@Z.c)
 */

__int64 __fastcall CVADServer::SetChannelVolume(CVADServer *this, unsigned int a2, float a3)
{
  CAudioStream *v5; // rcx
  int v6; // ebx
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x32u,
      (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      this,
      a2,
      a3);
  }
  if ( a3 >= 0.0 && a3 <= 1.0 )
  {
    ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
    v5 = (CAudioStream *)*((_QWORD *)this + 26);
    if ( v5 && *((_DWORD *)this + 50) )
    {
      v6 = CAudioStream::SetStreamChannelVolume(v5, a2, a3);
      if ( !v10 )
        goto LABEL_13;
    }
    else
    {
      v6 = -2004287487;
      if ( !v10 )
        goto LABEL_14;
    }
    ATL::CCritSecLock::Unlock(&v9);
LABEL_13:
    if ( v6 >= 0 )
      return (unsigned int)v6;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetChannelVolume", 2401, v6);
    return (unsigned int)v6;
  }
  return 2147942487LL;
}
