/*
 * XREFs of ?UpdateOffloadPowerRequest@@YAXXZ @ 0x18002CED0
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180002AF0 (AUDIOSERVER_rundown.c)
 *     AudioServerNotifyStreamSuspensionState @ 0x1800035B0 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerDisconnect @ 0x18002CD60 (AudioServerDisconnect.c)
 *     AudioServerStopStream @ 0x1800392F0 (AudioServerStopStream.c)
 *     AudioServerStartStream @ 0x180039380 (AudioServerStartStream.c)
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003B740 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     AudioServerSetLastBufferInProgress @ 0x18008A500 (AudioServerSetLastBufferInProgress.c)
 * Callees:
 *     _TlgKeywordOn @ 0x180005DB8 (_TlgKeywordOn.c)
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x18001BA20 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     _alloca_probe @ 0x180048C80 (_alloca_probe.c)
 *     Template_pq @ 0x180069DC8 (Template_pq.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 */

// Hidden C++ exception states: #wind=2
void UpdateOffloadPowerRequest(void)
{
  int v0; // ebx
  int v1; // r15d
  int v2; // r13d
  struct CEndpointCharacteristics *v3; // rdi
  _QWORD *v4; // r14
  __int64 v5; // rdx
  int v6; // eax
  int AliasedEndpointCharacteristics; // eax
  void (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // rsi
  int v9; // r12d
  __int64 v10; // rcx
  int v11; // r12d
  PVOID v12; // rsi
  char *v13; // r14
  RTL_SRWLOCK *v14; // rbx
  int v15; // eax
  PVOID v16; // rsi
  char *v17; // r14
  int v18; // eax
  RTL_SRWLOCK *v19; // rbx
  int v20; // eax
  unsigned __int8 v21; // r8
  const struct _TlgProvider_t *v22; // rcx
  const struct _TlgProvider_t *v23; // rcx
  const GUID *v24; // r8
  const GUID *v25; // r9
  char v26; // [rsp+40h] [rbp-C0h] BYREF
  int v27; // [rsp+44h] [rbp-BCh] BYREF
  int v28; // [rsp+48h] [rbp-B8h] BYREF
  int v29; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v30; // [rsp+50h] [rbp-B0h] BYREF
  int v31; // [rsp+58h] [rbp-A8h]
  struct CEndpointCharacteristics *v32[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v33; // [rsp+70h] [rbp-90h] BYREF
  __int64 v34; // [rsp+78h] [rbp-88h]
  __int64 v35; // [rsp+80h] [rbp-80h]
  __int64 v36; // [rsp+88h] [rbp-78h]
  __int64 v37; // [rsp+90h] [rbp-70h]
  int v38; // [rsp+98h] [rbp-68h]
  int v39; // [rsp+A0h] [rbp-60h]
  int v40; // [rsp+A4h] [rbp-5Ch]
  __int64 v41; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  __int64 v43; // [rsp+180h] [rbp+80h]
  __int128 v44; // [rsp+188h] [rbp+88h]
  __int64 v45; // [rsp+198h] [rbp+98h]
  __int64 *v46; // [rsp+1A0h] [rbp+A0h]
  __int64 v47; // [rsp+1A8h] [rbp+A8h]
  char *v48; // [rsp+1B0h] [rbp+B0h]
  __int64 v49; // [rsp+1B8h] [rbp+B8h]
  int *v50; // [rsp+1C0h] [rbp+C0h]
  __int64 v51; // [rsp+1C8h] [rbp+C8h]
  int *v52; // [rsp+1D0h] [rbp+D0h]
  __int64 v53; // [rsp+1D8h] [rbp+D8h]
  _DWORD v54[1024]; // [rsp+1E0h] [rbp+E0h] BYREF

  v32[1] = (struct CEndpointCharacteristics *)-2LL;
  v0 = 0;
  v1 = 0;
  v28 = 0;
  v29 = 0;
  v2 = 0;
  v31 = 0;
  v26 = 0;
  v41 = 0LL;
  v3 = 0LL;
  v32[0] = 0LL;
  v4 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      if ( *(_DWORD *)(v5 + 272) || (v6 = 1, (*(_BYTE *)(v5 + 276) & 1) == 0) )
        v6 = 0;
      if ( *(_BYTE *)(v5 + 204) )
      {
        if ( !v6 || *(_DWORD *)(v5 + 280) )
          ++v29;
        else
          ++v28;
      }
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         (RTL_SRWLOCK *)g_pEndpointCharacteristicsCache,
                                         *(const unsigned __int16 **)(v5 + 216),
                                         v32);
      v3 = v32[0];
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        v27 = 0;
        v8 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v32[0] + 2);
        v30 = 0LL;
        if ( v8 )
          (**v8)(v8, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v30);
        if ( v30 )
          (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v30 + 88LL))(v30, &v27);
        v9 = v27;
        if ( v30 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
        if ( v9 )
          v1 = 1;
        v0 = 0;
      }
    }
    while ( v4 );
  }
  if ( v28 && !v29 )
  {
    v10 = 1LL;
    v27 = 1;
LABEL_25:
    v11 = 0;
    goto LABEL_26;
  }
  v10 = 0LL;
  v27 = 0;
  v11 = 1;
  if ( !v29 )
    goto LABEL_25;
