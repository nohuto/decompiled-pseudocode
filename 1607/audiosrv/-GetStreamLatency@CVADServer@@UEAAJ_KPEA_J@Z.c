/*
 * XREFs of ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x180071680
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x180001DA8 (WPP_SF_qq.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CVADServer::GetStreamLatency(CVADServer *this, __int64 a2, __int64 *a3)
{
  int v6; // ebx
  __int64 v8; // rdx
  __int64 v9; // rax
  int v10; // eax
  LPCRITICAL_SECTION v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !a3 )
  {
    v6 = -2147467261;
LABEL_3:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetStreamLatency", 2269, v6);
    goto LABEL_4;
  }
  if ( !*((_DWORD *)this + 50) || (v8 = *((_QWORD *)this + 26)) == 0 )
  {
    v6 = -2004287487;
    goto LABEL_3;
  }
  v9 = *(_QWORD *)(v8 + 48);
  if ( a2 != v9 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_qq(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Fu,
        (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
        a2,
        v9);
    }
    v6 = -2147024809;
    goto LABEL_3;
  }
  v10 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, __int64 *))(**(_QWORD **)(v8 + 56) + 152LL))(
          *(_QWORD *)(v8 + 56),
          *(_QWORD *)(v8 + 48),
          a3);
  v6 = v10;
  if ( v10 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetStreamLatency", 824, v10);
  if ( v6 < 0 )
    goto LABEL_3;
  v6 = 0;
LABEL_4:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return (unsigned int)v6;
}
