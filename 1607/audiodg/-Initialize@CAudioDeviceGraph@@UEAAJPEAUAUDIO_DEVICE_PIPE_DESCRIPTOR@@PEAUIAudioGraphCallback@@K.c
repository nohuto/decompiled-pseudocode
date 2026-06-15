/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x140006FA0
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x1400059E0 (-Initialize@CSystemAudioDeviceSharedBase@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraph.c)
 * Callees:
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140001D10 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x140006280 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140007990 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x140009510 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140009F60 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000D930 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgCreateWsz @ 0x140016B4C (_TlgCreateWsz.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140016B88 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x1400250A4 (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140025E9C (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x1400301E4 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  struct AUDIO_DEVICE_PIPE_DESCRIPTOR *v5; // rsi
  CAudioDeviceGraph *v6; // rbx
  int Instance; // edi
  __int64 v8; // rax
  int *v9; // r12
  struct IAudioProcessor **v10; // r12
  __int64 v11; // r8
  __int64 v12; // r8
  __int64 *v13; // rdx
  __int64 v14; // r8
  CPipeInstance *v15; // r12
  __int64 v16; // r8
  __int64 v17; // r8
  __int64 v18; // r8
  __int64 v19; // r8
  __int64 v20; // r13
  struct ATL::CAtlPlex *v21; // r8
  int v22; // edx
  _QWORD *v23; // rcx
  int i; // edx
  struct IAudioGraphCallback *v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int16 *v28; // r13
  struct IAudioGraphCallback *v29; // r10
  ATL::CAtlException *v31; // rbx
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // [rsp+0h] [rbp-1D8h] BYREF
  int v35; // [rsp+30h] [rbp-1A8h] BYREF
  struct CPipeInstance *v36; // [rsp+38h] [rbp-1A0h] BYREF
  LPCWSTR pwsz; // [rsp+40h] [rbp-198h] BYREF
  CAudioDeviceGraph *v38; // [rsp+48h] [rbp-190h]
  LPVOID ppv; // [rsp+50h] [rbp-188h] BYREF
  struct IAudioGraphCallback *v40[2]; // [rsp+58h] [rbp-180h] BYREF
  double v41; // [rsp+68h] [rbp-170h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+70h] [rbp-168h] BYREF
  char v43; // [rsp+78h] [rbp-160h]
  unsigned __int16 *v44; // [rsp+80h] [rbp-158h]
  __int64 v45; // [rsp+88h] [rbp-150h]
  ATL::CAtlException *v46; // [rsp+90h] [rbp-148h] BYREF
  __int64 v47; // [rsp+98h] [rbp-140h] BYREF
  float v48; // [rsp+A0h] [rbp-138h] BYREF
  int v49; // [rsp+A4h] [rbp-134h] BYREF
  BOOL v50; // [rsp+A8h] [rbp-130h] BYREF
  GUID v51; // [rsp+B0h] [rbp-128h] BYREF
  void *v52; // [rsp+C0h] [rbp-118h] BYREF
  int v53; // [rsp+C8h] [rbp-110h]
  int v54; // [rsp+CCh] [rbp-10Ch]
  void *v55; // [rsp+D0h] [rbp-108h]
  int v56; // [rsp+D8h] [rbp-100h]
  int v57; // [rsp+DCh] [rbp-FCh]
  char *v58; // [rsp+E0h] [rbp-F8h]
  __int64 v59; // [rsp+E8h] [rbp-F0h]
  double *v60; // [rsp+F0h] [rbp-E8h]
  __int64 v61; // [rsp+F8h] [rbp-E0h]
  int *v62; // [rsp+100h] [rbp-D8h]
  __int64 v63; // [rsp+108h] [rbp-D0h]
  float *v64; // [rsp+110h] [rbp-C8h]
  __int64 v65; // [rsp+118h] [rbp-C0h]
  int *v66; // [rsp+120h] [rbp-B8h]
  __int64 v67; // [rsp+128h] [rbp-B0h]
  BOOL *v68; // [rsp+130h] [rbp-A8h]
  __int64 v69; // [rsp+138h] [rbp-A0h]
  char *v70; // [rsp+140h] [rbp-98h]
  __int64 v71; // [rsp+148h] [rbp-90h]
  char *v72; // [rsp+150h] [rbp-88h]
  __int64 v73; // [rsp+158h] [rbp-80h]
  _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+160h] [rbp-78h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v75; // [rsp+170h] [rbp-68h] BYREF
  GUID *v76; // [rsp+180h] [rbp-58h]
  __int64 v77; // [rsp+188h] [rbp-50h]

  v45 = -2LL;
  v35 = a4;
  v40[0] = a3;
  v5 = a2;
  v6 = this;
  v38 = this;
  v41 = *(double *)&a2;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 12LL, a3, this, a3);
  }
  v36 = 0LL;
  ppv = 0LL;
  pwsz = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( !a3 )
  {
    Instance = -2147467261;
    goto LABEL_67;
  }
  if ( *((_DWORD *)v6 + 56) )
  {
    Instance = -2005139440;
    goto LABEL_67;
  }
  Instance = ValidateDevicePipeDescriptor(v5);
  if ( Instance < 0 )
    goto LABEL_67;
  v8 = *((_QWORD *)v5 + 4);
  if ( v8 > 20000000 )
  {
    Instance = -2147024809;
    goto LABEL_67;
  }
  *((_QWORD *)v6 + 12) = v8;
  *((_DWORD *)v6 + 27) = *((_DWORD *)v5 + 18);
  *((_DWORD *)v6 + 72) = *((_DWORD *)v5 + 34);
  *((_DWORD *)v6 + 73) = *((_DWORD *)v5 + 35);
  *((_OWORD *)v6 + 21) = *(_OWORD *)((char *)v5 + 148);
  v44 = (unsigned __int16 *)*((_QWORD *)v5 + 1);
  v9 = (int *)v44;
  *((_DWORD *)v6 + 74) = *((_DWORD *)v5 + 25);
  *((float *)v6 + 26) = (float)v9[1];
  Instance = CoCreateInstance(
               &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
               0LL,
               0x17u,
               &GUID_97ecdc10_b3b5_4dff_8dcc_abd71ac23c33,
               &ppv);
  if ( Instance >= 0 )
  {
    v47 = *((_QWORD *)v5 + 4);
    v48 = (float)v9[1];
    v49 = *((unsigned __int16 *)v9 + 1);
    v50 = *((_DWORD *)v5 + 25) == 1;
    Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)ppv + 24LL))(
                 ppv,
                 *((_QWORD *)v5 + 7),
                 &v47,
                 (__int64)v6 + 328);
    if ( Instance >= 0 )
    {
      v10 = (struct IAudioProcessor **)((char *)v6 + 112);
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
        Instance = (*(__int64 (__fastcall **)(struct IAudioProcessor *, bool, _QWORD))(*(_QWORD *)*v10 + 24LL))(
                     *v10,
                     *((_DWORD *)v6 + 27) != 0,
                     *((_QWORD *)v6 + 41));
        if ( Instance >= 0 )
        {
          Instance = CoCreateInstance(
                       &GUID_948cfd8c_1888_4e52_8703_99610347ebb6,
                       0LL,
                       0x17u,
                       &GUID_e7718603_dab8_40a0_bfbb_4f8c23d0e68f,
                       (LPVOID *)v6 + 15);
          if ( Instance < 0 )
          {
LABEL_86:
            v32 = *((_QWORD *)v6 + 14);
            if ( v32 )
            {
              *((_QWORD *)v6 + 14) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
            }
            v33 = *((_QWORD *)v6 + 15);
            if ( v33 )
            {
              *((_QWORD *)v6 + 15) = 0LL;
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v33 + 16LL))(v33);
            }
            goto LABEL_67;
          }
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
          {
            WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, v12, v6, *((_QWORD *)v6 + 15));
          }
          Instance = CPipeInstance::CreateDevicePipeInstance(
                       *v10,
                       *((struct IDeviceGraphObjectCache **)v6 + 41),
                       v5,
                       &v36);
          if ( Instance < 0 )
          {
            v15 = v36;
          }
          else
          {
            if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
              && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
              && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
            {
              v15 = v36;
              WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, v14, v6, v36);
            }
            else
            {
              v15 = v36;
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
              Instance = CPipeInstance::ConnectAPOs(v15, v40[0]);
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
                  Instance = CAudioDeviceGraph::InitializePump(v6, v15, (v35 & 0x400001) != 0);
                  if ( Instance >= 0 )
                  {
                    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
                      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
                      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
                    {
                      WPP_SF_qq(*((_QWORD *)WPP_GLOBAL_Control + 2), 19LL, v19, v6, v15);
                    }
                    lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 184);
                    v43 = 0;
                    ATL::CCritSecLock::Lock((ATL::CCritSecLock *)&lpCriticalSection);
                    Instance = 0;
                    try
                    {
                      v20 = *((_QWORD *)v6 + 17);
                      if ( !*((_QWORD *)v6 + 21) )
                      {
                        v21 = ATL::CAtlPlex::Create(
                                (struct ATL::CAtlPlex **)v6 + 20,
                                *((unsigned int *)v6 + 44),
                                0x18uLL);
                        if ( !v21 )
                          ATL::AtlThrowImpl(-2147024882);
                        v22 = *((_DWORD *)v6 + 44);
                        v23 = (_QWORD *)((char *)v21 + 16 * (v22 - 1) + 8 * (unsigned int)(v22 - 1) + 8);
                        for ( i = v22 - 1; i >= 0; --i )
                        {
                          *v23 = *((_QWORD *)v6 + 21);
                          *((_QWORD *)v6 + 21) = v23;
                          v23 -= 3;
                        }
                      }
                      v25 = (struct IAudioGraphCallback *)*((_QWORD *)v6 + 21);
                      v40[0] = v25;
                      v26 = *(_QWORD *)v25;
                      if ( v25 )
                        *((_QWORD *)v25 + 2) = v15;
                      *((_QWORD *)v6 + 21) = v26;
                      *((_QWORD *)v25 + 1) = 0LL;
                      *(_QWORD *)v25 = v20;
                      ++*((_QWORD *)v6 + 19);
                      v27 = *((_QWORD *)v6 + 17);
                      if ( v27 )
                        *(_QWORD *)(v27 + 8) = v25;
                      else
                        *((_QWORD *)v6 + 18) = v25;
                      *((_QWORD *)v6 + 17) = v25;
                    }
                    catch ( ATL::CAtlException *v46 )
                    {
                      v13 = &v34;
                      v31 = v46;
                      if ( *(_DWORD *)v46 == -1073741571 )
                        _resetstkoflw();
                      v35 = *(_DWORD *)v31;
                      Instance = v35;
                      if ( v35 < 0 )
                      {
                        if ( v43 )
                          LeaveCriticalSection(lpCriticalSection);
                        v6 = v38;
                        goto LABEL_65;
                      }
                      v15 = v36;
                      v6 = v38;
                      v5 = *(struct AUDIO_DEVICE_PIPE_DESCRIPTOR **)&v41;
                    }
                    v28 = v44;
                    if ( v43 )
                      LeaveCriticalSection(lpCriticalSection);
                    *((_QWORD *)v6 + 16) = v15;
                    *((_DWORD *)v6 + 56) = 1;
                    *((_DWORD *)v6 + 20) = 0;
                    mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v5 + 7), &pwsz);
                    if ( *v28 == 0xFFFE )
                    {
                      v51 = *(GUID *)(v28 + 12);
                    }
                    else
                    {
                      v51 = GUID_00000000_0000_0010_8000_00aa00389b71;
                      v51.Data1 = *v28;
                    }
                    if ( (unsigned int)dword_1400540B0 <= 4
                      || (qword_1400540C0 & 0x400000000000LL) == 0
                      || (qword_1400540C8 & 0x400000000000LL) != qword_1400540C8 )
                    {
LABEL_66:
                      if ( Instance >= 0 )
                        goto LABEL_67;
                      goto LABEL_84;
                    }
                    v58 = (char *)v6 + 336;
                    v59 = 16LL;
                    v41 = (double)(int)*((_QWORD *)v6 + 12) / 10000000.0;
                    v60 = &v41;
                    v61 = 8LL;
                    v35 = *((_DWORD *)v6 + 27);
                    v62 = &v35;
                    v63 = 4LL;
                    v64 = &v48;
                    v65 = 4LL;
                    v66 = &v49;
                    v67 = 4LL;
                    v68 = &v50;
                    v69 = 4LL;
                    v70 = (char *)v5 + 104;
                    v71 = 16LL;
                    v72 = (char *)v5 + 120;
                    v73 = 16LL;
                    TlgCreateWsz(&pDesc, *((LPCWSTR *)v5 + 7));
                    TlgCreateWsz(&v75, pwsz);
                    v76 = &v51;
                    v77 = 16LL;
                    LODWORD(v40[0]) = ((unsigned int)&unk_140045D31 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
                    HIDWORD(v40[0]) = 4;
                    v40[1] = v29;
                    v52 = off_1400540B8;
                    v53 = *(unsigned __int16 *)off_1400540B8;
                    v54 = 2;
                    v55 = &unk_140045D3C;
                    v56 = 191;
                    v57 = 1;
                    EtwEventWriteTransfer(qword_1400540D0, v40, 0LL, 0LL, 13, &v52);
LABEL_65:
                    v15 = v36;
                    goto LABEL_66;
                  }
                }
              }
            }
          }
LABEL_84:
          if ( v15 )
            CPipeInstance::`scalar deleting destructor'(v15, (unsigned int)v13);
          goto LABEL_86;
        }
      }
    }
  }
LABEL_67:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( Instance < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        20LL,
        &WPP_58530928d9fd374fdb29ea4f3e815982_Traceguids,
        (unsigned int)Instance);
    }
    AudDGTraceLoggingErrorHelper("CAudioDeviceGraph::Initialize", 0x119u, Instance);
  }
  CoTaskMemFree((LPVOID)pwsz);
  pwsz = 0LL;
  if ( ppv )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv + 16LL))(ppv);
  return (unsigned int)Instance;
}
