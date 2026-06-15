/*
 * XREFs of ?UpdateOffloadPowerRequest@@YAXXZ @ 0x180008FE0
 * Callers:
 *     AUDIOSERVER_rundown @ 0x180005290 (AUDIOSERVER_rundown.c)
 *     AudioServerNotifyStreamSuspensionState @ 0x1800053E0 (AudioServerNotifyStreamSuspensionState.c)
 *     AudioServerStopStream @ 0x180008A30 (AudioServerStopStream.c)
 *     AudioServerStartStream @ 0x180008E60 (AudioServerStartStream.c)
 *     AudioServerDisconnect @ 0x180009790 (AudioServerDisconnect.c)
 *     ?PowerSettingChanged@CAudioSrv@@UEAAK_J@Z @ 0x18003A1E0 (-PowerSettingChanged@CAudioSrv@@UEAAK_J@Z.c)
 *     AudioServerSetLastBufferInProgress @ 0x18008D9F0 (AudioServerSetLastBufferInProgress.c)
 * Callees:
 *     ?GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointCharacteristics@@@Z @ 0x180023D70 (-GetAliasedEndpointCharacteristics@CEndpointCharacteristicsCache@@QEAAJPEBGPEAPEAVCEndpointChara.c)
 *     _TlgWrite @ 0x1800315C0 (_TlgWrite.c)
 *     _TlgKeywordOn @ 0x180037F6C (_TlgKeywordOn.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     _alloca_probe @ 0x180044A30 (_alloca_probe.c)
 *     Template_pq @ 0x18006B0B4 (Template_pq.c)
 *     ?SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x180075888 (-SafeUnknownDecrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
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
  CEndpointCharacteristicsCache *v6; // rcx
  int v7; // eax
  int AliasedEndpointCharacteristics; // eax
  void (__fastcall ***v9)(_QWORD, GUID *, __int64 *); // rsi
  unsigned int v10; // r12d
  __int64 v11; // rcx
  int v12; // r12d
  PVOID v13; // rsi
  char *v14; // r14
  RTL_SRWLOCK *v15; // rbx
  int v16; // eax
  PVOID v17; // rsi
  char *v18; // r14
  int v19; // eax
  RTL_SRWLOCK *v20; // rbx
  int v21; // eax
  volatile int *v22; // rdx
  unsigned __int8 v23; // r8
  const struct _TlgProvider_t *v24; // rcx
  const struct _TlgProvider_t *v25; // rcx
  const GUID *v26; // r8
  const GUID *v27; // r9
  __int64 (__fastcall *v28)(); // rbx
  char v29; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v30; // [rsp+44h] [rbp-BCh] BYREF
  int v31; // [rsp+48h] [rbp-B8h] BYREF
  int v32; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v33; // [rsp+50h] [rbp-B0h] BYREF
  int v34; // [rsp+58h] [rbp-A8h]
  struct CEndpointCharacteristics *v35[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v36; // [rsp+70h] [rbp-90h] BYREF
  __int64 v37; // [rsp+78h] [rbp-88h]
  __int64 v38; // [rsp+80h] [rbp-80h]
  __int64 v39; // [rsp+88h] [rbp-78h]
  __int64 v40; // [rsp+90h] [rbp-70h]
  int v41; // [rsp+98h] [rbp-68h]
  int v42; // [rsp+A0h] [rbp-60h]
  int v43; // [rsp+A4h] [rbp-5Ch]
  __int64 v44; // [rsp+160h] [rbp+60h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+170h] [rbp+70h] BYREF
  __int64 v46; // [rsp+180h] [rbp+80h]
  __int128 v47; // [rsp+188h] [rbp+88h]
  __int64 v48; // [rsp+198h] [rbp+98h]
  __int64 *v49; // [rsp+1A0h] [rbp+A0h]
  __int64 v50; // [rsp+1A8h] [rbp+A8h]
  char *v51; // [rsp+1B0h] [rbp+B0h]
  __int64 v52; // [rsp+1B8h] [rbp+B8h]
  int *v53; // [rsp+1C0h] [rbp+C0h]
  __int64 v54; // [rsp+1C8h] [rbp+C8h]
  int *v55; // [rsp+1D0h] [rbp+D0h]
  __int64 v56; // [rsp+1D8h] [rbp+D8h]
  _DWORD v57[1024]; // [rsp+1E0h] [rbp+E0h] BYREF

  v35[1] = (struct CEndpointCharacteristics *)-2LL;
  v0 = 0;
  v1 = 0;
  v31 = 0;
  v32 = 0;
  v2 = 0;
  v34 = 0;
  v29 = 0;
  v44 = 0LL;
  v3 = 0LL;
  v35[0] = 0LL;
  v4 = (_QWORD *)g_VADServerList;
  if ( g_VADServerList )
  {
    do
    {
      v5 = v4[2];
      v4 = (_QWORD *)*v4;
      v6 = (CEndpointCharacteristicsCache *)*(unsigned __int8 *)(v5 + 220);
      if ( *(_DWORD *)(v5 + 288) || (v7 = 1, (*(_BYTE *)(v5 + 292) & 1) == 0) )
        v7 = 0;
      if ( *(_BYTE *)(v5 + 220) )
      {
        if ( !v7 || *(_DWORD *)(v5 + 300) )
          ++v32;
        else
          ++v31;
      }
      AliasedEndpointCharacteristics = CEndpointCharacteristicsCache::GetAliasedEndpointCharacteristics(
                                         v6,
                                         *(const unsigned __int16 **)(v5 + 232),
                                         v35);
      v3 = v35[0];
      if ( AliasedEndpointCharacteristics >= 0 )
      {
        v30 = 0;
        v9 = (void (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)v35[0] + 2);
        v33 = 0LL;
        if ( v9 )
          (**v9)(v9, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v33);
        if ( v33 )
          (*(void (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)v33 + 88LL))(v33, &v30);
        v10 = v30;
        if ( v33 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
        if ( v10 )
          v1 = 1;
        v0 = 0;
      }
    }
    while ( v4 );
  }
  if ( v31 && !v32 )
  {
    v11 = 1LL;
    v30 = 1;
LABEL_25:
    v12 = 0;
    goto LABEL_26;
  }
  v11 = 0LL;
  v30 = 0;
  v12 = 1;
  if ( !v32 )
    goto LABEL_25;
LABEL_26:
  if ( g_u32AEWMILogLevel >= 3 )
  {
    pData.Ptr = 0x500000048LL;
    *(_QWORD *)&pData.Size = 0LL;
    v46 = 0LL;
    v48 = 0x2000000000000LL;
    v47 = AEWMIGUID_AUDIOSRV;
    v49 = 0LL;
    v50 = 0LL;
    v51 = (char *)(int)v11;
    EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    if ( g_u32AEWMILogLevel >= 3 )
    {
      *(_QWORD *)&pData.Size = 0LL;
      v46 = 0LL;
      v48 = 0x2000000000000LL;
      pData.Ptr = 0x600000048LL;
      v47 = AEWMIGUID_AUDIOSRV;
      v49 = 0LL;
      v50 = 0LL;
      v51 = (char *)v12;
      EtwLogTraceEvent(g_hAEWMITraceHandle, &pData);
    }
  }
  if ( v12 )
  {
    if ( !g_fPdcReferenceTaken )
    {
      v13 = g_hPdcActivator;
      if ( g_hPdcActivator )
      {
        if ( *(_DWORD *)g_hPdcActivator == 1097032784 )
        {
          v14 = (char *)g_hPdcActivator + 8;
          AcquireSRWLockExclusive((PSRWLOCK)g_hPdcActivator + 1);
          *((_DWORD *)v13 + 4) = GetCurrentThreadId();
          if ( *((_DWORD *)v13 + 15) )
            goto LABEL_38;
          v41 = 4;
          LOBYTE(v42) = 1;
          v43 = 2;
          v15 = (RTL_SRWLOCK *)*((_QWORD *)v13 + 4);
          AcquireSRWLockShared(v15 + 2);
          if ( v15[1].Ptr )
          {
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            v36 = 15728840LL;
            v33 = 240LL;
            ZwAlpcSendWaitReceivePort(v15[1].Ptr, 0x20000LL, &v36, 0LL, &v36, &v33, 0LL, 0LL);
          }
          ReleaseSRWLockShared(v15 + 2);
          v0 = v42;
          if ( v42 >= 0 )
LABEL_38:
            ++*((_DWORD *)v13 + 15);
          *((_DWORD *)v14 + 2) = 0;
          ReleaseSRWLockExclusive((PSRWLOCK)v14);
          v16 = g_fPdcReferenceTaken;
          if ( v0 >= 0 )
            v16 = 1;
          g_fPdcReferenceTaken = v16;
          v13 = g_hPdcActivator;
          v2 = v34;
        }
        else
        {
          v0 = -1073741585;
        }
        if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
          Template_pq(v11, &EVT_AUDIOSRV_PdcActivationClientTakeTimerReference, v13, (unsigned int)v0);
      }
    }
  }
  else if ( g_fPdcReferenceTaken )
  {
    v17 = g_hPdcActivator;
    if ( g_hPdcActivator )
    {
      if ( *(_DWORD *)g_hPdcActivator == 1097032784 )
      {
        v18 = (char *)g_hPdcActivator + 8;
        AcquireSRWLockExclusive((PSRWLOCK)g_hPdcActivator + 1);
        *((_DWORD *)v17 + 4) = GetCurrentThreadId();
        v19 = *((_DWORD *)v17 + 15);
        if ( v19 )
        {
          if ( v19 != 1 )
            goto LABEL_55;
          v41 = 4;
          LOBYTE(v42) = 0;
          v43 = 2;
          v20 = (RTL_SRWLOCK *)*((_QWORD *)v17 + 4);
          AcquireSRWLockShared(v20 + 2);
          if ( v20[1].Ptr )
          {
            v37 = 0LL;
            v38 = 0LL;
            v39 = 0LL;
            v40 = 0LL;
            v36 = 15728840LL;
            v33 = 240LL;
            ZwAlpcSendWaitReceivePort(v20[1].Ptr, 0x20000LL, &v36, 0LL, &v36, &v33, 0LL, 0LL);
          }
          ReleaseSRWLockShared(v20 + 2);
          v0 = v42;
          if ( v42 >= 0 )
LABEL_55:
            --*((_DWORD *)v17 + 15);
        }
        else
        {
          v0 = -1073741823;
        }
        *((_DWORD *)v18 + 2) = 0;
        ReleaseSRWLockExclusive((PSRWLOCK)v18);
        v21 = g_fPdcReferenceTaken;
        if ( v0 >= 0 )
          v21 = 0;
        g_fPdcReferenceTaken = v21;
        v17 = g_hPdcActivator;
        v2 = v34;
      }
      else
      {
        v0 = -1073741585;
      }
      if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
        Template_pq(v11, &EVT_AUDIOSRV_PdcActivationClientReleaseTimerReference, v17, (unsigned int)v0);
    }
  }
  v22 = (volatile int *)v30;
  if ( v30 || !g_OffloadNotify )
  {
    if ( !v12 && g_NonOffloadNotify )
    {
      v2 = 1;
      g_NonOffloadNotify = 0;
      v44 = WNF_SEB_NON_OFFLOADED_AUDIO;
    }
    if ( v30 && !g_OffloadNotify )
    {
      v23 = 1;
      v29 = 1;
      g_OffloadNotify = 1;
      v44 = WNF_SEB_OFFLOADED_AUDIO;
      goto LABEL_75;
    }
  }
  else
  {
    v2 = 1;
    g_OffloadNotify = 0;
    v44 = WNF_SEB_OFFLOADED_AUDIO;
  }
  if ( !v12 || g_NonOffloadNotify )
  {
    if ( !v2 )
      goto LABEL_82;
    v23 = v29;
  }
  else
  {
    v23 = 1;
    v29 = 1;
    g_NonOffloadNotify = 1;
    v44 = WNF_SEB_NON_OFFLOADED_AUDIO;
  }
LABEL_75:
  v57[1] = -1;
  if ( v23 <= 1u )
    v57[0] = ((v57[0] | 1) ^ ((LOBYTE(v57[0]) | 1) ^ (unsigned __int8)(2 * (v23 != 0))) & 2) & 0xFF000003;
  else
    v57[0] = ((v57[0] | 1) ^ ((LOBYTE(v57[0]) | 1) ^ (unsigned __int8)(2 * (v23 != 0))) & 2) & 0xFF000003 | (v23 << 14);
  RtlPublishWnfStateData(v44, 0LL, v57, 8LL, 0LL);
  if ( v1 && (unsigned int)dword_1800E7500 > 5 && TlgKeywordOn(v24, 0x200000000000uLL) )
  {
    LOWORD(v30) = 2;
    *((_QWORD *)&v47 + 1) = &v30;
    v48 = 2LL;
    v49 = &v44;
    v50 = 8LL;
    v51 = &v29;
    v52 = 1LL;
    v53 = &v31;
    v54 = 4LL;
    v55 = &v32;
    v56 = 4LL;
    TlgWrite(v25, &unk_1800C662D, v26, v27, 7u, &pData);
  }
LABEL_82:
  if ( !v3 )
    return;
  v28 = *(__int64 (__fastcall **)())(*(_QWORD *)v3 + 16LL);
  if ( v28 != Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release )
    goto LABEL_87;
  if ( !Microsoft::WRL::Details::SafeUnknownDecrementReference(
          (struct CEndpointCharacteristics *)((char *)v3 + 12),
          v22) )
  {
    (*(void (__fastcall **)(struct CEndpointCharacteristics *, __int64))(*(_QWORD *)v3 + 24LL))(v3, 1LL);
    v3 = Microsoft::WRL::Details::ModuleBase::module_;
    if ( Microsoft::WRL::Details::ModuleBase::module_ )
    {
      v28 = *(__int64 (__fastcall **)())(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_ + 16LL);
LABEL_87:
      ((void (__fastcall *)(struct CEndpointCharacteristics *))v28)(v3);
    }
  }
}
