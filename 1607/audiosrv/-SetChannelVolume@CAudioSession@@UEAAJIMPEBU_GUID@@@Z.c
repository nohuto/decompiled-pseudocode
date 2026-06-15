/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x18005F160
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18005F280 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_Sdg @ 0x180058EC0 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CAudioSession::SetChannelVolume(
        CAudioSession *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v5; // rsi
  unsigned int v7; // edi
  int v9; // [rsp+20h] [rbp-48h]
  LPCRITICAL_SECTION v10; // [rsp+40h] [rbp-28h] BYREF
  char v11; // [rsp+48h] [rbp-20h]

  v5 = a2;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x1Cu,
      (__int64)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      *((const wchar_t **)this + 107),
      a2,
      a3);
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (unsigned int)v5 < *((_DWORD *)this + 246) )
  {
    *(float *)(*((_QWORD *)this + 124) + 4 * v5) = a3;
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
    LOBYTE(v9) = 0;
    (*(void (__fastcall **)(char *, __int64, const struct _GUID *, _QWORD, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
      (char *)this + 16,
      1LL,
      a4,
      (unsigned int)v5,
      v9,
      0LL);
  }
  else
  {
    v7 = -2147024809;
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetChannelVolume", 1241, -2147024809);
  }
  return v7;
}
