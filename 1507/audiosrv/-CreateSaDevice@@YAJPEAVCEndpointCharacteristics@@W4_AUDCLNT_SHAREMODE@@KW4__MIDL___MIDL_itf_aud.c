/*
 * XREFs of ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10
 * Callers:
 *     ?RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KPEAUSaDeviceResourceParams@@@Z @ 0x180027260 (-RuntimeClassInitialize@CSaDeviceProxy@@QEAAJPEBUSaDeviceParams@@PEAVCEndpointCharacteristics@@W.c)
 *     ?GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3K_K_J5PEBUtWAVEFORMATEX@@6PEAPEAUIAudioDeviceGraph@@@Z @ 0x1800749B4 (-GetSaDeviceInstance@CSaProvider@@IEAAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__.c)
 * Callees:
 *     ?Release@CVolumeStrip@@UEAAKXZ @ 0x18001D2C0 (-Release@CVolumeStrip@@UEAAKXZ.c)
 *     ?AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A10 (-AreEnhancementsEnabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ @ 0x180022A94 (-AreEffectsDisabled@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z @ 0x18002CD20 (-GetDeviceVolumeStrip@CVolumeProvider@@QEAAJPEBGPEAPEAVCVolumeStrip@@@Z.c)
 *     ?ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z @ 0x180030474 (-ValidateUncompressedWaveFormatEx@@YAJPEBUtWAVEFORMATEX@@@Z.c)
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800345F8 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_q @ 0x1800448AC (WPP_SF_q.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8C84 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=6
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
        struct IAudioDeviceGraph **a12)
{
  __int64 v12; // r14
  GUID v14; // xmm6
  GUID v15; // xmm7
  char *v16; // rdi
  CVolumeStrip *v17; // rsi
  HRESULT DeviceVolumeStrip; // r12d
  enum _AUDCLNT_SHAREMODE v19; // r15d
  BOOL v20; // ebx
  __int64 v21; // rax
  char *v22; // rax
  int v23; // edx
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rax
  char *v27; // rbx
  int v28; // r15d
  int v29; // eax
  __int64 v30; // rdi
  char *v31; // rax
  int v32; // edx
  int v33; // r8d
  __int64 v34; // r9
  __int64 v35; // rax
  int v36; // edx
  int v37; // r8d
  __int64 v38; // r9
  __int64 v39; // rax
  struct CEndpointCharacteristics *v40; // rax
  GUID fmtid; // xmm1
  DWORD pid; // eax
  BOOL v43; // r10d
  __int64 v44; // rax
  BOOL v45; // r8d
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rax
  GUID *v49; // rcx
  unsigned int v50; // eax
  struct tWAVEFORMATEX *v51; // rax
  int v52; // eax
  int v53; // eax
  GUID *v54; // rax
  void (__fastcall ***v55)(_QWORD, GUID *, GUID *); // r15
  __int64 v56; // rbx
  int v57; // eax
  int v58; // eax
  __int64 v59; // rax
  char *v60; // rax
  int v61; // edx
  int v62; // r8d
  __int64 v63; // r9
  __int64 v64; // rax
  int v65; // ebx
  struct CEndpointCharacteristics *v66; // rbx
  int v67; // r10d
  int v68; // eax
  __int64 v69; // r15
  int v70; // eax
  char *v71; // rax
  int v72; // edx
  int v73; // r8d
  __int64 v74; // r9
  __int64 v75; // rax
  int v76; // eax
  __int64 v77; // rax
  __int64 v78; // rcx
  __int64 v79; // rbx
  __int64 v80; // rax
  unsigned int v81; // ecx
  __int64 v82; // rcx
  IUnknown *v83; // r9
  __int64 (__fastcall *v84)(CVolumeStrip *); // rbx
  unsigned int v86; // eax
  unsigned int v87; // ecx
  unsigned int v88; // ecx
  int v89; // edx
  BOOL v90; // ecx
  BOOL v91; // r9d
  __int64 v92; // rax
  unsigned int v93; // ecx
  int v94; // eax
  struct IAudioSystemEffects2 **ppv; // [rsp+20h] [rbp-E0h]
  int v97; // [rsp+50h] [rbp-B0h]
  BOOL v98; // [rsp+54h] [rbp-ACh]
  BOOL v99; // [rsp+58h] [rbp-A8h]
  BOOL v100; // [rsp+5Ch] [rbp-A4h]
  IUnknown *pProxy; // [rsp+60h] [rbp-A0h] BYREF
  GUID v102; // [rsp+70h] [rbp-90h] BYREF
  unsigned int v103; // [rsp+80h] [rbp-80h]
  LPVOID v104; // [rsp+88h] [rbp-78h] BYREF
  int v105[4]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v106; // [rsp+A0h] [rbp-60h]
  LPVOID pv; // [rsp+B0h] [rbp-50h] BYREF
  int v108; // [rsp+B8h] [rbp-48h]
  CVolumeStrip *v109; // [rsp+C0h] [rbp-40h] BYREF
  struct tWAVEFORMATEX *v110; // [rsp+C8h] [rbp-38h]
  struct _GUID v111; // [rsp+D0h] [rbp-30h] BYREF
  char *v112; // [rsp+E0h] [rbp-20h]
  struct IAudioDeviceGraph **v113; // [rsp+E8h] [rbp-18h]
  struct _tagpropertykey v114; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v115; // [rsp+110h] [rbp+10h]
  struct _GUID v116; // [rsp+120h] [rbp+20h] BYREF
  struct _GUID v117; // [rsp+130h] [rbp+30h] BYREF

  v115 = -2LL;
  v12 = a4;
  v103 = a3;
  *(_QWORD *)&v102.Data1 = a6;
  v110 = a9;
  v113 = a12;
  v98 = 0;
  v99 = 0;
  v100 = 0;
  pv = 0LL;
  v14 = GUID_00000000_0000_0000_0000_000000000000;
  v15 = GUID_00000000_0000_0000_0000_000000000000;
  v117 = GUID_00000000_0000_0000_0000_000000000000;
  v116 = GUID_00000000_0000_0000_0000_000000000000;
  v16 = 0LL;
  v112 = 0LL;
  v104 = 0LL;
  pProxy = 0LL;
  v17 = 0LL;
  v109 = 0LL;
  DeviceVolumeStrip = (*(__int64 (__fastcall **)(_QWORD, LPVOID *))(**((_QWORD **)this + 2) + 40LL))(
                        *((_QWORD *)this + 2),
                        &pv);
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_236;
  if ( (_DWORD)v12 && (unsigned int)(v12 - 2) > 1 )
  {
    v19 = a2;
LABEL_180:
    *(_QWORD *)&v111.Data1 = *(_QWORD *)&v117.Data1;
    v106 = *(_QWORD *)&v116.Data1;
LABEL_158:
    v47 = 1LL;
    goto LABEL_59;
  }
  v19 = a2;
  if ( a2 )
    goto LABEL_180;
  if ( !g_pVolumeProvider )
    goto LABEL_235;
  DeviceVolumeStrip = CVolumeProvider::GetDeviceVolumeStrip(g_pVolumeProvider, (STRSAFE_PCNZWCH)pv, &v109);
  v17 = v109;
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_236;
  v98 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v109 + 30) + 56LL))(*((_QWORD *)v109 + 30)) != 0;
  v99 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 31) + 56LL))(*((_QWORD *)v17 + 31)) != 0;
  v20 = (*(unsigned __int8 (__fastcall **)(_QWORD))(**((_QWORD **)v17 + 32) + 56LL))(*((_QWORD *)v17 + 32)) != 0;
  v100 = v20;
  if ( (_DWORD)v12 )
  {
    if ( (_DWORD)v12 != 3 )
      goto LABEL_180;
  }
  if ( *((_DWORD *)this + (int)v12 + 10) )
  {
    v21 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
    if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
      v21 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
    if ( v21 )
      goto LABEL_157;
    v116 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
    if ( (_DWORD)v12 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) )
      v22 = (char *)this + 16 * v12 + 64;
    else
      v22 = (char *)this + 128;
    v23 = 0;
    v24 = *((_DWORD *)v22 + 2);
    if ( v24 <= 0 )
      goto LABEL_157;
    v25 = *(_QWORD *)v22;
    while ( 1 )
    {
      v26 = *(_QWORD *)(v25 + 16LL * v23) - *(_QWORD *)&v116.Data1;
      if ( !v26 )
        v26 = *(_QWORD *)(v25 + 16LL * v23 + 8) - *(_QWORD *)v116.Data4;
      if ( !v26 )
        break;
      if ( ++v23 >= v24 )
        goto LABEL_157;
    }
    if ( v23 == -1
      || ((unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) || (_DWORD)v12 == 3
        ? (v27 = (char *)this + 16 * (int)v12 + 208)
        : (v27 = (char *)this + 336),
          v28 = 0,
          v29 = *((_DWORD *)v27 + 2),
          v29 <= 0) )
    {
LABEL_157:
      v116 = *(struct _GUID *)*(_QWORD *)&v102.Data1;
      CEndpointCharacteristics::GetModeEffect(
        this,
        &v116,
        0,
        (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
        &v117,
        0LL,
        0LL);
      v15 = v117;
    }
    else
    {
      v30 = 0LL;
      while ( 1 )
      {
        if ( v30 < 0 || v28 >= v29 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x18005739DLL);
        }
        v116 = *(struct _GUID *)(v30 + *(_QWORD *)v27);
        if ( (_DWORD)v12 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) )
          v31 = (char *)this + 16 * v12 + 64;
        else
          v31 = (char *)this + 128;
        v32 = 0;
        v33 = *((_DWORD *)v31 + 2);
        if ( v33 <= 0 )
          break;
        v34 = *(_QWORD *)v31;
        while ( 1 )
        {
          v35 = *(_QWORD *)(v34 + 16LL * v32) - *(_QWORD *)&v116.Data1;
          if ( !v35 )
            v35 = *(_QWORD *)(v34 + 16LL * v32 + 8) - *(_QWORD *)v116.Data4;
          if ( !v35 )
            break;
          if ( ++v32 >= v33 )
            goto LABEL_35;
        }
        if ( v32 == -1 )
          break;
        ++v28;
        v30 += 16LL;
        v29 = *((_DWORD *)v27 + 2);
        if ( v28 >= v29 )
          goto LABEL_157;
      }
    }
LABEL_35:
    v14 = GUID_00000000_0000_0000_0000_000000000000;
    v116 = GUID_00000000_0000_0000_0000_000000000000;
    v36 = 0;
    v37 = *((_DWORD *)this + 4 * (int)v12 + 70);
    if ( v37 > 0 )
    {
      v38 = *((_QWORD *)this + 2 * (int)v12 + 34);
      while ( 1 )
      {
        v39 = *(_QWORD *)(v38 + 16LL * v36) - *(_QWORD *)&GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data1;
        if ( !v39 )
          v39 = *(_QWORD *)(v38 + 16LL * v36 + 8) - *(_QWORD *)GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3.Data4;
        if ( !v39 )
          break;
        if ( ++v36 >= v37 )
          goto LABEL_48;
      }
      if ( v36 != -1 )
      {
        v40 = (_DWORD)v12 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this)
            ? (struct CEndpointCharacteristics *)((char *)this + 16 * (int)v12 + 64)
            : (struct CEndpointCharacteristics *)((char *)this + 128);
        if ( *((_DWORD *)v40 + 2) <= 1u )
        {
          if ( (_DWORD)v12 )
          {
            fmtid = PKEY_FX_KeywordDetector_EndpointEffectClsid.fmtid;
            pid = PKEY_FX_KeywordDetector_EndpointEffectClsid.pid;
          }
          else
          {
            fmtid = PKEY_FX_EndpointEffectClsid.fmtid;
            pid = PKEY_FX_EndpointEffectClsid.pid;
          }
          v111 = GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
          v114.fmtid = fmtid;
          v114.pid = pid;
          GetInitializedSystemEffectInterface(
            *((struct IMMDevice **)this + 2),
            &v114,
            &v111,
            0,
            0,
            (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
            &v116,
            0LL,
            0LL);
          v14 = v116;
        }
      }
    }
LABEL_48:
    v116 = v14;
    v19 = AUDCLNT_SHAREMODE_SHARED;
    v20 = v100;
  }
  else
  {
    CEndpointCharacteristics::GetGfx(
      this,
      (enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001)v12,
      &v117,
      0LL,
      ppv);
    v15 = v117;
  }
  v43 = v98 || v99;
  *(_QWORD *)&v111.Data1 = *(_QWORD *)&v15.Data1;
  v44 = *(_QWORD *)&v15.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v15.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v44 = *(_QWORD *)v117.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v45 = v44 != 0;
  v106 = *(_QWORD *)&v14.Data1;
  v46 = *(_QWORD *)&v14.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v14.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v46 = *(_QWORD *)v116.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v46 )
    LODWORD(v46) = 1;
  v47 = v43 + (unsigned int)v20 + v45 + (_DWORD)v46;
  if ( !(_DWORD)v47 )
    goto LABEL_158;
LABEL_59:
  v48 = 16 * v47 + 152;
  if ( v48 > 0x7FFFFFFF )
  {
    v16 = 0LL;
    v112 = 0LL;
    goto LABEL_182;
  }
  v16 = (char *)CoTaskMemAlloc((unsigned int)v48);
  v112 = v16;
  if ( !v16 )
  {
LABEL_182:
    DeviceVolumeStrip = -2147024882;
    goto LABEL_236;
  }
  if ( v19 == AUDCLNT_SHAREMODE_EXCLUSIVE )
  {
    DeviceVolumeStrip = CoCreateInstance(
                          &GUID_75269c13_41e1_4d0e_b8a0_9f8f22e246c9,
                          0LL,
                          0x17u,
                          &GUID_00000000_0000_0000_c000_000000000046,
                          &v104);
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_236;
  }
  else if ( (_DWORD)v12 == 1 )
  {
    v86 = CoCreateInstance(
            &GUID_4654b883_10c0_4524_96b6_7d997104dcf0,
            0LL,
            0x17u,
            &GUID_00000000_0000_0000_c000_000000000046,
            &v104);
    DeviceVolumeStrip = v86;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        18LL,
        &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
        v86);
    }
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_236;
  }
  else
  {
    if ( g_UseNewGraphBuilder )
      v49 = &GUID_4489a5c2_f662_47fc_a733_b3577e162df7;
    else
      v49 = &GUID_89115307_8248_448f_ada0_f3f3718a9b2a;
    v50 = CoCreateInstance(v49, 0LL, 0x17u, &GUID_00000000_0000_0000_c000_000000000046, &v104);
    DeviceVolumeStrip = v50;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        19LL,
        &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
        v50);
    }
    if ( DeviceVolumeStrip < 0 )
      goto LABEL_236;
  }
  DeviceVolumeStrip = (**(__int64 (__fastcall ***)(LPVOID, GUID *, IUnknown **))v104)(
                        v104,
                        &GUID_e2bd719f_11ad_4d4d_b5cb_e1b102141726,
                        &pProxy);
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_236;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_q(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      20LL,
      &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      pProxy);
  }
  DeviceVolumeStrip = CoSetProxyBlanket(pProxy, 0xFFFFFFFF, 0xFFFFFFFF, 0LL, 6u, 3u, 0LL, 0x40u);
  if ( DeviceVolumeStrip < 0 )
    goto LABEL_236;
  v51 = v110;
  *((_QWORD *)v16 + 1) = v110;
  *(_DWORD *)v16 = v51->cbSize + 18;
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
  if ( (_DWORD)v12 == 2 )
    v52 = 1;
  else
    v52 = *((_DWORD *)this + 93);
  *((_DWORD *)v16 + 16) = v52;
  *((_QWORD *)v16 + 7) = pv;
  *((_QWORD *)v16 + 4) = a7;
  *((_QWORD *)v16 + 5) = a8;
  *((_DWORD *)v16 + 21) = 0;
  *((_DWORD *)v16 + 18) = 0;
  *((_DWORD *)v16 + 17) = v103;
  *((_DWORD *)v16 + 22) = v12;
  *(_QWORD *)(v16 + 76) = -1LL;
  if ( (_DWORD)v12 == 2 )
    goto LABEL_194;
  v53 = v12;
  if ( (_DWORD)v12 == 1 )
    v53 = 0;
  if ( !*((_DWORD *)this + v53 + 10) || *((_DWORD *)this + 100) )
LABEL_194:
    v54 = &GUID_00000000_0000_0000_0000_000000000000;
  else
    v54 = a5;
  *(GUID *)(v16 + 92) = *v54;
  *(_OWORD *)(v16 + 108) = *(_OWORD *)*(_QWORD *)&v102.Data1;
  v105[0] = 0;
  v55 = (void (__fastcall ***)(_QWORD, GUID *, GUID *))*((_QWORD *)this + 2);
  v56 = 0LL;
  *(_QWORD *)&v102.Data1 = 0LL;
  if ( v55 )
  {
    (**v55)(v55, &GUID_ed899cbb_5613_4541_a78f_66302f0ce211, &v102);
    v56 = *(_QWORD *)&v102.Data1;
  }
  if ( v56 )
  {
    (*(void (__fastcall **)(__int64, int *))(*(_QWORD *)v56 + 88LL))(v56, v105);
    v56 = *(_QWORD *)&v102.Data1;
  }
  v57 = v105[0];
  v108 = v105[0];
  if ( v56 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v56 + 16LL))(v56);
    v57 = v108;
  }
  *((_DWORD *)v16 + 31) = v57;
  *((_DWORD *)v16 + 12) = *((_DWORD *)this + 92);
  v58 = CEndpointCharacteristics::AreEffectsDisabled(this);
  if ( v58 || a2 == AUDCLNT_SHAREMODE_EXCLUSIVE )
    v58 = 1;
  *((_DWORD *)v16 + 33) = v58;
  v59 = *(_QWORD *)&a5->Data1 - *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1;
  if ( *(_QWORD *)&a5->Data1 == *(_QWORD *)&GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data1 )
    v59 = *(_QWORD *)a5->Data4 - *(_QWORD *)GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf.Data4;
  if ( v59 )
    goto LABEL_159;
  v102 = GUID_9e90ea20_b493_4fd1_a1a8_7e1361a956cf;
  if ( (_DWORD)v12 || (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) )
    v60 = (char *)this + 16 * v12 + 64;
  else
    v60 = (char *)this + 128;
  v61 = 0;
  v62 = *((_DWORD *)v60 + 2);
  if ( v62 <= 0 )
    goto LABEL_159;
  v63 = *(_QWORD *)v60;
  while ( 1 )
  {
    v64 = *(_QWORD *)(v63 + 16LL * v61) - *(_QWORD *)&v102.Data1;
    if ( !v64 )
      v64 = *(_QWORD *)(v63 + 16LL * v61 + 8) - *(_QWORD *)v102.Data4;
    if ( !v64 )
      break;
    if ( ++v61 >= v62 )
      goto LABEL_159;
  }
  if ( v61 == -1 )
    goto LABEL_159;
  v65 = v12;
  if ( (_DWORD)v12 == 1 )
    v65 = 0;
  v66 = (unsigned int)CEndpointCharacteristics::AreEnhancementsEnabled(this) || v65 == 3
      ? (struct CEndpointCharacteristics *)((char *)this + 16 * v65 + 208)
      : (struct CEndpointCharacteristics *)((char *)this + 336);
  v67 = 0;
  v97 = 0;
  v68 = *((_DWORD *)v66 + 2);
  if ( v68 <= 0 )
  {
LABEL_159:
    v76 = 0;
  }
  else
  {
    v69 = 0LL;
    while ( 1 )
    {
      if ( v69 < 0 || v67 >= v68 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800575C5LL);
      }
      v102 = *(GUID *)(v69 + *(_QWORD *)v66);
      if ( (_DWORD)v12 || (v70 = CEndpointCharacteristics::AreEnhancementsEnabled(this), v67 = v97, v70) )
        v71 = (char *)this + 16 * v12 + 64;
      else
        v71 = (char *)this + 128;
      v72 = 0;
      v73 = *((_DWORD *)v71 + 2);
      if ( v73 <= 0 )
        break;
      v74 = *(_QWORD *)v71;
      while ( 1 )
      {
        v75 = *(_QWORD *)(v74 + 16LL * v72) - *(_QWORD *)&v102.Data1;
        if ( !v75 )
          v75 = *(_QWORD *)(v74 + 16LL * v72 + 8) - *(_QWORD *)v102.Data4;
        if ( !v75 )
          break;
        if ( ++v72 >= v73 )
          goto LABEL_123;
      }
      if ( v72 == -1 )
        break;
      v97 = ++v67;
      v69 += 16LL;
      v68 = *((_DWORD *)v66 + 2);
      if ( v67 >= v68 )
        goto LABEL_159;
    }
LABEL_123:
    v76 = 1;
  }
  *((_DWORD *)v16 + 32) = v76;
  *(struct _GUID *)(v16 + 136) = *a11;
  if ( (_DWORD)v12 && (_DWORD)v12 != 3 )
    goto LABEL_144;
  if ( *((_DWORD *)this + (int)v12 + 10) )
  {
    v77 = *(_QWORD *)&v111.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( *(_QWORD *)&v111.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v77 = *(_QWORD *)v117.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v77 )
    {
      v87 = *((_DWORD *)v16 + 21);
      if ( v87 > 0x1F )
        goto LABEL_235;
      *((_DWORD *)v16 + 18) |= 1 << v87;
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = v15;
    }
    v78 = v106;
    v79 = *(_QWORD *)v116.Data4;
    v80 = v106 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( v106 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
      v80 = *(_QWORD *)v116.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( v80 )
    {
      DeviceVolumeStrip = ValidateUncompressedWaveFormatEx(v110);
      if ( !DeviceVolumeStrip )
      {
        v81 = *((_DWORD *)v16 + 21);
        if ( v81 > 0x1F )
          goto LABEL_235;
        *((_DWORD *)v16 + 18) |= 1 << v81;
        *((_DWORD *)v16 + 20) = *((_DWORD *)v16 + 21);
        *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = v14;
      }
      v78 = v106;
    }
    if ( v100 )
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    if ( v98 || v99 )
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
    v82 = v78 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
    if ( !v82 )
      v82 = v79 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
    if ( !v82 || DeviceVolumeStrip != 1 )
      goto LABEL_144;
    v88 = *((_DWORD *)v16 + 21);
    if ( v88 <= 0x1F )
    {
      *((_DWORD *)v16 + 18) |= 1 << v88;
      *((_DWORD *)v16 + 19) = *((_DWORD *)v16 + 21);
      *((_DWORD *)v16 + 20) = *((_DWORD *)v16 + 21);
      *(GUID *)&v16[16 * *((unsigned int *)v16 + 21) + 152] = v14;
LABEL_234:
      ++*((_DWORD *)v16 + 21);
      goto LABEL_144;
    }
LABEL_235:
    DeviceVolumeStrip = -2147418113;
    goto LABEL_236;
  }
  v89 = ValidateUncompressedWaveFormatEx(v110);
  if ( v89 == 1 )
  {
    if ( v100 )
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    v90 = v98;
    v91 = v99;
    if ( v98 || v99 )
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
  }
  else
  {
    v90 = v98;
    v91 = v99;
  }
  v92 = *(_QWORD *)&v111.Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&v111.Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v92 = *(_QWORD *)v117.Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  if ( v92 )
  {
    v93 = *((_DWORD *)v16 + 21);
    if ( v93 > 0x1F )
      goto LABEL_235;
    *((_DWORD *)v16 + 18) |= 1 << v93;
    if ( v89 == 1 )
      v94 = *((_DWORD *)v16 + 21);
    else
      v94 = -1;
    *((_DWORD *)v16 + 19) = v94;
    *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = v15;
    v90 = v98;
  }
  if ( !v89 )
  {
    if ( v100 )
      *(GUID *)&v16[16 * (*((_DWORD *)v16 + 21))++ + 152] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
    if ( v90 || v91 )
    {
      *(GUID *)&v16[16 * *((unsigned int *)v16 + 21) + 152] = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      goto LABEL_234;
    }
  }
LABEL_144:
  DeviceVolumeStrip = ((__int64 (__fastcall *)(IUnknown *, char *, CVolumeStrip *, _QWORD))pProxy->lpVtbl[1].QueryInterface)(
                        pProxy,
                        v16,
                        v17,
                        v103);
  if ( DeviceVolumeStrip >= 0 )
  {
    v83 = pProxy;
    pProxy = 0LL;
    *v113 = (struct IAudioDeviceGraph *)v83;
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
    {
      WPP_SF_q(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        21LL,
        &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
        v83);
    }
    goto LABEL_149;
  }
LABEL_236:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      22LL,
      &WPP_78ac755cf0ad3a5554bdc1a2f719929e_Traceguids,
      (unsigned int)DeviceVolumeStrip);
  }
LABEL_149:
  if ( v17 )
  {
    v84 = *(__int64 (__fastcall **)(CVolumeStrip *))(*(_QWORD *)v17 + 16LL);
    if ( v84 == CVolumeStrip::Release )
      CVolumeStrip::Release(v17);
    else
      v84(v17);
  }
  if ( pProxy )
    ((void (__fastcall *)(IUnknown *))pProxy->lpVtbl->Release)(pProxy);
  if ( v104 )
    (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v104 + 16LL))(v104);
  CoTaskMemFree(v16);
  CoTaskMemFree(pv);
  return (unsigned int)DeviceVolumeStrip;
}
