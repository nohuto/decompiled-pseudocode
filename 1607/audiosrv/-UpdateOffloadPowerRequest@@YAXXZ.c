/*
 * XREFs of ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180007F90
 * Callers:
 *     AudioServerNotifyStreamSuspensionState @ 0x1800021E0 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerStopStream @ 0x180004A50 (AudioServerStopStream.c)
 *     AudioServerStartStream @ 0x180004DA0 (AudioServerStartStream.c)
 *     ?FinalRelease@CVADServer@@QEAAXXZ @ 0x18000C780 (-FinalRelease@CVADServer@@QEAAXXZ.c)
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x1800303F0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     AudioServerSetLastBufferInProgress @ 0x180073870 (AudioServerSetLastBufferInProgress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180004A28 (_TlgKeywordOn.c)
 *     PubSebLevelEvent @ 0x180006030 (PubSebLevelEvent.c)
 *     ??1CCritSecLock@ATL@@QEAA@XZ @ 0x180017B24 (--1CCritSecLock@ATL@@QEAA@XZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall UpdateOffloadPowerRequest(__int64 a1, __int64 a2, bool a3)
{
  int v3; // edi
  int v4; // r14d
  _QWORD *v5; // rbx
  __int64 v6; // rdx
  int v7; // eax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r9
  __int64 v9; // rcx
  int v10; // esi
  int v11; // ebx
  int v12; // esi
  unsigned __int8 v13; // dl
  const GUID *v14; // r8
  const GUID *v15; // r9
  int v16; // [rsp+38h] [rbp-89h] BYREF
  int v17; // [rsp+3Ch] [rbp-85h] BYREF
  int v18; // [rsp+40h] [rbp-81h] BYREF
  int v19; // [rsp+44h] [rbp-7Dh] BYREF
  __int64 v20; // [rsp+48h] [rbp-79h] BYREF
  _QWORD v21[2]; // [rsp+50h] [rbp-71h] BYREF
  _BYTE v22[16]; // [rsp+60h] [rbp-61h] BYREF
  __int64 v23; // [rsp+70h] [rbp-51h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+78h] [rbp-49h] BYREF
  __int64 v25; // [rsp+88h] [rbp-39h]
  __int128 v26; // [rsp+90h] [rbp-31h]
  __int64 v27; // [rsp+A0h] [rbp-21h]
  __int64 *v28; // [rsp+A8h] [rbp-19h]
  __int64 v29; // [rsp+B0h] [rbp-11h]
  int *v30; // [rsp+B8h] [rbp-9h]
  __int64 v31; // [rsp+C0h] [rbp-1h]
  int *v32; // [rsp+C8h] [rbp+7h]
  __int64 v33; // [rsp+D0h] [rbp+Fh]
  int *v34; // [rsp+D8h] [rbp+17h]
  __int64 v35; // [rsp+E0h] [rbp+1Fh]

  v21[1] = -2LL;
  v3 = 0;
  v18 = 0;
  v19 = 0;
  v4 = 0;
  LOBYTE(v16) = 0;
  v23 = 0LL;
  v21[0] = 0LL;
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v22, &g_csVadList, a3);
  v5 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v6 = v5[2];
      v5 = (_QWORD *)*v5;
      if ( *(_DWORD *)(v6 + 272) || (v7 = 1, (*(_BYTE *)(v6 + 276) & 1) == 0) )
        v7 = 0;
      if ( *(_BYTE *)(v6 + 204) )
      {
        if ( !v7 || *(_DWORD *)(v6 + 280) )
          ++v19;
        else
          ++v18;
      }
      if ( (*(int (__fastcall **)(CEndpointCharacteristicsCache *, _QWORD, _QWORD *))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                    + 24LL))(
             g_pEndpointCharacteristicsCache,
             *(_QWORD *)(v6 + 216),
             v21) >= 0 )
      {
        v17 = 0;
        v8 = *(void (__fastcall ****)(_QWORD, GUID *, __int64 *))(v21[0] + 16LL);
        v9 = 0LL;
        v20 = 0LL;
        if ( v8 )
        {
          (**v8)(v8, &GUID_eecca8a7_a629_4dba_9f23_20f6db42d990, &v20);
          v9 = v20;
        }
        if ( v9 )
        {
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v9 + 88LL))(v9, &v17);
          v9 = v20;
        }
        v10 = v17;
        if ( v9 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
        if ( v10 )
          v3 = 1;
      }
    }
    while ( v5 );
  }
  if ( v18 && !v19 )
  {
    v11 = 1;
LABEL_24:
    v12 = 0;
    goto LABEL_25;
  }
  v11 = 0;
  v12 = 1;
  if ( !v19 )
    goto LABEL_24;
LABEL_25:
  if ( g_u32AEWMILogLevel >= 4 )
  {
    pData.Ptr = 0x40500000048LL;
    *(_QWORD *)&pData.Size = 0LL;
    v25 = 0LL;
    v27 = 0x2000000000000LL;
    v26 = AEWMIGUID_AUDIOSRV;
    v28 = 0LL;
    v29 = 0LL;
    v30 = (int *)v11;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    if ( g_u32AEWMILogLevel >= 4 )
    {
      *(_QWORD *)&pData.Size = 0LL;
      v25 = 0LL;
      v27 = 0x2000000000000LL;
      pData.Ptr = 0x40600000048LL;
      v26 = AEWMIGUID_AUDIOSRV;
      v28 = 0LL;
      v29 = 0LL;
      v30 = (int *)v12;
      EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    }
  }
  if ( v11 || !g_OffloadNotify )
  {
    if ( !v12 && g_NonOffloadNotify )
    {
      v4 = 1;
      g_NonOffloadNotify = 0;
      v23 = WNF_SEB_NON_OFFLOADED_AUDIO;
    }
    if ( v11 && !g_OffloadNotify )
    {
      v13 = 1;
      LOBYTE(v16) = 1;
      g_OffloadNotify = 1;
      v23 = WNF_SEB_OFFLOADED_AUDIO;
      goto LABEL_42;
    }
  }
  else
  {
    v4 = 1;
    g_OffloadNotify = 0;
    v23 = WNF_SEB_OFFLOADED_AUDIO;
  }
  if ( !v12 || g_NonOffloadNotify )
  {
    if ( !v4 )
      goto LABEL_46;
    v13 = v16;
  }
  else
  {
    v13 = 1;
    LOBYTE(v16) = 1;
    g_NonOffloadNotify = 1;
    v23 = WNF_SEB_NON_OFFLOADED_AUDIO;
  }
LABEL_42:
  PubSebLevelEvent(v23, v13);
  if ( v3 && dword_1800CA040 > 4u && TlgKeywordOn((TraceLoggingHProvider)&dword_1800CA040, 0x200000000000uLL) )
  {
    LOWORD(v17) = 2;
    *((_QWORD *)&v26 + 1) = &v17;
    v27 = 2LL;
    v28 = &v23;
    v29 = 8LL;
    v30 = &v16;
    v31 = 1LL;
    v32 = &v18;
    v33 = 4LL;
    v34 = &v19;
    v35 = 4LL;
    TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A82FB, v14, v15, 7u, &pData);
  }
LABEL_46:
  ATL::CCritSecLock::~CCritSecLock((ATL::CCritSecLock *)v22);
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
}
