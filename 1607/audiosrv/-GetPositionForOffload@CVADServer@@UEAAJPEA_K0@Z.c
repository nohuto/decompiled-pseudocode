/*
 * XREFs of ?GetPositionForOffload@CVADServer@@UEAAJPEA_K0@Z @ 0x180071510
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ii @ 0x180073978 (WPP_SF_ii.c)
 */

__int64 __fastcall CVADServer::GetPositionForOffload(CVADServer *this, unsigned __int64 *a2, unsigned __int64 *a3)
{
  __int64 v6; // rcx
  int v7; // eax
  __int64 v8; // r8
  int v9; // ebx
  LPCRITICAL_SECTION v11; // [rsp+30h] [rbp-18h] BYREF
  char v12; // [rsp+38h] [rbp-10h]

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 232));
  if ( !*((_DWORD *)this + 50) || (v6 = *((_QWORD *)this + 26)) == 0 )
  {
    v9 = -2004287487;
LABEL_14:
    AudSrvTraceLoggingErrorHelper("CVADServer::GetPositionForOffload", 2201, v9);
    goto LABEL_10;
  }
  v7 = (*(__int64 (__fastcall **)(_QWORD, unsigned __int64 *, unsigned __int64 *))(**(_QWORD **)(v6 + 56) + 136LL))(
         *(_QWORD *)(v6 + 56),
         a2,
         a3);
  v9 = v7;
  if ( v7 < 0 )
    AudSrvTraceLoggingErrorHelper("CAudioStream::GetPositionForOffload", 773, v7);
  if ( v9 < 0 )
    goto LABEL_14;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_ii(*((_QWORD *)WPP_GLOBAL_Control + 2), *a3, v8, *a2, *a3);
  }
LABEL_10:
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  return (unsigned int)v9;
}
