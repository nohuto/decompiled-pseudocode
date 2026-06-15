/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140004BB0
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140006148 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1400042F0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140005510 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400088A0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x140008900 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x1400092D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400182E8 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018F00 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
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
  float v10; // esi
  CAudioMediaType *v11; // rbx
  struct IAudioMediaType *v12; // rbx
  CPipeInstance *v13; // rsi
  struct IAudioMediaType *v14; // rbx
  int v15; // r14d
  unsigned int v16; // r12d
  __int64 v17; // rbx
  struct IAudioMediaType *v18; // rdi
  __int64 v19; // rax
  struct IAudioMediaType *v20; // r14
  __int64 v21; // rcx
  __int64 (__fastcall *v23)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v24; // eax
  HRESULT (__stdcall *v25)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // r14
  int v26; // eax
  unsigned int (__fastcall *v27)(CAudioMediaType *__hidden); // rsi
  __int64 (__fastcall *v28)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rsi
  int UncompressedAudioFormat; // eax
  unsigned int (__fastcall *v32)(CAudioMediaType *__hidden); // rsi
  __int64 (__fastcall *v33)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v34; // eax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v36; // eax
  __int64 v37; // rax
  struct IAudioMediaType *v38; // rbx
  float v39; // xmm6_4
  int v40; // r14d
  __int64 v41; // rdi
  bool v42; // r14
  struct IAudioMediaType *v43; // [rsp+28h] [rbp-89h] BYREF
  struct IAudioMediaType *v44; // [rsp+30h] [rbp-81h] BYREF
  float v45; // [rsp+38h] [rbp-79h] BYREF
  __int64 v46; // [rsp+40h] [rbp-71h] BYREF
  CPipeInstance *v47; // [rsp+48h] [rbp-69h]
  __int64 v48; // [rsp+50h] [rbp-61h]
  __int64 v49; // [rsp+58h] [rbp-59h] BYREF
  _QWORD v50[3]; // [rsp+60h] [rbp-51h] BYREF
  int v51; // [rsp+78h] [rbp-39h] BYREF
  GUID v52; // [rsp+7Ch] [rbp-35h]
  unsigned __int64 v53; // [rsp+8Ch] [rbp-25h]
  float v54[3]; // [rsp+94h] [rbp-1Dh]
  _UNCOMPRESSEDAUDIOFORMAT v55; // [rsp+A0h] [rbp-11h] BYREF

  v50[2] = -2LL;
  v1 = this;
  v47 = this;
  v2 = 0;
  v3 = *((unsigned int *)this + 34);
  v45 = *((float *)this + 34);
  if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      64LL,
      &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
      v3);
  }
  v4 = *((_QWORD *)v1 + 9);
  v5 = *((_QWORD *)v1 + 3);
  if ( !v4 )
  {
LABEL_72:
    *((float *)v1 + 33) = v45;
    goto LABEL_73;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    v48 = v6;
    if ( !v5 )
      goto LABEL_55;
    v7 = *(_DWORD **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( v7[10] != 2 )
      goto LABEL_55;
    v8 = *(struct IAudioProcessingObject **)(*((_QWORD *)v7 + 4) + 40LL);
    v50[1] = v8;
    if ( v8 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->AddRef)(v8);
    v43 = 0LL;
    v51 = 0;
    v52 = (GUID)0LL;
    v53 = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &v44) < 0 )
    {
      v2 = 0;
LABEL_12:
      v9 = (CAudioMediaType *)v43;
      goto LABEL_13;
    }
    v28 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
    if ( v28 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v43);
    else
      LeftFormat = v28((CProcessNode *)v7, &v43);
    v2 = LeftFormat;
    if ( LeftFormat < 0 )
      goto LABEL_114;
    v9 = (CAudioMediaType *)v43;
    GetUncompressedAudioFormat = v43->lpVtbl->GetUncompressedAudioFormat;
    if ( (char *)GetUncompressedAudioFormat == (char *)CAudioMediaType::GetUncompressedAudioFormat )
    {
      UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v43, &v55);
    }
    else
    {
      UncompressedAudioFormat = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))GetUncompressedAudioFormat)(
                                  v43,
                                  &v55);
      v9 = (CAudioMediaType *)v43;
    }
    v2 = UncompressedAudioFormat;
    if ( UncompressedAudioFormat >= 0 )
    {
      v51 = 28;
      v52 = GUID_06587e71_f043_403a_bf49_cb591ba6e103;
      v53 = __PAIR64__(LODWORD(v55.fFramesPerSecond), v55.dwSamplesPerFrame);
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             28LL,
             &v51);
      if ( v2 >= 0 )
        goto LABEL_12;
LABEL_114:
      v9 = (CAudioMediaType *)v43;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        56LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v2);
      goto LABEL_12;
    }
