/*
 * XREFs of ?ResetEndpoint@CVADServer@@UEAAJ_K@Z @ 0x180071F50
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::ResetEndpoint(CVADServer *this, __int64 a2)
{
  _QWORD *v4; // rcx
  __int64 v5; // rax
  int v6; // ebx
  LPCRITICAL_SECTION v8; // [rsp+30h] [rbp-18h] BYREF
  char v9; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v8, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !*((_DWORD *)this + 50) || !*((_QWORD *)this + 21) )
  {
    v6 = -2004287487;
LABEL_11:
    if ( v6 >= 0 )
      goto LABEL_13;
    goto LABEL_12;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 26);
  v5 = v4[6];
  if ( a2 == v5 )
  {
    v6 = (*(__int64 (__fastcall **)(_QWORD *))(*v4 + 96LL))(v4);
    goto LABEL_11;
  }
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x28u,
      (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      a2,
      v5);
  }
  v6 = -2147024809;
LABEL_12:
  AudSrvTraceLoggingErrorHelper("CVADServer::ResetEndpoint", 2069, v6);
LABEL_13:
  if ( v9 )
    ATL::CCritSecLock::Unlock(&v8);
  return (unsigned int)v6;
}
