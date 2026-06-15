/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x180076830
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x1800769C0 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z.c)
 * Callees:
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001F9E8 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001FA0C (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ValidateAudioLevel @ 0x180036428 (ValidateAudioLevel.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_dS @ 0x1800776A8 (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4)
{
  __int64 v5; // rbx
  unsigned int v8; // esi
  float *v9; // r8
  int v10; // edx
  TraceLoggingHProvider v11; // rcx
  __int64 v12; // r8
  __int64 v13; // rdx
  __int64 v14; // r8
  int v16; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION v17; // [rsp+30h] [rbp-28h] BYREF
  char v18; // [rsp+38h] [rbp-20h]

  v5 = a2;
  v8 = 0;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      49,
      (unsigned int)&WPP_c7c899a03615192e0a524739b215c826_Traceguids,
      a2,
      *((_QWORD *)this + 107));
  }
  if ( (_DWORD)v5 )
  {
    v9 = a3;
    while ( ValidateAudioLevel(*v9) )
    {
      v9 = (float *)(v12 + 4);
      if ( v10 + 1 >= (unsigned int)v5 )
        goto LABEL_9;
    }
    v8 = -2147024809;
    goto LABEL_13;
  }
LABEL_9:
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v17, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (_DWORD)v5 != *((_DWORD *)this + 231) )
  {
    v8 = -2147024809;
    if ( v18 )
      ATL::CCritSecLock::Unlock(&v17);
    v11 = WPP_GLOBAL_Control;
LABEL_13:
    if ( v11 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_BYTE *)v11 + 28) & 0x40) != 0
      && *((_BYTE *)v11 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v11 + 2), 0x32u, (__int64)&WPP_c7c899a03615192e0a524739b215c826_Traceguids, -2147024809);
    }
    return v8;
  }
  if ( (_DWORD)v5 )
  {
    v13 = 0LL;
    v14 = v5;
    do
    {
      *(float *)(v13 * 4 + *((_QWORD *)this + 116)) = a3[v13];
      ++v13;
      --v14;
    }
    while ( v14 );
  }
  if ( v18 )
    ATL::CCritSecLock::Unlock(&v17);
  LOBYTE(v16) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v16,
    0LL);
  return v8;
}
