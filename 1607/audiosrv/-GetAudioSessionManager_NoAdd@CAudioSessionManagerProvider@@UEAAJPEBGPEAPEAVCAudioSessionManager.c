/*
 * XREFs of ?GetAudioSessionManager_NoAdd@CAudioSessionManagerProvider@@UEAAJPEBGPEAPEAVCAudioSessionManager@@@Z @ 0x180063C00
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 */

__int64 __fastcall CAudioSessionManagerProvider::GetAudioSessionManager_NoAdd(
        CAudioSessionManagerProvider *this,
        const unsigned __int16 *a2,
        struct CAudioSessionManager **a3)
{
  int v3; // ebx
  __int64 v7; // rbp
  unsigned __int64 v8; // rcx
  struct CAudioSessionManager *v9; // r9
  LPCRITICAL_SECTION v11; // [rsp+20h] [rbp-28h] BYREF
  char v12; // [rsp+28h] [rbp-20h]

  v3 = 0;
  if ( !a2 || !a3 )
  {
    v3 = -2147024809;
LABEL_27:
    AudSrvTraceLoggingErrorHelper("CAudioSessionManagerProvider::GetAudioSessionManager_NoAdd", 462, v3);
    return (unsigned int)v3;
  }
  *a3 = 0LL;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x11u, (__int64)&WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids, a2);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v11, (struct _RTL_CRITICAL_SECTION *)((char *)this + 64));
  v7 = 0LL;
  if ( *((_QWORD *)this + 14) )
  {
    v8 = 0LL;
    while ( 1 )
    {
      if ( v8 >= *((_QWORD *)this + 18) )
        ATL::AtlThrowImpl(-2147024809);
      if ( !(unsigned int)_o__wcsicmp(*(_QWORD *)(*((_QWORD *)this + 17) + 8 * v8), a2) )
        break;
      v7 = (unsigned int)(v7 + 1);
      v8 = (unsigned int)v7;
      if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 14) )
        goto LABEL_12;
    }
    if ( (unsigned __int64)(unsigned int)v7 >= *((_QWORD *)this + 14) )
      ATL::AtlThrowImpl(-2147024809);
    v9 = *(struct CAudioSessionManager **)(*((_QWORD *)this + 13) + 8 * v7);
    *a3 = v9;
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x12u,
        (__int64)&WPP_b9a93b86104e3ab68bd14cf374b2c987_Traceguids,
        (__int64)v9);
    }
  }
LABEL_12:
  if ( *a3 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*a3 + 8LL))(*a3);
  else
    v3 = -2147023728;
  if ( v12 )
    ATL::CCritSecLock::Unlock(&v11);
  if ( v3 < 0 )
    goto LABEL_27;
  return (unsigned int)v3;
}
