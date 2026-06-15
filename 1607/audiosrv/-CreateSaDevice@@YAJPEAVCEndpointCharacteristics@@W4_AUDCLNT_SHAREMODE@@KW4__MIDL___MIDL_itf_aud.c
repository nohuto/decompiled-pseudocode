/*
 * XREFs of ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53_NPEAPEAUIAudioDeviceGraph@@@Z @ 0x18002AAA0
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x18002277C (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x180018430 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B27C (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@@Z @ 0x18001BD38 (-CanBuildProcessingModesOnRawConnector@CEndpointCharacteristics@@QEAAHW4__MIDL___MIDL_itf_audioe.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x18001C23C (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x18001C2A4 (-AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002B7C0 (-GetDeviceVolumeStrip@CVolumeProvider@@UEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     WPP_SF_q @ 0x180038C50 (WPP_SF_q.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     WPP_SF_ @ 0x180054338 (WPP_SF_.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x1800700B8 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088D68 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
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
  __int64 v13; // rsi
  char *v16; // rbx
  HRESULT v17; // edi
  const GUID *v18; // r8
  const GUID *v19; // r9
  bool v20; // r15
  __int64 (__fastcall *v21)(CVolumeProvider *__hidden, const unsigned __int16 *, struct CVolumeStrip **); // rax
  int DeviceVolumeStrip; // eax
  BOOL v23; // ebx
  BOOL v24; // edi
  __int64 v25; // rax
  BOOL v26; // r11d
  __int64 v27; // rax
  __int64 v28; // rcx
  unsigned int v29; // ecx
  unsigned __int64 v30; // rax
  unsigned int v31; // eax
  int v32; // r15d
  struct tWAVEFORMATEX *v33; // rax
  int v34; // eax
  GUID *v35; // rax
  int v36; // eax
  __int64 v37; // rax
  BOOL v38; // eax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rax
  struct _GUID v42; // xmm1
  __int64 v43; // rcx
  IUnknown *v44; // r9
  void (*v45)(void); // rax
  unsigned int v47; // eax
  CAudioSession *v48; // rcx
  __int64 v49; // rdx
  unsigned int v50; // ecx
  unsigned int v51; // ecx
  unsigned int v52; // ecx
  int v53; // edx
  BOOL v54; // ecx
  BOOL v55; // r8d
  BOOL v56; // r9d
  __int64 v57; // rax
  unsigned int v58; // ecx
  struct IAudioSystemEffects2 **ppv; // [rsp+20h] [rbp-E0h]
  BOOL v60; // [rsp+40h] [rbp-C0h]
  BOOL v61; // [rsp+44h] [rbp-BCh]
  BOOL v62; // [rsp+48h] [rbp-B8h]
  __int64 v63; // [rsp+50h] [rbp-B0h] BYREF
  CVolumeStrip *v64; // [rsp+58h] [rbp-A8h] BYREF
  IUnknown *pProxy; // [rsp+60h] [rbp-A0h] BYREF
  LPVOID v66; // [rsp+68h] [rbp-98h] BYREF
  unsigned int v67; // [rsp+70h] [rbp-90h]
  LPVOID pv; // [rsp+78h] [rbp-88h] BYREF
  struct _GUID v69; // [rsp+80h] [rbp-80h] BYREF
  struct tWAVEFORMATEX *v70; // [rsp+90h] [rbp-70h]
  char *v71; // [rsp+98h] [rbp-68h]
  struct _GUID *v72; // [rsp+A0h] [rbp-60h]
  struct IAudioDeviceGraph **v73; // [rsp+A8h] [rbp-58h]
  __int64 v74; // [rsp+B0h] [rbp-50h]
  struct _GUID v75; // [rsp+B8h] [rbp-48h] BYREF
  struct _GUID v76; // [rsp+C8h] [rbp-38h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp-28h] BYREF
  __int64 *v78; // [rsp+F8h] [rbp-8h]
  __int64 v79; // [rsp+100h] [rbp+0h]

  v74 = -2LL;
  v13 = a4;
  v67 = a3;
  v72 = a6;
  v70 = a9;
  v73 = a13;
  v62 = 0;
  v61 = 0;
  v60 = 0;
  pv = 0LL;
  v76 = GUID_00000000_0000_0000_0000_000000000000;
  v75 = GUID_00000000_0000_0000_0000_000000000000;
  v16 = 0LL;
  v71 = 0LL;
  v66 = 0LL;
  pProxy = 0LL;
  v64 = 0LL;
  v17 = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(*((_QWORD *)this + 2), &pv);
  if ( v17 < 0 )
    goto LABEL_156;
  v20 = a12;
  if ( !(_DWORD)v13 )
    goto LABEL_3;
  if ( (_DWORD)v13 == 1 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 25LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids);
    }
    if ( dword_1800CA040 > 4u )
    {
      LODWORD(v63) = a12;
      v78 = &v63;
      v79 = 4LL;
      TlgWrite((TraceLoggingHProvider)&dword_1800CA040, &unk_1800A8374, v18, v19, 3u, &pData);
    }
    if ( !a12 )
      goto LABEL_83;
  }
  else
  {
    if ( (int)v13 <= 1 )
    {
LABEL_83:
      *(_QWORD *)&v69.Data1 = *(_QWORD *)&v76.Data1;
      v63 = *(_QWORD *)&v75.Data1;
LABEL_84:
      v29 = 1;
      goto LABEL_23;
    }
    if ( (int)v13 > 3 )
    {
      v20 = a12;
      goto LABEL_83;
    }
  }
LABEL_3:
  if ( a2 )
    goto LABEL_83;
  if ( !g_pVolumeProvider )
    goto LABEL_155;
  v21 = *(__int64 (__fastcall **)(CVolumeProvider *__hidden, const unsigned __int16 *, struct CVolumeStrip **))(*(_QWORD *)g_pVolumeProvider + 48LL);
  if ( v21 == CVolumeProvider::GetDeviceVolumeStrip )
    DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, (const unsigned __int16 *)pv, &v64);
  else
    DeviceVolumeStrip = v21(g_pVolumeProvider, (const unsigned __int16 *)pv, &v64);
  v17 = DeviceVolumeStrip;
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_156;
  v23 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v64 + 30) + 56LL))(*((_QWORD *)v64 + 30)) != 0;
  v62 = v23;
  v24 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v64 + 31) + 56LL))(*((_QWORD *)v64 + 31)) != 0;
  v61 = v24;
  v60 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v64 + 32) + 56LL))(*((_QWORD *)v64 + 32)) != 0;
  if ( (_DWORD)v13 )
  {
    if ( (_DWORD)v13 != 3 )
      goto LABEL_83;
  }
  if ( *((_DWORD *)this + v13 + 10) )
  {
    v25 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v25 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v25
      || !(unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                          this,
                          (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13) )
    {
      v69 = *v72;
      CEndpointCharacteristics::GetModeEffect(
        this,
        &v69,
        0,
        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
        &v76,
        0LL,
        0LL);
    }
    CEndpointCharacteristics::GetEndpointEffect(
      this,
      0,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
      &v75,
      0LL,
      0LL);
  }
  else
  {
    CEndpointCharacteristics::GetGfx(
      this,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13,
      &v76,
      0LL,
      ppv);
  }
  v26 = v23 || v24;
  *(_QWORD *)&v69.Data1 = *(_QWORD *)&v76.Data1;
  v27 = *(_QWORD *)&v76.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v76.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v27 = *(_QWORD *)v76.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v63 = *(_QWORD *)&v75.Data1;
  v28 = *(_QWORD *)&v75.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v75.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v28 = *(_QWORD *)v75.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v29 = v26 + v60 + (v28 != 0) + (v27 != 0);
  if ( !v29 )
    goto LABEL_84;
LABEL_23:
  v30 = 16LL * v29 + 164;
  if ( v30 > 0x7FFFFFFF )
  {
    v16 = 0LL;
    v71 = 0LL;
    goto LABEL_106;
  }
  v16 = (char *)CoTaskMemAlloc((unsigned int)v30);
  v71 = v16;
  if ( !v16 )
  {
LABEL_106:
    v17 = -2147024882;
    goto LABEL_156;
  }
  if ( a2 != AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    if ( (_DWORD)v13 != 1 )
    {
      v31 = CoCreateInstance(
              &GUID_89115307_8248_448f_ada0_f3f3718a9b2a,
              0LL,
              0x17u,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v66);
      v17 = v31;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 29LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids, v31);
      }
      if ( v17 < 0 )
        goto LABEL_156;
      goto LABEL_32;
    }
    if ( v20 )
    {
      v47 = CoCreateInstance(
              &GUID_c994009c_34d3_4c9d_90ae_8dd53f521058,
              0LL,
              0x17u,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v66);
      v17 = v47;
      v48 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v49 = 28LL;
        goto LABEL_118;
      }
    }
    else
    {
      v47 = CoCreateInstance(
              &GUID_4654b883_10c0_4524_96b6_7d997104dcf0,
              0LL,
              0x17u,
              &GUID_00000000_0000_0000_c000_000000000046,
              &v66);
      v17 = v47;
      v48 = WPP_GLOBAL_Control;
      if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        v49 = 27LL;
LABEL_118:
        WPP_SF_D(*((_QWORD *)v48 + 2), v49, &WPP_744b99acf30f393db0480888c2449482_Traceguids, v47);
      }
    }
    if ( v17 < 0 )
      goto LABEL_156;
    goto LABEL_32;
  }
  v17 = CoCreateInstance(
          &GUID_75269c13_41e1_4d0e_b8a0_9f8f22e246c9,
          0LL,
          0x17u,
          &GUID_00000000_0000_0000_c000_000000000046,
          &v66);
  if ( v17 < 0 )
    goto LABEL_156;
LABEL_32:
  v17 = (**(__int64 (__fastcall ***)(LPVOID, GUID *, IUnknown **))v66)(
          v66,
          &GUID_dc9818ba_b592_4bda_9b82_9d4dffdbd058,
          &pProxy);
  if ( v17 < 0 )
    goto LABEL_156;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 30LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids, pProxy);
  }
  v32 = -1;
  v17 = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( v17 < 0 )
    goto LABEL_156;
  v33 = v70;
  *((_QWORD *)v16 + 1) = v70;
  *(_DWORD *)v16 = v33->cbSize + 18;
  if ( a10 )
  {
    *((_QWORD *)v16 + 3) = a10;
    *((_DWORD *)v16 + 4) = a10->cbSize + 18;
  }
  else
  {
    *((_QWORD *)v16 + 3) = 0LL;
    *((_DWORD *)v16 + 4) = 0;
  }
  if ( (_DWORD)v13 == 2 )
    v34 = 1;
  else
    v34 = *((_DWORD *)this + 93);
  *((_DWORD *)v16 + 18) = v34;
  *((_QWORD *)v16 + 7) = pv;
  *((_QWORD *)v16 + 4) = a7;
  *((_QWORD *)v16 + 5) = a8;
  *((_DWORD *)v16 + 24) = 0;
  *((_DWORD *)v16 + 20) = 0;
  *((_DWORD *)v16 + 19) = v67;
  *((_DWORD *)v16 + 25) = v13;
  *((_QWORD *)v16 + 11) = -1LL;
  *((_DWORD *)v16 + 21) = -1;
  if ( (_DWORD)v13 == 2 || !*((_DWORD *)this + v13 + 10) )
    v35 = &GUID_00000000_0000_0000_0000_000000000000;
  else
    v35 = a5;
  *(GUID *)(v16 + 104) = *v35;
  *(struct _GUID *)(v16 + 120) = *v72;
  *((_DWORD *)v16 + 34) = CEndpointCharacteristics::HasHardwareAudioEngine(this);
  *((_DWORD *)v16 + 12) = *((_DWORD *)this + 92);
  v36 = CEndpointCharacteristics::AreEffectsDisabled(this);
  if ( v36 || a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    v36 = 1;
  *((_DWORD *)v16 + 36) = v36;
  v37 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v37 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  v38 = !v37
     && (unsigned int)CEndpointCharacteristics::CanBuildProcessingModesOnRawConnector(
                        this,
                        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v13);
  *((_DWORD *)v16 + 35) = v38;
  *(struct _GUID *)(v16 + 148) = *a11;
  if ( !(_DWORD)v13 || (_DWORD)v13 == 3 )
  {
    if ( *((_DWORD *)this + v13 + 10) )
    {
      v39 = *(_QWORD *)&v69.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v69.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v39 = *(_QWORD *)v76.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v39 )
      {
        v50 = *((_DWORD *)v16 + 24);
        if ( v50 > 0x1F )
          goto LABEL_155;
        *((_DWORD *)v16 + 20) |= 1 << v50;
        *((_DWORD *)v16 + 21) = *((_DWORD *)v16 + 24);
        *(struct _GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = v76;
      }
      v40 = v63;
      v41 = v63 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( v63 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v41 = *(_QWORD *)v75.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v41 )
      {
        v17 = ValidateUncompressedWaveFormatEx(v70);
        if ( v17 )
        {
          v42 = v75;
        }
        else
        {
          v51 = *((_DWORD *)v16 + 24);
          if ( v51 > 0x1F )
            goto LABEL_155;
          *((_DWORD *)v16 + 20) |= 1 << v51;
          *((_DWORD *)v16 + 23) = *((_DWORD *)v16 + 24);
          v42 = v75;
          *(struct _GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = v75;
        }
        v40 = v63;
      }
      else
      {
        v42 = v75;
      }
      if ( v60 )
        *(GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      if ( v62 || v61 )
        *(GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      v43 = v40 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( !v43 )
        v43 = *(_QWORD *)v75.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v43 && v17 == 1 )
      {
        v52 = *((_DWORD *)v16 + 24);
        if ( v52 <= 0x1F )
        {
          *((_DWORD *)v16 + 20) |= 1 << v52;
          *((_DWORD *)v16 + 22) = *((_DWORD *)v16 + 24);
          *((_DWORD *)v16 + 23) = *((_DWORD *)v16 + 24);
          *(struct _GUID *)&v16[16 * *((unsigned int *)v16 + 24) + 164] = v42;
LABEL_154:
          ++*((_DWORD *)v16 + 24);
          goto LABEL_68;
        }
LABEL_155:
        v17 = -2147418113;
        goto LABEL_156;
      }
    }
    else
    {
      v53 = ValidateUncompressedWaveFormatEx(v70);
      v54 = v60;
      if ( v53 == 1 )
      {
        if ( v60 )
        {
          *(GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
          v54 = v60;
        }
        v55 = v62;
        v56 = v61;
        if ( v62 || v61 )
          *(GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      }
      else
      {
        v55 = v62;
        v56 = v61;
      }
      v57 = *(_QWORD *)&v69.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
      if ( *(_QWORD *)&v69.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
        v57 = *(_QWORD *)v76.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
      if ( v57 )
      {
        v58 = *((_DWORD *)v16 + 24);
        if ( v58 > 0x1F )
          goto LABEL_155;
        *((_DWORD *)v16 + 20) |= 1 << v58;
        *((_DWORD *)v16 + 21) = *((_DWORD *)v16 + 24);
        if ( v53 == 1 )
          v32 = *((_DWORD *)v16 + 24);
        *((_DWORD *)v16 + 22) = v32;
        *(struct _GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = v76;
        v54 = v60;
      }
      if ( !v53 )
      {
        if ( v54 )
          *(GUID *)&v16[16 * (*((_DWORD *)v16 + 24))++ + 164] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
        if ( v55 || v56 )
        {
          *(GUID *)&v16[16 * *((unsigned int *)v16 + 24) + 164] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
          goto LABEL_154;
        }
      }
    }
  }
LABEL_68:
  v17 = ((__int64 (__fastcall *)(IUnknown *, char *, CVolumeStrip *, _QWORD))pProxy->lpVtbl[1].QueryInterface)(
          pProxy,
          v16,
          v64,
          v67);
  if ( v17 < 0 )
  {
LABEL_156:
    AudSrvTraceLoggingErrorHelper("CreateSaDevice", 1976, v17);
    goto LABEL_73;
  }
  v44 = pProxy;
  pProxy = 0LL;
  *v73 = (struct IAudioDeviceGraph *)v44;
  if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 31LL, &WPP_744b99acf30f393db0480888c2449482_Traceguids, v44);
  }
LABEL_73:
  if ( v64 )
  {
    v45 = *(void (**)(void))(*(_QWORD *)v64 + 16LL);
    if ( (char *)v45 == (char *)CVolumeStrip::Release )
      CVolumeStrip::Release(v64);
    else
      v45();
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  if ( v66 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v66 + 16LL))(v66);
  CoTaskMemFree(v16);
  CoTaskMemFree(pv);
  return (unsigned int)v17;
}
