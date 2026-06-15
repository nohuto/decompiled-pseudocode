/*
 * XREFs of ?SetChannelVolume@CAudioSession@@UEAAJIMPEBU_GUID@@@Z @ 0x18007B820
 * Callers:
 *     ?SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z @ 0x18007B970 (-SetChannelVolume@CPerStreamVolumeAudioSession@@EEAAJIMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Sdg @ 0x1800710E4 (WPP_SF_Sdg.c)
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
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    v9 = a2;
    WPP_SF_Sdg(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x2Cu,
      (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
      *((const wchar_t **)this + 88));
  }
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v10, (struct _RTL_CRITICAL_SECTION *)this + 18);
  if ( (unsigned int)v5 < *((_DWORD *)this + 193) )
  {
    *(float *)(*((_QWORD *)this + 97) + 4 * v5) = a3;
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
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x2Du,
        (__int64)&WPP_4588ba28106fc91c9afa31139958994b_Traceguids,
        -2147024809);
    }
  }
  return v7;
}
