/*
 * XREFs of ?GetChannelVolume@CAudioSession@@UEAAJIPEAM@Z @ 0x18005BB40
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_qdg @ 0x180058FD8 (WPP_SF_qdg.c)
 */

__int64 __fastcall CAudioSession::GetChannelVolume(CAudioSession *this, unsigned int a2, float *a3)
{
  __int64 v3; // rsi
  unsigned int v6; // ebx
  int v8; // [rsp+20h] [rbp-28h]
  LPCRITICAL_SECTION v9; // [rsp+30h] [rbp-18h] BYREF
  char v10; // [rsp+38h] [rbp-10h]

  v3 = a2;
  v6 = 0;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (unsigned int)v3 < *((_DWORD *)this + 246) )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      v8 = v3;
      WPP_SF_qdg(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x1Bu,
        (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
        this,
        v8,
        *(float *)(*((_QWORD *)this + 124) + 4 * v3));
    }
    *a3 = *(float *)(*((_QWORD *)this + 124) + 4 * v3);
  }
  else
  {
    v6 = -2147024809;
    AudSrvTraceLoggingErrorHelper("CAudioSession::GetChannelVolume", 1167, -2147024809);
  }
  if ( v10 )
    ATL::CCritSecLock::Unlock(&v9);
  return v6;
}
