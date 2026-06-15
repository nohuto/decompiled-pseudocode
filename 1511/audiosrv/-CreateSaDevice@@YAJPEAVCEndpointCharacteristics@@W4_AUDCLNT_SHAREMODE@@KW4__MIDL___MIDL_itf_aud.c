/*
 * XREFs of ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18008BBE8
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18000B4D0 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 * Callees:
 *     WPP_SF_ @ 0x1800025C0 (WPP_SF_.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18000EE10 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ??1?$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ @ 0x18000EFF0 (--1-$CComPtr@VCVolumeStrip@@@ATL@@QEAA@XZ.c)
 *     ?IsMeterAPORequired@CVolumeStrip@@QEAA_NXZ @ 0x18000F218 (-IsMeterAPORequired@CVolumeStrip@@QEAA_NXZ.c)
 *     ?IsVolumeAPORequired@CVolumeStrip@@QEAA_NXZ @ 0x18000F254 (-IsVolumeAPORequired@CVolumeStrip@@QEAA_NXZ.c)
 *     ?IsMuteAPORequired@CVolumeStrip@@QEAA_NXZ @ 0x18000F290 (-IsMuteAPORequired@CVolumeStrip@@QEAA_NXZ.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012A90 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z @ 0x180012DC8 (-GetEndpointId@CEndpointCharacteristics@@QEAAJPEAPEAG@Z.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x180013690 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180013764 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x1800137F0 (-AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ??1?$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ @ 0x180037F60 (--1-$CComPtr@UIKsGetProposedFormat@@@ATL@@QEAA@XZ.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ??1?$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ @ 0x180039564 (--1-$CComHeapPtr@USTREAM_GROUP_DESCRIPTOR@@@ATL@@QEAA@XZ.c)
 *     ?Allocate@CComAllocator@ATL@@SAPEAX_K@Z @ 0x1800398EC (-Allocate@CComAllocator@ATL@@SAPEAX_K@Z.c)
 *     ??1?$CComPtr@UIAudioDeviceGraph@@@ATL@@QEAA@XZ @ 0x180039988 (--1-$CComPtr@UIAudioDeviceGraph@@@ATL@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x180048AAC (WPP_SF_q.c)
 *     _TlgWrite @ 0x180069F24 (_TlgWrite.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180086890 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A65CC (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CreateSaDevice(
        struct CEndpointCharacteristics *this,
        enum _AUDCLNT_SHAREMODE a2,
        unsigned int a3,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a4,
        struct _GUID *a5,
        struct _GUID *a6,
        __int64 a7,
        __int64 a8,
        struct tWAVEFORMATEX *a9,
        const struct tWAVEFORMATEX *a10,
        struct _GUID *a11,
        bool a12,
        struct IAudioDeviceGraph **a13)
{
  __int64 v13; // r15
  GUID v16; // xmm6
  GUID v17; // xmm7
  char *v18; // rdi
  CVolumeStrip *v19; // rsi
  int EndpointId; // ebx
  const GUID *v21; // r8
  const GUID *v22; // r9
  TraceLoggingHProvider v23; // rcx
  BOOL v24; // ebx
  BOOL v25; // r12d
  BOOL v26; // edi
  BOOL v27; // edx
  __int64 v28; // r12
  __int64 v29; // rax
  __int64 v30; // rcx
  __int64 v31; // rcx
  unsigned __int16 v32; // dx
  int v33; // r14d
  struct tWAVEFORMATEX *v34; // rax
  int v35; // eax
  GUID *v36; // rax
  int v37; // eax
  BOOL v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // r14
  __int64 v41; // rcx
  unsigned int v42; // ecx
  unsigned int v43; // ecx
  int v44; // edx
  BOOL v45; // r8d
  BOOL v46; // r10d
  unsigned int v47; // ecx
  IUnknown *v48; // r9
  struct IAudioSystemEffects2 **cData; // [rsp+28h] [rbp-E0h]
  BOOL v51; // [rsp+48h] [rbp-C0h]
  BOOL v52; // [rsp+4Ch] [rbp-BCh]
  BOOL v53; // [rsp+50h] [rbp-B8h]
  IUnknown *pProxy; // [rsp+58h] [rbp-B0h] BYREF
  LPVOID ppv; // [rsp+60h] [rbp-A8h] BYREF
  enum _AUDCLNT_SHAREMODE v56; // [rsp+68h] [rbp-A0h]
  unsigned int v57; // [rsp+6Ch] [rbp-9Ch]
  LPVOID v58[3]; // [rsp+70h] [rbp-98h] BYREF
  struct tWAVEFORMATEX *v59; // [rsp+88h] [rbp-80h]
  CVolumeStrip *v60; // [rsp+90h] [rbp-78h] BYREF
  struct _GUID *v61; // [rsp+98h] [rbp-70h]
  struct IAudioDeviceGraph **v62; // [rsp+A0h] [rbp-68h]
  char *v63; // [rsp+A8h] [rbp-60h]
  __int64 v64; // [rsp+B0h] [rbp-58h]
  struct _GUID v65; // [rsp+B8h] [rbp-50h] BYREF
  struct _GUID v66; // [rsp+C8h] [rbp-40h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-30h] BYREF
  LPVOID *v68; // [rsp+F8h] [rbp-10h]
  int v69; // [rsp+100h] [rbp-8h]
  int v70; // [rsp+104h] [rbp-4h]

  v64 = -2LL;
  v13 = a4;
  v57 = a3;
  v56 = a2;
  v61 = a6;
  v59 = a9;
  v62 = a13;
  v53 = 0;
  v51 = 0;
  v52 = 0;
  v58[0] = 0LL;
  v16 = GUID_00000000_0000_0000_0000_000000000000;
  v65 = GUID_00000000_0000_0000_0000_000000000000;
  v17 = GUID_00000000_0000_0000_0000_000000000000;
  v66 = GUID_00000000_0000_0000_0000_000000000000;
  v18 = 0LL;
  v63 = 0LL;
  ppv = 0LL;
  pProxy = 0LL;
  v19 = 0LL;
  v60 = 0LL;
  EndpointId = CEndpointCharacteristics::GetEndpointId(this, (unsigned __int16 **)v58);
  if ( EndpointId < 0 )
    goto LABEL_134;
  if ( !(_DWORD)v13 )
  {
LABEL_15:
    v23 = WPP_GLOBAL_Control;
    goto LABEL_16;
  }
  if ( (_DWORD)v13 != 1 )
  {
    if ( (unsigned int)(v13 - 2) > 1 )
    {
LABEL_39:
      v58[1] = *(LPVOID *)&v65.Data1;
      *(_QWORD *)&v65.Data1 = *(_QWORD *)&v66.Data1;
      v28 = *(_QWORD *)v65.Data4;
LABEL_40:
      v31 = 1LL;
      goto LABEL_41;
    }
    goto LABEL_15;
  }
  v23 = WPP_GLOBAL_Control;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Du, (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids);
    v23 = WPP_GLOBAL_Control;
  }
  if ( (unsigned int)dword_1800E5500 > 4 )
  {
    LODWORD(v58[1]) = a12;
    v68 = &v58[1];
    v69 = 4;
    v70 = 0;
    TlgWrite(v23, &unk_1800C4B0C, v21, v22, 3u, &pData);
    v23 = WPP_GLOBAL_Control;
  }
  if ( !a12 && g_AudioSrvEnableInProcOffloadIfPossible )
    goto LABEL_39;
LABEL_16:
  if ( a2 )
    goto LABEL_39;
  if ( !g_pVolumeProvider )
  {
    EndpointId = -2147418113;
    goto LABEL_135;
  }
  EndpointId = CVolumeProvider::GetDeviceVolumeStrip(
                 g_pVolumeProvider,
                 (const unsigned __int16 *)v58[0],
                 (PCNZWCH **)&v60);
  if ( EndpointId < 0 )
  {
LABEL_134:
    v23 = WPP_GLOBAL_Control;
    goto LABEL_135;
  }
  v19 = v60;
  v24 = (unsigned __int8)CVolumeStrip::IsVolumeAPORequired(v60) != 0;
  v53 = v24;
  v25 = (unsigned __int8)CVolumeStrip::IsMuteAPORequired(v19) != 0;
  v51 = v25;
  v26 = (unsigned __int8)CVolumeStrip::IsMeterAPORequired(v19) != 0;
  v52 = v26;
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v13 != 3 )
      goto LABEL_39;
  }
  if ( *((_DWORD *)this + v13 + 10) )
  {
    if ( *(_QWORD *)&a5->Data1 != *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
      || *(_QWORD *)a5->Data4 != *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
      || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                          this,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13) )
    {
      *(struct _GUID *)&v58[1] = *v61;
      CEndpointCharacteristics::GetModeEffect(
        this,
        (struct _GUID *)&v58[1],
        0,
        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
        &v65,
        0LL,
        0LL);
      v16 = v65;
    }
    CEndpointCharacteristics::GetEndpointEffect(
      this,
      0,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
      &v66,
      0LL,
      0LL);
    v17 = v66;
  }
  else
  {
    CEndpointCharacteristics::GetGfx(
      this,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
      &v65,
      0LL,
      cData);
    v16 = v65;
  }
  v27 = v24 || v25;
  v58[1] = *(LPVOID *)&v16.Data1;
  v28 = *(_QWORD *)v65.Data4;
  v29 = *(_QWORD *)&v16.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v16.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v29 = *(_QWORD *)v65.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  *(_QWORD *)&v65.Data1 = *(_QWORD *)&v17.Data1;
  v30 = *(_QWORD *)&v17.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v17.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v30 = *(_QWORD *)v66.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v31 = v27 + v26 + (v30 != 0) + (unsigned int)(v29 != 0);
  if ( !(_DWORD)v31 )
    goto LABEL_40;
LABEL_41:
  v18 = (char *)ATL::CComAllocator::Allocate(16 * (v31 + 10));
  v63 = v18;
  if ( !v18 )
  {
    EndpointId = -2147024882;
    goto LABEL_134;
  }
  if ( v56 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( (_DWORD)v13 == 1 )
    {
      if ( a12 || !g_AudioSrvEnableInProcOffloadIfPossible )
      {
        EndpointId = CoCreateInstance(
                       &GUID_c994009c_34d3_4c9d_90ae_8dd53f521058,
                       0LL,
                       0x17u,
                       &GUID_00000000_0000_0000_c000_000000000046,
                       &ppv);
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v32 = 32;
          goto LABEL_61;
        }
      }
      else
      {
        EndpointId = CoCreateInstance(
                       &GUID_4654b883_10c0_4524_96b6_7d997104dcf0,
                       0LL,
                       0x17u,
                       &GUID_00000000_0000_0000_c000_000000000046,
                       &ppv);
        v23 = WPP_GLOBAL_Control;
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          v32 = 31;
LABEL_61:
          WPP_SF_D(*((_QWORD *)v23 + 2), v32, (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, EndpointId);
          v23 = WPP_GLOBAL_Control;
        }
      }
    }
    else
    {
      EndpointId = CoCreateInstance(
                     &GUID_89115307_8248_448f_ada0_f3f3718a9b2a,
                     0LL,
                     0x17u,
                     &GUID_00000000_0000_0000_c000_000000000046,
                     &ppv);
      v23 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v32 = 33;
        goto LABEL_61;
      }
    }
    if ( EndpointId >= 0 )
      goto LABEL_63;
LABEL_135:
    if ( v23 != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)v23 + 7) & 0x40000) != 0
      && *((_BYTE *)v23 + 25) >= 2u )
    {
      WPP_SF_D(*((_QWORD *)v23 + 2), 0x24u, (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids, EndpointId);
    }
    goto LABEL_139;
  }
  EndpointId = CoCreateInstance(
                 &GUID_75269c13_41e1_4d0e_b8a0_9f8f22e246c9,
                 0LL,
                 0x17u,
                 &GUID_00000000_0000_0000_c000_000000000046,
                 &ppv);
  if ( EndpointId < 0 )
    goto LABEL_134;
LABEL_63:
  EndpointId = (**(__int64 (__fastcall ***)(LPVOID, GUID *, IUnknown **))ppv)(
                 ppv,
                 &GUID_42eb6c09_7f95_415f_9f57_900343701309,
                 &pProxy);
  if ( EndpointId < 0 )
    goto LABEL_134;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x22u,
      (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
      (__int64)pProxy);
  }
  v33 = -1;
  EndpointId = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( EndpointId < 0 )
    goto LABEL_134;
  v34 = v59;
  *((_QWORD *)v18 + 1) = v59;
  *(_DWORD *)v18 = v34->cbSize + 18;
  if ( a10 )
  {
    *((_QWORD *)v18 + 3) = a10;
    *((_DWORD *)v18 + 4) = a10->cbSize + 18;
  }
  else
  {
    *((_QWORD *)v18 + 3) = 0LL;
    *((_DWORD *)v18 + 4) = 0;
  }
  v35 = 1;
  if ( (_DWORD)v13 != 2 )
    v35 = *((_DWORD *)this + 93);
  *((_DWORD *)v18 + 18) = v35;
  *((LPVOID *)v18 + 7) = v58[0];
  *((_QWORD *)v18 + 4) = a7;
  *((_QWORD *)v18 + 5) = a8;
  *((_DWORD *)v18 + 23) = 0;
  *((_DWORD *)v18 + 20) = 0;
  *((_DWORD *)v18 + 19) = v57;
  *((_DWORD *)v18 + 24) = v13;
  *((_DWORD *)v18 + 21) = -1;
  *((_DWORD *)v18 + 22) = -1;
  if ( (_DWORD)v13 == 2 || !*((_DWORD *)this + v13 + 10) || (v36 = a5, *((_DWORD *)this + 100)) )
    v36 = &GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)(v18 + 100) = *v36;
  *(struct _GUID *)(v18 + 116) = *v61;
  *((_DWORD *)v18 + 33) = CEndpointCharacteristics::HasHardwareAudioEngine(this);
  *((_DWORD *)v18 + 12) = *((_DWORD *)this + 92);
  v37 = CEndpointCharacteristics::AreEffectsDisabled(this);
  if ( v37 || v56 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    v37 = 1;
  *((_DWORD *)v18 + 35) = v37;
  v38 = *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1
     && *(_QWORD *)a5->Data4 == *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4
     && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                        this,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13);
  *((_DWORD *)v18 + 34) = v38;
  *((struct _GUID *)v18 + 9) = *a11;
  if ( !(_DWORD)v13 || (_DWORD)v13 == 3 )
  {
    if ( *((_DWORD *)this + v13 + 10) )
    {
      if ( v58[1] != *(LPVOID *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || v28 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        v39 = *((_DWORD *)v18 + 23);
        if ( v39 > 0x1F )
        {
LABEL_92:
          EndpointId = -2147418113;
          goto LABEL_134;
        }
        *((_DWORD *)v18 + 20) |= 1 << v39;
        *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = v16;
      }
      v40 = *(_QWORD *)&v65.Data1;
      if ( *(_QWORD *)&v65.Data1 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || (v41 = *(_QWORD *)v66.Data4,
            *(_QWORD *)v66.Data4 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4) )
      {
        EndpointId = ValidateUncompressedWaveFormatEx(v59);
        if ( !EndpointId )
        {
          v42 = *((_DWORD *)v18 + 23);
          if ( v42 > 0x1F )
            goto LABEL_92;
          *((_DWORD *)v18 + 20) |= 1 << v42;
          *((_DWORD *)v18 + 22) = *((_DWORD *)v18 + 23);
          *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = v17;
        }
        v41 = *(_QWORD *)v66.Data4;
      }
      if ( v52 )
        *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      if ( v53 || v51 )
        *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      if ( (v40 != *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1
         || v41 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4)
        && EndpointId == 1 )
      {
        v43 = *((_DWORD *)v18 + 23);
        if ( v43 > 0x1F )
          goto LABEL_92;
        *((_DWORD *)v18 + 20) |= 1 << v43;
        *((_DWORD *)v18 + 21) = *((_DWORD *)v18 + 23);
        *((_DWORD *)v18 + 22) = *((_DWORD *)v18 + 23);
        *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = v17;
      }
    }
    else
    {
      v44 = ValidateUncompressedWaveFormatEx(v59);
      if ( v44 == 1 )
      {
        if ( v52 )
          *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        v45 = v53;
        v46 = v51;
        if ( v53 || v51 )
          *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      }
      else
      {
        v45 = v53;
        v46 = v51;
      }
      if ( v58[1] != *(LPVOID *)&GUID_00000000_0000_0000_0000_000000000000.Data1
        || v28 != *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4 )
      {
        v47 = *((_DWORD *)v18 + 23);
        if ( v47 > 0x1F )
          goto LABEL_92;
        *((_DWORD *)v18 + 20) |= 1 << v47;
        if ( v44 == 1 )
          v33 = *((_DWORD *)v18 + 23);
        *((_DWORD *)v18 + 21) = v33;
        *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = v16;
      }
      if ( !v44 )
      {
        if ( v52 )
          *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        if ( v45 || v46 )
          *(GUID *)&v18[16 * (*((_DWORD *)v18 + 23))++ + 160] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      }
    }
  }
  EndpointId = ((__int64 (__fastcall *)(IUnknown *, char *, CVolumeStrip *, _QWORD))pProxy->lpVtbl[1].QueryInterface)(
                 pProxy,
                 v18,
                 v19,
                 v57);
  if ( EndpointId < 0 )
    goto LABEL_134;
  v48 = pProxy;
  pProxy = 0LL;
  *v62 = (struct IAudioDeviceGraph *)v48;
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      0x23u,
      (__int64)&WPP_b9a3bc60c8507b6458a47eddc52b3d2c_Traceguids,
      (__int64)v48);
  }
LABEL_139:
  ATL::CComPtr<CVolumeStrip>::~CComPtr<CVolumeStrip>(&v60);
  ATL::CComPtr<IAudioDeviceGraph>::~CComPtr<IAudioDeviceGraph>(&pProxy);
  ATL::CComPtr<IKsGetProposedFormat>::~CComPtr<IKsGetProposedFormat>(&ppv);
  CoTaskMemFree(v18);
  ATL::CComHeapPtr<STREAM_GROUP_DESCRIPTOR>::~CComHeapPtr<STREAM_GROUP_DESCRIPTOR>(v58);
  return (unsigned int)EndpointId;
}
