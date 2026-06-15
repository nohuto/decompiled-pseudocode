/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000C960
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x14000DB78 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x14000AB80 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000D2D0 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140010440 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=16
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  int v2; // r14d
  __int64 v3; // r9
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // rsi
  _DWORD *v7; // r12
  struct IAudioProcessingObject *v8; // rdi
  CAudioMediaType *v9; // rbx
  CAudioMediaType *v10; // rbx
  struct IAudioMediaType *v11; // rbx
  CPipeInstance *v12; // rsi
  struct IAudioMediaType *v13; // rbx
  int v14; // r14d
  unsigned int v15; // r12d
  __int64 v16; // rbx
  struct IAudioMediaType *v17; // rdi
  __int64 v18; // rax
  struct IAudioMediaType *v19; // r14
  _QWORD *v20; // rcx
  __int64 (__fastcall *v22)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v23; // eax
  HRESULT (__stdcall *v24)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rsi
  int v25; // eax
  unsigned int (__fastcall *v26)(CAudioMediaType *__hidden); // rsi
  __int64 (__fastcall *v27)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rsi
  int UncompressedAudioFormat; // eax
  unsigned int (__fastcall *v31)(CAudioMediaType *__hidden); // rsi
  __int64 (__fastcall *v32)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v33; // eax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v35; // eax
  __int64 v36; // rax
  struct IAudioMediaType *v37; // rbx
  float v38; // xmm6_4
  int v39; // r14d
  __int64 v40; // rdi
  bool v41; // r14
  struct IAudioMediaType *v42; // [rsp+28h] [rbp-89h] BYREF
  struct IAudioMediaType *v43; // [rsp+30h] [rbp-81h] BYREF
  __int64 v44; // [rsp+38h] [rbp-79h] BYREF
  unsigned int v45; // [rsp+40h] [rbp-71h] BYREF
  CPipeInstance *v46; // [rsp+48h] [rbp-69h]
  __int64 v47; // [rsp+50h] [rbp-61h]
  __int64 v48; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v49[3]; // [rsp+60h] [rbp-51h] BYREF
  int v50; // [rsp+78h] [rbp-39h] BYREF
  GUID v51; // [rsp+7Ch] [rbp-35h]
  unsigned __int64 v52; // [rsp+8Ch] [rbp-25h]
  float v53[3]; // [rsp+94h] [rbp-1Dh]
  _UNCOMPRESSEDAUDIOFORMAT v54; // [rsp+A0h] [rbp-11h] BYREF

  v49[2] = -2LL;
  v1 = this;
  v46 = this;
  v2 = 0;
  v3 = *((unsigned int *)this + 35);
  v45 = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 64LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, v3);
  }
  v4 = *((_QWORD *)v1 + 9);
  v5 = *((_QWORD *)v1 + 3);
  if ( !v4 )
  {
LABEL_73:
    *((_DWORD *)v1 + 34) = v45;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    v47 = v6;
    if ( !v5 )
      goto LABEL_56;
    v7 = *(_DWORD **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( v7[10] != 2 )
      goto LABEL_56;
    v8 = *(struct IAudioProcessingObject **)(*((_QWORD *)v7 + 4) + 40LL);
    v49[1] = v8;
    if ( v8 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->AddRef)(v8);
    v43 = 0LL;
    v50 = 0;
    v51 = (GUID)0LL;
    v52 = 0LL;
    v42 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &v42) < 0 )
    {
      v2 = 0;
LABEL_12:
      v9 = (CAudioMediaType *)v43;
      goto LABEL_13;
    }
    v27 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
    if ( v27 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v43);
    else
      LeftFormat = v27((CProcessNode *)v7, &v43);
    v2 = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_116;
    v9 = (CAudioMediaType *)v43;
    GetUncompressedAudioFormat = v43->lpVtbl->GetUncompressedAudioFormat;
    if ( (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat )
    {
      UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v43, &v54);
    }
    else
    {
      UncompressedAudioFormat = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
                                  v43,
                                  &v54);
      v9 = (CAudioMediaType *)v43;
    }
    v2 = UncompressedAudioFormat;
    if ( UncompressedAudioFormat >= 0 )
    {
      v50 = 28;
      v51 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      v52 = __PAIR64__(LODWORD(v54.fFramesPerSecond), v54.dwSamplesPerFrame);
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             28LL,
             &v50);
      if ( v2 >= 0 )
        goto LABEL_12;
LABEL_116:
      v9 = (CAudioMediaType *)v43;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        56LL,
        &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
        (unsigned int)v2);
      goto LABEL_12;
    }