LABEL_26:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    pData.Ptr = 0x500000048LL;
    *(_QWORD *)&pData.Size = 0LL;
    v43 = 0LL;
    v45 = 0x2000000000000LL;
    v44 = AEWMIGUID_AUDIOSRV;
    v46 = 0LL;
    v47 = 0LL;
    v48 = (char *)(int)v10;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    if ( g_u32AEWMILogLevel >= 3 )
    {
      *(_QWORD *)&pData.Size = 0LL;
      v43 = 0LL;
      v45 = 0x2000000000000LL;
      pData.Ptr = 0x600000048LL;
      v44 = AEWMIGUID_AUDIOSRV;
      v46 = 0LL;
      v47 = 0LL;
      v48 = (char *)v11;
      EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    }
  }
  if ( v11 )
  {
    if ( !g_fPdcReferenceTaken )
    {
      v12 = g_hPdcActivator;
      if ( g_hPdcActivator )
      {
        if ( *(_DWORD *)g_hPdcActivator == 1097032784 )
        {
          v13 = (char *)g_hPdcActivator + 8;
          AcquireSRWLockExclusive((PSRWLOCK)g_hPdcActivator + 1);
          *((_DWORD *)v12 + 4) = GetCurrentThreadId();
          if ( *((_DWORD *)v12 + 15) )
            goto LABEL_38;
          v38 = 4;
          LOBYTE(v39) = 1;
          v40 = 2;
          v14 = (RTL_SRWLOCK *)*((_QWORD *)v12 + 4);
          AcquireSRWLockShared(v14 + 2);
          if ( v14[1].Ptr )
          {
            v34 = 0LL;
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            v33 = 15728840LL;
            v30 = 240LL;
            ZwAlpcSendWaitReceivePort(v14[1].Ptr, 0x20000LL, &v33, 0LL, &v33, &v30, 0LL, 0LL);
          }
          ReleaseSRWLockShared(v14 + 2);
          v0 = v39;
          if ( v39 >= 0 )
LABEL_38:
            ++*((_DWORD *)v12 + 15);
          *((_DWORD *)v13 + 2) = 0;
          ReleaseSRWLockExclusive((PSRWLOCK)v13);
          v15 = g_fPdcReferenceTaken;
          if ( v0 >= 0 )
            v15 = 1;
          g_fPdcReferenceTaken = v15;
          v12 = g_hPdcActivator;
          v2 = v31;
        }
        else
        {
          v0 = -1073741585;
        }
        if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
          Template_pq(v10, &EVT_AUDIOSRV_PdcActivationClientTakeTimerReference, v12, (unsigned int)v0);
      }
    }
  }
  else if ( g_fPdcReferenceTaken )
  {
    v16 = g_hPdcActivator;
    if ( g_hPdcActivator )
    {
      if ( *(_DWORD *)g_hPdcActivator == 1097032784 )
      {
        v17 = (char *)g_hPdcActivator + 8;
        AcquireSRWLockExclusive((PSRWLOCK)g_hPdcActivator + 1);
        *((_DWORD *)v16 + 4) = GetCurrentThreadId();
        v18 = *((_DWORD *)v16 + 15);
        if ( v18 )
        {
          if ( v18 != 1 )
            goto LABEL_55;
          v38 = 4;
          LOBYTE(v39) = 0;
          v40 = 2;
          v19 = (RTL_SRWLOCK *)*((_QWORD *)v16 + 4);
          AcquireSRWLockShared(v19 + 2);
          if ( v19[1].Ptr )
          {
            v34 = 0LL;
            v35 = 0LL;
            v36 = 0LL;
            v37 = 0LL;
            v33 = 15728840LL;
            v30 = 240LL;
            ZwAlpcSendWaitReceivePort(v19[1].Ptr, 0x20000LL, &v33, 0LL, &v33, &v30, 0LL, 0LL);
          }
          ReleaseSRWLockShared(v19 + 2);
          v0 = v39;
          if ( v39 >= 0 )
LABEL_55:
            --*((_DWORD *)v16 + 15);
        }
        else
        {
          v0 = -1073741823;
        }
        *((_DWORD *)v17 + 2) = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)v17);
        v20 = g_fPdcReferenceTaken;
        if ( v0 >= 0 )
          v20 = 0;
        g_fPdcReferenceTaken = v20;
        v16 = g_hPdcActivator;
        v2 = v31;
      }
      else
      {
        v0 = -1073741585;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
        Template_pq(v10, &EVT_AUDIOSRV_PdcActivationClientReleaseTimerReference, v16, (unsigned int)v0);
    }
  }
  if ( v27 || !g_OffloadNotify )
  {
    if ( !v11 && g_NonOffloadNotify )
    {
      v2 = 1;
      g_NonOffloadNotify = 0;
      v41 = WNF_SEB_NON_OFFLOADED_AUDIO;
    }
    if ( v27 && !g_OffloadNotify )
    {
      v21 = 1;
      v26 = 1;
      g_OffloadNotify = 1;
      v41 = WNF_SEB_OFFLOADED_AUDIO;
      goto LABEL_75;
    }
  }
  else
  {
    v2 = 1;
    g_OffloadNotify = 0;
    v41 = WNF_SEB_OFFLOADED_AUDIO;
  }
  if ( !v11 || g_NonOffloadNotify )
  {
    if ( !v2 )
      goto LABEL_82;
    v21 = v26;
  }
  else
  {
    v21 = 1;
    v26 = 1;
    g_NonOffloadNotify = 1;
    v41 = WNF_SEB_NON_OFFLOADED_AUDIO;
  }
