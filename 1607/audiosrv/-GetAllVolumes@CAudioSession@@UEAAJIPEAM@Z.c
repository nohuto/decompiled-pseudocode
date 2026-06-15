/*
 * XREFs of ?GetAllVolumes@CAudioSession@@UEAAJIPEAM@Z @ 0x18005B9C0
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_S @ 0x180038BEC (WPP_SF_S.c)
 */

__int64 __fastcall CAudioSession::GetAllVolumes(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v4; // rsi
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // r8
  LPCRITICAL_SECTION v10; // [rsp+20h] [rbp-18h] BYREF
  char v11; // [rsp+28h] [rbp-10h]

  v4 = a2;
  v6 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_S(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Du,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((const wchar_t **)this + 107));
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (_DWORD)v4 == *((_DWORD *)this + 246) )
  {
    if ( (_DWORD)v4 )
    {
      v7 = 0LL;
      v8 = v4;
      do
      {
        a3[v7] = *(float *)(v7 * 4 + *((_QWORD *)this + 124));
        ++v7;
        --v8;
      }
      while ( v8 );
    }
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetAllVolumes", 1279, -2147024809);
  }
  if ( v11 )
    ATL::CCritSecLock::Unlock(&v10);
  return v6;
}
