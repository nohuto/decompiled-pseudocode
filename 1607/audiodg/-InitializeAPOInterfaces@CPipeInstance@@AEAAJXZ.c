/*
 * XREFs of ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x140008240
 * Callers:
 *     ?ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z @ 0x140009490 (-ConnectAPOs@CPipeInstance@@QEAAJPEAUIAudioGraphCallback@@@Z.c)
 * Callees:
 *     ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x140008B90 (-InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObje.c)
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x14000BA70 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z @ 0x14000BAD0 (-GetUncompressedAudioFormat@CAudioMediaType@@UEAAJPEAU_UNCOMPRESSEDAUDIOFORMAT@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x14000C0D0 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x140012AA0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x140016960 (-AudDGTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     WPP_SF_D @ 0x140016D6C (WPP_SF_D.c)
 *     __security_check_cookie @ 0x140018370 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x140019620 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=18
__int64 __fastcall CPipeInstance::InitializeAPOInterfaces(CPipeInstance *this)
{
  CPipeInstance *v1; // rbx
  int v2; // esi
  __int64 v3; // r9
  __int64 v4; // r15
  __int64 v5; // r13
  __int64 v6; // r12
  _DWORD *v7; // r14
  struct IAudioProcessingObject *v8; // rdi
  unsigned int v9; // ebx
  CPipeInstance *v10; // rbx
  LPVOID v11; // rcx
  LPVOID v12; // rcx
  int v13; // esi
  unsigned int v14; // edi
  __int64 v15; // rbx
  struct IAudioMediaType *v16; // rcx
  __int64 v17; // rax
  struct IAudioMediaType *v18; // rsi
  __int64 (__fastcall *v20)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v21; // eax
  HRESULT (__stdcall *v22)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int v23; // eax
  void (*v24)(void); // rax
  __int64 (__fastcall *v25)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int LeftFormat; // eax
  HRESULT (__stdcall *GetUncompressedAudioFormat)(IAudioMediaType *, UNCOMPRESSEDAUDIOFORMAT *); // rax
  int UncompressedAudioFormat; // eax
  void (*Release)(void); // rax
  __int64 (__fastcall *v30)(CProcessNode *__hidden, struct IAudioMediaType **); // rax
  int v31; // eax
  struct IAudioMediaTypeVtbl *lpVtbl; // rax
  int v33; // eax
  __int64 v34; // rax
  struct IAudioMediaType *v35; // rbx
  float v36; // xmm6_4
  int v37; // esi
  __int64 v38; // rcx
  bool v39; // si
  LPVOID pv; // [rsp+28h] [rbp-89h] BYREF
  struct IAudioMediaType *v41; // [rsp+30h] [rbp-81h] BYREF
  unsigned int v42; // [rsp+38h] [rbp-79h] BYREF
  __int64 v43; // [rsp+40h] [rbp-71h] BYREF
  CPipeInstance *v44; // [rsp+48h] [rbp-69h]
  __int64 v45; // [rsp+50h] [rbp-61h] BYREF
  _QWORD v46[3]; // [rsp+58h] [rbp-59h] BYREF
  _BYTE v47[48]; // [rsp+70h] [rbp-41h] BYREF
  int *v48; // [rsp+A0h] [rbp-11h]
  _DWORD v49[8]; // [rsp+A8h] [rbp-9h] BYREF
  unsigned int v50; // [rsp+C8h] [rbp+17h]

  v46[1] = -2LL;
  v1 = this;
  v44 = this;
  v2 = 0;
  v3 = *((unsigned int *)this + 35);
  v42 = *((_DWORD *)this + 35);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 59LL, &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids, v3);
  }
  v4 = *((_QWORD *)v1 + 9);
  v5 = *((_QWORD *)v1 + 3);
  if ( !v4 )
  {
LABEL_73:
    *((_DWORD *)v1 + 34) = v42;
    goto LABEL_74;
  }
  while ( 1 )
  {
    v6 = *(_QWORD *)(v4 + 16);
    v4 = *(_QWORD *)(v4 + 8);
    if ( !v5 )
      goto LABEL_57;
    v7 = *(_DWORD **)(v5 + 16);
    v5 = *(_QWORD *)(v5 + 8);
    if ( v7[10] != 2 )
      goto LABEL_57;
    v8 = *(struct IAudioProcessingObject **)(*((_QWORD *)v7 + 4) + 40LL);
    v46[2] = v8;
    if ( v8 )
      ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->AddRef)(v8);
    v41 = 0LL;
    memset(v49, 0, 28);
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_d81229b1_5a43_480c_92f7_be0f7f4eab60,
           &pv) >= 0 )
    {
      v25 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
      if ( v25 == CProcessNode::GetLeftFormat )
        LeftFormat = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v41);
      else
        LeftFormat = v25((CProcessNode *)v7, &v41);
      v2 = LeftFormat;
      if ( LeftFormat < 0
        || ((GetUncompressedAudioFormat = v41->lpVtbl->GetUncompressedAudioFormat,
             (char *)GetUncompressedAudioFormat != (char *)CAudioMediaType::GetUncompressedAudioFormat)
          ? (UncompressedAudioFormat = ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))GetUncompressedAudioFormat)(
                                         v41,
                                         v47))
          : (UncompressedAudioFormat = CAudioMediaType::GetUncompressedAudioFormat(
                                         (CAudioMediaType *)v41,
                                         (struct _UNCOMPRESSEDAUDIOFORMAT *)v47)),
            (v2 = UncompressedAudioFormat, UncompressedAudioFormat < 0)
         || (v49[0] = 28,
             *(GUID *)&v49[1] = GUID_06587e71_f043_403a_bf49_cb591ba6e103,
             *(_QWORD *)&v49[5] = __PAIR64__(*(unsigned int *)&v47[28], *(unsigned int *)&v47[16]),
             v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _DWORD *))v8->lpVtbl->Initialize)(
                    v8,
                    28LL,
                    v49),
             v2 < 0)) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            50LL,
            &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
            (unsigned int)v2);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeVolumeInterface", 0xAF9u, v2);
      }
    }
    else
    {
      v2 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v41 )
    {
      Release = (void (*)(void))v41->lpVtbl->Release;
      if ( (char *)Release == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v41);
      else
        Release();
    }
    if ( v2 < 0 )
      break;
    v9 = v42;
    v41 = 0LL;
    memset(v49, 0, sizeof(v49));
    v50 = 0;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_419b26e3_fa99_4408_83de_cc1276efa489,
           &pv) >= 0 )
    {
      v20 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
      if ( v20 == CProcessNode::GetLeftFormat )
        v21 = CProcessNode::GetLeftFormat((CProcessNode *)v7, &v41);
      else
        v21 = v20((CProcessNode *)v7, &v41);
      v2 = v21;
      if ( v21 < 0 )
        goto LABEL_128;
      v22 = v41->lpVtbl->GetUncompressedAudioFormat;
      v23 = (char *)v22 == (char *)CAudioMediaType::GetUncompressedAudioFormat
          ? CAudioMediaType::GetUncompressedAudioFormat((CAudioMediaType *)v41, (struct _UNCOMPRESSEDAUDIOFORMAT *)v47)
          : ((__int64 (__fastcall *)(struct IAudioMediaType *, _BYTE *))v22)(v41, v47);
      v2 = v23;
      if ( v23 < 0
        || (v49[0] = 36,
            *(GUID *)&v49[1] = GUID_3dc09436_7d83_4ba0_addc_cd47f996c5ba,
            v49[6] = (int)((float)((float)(*(float *)&v47[28] * 10.0) / 1000.0) + 0.5),
            v50 = v9,
            v49[7] = 10,
            v49[5] = *(_DWORD *)&v47[16],
            v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _DWORD *))v8->lpVtbl->Initialize)(
                   v8,
                   36LL,
                   v49),
            v2 < 0) )
      {
LABEL_128:
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            51LL,
            &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
            (unsigned int)v2);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMeterInterface", 0xB42u, v2);
      }
    }
    else
    {
      v2 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v41 )
    {
      v24 = (void (*)(void))v41->lpVtbl->Release;
      if ( (char *)v24 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v41);
      else
        v24();
    }
    if ( v2 < 0 )
      break;
    pv = 0LL;
    v41 = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_6bb6a944_7352_4327_ab91_d92607b25656,
           &pv) >= 0 )
    {
      if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioMediaType **))v8->lpVtbl->QueryInterface)(
             v8,
             &GUID_fc7dff56_6b8d_45a9_b4ca_266f9ac21693,
             &v41) < 0 )
      {
        v2 = 0;
      }
      else
      {
        v2 = (*(__int64 (__fastcall **)(LPVOID, __int64))(*(_QWORD *)pv + 24LL))(pv, 1LL);
        if ( v2 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              52LL,
              &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
              (unsigned int)v2);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeDitherInterface", 0xB7Au, v2);
        }
      }
    }
    else
    {
      v2 = 0;
    }
    if ( v41 )
      ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v2 < 0 )
      break;
    v10 = v44;
    v2 = CPipeInstance::InitializeRateConverterInterface(v44, (struct CProcessNode *)v7, v8);
    if ( v2 < 0 )
      break;
    v2 = 0;
    v43 = 0LL;
    memset(v49, 0, sizeof(v49));
    v41 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_bb8b2f5d_2af0_473f_bd94_f55a77587d3f,
           &v43) >= 0 )
    {
      v34 = *(_QWORD *)v7;
      if ( v7[6] )
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v34 + 16))(v7, &v41);
        if ( v2 < 0 || (v2 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v7 + 8LL))(v7, &pv), v2 < 0) )
        {
LABEL_144:
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              54LL,
              &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
              (unsigned int)v2);
          }
          AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeMatrixInterface", 0xC38u, v2);
          goto LABEL_31;
        }
      }
      else
      {
        v2 = (*(__int64 (__fastcall **)(_DWORD *, struct IAudioMediaType **))(v34 + 8))(v7, &v41);
        if ( v2 < 0 )
          goto LABEL_144;
        v2 = (*(__int64 (__fastcall **)(_DWORD *, LPVOID *))(*(_QWORD *)v7 + 16LL))(v7, &pv);
        if ( v2 < 0 )
          goto LABEL_144;
      }
      v49[0] = 32;
      *(GUID *)&v49[1] = GUID_541987ee_0e02_411e_9a85_1fc6156e7f4b;
      v49[5] = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41)
                                   + 2);
      v49[6] = *(unsigned __int16 *)((*(__int64 (__fastcall **)(LPVOID))(*(_QWORD *)pv + 40LL))(pv) + 2);
      v35 = v41;
      v36 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->GetAudioFormat)(v41) + 8);
      *(float *)&v49[7] = v36
                        / (float)*(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v35->lpVtbl->GetAudioFormat)(v35)
                                                     + 12);
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _DWORD *))v8->lpVtbl->Initialize)(
             v8,
             32LL,
             v49);
      v10 = v44;
      if ( v2 < 0 )
        goto LABEL_144;
    }
LABEL_31:
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v41 )
      ((void (__fastcall *)(struct IAudioMediaType *))v41->lpVtbl->Release)(v41);
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    if ( v2 < 0 )
      break;
    v43 = 0LL;
    memset(v49, 0, sizeof(v49));
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_7df8824c_aec7_4119_9425_e6979172a8ae,
           &v43) >= 0 )
    {
      v30 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)v7 + 8LL);
      if ( v30 == CProcessNode::GetLeftFormat )
        v31 = CProcessNode::GetLeftFormat((CProcessNode *)v7, (struct IAudioMediaType **)&pv);
      else
        v31 = v30((CProcessNode *)v7, (struct IAudioMediaType **)&pv);
      v2 = v31;
      if ( v31 < 0
        || (v2 = (*(__int64 (__fastcall **)(LPVOID, _BYTE *))(*(_QWORD *)pv + 48LL))(pv, v47), v2 < 0)
        || (v49[0] = 32,
            *(GUID *)&v49[1] = GUID_d69e0717_dd4b_4b25_997a_da813833b8ac,
            *(_QWORD *)&v49[5] = __PAIR64__(*(unsigned int *)&v47[28], *(unsigned int *)&v47[16]),
            v49[7] = *(_QWORD *)v10 == 0LL,
            v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _DWORD *))v8->lpVtbl->Initialize)(
                   v8,
                   32LL,
                   v49),
            v2 < 0) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            57LL,
            &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
            (unsigned int)v2);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeLimiterInterface", 0xCF8u, v2);
      }
    }
    else
    {
      v2 = 0;
    }
    if ( pv )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)pv + 16LL))(pv);
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    if ( v2 < 0 )
      break;
    v11 = 0LL;
    pv = 0LL;
    if ( *((_DWORD *)v10 + 30) )
    {
      v37 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v11 = pv;
      if ( v37 >= 0 && *((LPVOID *)v10 + 21) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v10 + 21, (struct IUnknown *)pv);
        v11 = pv;
      }
    }
    if ( v11 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v11 + 16LL))(v11);
    v12 = 0LL;
    pv = 0LL;
    if ( !*((_DWORD *)v10 + 30) )
    {
      v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, LPVOID *))v8->lpVtbl->QueryInterface)(
              v8,
              &GUID_6b54b2b5_45ee_4f11_9935_9ec3183ad534,
              &pv);
      v12 = pv;
      if ( v13 >= 0 && *((LPVOID *)v10 + 22) != pv )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)v10 + 22, (struct IUnknown *)pv);
        v12 = pv;
      }
    }
    if ( v12 )
      (*(void (__fastcall **)(LPVOID))(*(_QWORD *)v12 + 16LL))(v12);
    v43 = 0LL;
    memset(v47, 0, sizeof(v47));
    v48 = 0LL;
    pv = 0LL;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))v8->lpVtbl->QueryInterface)(
           v8,
           &GUID_22150b0d_ab8e_4f85_bd9a_8580e3b290f1,
           &v43) >= 0 )
    {
      *(_DWORD *)v47 = 56;
      *(GUID *)&v47[4] = GUID_693badea_1eb1_4013_b799_285f624a55bd;
      mmdDevGetInstanceIdFromMMDeviceId(*((_QWORD *)v10 + 23), &pv);
      *(_QWORD *)&v47[24] = pv;
      *(_OWORD *)&v47[32] = *((_OWORD *)v10 + 18);
      v48 = &dword_1400540B0;
      v2 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, _BYTE *))v8->lpVtbl->Initialize)(
             v8,
             56LL,
             v47);
      if ( v2 < 0 )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
        {
          WPP_SF_D(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            58LL,
            &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
            (unsigned int)v2);
        }
        AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeSilenceMonitorInterface", 0xD37u, v2);
      }
    }
    else
    {
      v2 = 0;
    }
    CoTaskMemFree(pv);
    pv = 0LL;
    if ( v43 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
    if ( v2 < 0 )
      goto LABEL_176;
LABEL_57:
    v14 = v42;
    v15 = 0LL;
    v43 = 0LL;
    v16 = 0LL;
    v41 = 0LL;
    v2 = 0;
    v17 = *(_QWORD *)(v6 + 32);
    if ( v17 && *(_DWORD *)(v17 + 40) == 2 )
    {
      v15 = *(_QWORD *)(*(_QWORD *)(v17 + 32) + 40LL);
      v43 = v15;
      if ( !v15 )
        goto LABEL_64;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
      v16 = v41;
      if ( !v41 )
        goto LABEL_61;
      v45 = 0LL;
      v46[0] = 0LL;
      ((void (__fastcall *)(struct IAudioMediaType *, GUID *, __int64 *))v41->lpVtbl->QueryInterface)(
        v41,
        &GUID_00000000_0000_0000_c000_000000000046,
        &v45);
      (**(void (__fastcall ***)(__int64, GUID *, _QWORD *))v15)(v15, &GUID_00000000_0000_0000_c000_000000000046, v46);
      v38 = v45;
      v39 = v45 == v46[0];
      if ( v46[0] )
      {
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v46[0] + 16LL))(v46[0]);
        v38 = v45;
      }
      if ( v38 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v38 + 16LL))(v38);
      v16 = v41;
      if ( !v39 )
      {
LABEL_61:
        v18 = v16;
        v41 = 0LL;
        (**(void (__fastcall ***)(__int64, GUID *, struct IAudioMediaType **))v15)(
          v15,
          &GUID_7ba1db8f_78ad_49cd_9591_f79d80a17c81,
          &v41);
        v16 = v41;
        if ( v18 )
        {
          ((void (__fastcall *)(struct IAudioMediaType *))v18->lpVtbl->Release)(v18);
          v16 = v41;
        }
      }
      if ( v16 )
      {
        lpVtbl = v16->lpVtbl;
        if ( *(_DWORD *)(v6 + 16) )
          v33 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsEqual)(
                  v16,
                  v14,
                  &v42);
        else
          v33 = ((__int64 (__fastcall *)(struct IAudioMediaType *, _QWORD, unsigned int *))lpVtbl->IsCompressedFormat)(
                  v16,
                  v14,
                  &v42);
        v2 = v33;
        if ( v33 < 0 )
        {
          if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
            && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
            && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
          {
            WPP_SF_D(
              *((_QWORD *)WPP_GLOBAL_Control + 2),
              15LL,
              &WPP_1ca138749e453a9e5342dd7aa161b4a4_Traceguids,
              (unsigned int)v33);
          }
          AudDGTraceLoggingErrorHelper("CConnectionInstance::SetConnectionFrameCount", 0x3E9u, v2);
          v16 = v41;
          goto LABEL_66;
        }
        v16 = v41;
      }
      else
      {
LABEL_64:
        v2 = 0;
      }
    }
    *(_DWORD *)(v6 + 40) = v42;
LABEL_66:
    if ( v16 )
      ((void (__fastcall *)(struct IAudioMediaType *))v16->lpVtbl->Release)(v16);
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
    if ( v2 < 0 )
      goto LABEL_176;
    if ( !v4 )
    {
      v1 = v44;
      goto LABEL_73;
    }
  }
  ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
LABEL_74:
  if ( v2 < 0 )
  {
LABEL_176:
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        60LL,
        &WPP_56fd94fe3e1e31dfec6880896bc643b2_Traceguids,
        (unsigned int)v2);
    }
    AudDGTraceLoggingErrorHelper("CPipeInstance::InitializeAPOInterfaces", 0xDA7u, v2);
  }
  return (unsigned int)v2;
}
