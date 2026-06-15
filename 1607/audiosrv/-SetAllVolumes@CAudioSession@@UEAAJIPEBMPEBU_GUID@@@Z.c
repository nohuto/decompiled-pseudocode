/*
 * XREFs of ?SetAllVolumes@CAudioSession@@UEAAJIPEBMPEBU_GUID@@@Z @ 0x18005EF40
 * Callers:
 *     ?SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z @ 0x18005F090 (-SetAllVolumes@CPerStreamVolumeAudioSession@@EEAAJIPEBMPEBU_GUID@@@Z.c)
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ValidateAudioLevel @ 0x180029BB0 (ValidateAudioLevel.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_dS @ 0x18005FD0C (WPP_SF_dS.c)
 */

__int64 __fastcall CAudioSession::SetAllVolumes(
        CAudioSession *this,
        unsigned int a2,
        float *a3,
        const struct _GUID *a4)
{
  __int64 v5; // rbx
  unsigned int v8; // edi
  float *v9; // rdx
  __int64 v10; // rdx
  int v11; // ecx
  __int64 v12; // rdx
  __int64 v13; // r8
  int v15; // [rsp+20h] [rbp-38h]
  LPCRITICAL_SECTION v16; // [rsp+40h] [rbp-18h] BYREF
  char v17; // [rsp+48h] [rbp-10h]

  v5 = a2;
  v8 = 0;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dS(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      30,
      (unsigned int)&WPP_3a746c8541623b49d47b96eacc8d2afc_Traceguids,
      a2,
      *((_QWORD *)this + 107));
  }
  if ( (_DWORD)v5 )
  {
    v9 = a3;
    while ( ValidateAudioLevel(*v9) )
    {
      v9 = (float *)(v10 + 4);
      if ( v11 + 1 >= (unsigned int)v5 )
        goto LABEL_9;
    }
    v8 = -2147024809;
    goto LABEL_12;
  }
LABEL_9:
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v16, (struct _RTL_CRITICAL_SECTION *)((char *)this + 872));
  if ( (_DWORD)v5 != *((_DWORD *)this + 246) )
  {
    v8 = -2147024809;
    if ( v17 )
      ATL::CCritSecLock::Unlock(&v16);
LABEL_12:
    AudSrvTraceLoggingErrorHelper("CAudioSession::SetAllVolumes", 1371, -2147024809);
    return v8;
  }
  if ( (_DWORD)v5 )
  {
    v12 = 0LL;
    v13 = v5;
    do
    {
      *(float *)(v12 * 4 + *((_QWORD *)this + 124)) = a3[v12];
      ++v12;
      --v13;
    }
    while ( v13 );
  }
  if ( v17 )
    ATL::CCritSecLock::Unlock(&v16);
  LOBYTE(v15) = 0;
  (*(void (__fastcall **)(char *, __int64, const struct _GUID *, __int64, int, _QWORD))(*((_QWORD *)this + 2) + 24LL))(
    (char *)this + 16,
    1LL,
    a4,
    0xFFFFFFFFLL,
    v15,
    0LL);
  return v8;
}
