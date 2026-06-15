/*
 * XREFs of ?GetEndpointBufferSize@CVADServer@@UEAAJPEAIPEAM@Z @ 0x180071300
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dD @ 0x18007067C (WPP_SF_dD.c)
 */

__int64 __fastcall CVADServer::GetEndpointBufferSize(CVADServer *this, unsigned int *a2, float *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  int v8; // ebx
  int v10; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !a2 || !a3 )
  {
    v8 = -2147467261;
    goto LABEL_17;
  }
  if ( !*((_DWORD *)this + 50) || (v6 = *((_QWORD *)this + 26)) == 0 )
  {
    v8 = -2004287487;
LABEL_17:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetEndpointBufferSize", 2170, v8);
    goto LABEL_12;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned int *, float *))(**(_QWORD **)(v6 + 56) + 128LL))(
         *(_QWORD *)(v6 + 56),
         a2,
         a3);
  v8 = v7;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetEndpointBufferSize", 747, v7);
  if ( v8 < 0 )
    goto LABEL_17;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v10 = v8;
    WPP_SF_dD(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_1922e64f6368316c9ff2859d8f49dc96_Traceguids,
      *a2,
      v10);
  }
LABEL_12:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return (unsigned int)v8;
}