LABEL_75:
  v54[1] = -1;
  if ( v21 <= 1u )
    v54[0] = ((v54[0] | 1) ^ ((LOBYTE(v54[0]) | 1) ^ (unsigned __int8)(2 * (v21 != 0))) & 2) & 0xFF000003;
  else
    v54[0] = ((v54[0] | 1) ^ ((LOBYTE(v54[0]) | 1) ^ (unsigned __int8)(2 * (v21 != 0))) & 2) & 0xFF000003 | (v21 << 14);
  RtlPublishWnfStateData(v41, 0LL, v54, 8LL, 0LL);
  if ( v1 && (unsigned int)dword_1800E5500 > 4 && TlgKeywordOn(v22, 0x200000000000uLL) )
  {
    LOWORD(v27) = 2;
    *((_QWORD *)&v44 + 1) = &v27;
    v45 = 2LL;
    v46 = &v41;
    v47 = 8LL;
    v48 = &v26;
    v49 = 1LL;
    v50 = &v28;
    v51 = 4LL;
    v52 = &v29;
    v53 = 4LL;
    TlgWrite(v23, &unk_1800C4AA5, v24, v25, 7u, &pData);
  }
LABEL_82:
  if ( v3 )
    (*(void (__fastcall **)(struct CEndpointCharacteristics *))(*(_QWORD *)v3 + 16LL))(v3);
}