LABEL_13:
    if ( v42 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
      v9 = (CAudioMediaType *)v43;
    }
    if ( v9 )
    {
      v31 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v9 + 16LL);
      if ( v31 == CAudioMediaType::Release )
        CAudioMediaType::Release(v9);
      else
        v31(v9);
    }
    if ( v2 < 0 )
      break;
    LODWORD(v43) = v45;
    v42 = 0LL;
    v50 = 0;
    v51 = (GUID)0LL;
    v52 = 0LL;
    *(_QWORD *)v53 = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &v44) < 0 )
    {
      v2 = 0;
LABEL_19:
      v10 = (CAudioMediaType *)v42;
      goto LABEL_20;
    }
    v22 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
    if ( v22 == CProcessNode::GetLeftFormat )
      v23 = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v42);
    else
      v23 = v22((CProcessNode *)v7, &v42);
    v2 = v23;
    if ( v23 < 0 )
      goto LABEL_123;
    v10 = (CAudioMediaType *)v42;
    v24 = v42->lpVtbl->GetUncompressedAudioFormat;
    if ( (char *)v24 == (char *)CAudioMediaType::GetUncompressedAudioFormat )
    {
      v25 = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v42, &v54);
    }
    else
    {
      v25 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))v24)(v42, &v54);
      v10 = (CAudioMediaType *)v42;
    }
    v2 = v25;
    if ( v25 >= 0 )
    {
      v50 = 36;
      v51 = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      HIDWORD(v52) = (int)((float)((float)(v54.fFramesPerSecond * 10.0) / 1000.0) + 0.5);
      LODWORD(v53[1]) = (_DWORD)v43;
      LODWORD(v53[0]) = 10;
      LODWORD(v52) = v54.dwSamplesPerFrame;
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             36LL,
             &v50);
      if ( v2 >= 0 )
        goto LABEL_19;
LABEL_123:
      v10 = (CAudioMediaType *)v42;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        57LL,
        &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
        (unsigned int)v2);
      goto LABEL_19;
    }
LABEL_20:
    if ( v44 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      v10 = (CAudioMediaType *)v42;
    }
    if ( v10 )
    {
      v26 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v10 + 16LL);
      if ( v26 == CAudioMediaType::Release )
        CAudioMediaType::Release(v10);
      else
        v26(v10);
    }
    if ( v2 < 0 )
      break;
    v42 = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &v42) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
             v8,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v44) < 0 )
      {
        v2 = 0;
      }
      else
      {
        v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int64))v42->lpVtbl->IsCompressedFormat)(v42, 1LL);
        if ( v2 < 0
          && WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            58LL,
            &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
            (unsigned int)v2);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v42 )
      ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
    if ( v2 < 0 )
      break;
    v2 = CPipeInstance::InitializeRateConverterInterface(v46, (struct CProcessNode *)v7, v8);
    if ( v2 < 0 )
      break;
    v44 = 0LL;
    v50 = 0;
    v51 = (GUID)0LL;
    v52 = 0LL;
    v53[0] = 0.0;
    v42 = 0LL;
    v43 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v44) >= 0 )
    {
      v36 = *(_QWORD *)v7;
      if ( v7[6] )
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v36 + 16))(v7, &v42);
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL))(v7, &v43),
              v2 < 0) )
        {
LABEL_140:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              60LL,
              &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
              (unsigned int)v2);
          }
          goto LABEL_34;
        }
      }
      else
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v36 + 8))(v7, &v42);
        if ( v2 < 0 )
          goto LABEL_140;
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(*(_QWORD *)v7 + 16LL))(v7, &v43);
        if ( v2 < 0 )
          goto LABEL_140;
      }
      v50 = 32;
      v51 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      LODWORD(v52) = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->GetAudioFormat)(v42)
                                         + 2);
      HIDWORD(v52) = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43)
                                         + 2);
      v37 = v42;
      v38 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->GetAudioFormat)(v42) + 8);
      v53[0] = v38
             / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v37->lpVtbl->GetAudioFormat)(v37)
                                          + 12);
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             32LL,
             &v50);
      if ( v2 < 0 )
        goto LABEL_140;
    }
    else
    {
      v2 = 0;
    }
