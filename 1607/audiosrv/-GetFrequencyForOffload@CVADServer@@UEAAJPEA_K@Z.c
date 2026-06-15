/*
 * XREFs of ?GetFrequencyForOffload@CVADServer@@UEAAJPEA_K@Z @ 0x180071420
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetFrequencyForOffload(CVADServer *this, unsigned __int64 *a2)
{
  __int64 v4; // rcx
  int v5; // eax
  int v6; // ebx
  LPCRITICAL_SECTION v8; // [rsp+20h] [rbp-18h] BYREF
  char v9; // [rsp+28h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !*((_DWORD *)this + 50) || (v4 = *((_QWORD *)this + 26)) == 0 )
  {
    v6 = -2004287487;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetFrequencyForOffload", 2232, v6);
    goto LABEL_10;
  }
  v5 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *))(**(_QWORD **)(v4 + 56) + 144LL))(
         *(_QWORD *)(v4 + 56),
         a2);
  v6 = v5;
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetFrequencyForOffload", 797, v5);
  if ( v6 < 0 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x2Eu, (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids, *a2);
  }
LABEL_10:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return (unsigned int)v6;
}
