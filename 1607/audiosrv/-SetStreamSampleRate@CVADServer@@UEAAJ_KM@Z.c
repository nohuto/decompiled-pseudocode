/*
 * XREFs of ?SetStreamSampleRate@CVADServer@@UEAAJ_KM@Z @ 0x180072190
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?SetSampleRate@CAudioStream@@QEAAJM@Z @ 0x180065108 (-SetSampleRate@CAudioStream@@QEAAJM@Z.c)
 */

__int64 __fastcall CVADServer::SetStreamSampleRate(CVADServer *this, __int64 a2, float a3)
{
  int v5; // ebx
  CAudioStream *v7; // rcx
  __int64 v8; // rax
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-28h] BYREF
  char v10; // [rsp+38h] [rbp-20h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !*((_DWORD *)this + 50) || (v7 = (CAudioStream *)*((_QWORD *)this + 26)) == 0LL )
  {
    v5 = -2004287487;
    goto LABEL_3;
  }
  v8 = *((_QWORD *)v7 + 6);
  if ( a2 != v8 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x30u,
        (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
        a2,
        v8);
    }
    v5 = -2147024809;
    goto LABEL_3;
  }
  v5 = CAudioStream::SetSampleRate(v7, a3);
  if ( v5 < 0 )
  {
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVADServer::SetStreamSampleRate", 2307, v5);
    goto LABEL_4;
  }
  v5 = 0;
LABEL_4:
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return (unsigned int)v5;
}