LABEL_34:
    if ( v43 )
      ((void (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->Release)(v43);
    if ( v42 )
      ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v2 < 0 )
      break;
    v44 = 0LL;
    v50 = 0;
    v51 = (GUID)0LL;
    v52 = 0LL;
    v53[0] = 0.0;
    v42 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v44) >= 0 )
    {
      v32 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
      if ( v32 == CProcessNode::GetLeftFormat )
        v33 = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v42);
      else
        v33 = v32((CProcessNode *)v7, &v42);
      v2 = v33;
      if ( v33 < 0
        || (v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))v42->lpVtbl->GetUncompressedAudioFormat)(
                   v42,
                   &v54),
            v2 < 0)
        || (v50 = 32,
            v51 = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            v52 = __PAIR64__(LODWORD(v54.fFramesPerSecond), v54.dwSamplesPerFrame),
            LODWORD(v53[0]) = *(_QWORD *)v46 == 0LL,
            v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
                   v8,
                   32LL,
                   &v50),
            v2 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            63LL,
            &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
            (unsigned int)v2);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v42 )
      ((void (__fastcall *)(struct IAudioMediaType *))v42->lpVtbl->Release)(v42);
    if ( v44 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
    if ( v2 < 0 )
      break;
    v11 = 0LL;
    v42 = 0LL;
    v12 = v46;
    if ( *((_DWORD *)v46 + 30) )
    {
      v39 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v42);
      v11 = v42;
      if ( v39 >= 0 && *((struct IAudioMediaType **)v12 + 21) != v42 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v12 + 21, (struct IUnknown *)v42);
        v11 = v42;
      }
    }
    if ( v11 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v11->lpVtbl->Release)(v11);
      v12 = v46;
    }
    v13 = 0LL;
    v42 = 0LL;
    if ( !*((_DWORD *)v12 + 30) )
    {
      v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v42);
      v13 = v42;
      if ( v14 >= 0 && *((struct IAudioMediaType **)v12 + 22) != v42 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v12 + 22, (struct IUnknown *)v42);
        v13 = v42;
      }
    }
    if ( v13 )
      ((void (__fastcall *)(struct IAudioMediaType *))v13->lpVtbl->Release)(v13);
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
    v6 = v47;
LABEL_56:
    v15 = v45;
    v16 = 0LL;
    v44 = 0LL;
    v17 = 0LL;
    v43 = 0LL;
    v2 = 0;
    v18 = *(_QWORD *)(v6 + 32);
    if ( !v18 || *(_DWORD *)(v18 + 40) != 2 )
      goto LABEL_64;
    v16 = *(_QWORD *)(*(_QWORD *)(v18 + 32) + 40LL);
    v44 = v16;
    if ( !v16 )
      goto LABEL_63;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 8LL))(v16);
    v17 = v43;
    if ( !v43 )
      goto LABEL_60;
    v48 = 0LL;
    v49[0] = 0LL;
    ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v43->lpVtbl->QueryInterface)(
      v43,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v48);
    (**(void (__fastcall ***)(__int64, GUID *, _QWORD *))v16)(v16, &GUID_00000000_0000_0000_c000_000000000046, v49);
    v40 = v48;
    v41 = v48 == v49[0];
    if ( v49[0] )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v49[0] + 16LL))(v49[0]);
      v40 = v48;
    }
    if ( v40 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
    v17 = v43;
    v6 = v47;
    if ( !v41 )
    {
LABEL_60:
      v19 = v17;
      v43 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v16)(
        v16,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        &v43);
      v17 = v43;
      if ( v19 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v19->lpVtbl->Release)(v19);
        v17 = v43;
      }
    }
    if ( !v17 )
    {
LABEL_63:
      v2 = 0;
LABEL_64:
      *(_DWORD *)(v6 + 40) = v45;
      goto LABEL_65;
    }
    lpVtbl = v17->lpVtbl;
    if ( *(_DWORD *)(v6 + 16) )
      v35 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsEqual)(v17, v15, &v45);
    else
      v35 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsCompressedFormat)(
              v17,
              v15,
              &v45);
    v2 = v35;
    if ( v35 >= 0 )
    {
      v17 = v43;
      v6 = v47;
      goto LABEL_64;
    }
    v20 = WPP_GLOBAL_Control;
    if ( WPP_GLOBAL_Control == (_UNKNOWN *)&WPP_GLOBAL_Control
      || (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) == 0
      || *((_BYTE *)WPP_GLOBAL_Control + 25) < 2u )
    {
      v17 = v43;
      goto LABEL_66;
    }
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      15LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v35);
    v17 = v43;
LABEL_65:
    v20 = WPP_GLOBAL_Control;
LABEL_66:
    if ( v17 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v17->lpVtbl->Release)(v17);
      v20 = WPP_GLOBAL_Control;
    }
    if ( v16 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
      v20 = WPP_GLOBAL_Control;
    }
    if ( v2 < 0 )
      goto LABEL_166;
    if ( !v4 )
    {
      v1 = v46;
      goto LABEL_73;
    }
  }
  ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
LABEL_74:
  if ( v2 < 0 )
  {
    v20 = WPP_GLOBAL_Control;
LABEL_166:
    if ( v20 != &WPP_GLOBAL_Control && (*((_DWORD *)v20 + 7) & 0x20000) != 0 && *((_BYTE *)v20 + 25) >= 2u )
      WPP_SF_D(v20[2], 65LL, &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids, (unsigned int)v2);
  }
  return (unsigned int)v2;
}