LABEL_13:
    if ( v44 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
      v9 = (CAudioMediaType *)v43;
    }
    if ( v9 )
    {
      v32 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v9 + 16LL);
      if ( v32 == CAudioMediaType::Release )
        CAudioMediaType::Release(v9);
      else
        v32(v9);
    }
    if ( v2 < 0 )
      break;
    v10 = v45;
    v2 = 0;
    v43 = 0LL;
    v51 = 0;
    v52 = (GUID)0LL;
    v53 = 0LL;
    *(_QWORD *)v54 = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &v44) < 0 )
      goto LABEL_18;
    v23 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
    if ( v23 == CProcessNode::GetLeftFormat )
      v24 = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v43);
    else
      v24 = v23((CProcessNode *)v7, &v43);
    v2 = v24;
    if ( v24 < 0 )
      goto LABEL_121;
    v11 = (CAudioMediaType *)v43;
    v25 = v43->lpVtbl->GetUncompressedAudioFormat;
    if ( (char *)v25 == (char *)CAudioMediaType::GetUncompressedAudioFormat )
    {
      v26 = CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v43, &v55);
    }
    else
    {
      v26 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))v25)(v43, &v55);
      v11 = (CAudioMediaType *)v43;
    }
    v2 = v26;
    if ( v26 >= 0 )
    {
      v51 = 36;
      v52 = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba;
      HIDWORD(v53) = (int)((float)((float)(v55.fFramesPerSecond * 10.0) / 1000.0) + 0.5);
      v54[1] = v10;
      LODWORD(v54[0]) = 10;
      LODWORD(v53) = v55.dwSamplesPerFrame;
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             36LL,
             &v51);
      if ( v2 >= 0 )
        goto LABEL_18;
LABEL_121:
      v11 = (CAudioMediaType *)v43;
    }
    if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
        57LL,
        &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
        (unsigned int)v2);
LABEL_18:
      v11 = (CAudioMediaType *)v43;
    }
    if ( v44 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
      v11 = (CAudioMediaType *)v43;
    }
    if ( v11 )
    {
      v27 = *(unsigned int (__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v11 + 16LL);
      if ( v27 == CAudioMediaType::Release )
        CAudioMediaType::Release(v11);
      else
        v27(v11);
    }
    if ( v2 < 0 )
      break;
    v44 = 0LL;
    v43 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &v44) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
             v8,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v43) < 0 )
      {
        v2 = 0;
      }
      else
      {
        v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *, __int64))v44->lpVtbl->IsCompressedFormat)(v44, 1LL);
        if ( v2 < 0
          && *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            58LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            (unsigned int)v2);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v43 )
      ((void (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->Release)(v43);
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( v2 < 0 )
      break;
    v2 = CPipeInstance::InitializeRateConverterInterface(v47, (struct CProcessNode *)v7, v8);
    if ( v2 < 0 )
      break;
    v46 = 0LL;
    v51 = 0;
    v52 = (GUID)0LL;
    v53 = 0LL;
    v54[0] = 0.0;
    v43 = 0LL;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v46) >= 0 )
    {
      v37 = *(_QWORD *)v7;
      if ( v7[6] )
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v37 + 16))(v7, &v43);
        if ( v2 < 0
          || (v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL))(v7, &v44),
              v2 < 0) )
        {
LABEL_138:
          if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
            && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
            && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
          {
            WPP_SF_D(
              *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
              60LL,
              &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
              (unsigned int)v2);
          }
          goto LABEL_33;
        }
      }
      else
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v37 + 8))(v7, &v43);
        if ( v2 < 0 )
          goto LABEL_138;
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(*(_QWORD *)v7 + 16LL))(v7, &v44);
        if ( v2 < 0 )
          goto LABEL_138;
      }
      v51 = 32;
      v52 = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      LODWORD(v53) = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43)
                                         + 2);
      HIDWORD(v53) = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->GetAudioFormat)(v44)
                                         + 2);
      v38 = v43;
      v39 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->GetAudioFormat)(v43) + 8);
      v54[0] = v39
             / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v38->lpVtbl->GetAudioFormat)(v38)
                                          + 12);
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
             v8,
             32LL,
             &v51);
      if ( v2 < 0 )
        goto LABEL_138;
    }
    else
    {
      v2 = 0;
    }
