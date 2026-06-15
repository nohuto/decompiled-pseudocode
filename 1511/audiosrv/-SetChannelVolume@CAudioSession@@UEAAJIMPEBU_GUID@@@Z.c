/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x180076AB0
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x180076C00 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sdg @ 0x18006F7B4 (WPP_SF_Sdg.c)
 */

__int64 __fastcall CAudioSession::SetChannelVolume(
        CAudioSession *this,
        unsigned int a2,
        float a3,
        const struct _GUID *a4)
{
  __int64 v5; // rbp
  unsigned int v7; // esi
  unsigned int v9; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION v10; // [rsp+30h] [rbp-28h] BYREF
  char v11; // [rsp+38h] [rbp-20h]

  v5 = a2;
  v7 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    v9 = a2;
    WPP_SF_Sdg(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x2Cu,
      (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      *((const wchar_t **)this + 107));
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (unsigned int)v5 < *((_DWORD *)this + 231) )
  {
    *(float *)(*((_QWORD *)this + 116) + 4 * v5) = a3;
    if ( v11 )
      ATL::CCritSecLock::Unlock(&v10);
    LOBYTE(v9) = 0;
    (*(void (__fastcall **)(char *, __int64, const struct _GUID *, _QWORD, unsigned int, _QWORD))(*((_QWORD *)this + 2)
                                                                                                + 24LL))(
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
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x2Du,
        (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
        -2147024809);
    }
  }
  return v7;
}
