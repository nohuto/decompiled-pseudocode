/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140007990
 * Callers:
 *     <none>
 * Callees:
 *     ?AddHead@?$CAtlList@PEAVCPipeInstance@@V?$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU__POSITION@@AEBQEAVCPipeInstance@@@Z @ 0x140004C4C (-AddHead@-$CAtlList@PEAVCPipeInstance@@V-$CElementTraits@PEAVCPipeInstance@@@ATL@@@ATL@@QEAAPEAU.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000698C (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140008110 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000B4B0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x14000DBF0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x14000E680 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140014018 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x1400175EC (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x140026234 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     _TlgWrite @ 0x140027EFC (_TlgWrite.c)
 *     _TlgCreateWsz @ 0x14002C7E4 (_TlgCreateWsz.c)
 *     WPP_SF_qq @ 0x14003314C (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct _RTL_CRITICAL_SECTION *a3,
        int a4)
{
  double v5; // r13
  CAudioDeviceGraph *v6; // r14
  int Instance; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  _QWORD *v10; // rbx
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // r8
  CPipeInstance *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  ATL::CAtlException *v21; // rbx
  LPCGUID v22; // r8
  LPCGUID v23; // r9
  __int64 v24; // [rsp+0h] [rbp-1A8h] BYREF
  int v25; // [rsp+30h] [rbp-178h] BYREF
  unsigned int v26; // [rsp+34h] [rbp-174h] BYREF
  struct CPipeInstance *v27; // [rsp+38h] [rbp-170h] BYREF
  LPVOID pv; // [rsp+40h] [rbp-168h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-160h] BYREF
  char v30; // [rsp+50h] [rbp-158h]
  LPVOID ppv; // [rsp+58h] [rbp-150h] BYREF
  CAudioDeviceGraph *v32; // [rsp+60h] [rbp-148h]
  double v33[2]; // [rsp+68h] [rbp-140h] BYREF
  ATL::CAtlException *v34; // [rsp+78h] [rbp-130h] BYREF
  __int64 v35; // [rsp+80h] [rbp-128h] BYREF
  float v36; // [rsp+88h] [rbp-120h] BYREF
  _DWORD v37[5]; // [rsp+8Ch] [rbp-11Ch] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-108h] BYREF
  int *v39; // [rsp+C0h] [rbp-E8h]
  __int64 v40; // [rsp+C8h] [rbp-E0h]
  char *v41; // [rsp+D0h] [rbp-D8h]
  __int64 v42; // [rsp+D8h] [rbp-D0h]
  double *v43; // [rsp+E0h] [rbp-C8h]
  __int64 v44; // [rsp+E8h] [rbp-C0h]
  unsigned int *v45; // [rsp+F0h] [rbp-B8h]
  __int64 v46; // [rsp+F8h] [rbp-B0h]
  float *v47; // [rsp+100h] [rbp-A8h]
  __int64 v48; // [rsp+108h] [rbp-A0h]
  _DWORD *v49; // [rsp+110h] [rbp-98h]
  __int64 v50; // [rsp+118h] [rbp-90h]
  __int64 v51; // [rsp+120h] [rbp-88h]
  __int64 v52; // [rsp+128h] [rbp-80h]
  __int64 v53; // [rsp+130h] [rbp-78h]
  __int64 v54; // [rsp+138h] [rbp-70h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp-68h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v56; // [rsp+150h] [rbp-58h] BYREF

  v33[1] = NAN;
  v25 = a4;
  lpCriticalSection = a3;
  v5 = *(double *)&a2;
  v6 = this;
  v32 = this;
  *(_QWORD *)&v33[0] = a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, a3, this, a3);
  }
  v27 = 0LL;
  ppv = 0LL;
  pv = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( !a3 )
  {
    Instance = -2147467261;
    goto LABEL_53;
  }
  if ( *((_DWORD *)v6 + 56) )
  {
    Instance = -2005139440;
    goto LABEL_53;
  }
  Instance = ValidateDevicePipeDescriptor(*(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v5);
  if ( Instance >= 0 )
  {
    v8 = *(_QWORD *)(*(_QWORD *)&v5 + 32LL);
    if ( v8 > 20000000 )
    {
      Instance = -2147024809;
      goto LABEL_53;
    }
    *((_QWORD *)v6 + 12) = v8;
    *((_DWORD *)v6 + 27) = *(_DWORD *)(*(_QWORD *)&v5 + 72LL);
    *((_DWORD *)v6 + 72) = *(_DWORD *)(*(_QWORD *)&v5 + 132LL);
    *((_DWORD *)v6 + 73) = *(_DWORD *)(*(_QWORD *)&v5 + 136LL);
    *((_OWORD *)v6 + 21) = *(_OWORD *)(*(_QWORD *)&v5 + 144LL);
    *((_DWORD *)v6 + 74) = *(_DWORD *)(*(_QWORD *)&v5 + 96LL);
    *((float *)v6 + 26) = (float)*(int *)(*(_QWORD *)(*(_QWORD *)&v5 + 8LL) + 4LL);
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
                 &ppv);
    if ( Instance >= 0 )
    {
      v35 = *(_QWORD *)(*(_QWORD *)&v5 + 32LL);
      v9 = *(_QWORD *)(*(_QWORD *)&v5 + 8LL);
      v36 = (float)*(int *)(v9 + 4);
      v37[0] = *(unsigned __int16 *)(v9 + 2);
      v37[1] = *(_DWORD *)(*(_QWORD *)&v5 + 96LL) == 1;
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)ppv + 24LL))(
                   ppv,
                   *(_QWORD *)(*(_QWORD *)&v5 + 56LL),
                   &v35,
                   (__int64)v6 + 328);
      if ( Instance >= 0 )
      {
        v10 = (_QWORD *)((char *)v6 + 112);
        Instance = CoCreateInstance(
                     &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
                     0LL,
                     0x17u,
                     &GUID_6683b02d_3931_487c_ac86_a0f42493c3c3,
                     (LPVOID *)v6 + 14);
        if ( Instance >= 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, v11, v6, *v10);
          }
          v26 = *((_DWORD *)v6 + 27) != 0;
          Instance = (*(__int64 (__fastcall **)(_QWORD, _QWORD, _QWORD))(*(_QWORD *)*v10 + 24LL))(
                       *v10,
                       v26,
                       *((_QWORD *)v6 + 41));
          if ( Instance >= 0 )
          {
            Instance = CoCreateInstance(
                         &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
                         0LL,
                         0x17u,
                         &GUID_55e0b65a_ad89_492f_950e_c669147cc7b1,
                         (LPVOID *)v6 + 15);
            if ( Instance < 0 )
            {
LABEL_71:
              ATL::CComPtrBase<IAudioProcessor>::Release((char *)v6 + 112);
              ATL::CComPtrBase<IAudioProcessor>::Release((char *)v6 + 120);
              goto LABEL_53;
            }
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v12, v6, *((_QWORD *)v6 + 15));
            }
            Instance = CPipeInstance::CreateDevicePipeInstance(
                         *((struct IUnknown **)v6 + 14),
                         *((struct IDeviceGraphObjectCache **)v6 + 41),
                         *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v5,
                         &v27);
            if ( Instance < 0 )
            {
              v15 = v27;
            }
            else
            {
              if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
              {
                v15 = v27;
                WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v14, v6, v27);
              }
              else
              {
                v15 = v27;
              }
              Instance = CPipeInstance::Initialize(v15);
              if ( Instance >= 0 )
              {
                if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                  && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                  && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                {
                  WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 16LL, v16, v6, v15);
                }
                Instance = CPipeInstance::ConnectAPOs(v15, (struct IAudioGraphCallback *)lpCriticalSection);
                if ( Instance >= 0 )
                {
                  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                  {
                    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, v17, v6, v15);
                  }
                  Instance = CPipeInstance::AddConnectionsAndActivateAPOs(v15);
                  if ( Instance >= 0 )
                  {
                    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, v18, v6, v15);
                    }
                    Instance = CAudioDeviceGraph::InitializePump(v6, v15, (v25 & 0x400001) != 0);
                    if ( Instance >= 0 )
                    {
                      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                      {
                        WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v19, v6, v15);
                      }
                      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 184);
                      v30 = 0;
                      ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
                      Instance = 0;
                      try
                      {
                        ATL::CAtlList<CPipeInstance *,ATL::CElementTraits<CPipeInstance *>>::AddHead(
                          (struct ATL::CAtlPlex **)v6 + 17,
                          &v27);
                      }
                      catch ( ATL::CAtlException *v34 )
                      {
                        v13 = &v24;
                        v21 = v34;
                        if ( *(_DWORD *)v34 == -1073741571 )
                          _resetstkoflw();
                        v25 = *(_DWORD *)v21;
                        Instance = v25;
                        if ( v25 < 0 )
                        {
                          if ( v30 )
                            LeaveCriticalSection(lpCriticalSection);
                          v15 = v27;
                          v6 = v32;
                          goto LABEL_52;
                        }
                        v15 = v27;
                        v6 = v32;
                        v5 = v33[0];
                      }
                      if ( v30 )
                        LeaveCriticalSection(lpCriticalSection);
                      *((_QWORD *)v6 + 16) = v15;
                      *((_DWORD *)v6 + 56) = 1;
                      *((_DWORD *)v6 + 20) = 0;
                      mmdDevGetInstanceIdFromMMDeviceId(*(_QWORD *)(*(_QWORD *)&v5 + 56LL), &pv);
                      if ( hProvider > 5u )
                      {
                        LODWORD(v13) = 0;
                        if ( (qword_1400552A0 & 0x400000000000LL) != 0
                          && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
                        {
                          v25 = 4;
                          v39 = &v25;
                          v40 = 4LL;
                          v41 = (char *)v6 + 336;
                          v42 = 16LL;
                          v33[0] = (double)(int)*((_QWORD *)v6 + 12) / 10000000.0;
                          v43 = v33;
                          v44 = 8LL;
                          v26 = *((_DWORD *)v6 + 27);
                          v45 = &v26;
                          v46 = 4LL;
                          v47 = &v36;
                          v48 = 4LL;
                          v49 = v37;
                          v50 = 4LL;
                          v51 = *(_QWORD *)&v5 + 100LL;
                          v52 = 16LL;
                          v53 = *(_QWORD *)&v5 + 116LL;
                          v54 = 16LL;
                          TlgCreateWsz(&pDesc, *(LPCWSTR *)(*(_QWORD *)&v5 + 56LL));
                          TlgCreateWsz(&v56, (LPCWSTR)pv);
                          TlgWrite((TraceLoggingHProvider)&hProvider, &unk_140045646, v22, v23, 0xCu, &pData);
                        }
                      }
LABEL_52:
                      if ( Instance >= 0 )
                        goto LABEL_53;
                    }
                  }
                }
              }
            }
            if ( v15 )
              CPipeInstance::`scalar deleting destructor'(v15, (unsigned int)v13);
            goto LABEL_71;
          }
        }
      }
    }
  }
LABEL_53:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( Instance < 0
    && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      20LL,
      &WPP_121a146f95c1699d0b0c4e89abf4320a_Traceguids,
      (unsigned int)Instance);
  }
  CoTaskMemFree(pv);
  pv = 0LL;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)Instance;
}