LABEL_33:
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( v43 )
      ((void (__fastcall *)(struct IAudioMediaType *))v43->lpVtbl->Release)(v43);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v2 < 0 )
      break;
    v46 = 0LL;
    v51 = 0;
    v52 = (GUID)0LL;
    v53 = 0LL;
    v54[0] = 0.0;
    v44 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v46) >= 0 )
    {
      v33 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
      if ( v33 == CProcessNode::GetLeftFormat )
        v34 = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v44);
      else
        v34 = v33((CProcessNode *)v7, &v44);
      v2 = v34;
      if ( v34 < 0
        || (v2 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _UNCOMPRESSEDAUDIOFORMAT *))v44->lpVtbl->GetUncompressedAudioFormat)(
                   v44,
                   &v55),
            v2 < 0)
        || (v51 = 32,
            v52 = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            v53 = __PAIR64__(LODWORD(v55.fFramesPerSecond), v55.dwSamplesPerFrame),
            LODWORD(v54[0]) = *(_QWORD *)v47 == 0LL,
            v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))v8->lpVtbl->Initialize)(
                   v8,
                   32LL,
                   &v51),
            v2 < 0) )
      {
        if ( *(unsigned int **)&WPP_GLOBAL_Control != &WPP_GLOBAL_Control
          && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) != 0
          && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) >= 2u )
        {
          WPP_SF_D(
            *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
            63LL,
            &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids,
            (unsigned int)v2);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v44 )
      ((void (__fastcall *)(struct IAudioMediaType *))v44->lpVtbl->Release)(v44);
    if ( v46 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v46 + 16LL))(v46);
    if ( v2 < 0 )
      break;
    v12 = 0LL;
    v44 = 0LL;
    v13 = v47;
    if ( *((_DWORD *)v47 + 30) )
    {
      v40 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v44);
      v12 = v44;
      if ( v40 >= 0 && *((struct IAudioMediaType **)v13 + 21) != v44 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v13 + 21, (struct IUnknown *)v44);
        v12 = v44;
      }
    }
    if ( v12 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
      v13 = v47;
    }
    v14 = 0LL;
    v44 = 0LL;
    if ( !*((_DWORD *)v13 + 30) )
    {
      v15 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &v44);
      v14 = v44;
      if ( v15 >= 0 && *((struct IAudioMediaType **)v13 + 22) != v44 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v13 + 22, (struct IUnknown *)v44);
        v14 = v44;
      }
    }
    if ( v14 )
      ((void (__fastcall *)(struct IAudioMediaType *))v14->lpVtbl->Release)(v14);
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
    v6 = v48;
LABEL_55:
    v16 = LODWORD(v45);
    v17 = 0LL;
    v46 = 0LL;
    v18 = 0LL;
    v43 = 0LL;
    v2 = 0;
    v19 = *(_QWORD *)(v6 + 32);
    if ( !v19 || *(_DWORD *)(v19 + 40) != 2 )
      goto LABEL_63;
    v17 = *(_QWORD *)(*(_QWORD *)(v19 + 32) + 40LL);
    v46 = v17;
    if ( !v17 )
      goto LABEL_62;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 8LL))(v17);
    v18 = v43;
    if ( !v43 )
      goto LABEL_59;
    v49 = 0LL;
    v50[0] = 0LL;
    ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v43->lpVtbl->QueryInterface)(
      v43,
      &GUID_00000000_0000_0000_c000_000000000046,
      &v49);
    (**(void (__fastcall ***)(__int64, GUID *, _QWORD *))v17)(v17, &GUID_00000000_0000_0000_c000_000000000046, v50);
    v41 = v49;
    v42 = v49 == v50[0];
    if ( v50[0] )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v50[0] + 16LL))(v50[0]);
      v41 = v49;
    }
    if ( v41 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
    v18 = v43;
    v6 = v48;
    if ( !v42 )
    {
LABEL_59:
      v20 = v18;
      v43 = 0LL;
      (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v17)(
        v17,
        &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
        &v43);
      v18 = v43;
      if ( v20 )
      {
        ((void (__fastcall *)(struct IAudioMediaType *))v20->lpVtbl->Release)(v20);
        v18 = v43;
      }
    }
    if ( !v18 )
    {
LABEL_62:
      v2 = 0;
LABEL_63:
      *(float *)(v6 + 40) = v45;
      goto LABEL_64;
    }
    lpVtbl = v18->lpVtbl;
    if ( *(_DWORD *)(v6 + 16) )
      v36 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, float *))lpVtbl->IsEqual)(v18, v16, &v45);
    else
      v36 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, float *))lpVtbl->IsCompressedFormat)(
              v18,
              v16,
              &v45);
    v2 = v36;
    if ( v36 >= 0 )
    {
      v18 = v43;
      v6 = v48;
      goto LABEL_63;
    }
    v21 = *(_QWORD *)&WPP_GLOBAL_Control;
    if ( *(unsigned int **)&WPP_GLOBAL_Control == &WPP_GLOBAL_Control
      || (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 28LL) & 0x20000) == 0
      || *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control + 25LL) < 2u )
    {
      v18 = v43;
      goto LABEL_65;
    }
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control + 16LL),
      15LL,
      &WPP_5d27bd7bd7bfafaac91857425b42f44a_Traceguids,
      (unsigned int)v36);
    v18 = v43;
LABEL_64:
    v21 = *(_QWORD *)&WPP_GLOBAL_Control;
LABEL_65:
    if ( v18 )
    {
      ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
      v21 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
    if ( v17 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
      v21 = *(_QWORD *)&WPP_GLOBAL_Control;
    }
    if ( v2 < 0 )
      goto LABEL_165;
    if ( !v4 )
    {
      v1 = v47;
      goto LABEL_72;
    }
  }
  ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
LABEL_73:
  if ( v2 < 0 )
  {
    v21 = *(_QWORD *)&WPP_GLOBAL_Control;
LABEL_165:
    if ( (unsigned int *)v21 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(v21 + 28) & 0x20000) != 0
      && *(_BYTE *)(v21 + 25) >= 2u )
    {
      WPP_SF_D(*(_QWORD *)(v21 + 16), 65LL, &WPP_8bc4064a88f7bf3340c725aaed8eb3f9_Traceguids, (unsigned int)v2);
    }
  }
  return (unsigned int)v2;
}
