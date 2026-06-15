/*
 * XREFs of ?Initialize@CAudioDeviceGraph@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000FD30
 * Callers:
 *     ?Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphCallback@@K@Z @ 0x14000E690 (-Initialize@CSystemAudioDeviceSharedNew@@UEAAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAUIAudioGraphC.c)
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344 (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     _TlgWrite @ 0x140002780 (_TlgWrite.c)
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 *     ?AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ @ 0x1400061C0 (-AddConnectionsAndActivateAPOs@CPipeInstance@@QEAAJXZ.c)
 *     ?Initialize@CPipeInstance@@QEAAJXZ @ 0x140006C70 (-Initialize@CPipeInstance@@QEAAJXZ.c)
 *     ??_GCPipeInstance@@QEAAPEAXI@Z @ 0x14000866C (--_GCPipeInstance@@QEAAPEAXI@Z.c)
 *     ?CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@PEAPEAV1@@Z @ 0x14000BAF0 (-CreateDevicePipeInstance@CPipeInstance@@SAJPEAUIAudioProcessor@@PEAUIDeviceGraphObjectCache@@PE.c)
 *     ?InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z @ 0x14000EF50 (-InitializePump@CAudioDeviceGraph@@AEAAJPEAVCPipeInstance@@_N@Z.c)
 *     ?Lock@CCritSecLock@ATL@@QEAAXXZ @ 0x140010670 (-Lock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z @ 0x140012F30 (-Create@CAtlPlex@ATL@@SAPEAU12@AEAPEAU12@_K1@Z.c)
 *     ?ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z @ 0x140018138 (-ValidateDevicePipeDescriptor@@YAJPEAUAUDIO_DEVICE_PIPE_DESCRIPTOR@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     _TlgCreateWsz @ 0x14001889C (_TlgCreateWsz.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x140026EE0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     WPP_SF_qq @ 0x140032EF8 (WPP_SF_qq.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioDeviceGraph::Initialize(
        CAudioDeviceGraph *this,
        struct AUDIO_DEVICE_PIPE_DESCRIPTOR *a2,
        struct IAudioGraphCallback *a3,
        int a4)
{
  CAudioDeviceGraph *v6; // r14
  int Instance; // esi
  __int64 v8; // rax
  __int64 v9; // rcx
  struct IUnknown **v10; // r13
  __int64 v11; // r8
  __int64 v12; // r8
  LPCRITICAL_SECTION v13; // rdi
  __int64 v14; // r8
  CPipeInstance *v15; // rbx
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
  LPCGUID v29; // r8
  LPCGUID v30; // r9
  ATL::CAtlException *v31; // rbx
  int v32; // [rsp+30h] [rbp-158h] BYREF
  struct CPipeInstance *v33; // [rsp+38h] [rbp-150h] BYREF
  BOOL v34; // [rsp+40h] [rbp-148h]
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-140h] BYREF
  char v36; // [rsp+50h] [rbp-138h]
  double v37; // [rsp+58h] [rbp-130h] BYREF
  struct IAudioGraphCallback *v38; // [rsp+60h] [rbp-128h]
  CAudioDeviceGraph *v39; // [rsp+68h] [rbp-120h]
  LPVOID ppv[2]; // [rsp+70h] [rbp-118h] BYREF
  ATL::CAtlException *v41; // [rsp+80h] [rbp-108h] BYREF
  __int64 v42; // [rsp+88h] [rbp-100h] BYREF
  float v43; // [rsp+90h] [rbp-F8h] BYREF
  int v44; // [rsp+94h] [rbp-F4h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+A0h] [rbp-E8h] BYREF
  char *v46; // [rsp+C0h] [rbp-C8h]
  __int64 v47; // [rsp+C8h] [rbp-C0h]
  double *v48; // [rsp+D0h] [rbp-B8h]
  __int64 v49; // [rsp+D8h] [rbp-B0h]
  int *v50; // [rsp+E0h] [rbp-A8h]
  __int64 v51; // [rsp+E8h] [rbp-A0h]
  float *v52; // [rsp+F0h] [rbp-98h]
  __int64 v53; // [rsp+F8h] [rbp-90h]
  int *v54; // [rsp+100h] [rbp-88h]
  __int64 v55; // [rsp+108h] [rbp-80h]
  LONG *p_RecursionCount; // [rsp+110h] [rbp-78h]
  __int64 v57; // [rsp+118h] [rbp-70h]
  char *v58; // [rsp+120h] [rbp-68h]
  __int64 v59; // [rsp+128h] [rbp-60h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+130h] [rbp-58h] BYREF

  ppv[1] = (LPVOID)-2LL;
  v32 = a4;
  v38 = a3;
  lpCriticalSection = (LPCRITICAL_SECTION)a2;
  v6 = this;
  v39 = this;
  v37 = *(double *)&a2;
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 12LL, a3, this, a3);
  }
  v33 = 0LL;
  ppv[0] = 0LL;
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( !a3 )
  {
    Instance = -2147467261;
    goto LABEL_61;
  }
  if ( *((_DWORD *)v6 + 56) )
  {
    Instance = -2005139440;
    goto LABEL_61;
  }
  Instance = ValidateDevicePipeDescriptor(a2);
  if ( Instance >= 0 )
  {
    v8 = *((_QWORD *)a2 + 4);
    if ( v8 > 10000000 )
    {
      Instance = -2147024809;
      goto LABEL_61;
    }
    *((_QWORD *)v6 + 12) = v8;
    *((_DWORD *)v6 + 27) = *((_DWORD *)a2 + 16);
    *((_DWORD *)v6 + 72) = *((_DWORD *)a2 + 31);
    *((_DWORD *)v6 + 73) = *((_DWORD *)a2 + 32);
    *(_OWORD *)((char *)v6 + 328) = *(_OWORD *)((char *)a2 + 136);
    Instance = CoCreateInstance(
                 &GUID_de83650f_8ce4_40ea_a08e_6f0e5cd46f6b,
                 0LL,
                 0x17u,
                 &GUID_b26cab77_1d9a_4a62_afe8_31268489def9,
                 ppv);
    if ( Instance >= 0 )
    {
      v42 = *((_QWORD *)a2 + 4);
      v9 = *((_QWORD *)a2 + 1);
      v43 = (float)*(int *)(v9 + 4);
      v44 = *(unsigned __int16 *)(v9 + 2);
      Instance = (*(__int64 (__fastcall **)(LPVOID, _QWORD, __int64 *, __int64))(*(_QWORD *)ppv[0] + 24LL))(
                   ppv[0],
                   *((_QWORD *)a2 + 7),
                   &v42,
                   (__int64)v6 + 320);
      if ( Instance >= 0 )
      {
        v10 = (struct IUnknown **)((char *)v6 + 112);
        Instance = CoCreateInstance(
                     &GUID_e1150ce9_5bd4_4044_8fe9_98cf40137a41,
                     0LL,
                     0x17u,
                     &GUID_6683b02d_3931_487c_ac86_a0f42493c3c3,
                     (LPVOID *)v6 + 14);
        if ( Instance >= 0 )
        {
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
          {
            WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 13LL, v11, v6, *v10);
          }
          v34 = *((_DWORD *)v6 + 27) != 0;
          Instance = ((__int64 (__fastcall *)(struct IUnknown *, BOOL, _QWORD))(*v10)->lpVtbl[1].QueryInterface)(
                       *v10,
                       v34,
                       *((_QWORD *)v6 + 40));
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
LABEL_82:
              ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)v6 + 14);
              ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)v6 + 15);
              goto LABEL_61;
            }
            if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
              && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
              && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
            {
              WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 14LL, v12, v6, *((_QWORD *)v6 + 15));
            }
            v13 = lpCriticalSection;
            Instance = CPipeInstance::CreateDevicePipeInstance(
                         *v10,
                         *((struct IUnknown **)v6 + 40),
                         (struct AUDIO_DEVICE_PIPE_DESCRIPTOR *)lpCriticalSection,
                         &v33);
            if ( Instance < 0 )
            {
              v15 = v33;
            }
            else
            {
              if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
              {
                v15 = v33;
                WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 15LL, v14, v6, v33);
              }
              else
              {
                v15 = v33;
              }
              Instance = CPipeInstance::Initialize(v15);
              if ( Instance >= 0 )
              {
                if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                  && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                  && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                {
                  WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 16LL, v16, v6, v15);
                }
                Instance = CPipeInstance::ConnectAPOs(v15, v38);
                if ( Instance >= 0 )
                {
                  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                  {
                    WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 17LL, v17, v6, v15);
                  }
                  Instance = CPipeInstance::AddConnectionsAndActivateAPOs(v15);
                  if ( Instance >= 0 )
                  {
                    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                    {
                      WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 18LL, v18, v6, v15);
                    }
                    Instance = CAudioDeviceGraph::InitializePump(v6, v15, (v32 & 0x400000) != 0);
                    if ( Instance >= 0 )
                    {
                      if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
                        && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
                        && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
                      {
                        WPP_SF_qq(*(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL), 19LL, v19, v6, v15);
                      }
                      lpCriticalSection = (LPCRITICAL_SECTION)((char *)v6 + 184);
                      v36 = 0;
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
                        v38 = v25;
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
                      catch ( ATL::CAtlException *v41 )
                      {
                        v31 = v41;
                        if ( *(_DWORD *)v41 == -1073741571 )
                          _resetstkoflw();
                        v32 = *(_DWORD *)v31;
                        Instance = v32;
                        if ( v32 < 0 )
                        {
                          if ( v36 )
                            LeaveCriticalSection(lpCriticalSection);
                          v15 = v33;
                          v6 = v39;
                          goto LABEL_60;
                        }
                        v15 = v33;
                        v13 = *(LPCRITICAL_SECTION *)&v37;
                        v6 = v39;
                      }
                      if ( v36 )
                        LeaveCriticalSection(lpCriticalSection);
                      *((_QWORD *)v6 + 16) = v15;
                      *((_DWORD *)v6 + 56) = 1;
                      *((_DWORD *)v6 + 20) = 0;
                      if ( hProvider > 5u
                        && (qword_1400552A0 & 0x400000000000LL) != 0
                        && (qword_1400552A8 & 0x400000000000LL) == qword_1400552A8 )
                      {
                        v46 = (char *)v6 + 328;
                        v47 = 16LL;
                        v37 = (double)(int)*((_QWORD *)v6 + 12) / 10000000.0;
                        v48 = &v37;
                        v49 = 8LL;
                        v32 = *((_DWORD *)v6 + 27);
                        v50 = &v32;
                        v51 = 4LL;
                        v52 = &v43;
                        v53 = 4LL;
                        v54 = &v44;
                        v55 = 4LL;
                        p_RecursionCount = &v13[2].RecursionCount;
                        v57 = 16LL;
                        v58 = (char *)&v13[2].LockSemaphore + 4;
                        v59 = 16LL;
                        TlgCreateWsz(&pDesc, (LPCWSTR)v13[1].OwningThread);
                        TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1400456AE, v29, v30, 0xAu, &pData);
                      }
LABEL_60:
                      if ( Instance >= 0 )
                        goto LABEL_61;
                    }
                  }
                }
              }
            }
            if ( v15 )
              CPipeInstance::`scalar deleting destructor'(v15);
            goto LABEL_82;
          }
        }
      }
    }
  }
LABEL_61:
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)v6 + 232));
  if ( Instance < 0
    && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      20LL,
      &WPP_0cbafece5984d0b03ea3beb92e207a80_Traceguids,
      (unsigned int)Instance);
  }
  if ( ppv[0] )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)ppv[0] + 16LL))(ppv[0]);
  return (unsigned int)Instance;
}
