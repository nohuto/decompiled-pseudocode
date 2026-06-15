/*
 * XREFs of ?InitializeRateConverterInterface@CPipeInstance@@AEAAJPEAVCProcessNode@@PEAUIAudioProcessingObject@@@Z @ 0x14000D2D0
 * Callers:
 *     ?InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ @ 0x14000C960 (-InitializeAPOInterfaces@CPipeInstance@@AEAAJXZ.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x1400103E0 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     ?GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140010D70 (-GetRightFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     ?GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z @ 0x140011350 (-GetLeftFormat@CProcessNode@@UEAAJPEAPEAUIAudioMediaType@@@Z.c)
 *     WPP_SF_D @ 0x1400176C0 (WPP_SF_D.c)
 *     ?GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ @ 0x140017A80 (-GetAudioFormat@CAudioMediaType@@UEAAPEBUtWAVEFORMATEX@@XZ.c)
 *     __security_check_cookie @ 0x140018E40 (__security_check_cookie.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CPipeInstance::InitializeRateConverterInterface(
        CPipeInstance *this,
        struct CProcessNode *a2,
        struct IAudioProcessingObject *a3)
{
  int v6; // esi
  __int64 v8; // rax
  __int64 (__fastcall *v9)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int LeftFormat; // eax
  __int64 (__fastcall *v11)(CProcessNode *__hidden, struct IAudioMediaType **); // rbx
  int v12; // eax
  const WAVEFORMATEX *(__stdcall *GetAudioFormat)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *AudioFormat; // rax
  CAudioMediaType *v15; // rbx
  const WAVEFORMATEX *(__stdcall *v16)(IAudioMediaType *); // rdi
  const struct tWAVEFORMATEX *v17; // rax
  const struct tWAVEFORMATEX *(__fastcall *v18)(CAudioMediaType *__hidden); // rdi
  const struct tWAVEFORMATEX *v19; // rax
  ULONG (__stdcall *Release)(IAudioMediaType *); // rdi
  struct IAudioMediaType *v21; // [rsp+20h] [rbp-59h] BYREF
  struct IAudioMediaType *v22; // [rsp+28h] [rbp-51h] BYREF
  _QWORD v23[2]; // [rsp+30h] [rbp-49h] BYREF
  int v24; // [rsp+40h] [rbp-39h] BYREF
  GUID v25; // [rsp+44h] [rbp-35h]
  __int64 v26; // [rsp+54h] [rbp-25h]
  __int64 v27; // [rsp+5Ch] [rbp-1Dh]
  __int64 v28; // [rsp+64h] [rbp-15h]
  __int64 v29; // [rsp+6Ch] [rbp-Dh]
  __int64 v30; // [rsp+74h] [rbp-5h]

  v23[1] = -2LL;
  v23[0] = 0LL;
  v24 = 0;
  v25 = (GUID)0LL;
  v26 = 0LL;
  v27 = 0LL;
  v28 = 0LL;
  v29 = 0LL;
  v30 = 0LL;
  v21 = 0LL;
  v22 = 0LL;
  if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a3->lpVtbl->QueryInterface)(
         a3,
         &GUID_788f7be2_9c40_41c0_af05_4393fbf409f9,
         v23) < 0 )
  {
    v6 = 0;
    goto LABEL_3;
  }
  v8 = *(_QWORD *)a2;
  if ( *((_DWORD *)a2 + 6) )
  {
    v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType **))(v8 + 16))(a2, &v21);
    if ( v6 >= 0 )
    {
      v6 = (*(__int64 (__fastcall **)(struct CProcessNode *, struct IAudioMediaType **))(*(_QWORD *)a2 + 8LL))(a2, &v22);
      if ( v6 >= 0 )
        goto LABEL_16;
    }
  }
  else
  {
    v9 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(v8 + 8);
    if ( v9 == CProcessNode::GetLeftFormat )
      LeftFormat = CProcessNode::GetLeftFormat(a2, &v21);
    else
      LeftFormat = v9(a2, &v21);
    v6 = LeftFormat;
    if ( LeftFormat >= 0 )
    {
      v11 = *(__int64 (__fastcall **)(CProcessNode *__hidden, struct IAudioMediaType **))(*(_QWORD *)a2 + 16LL);
      v12 = v11 == CProcessNode::GetRightFormat ? CProcessNode::GetRightFormat(a2, &v22) : v11(a2, &v22);
      v6 = v12;
      if ( v12 >= 0 )
      {
LABEL_16:
        v24 = 60;
        v25 = GUID_27c98999_2895_4829_b080_5a8b65bd3db0;
        *(float *)&v26 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                       + 4);
        GetAudioFormat = v22->lpVtbl->GetAudioFormat;
        if ( (char *)GetAudioFormat == (char *)CAudioMediaType::GetAudioFormat )
          AudioFormat = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v22);
        else
          AudioFormat = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))GetAudioFormat)(v22);
        *((float *)&v26 + 1) = (float)(int)AudioFormat->nSamplesPerSec;
        *(float *)&v27 = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                       + 4)
                       * (float)(1.0 - *((float *)this + 48));
        *((float *)&v27 + 1) = (float)*(int *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                             + 4)
                             * (float)(*((float *)this + 49) + 1.0);
        v15 = (CAudioMediaType *)v22;
        v16 = v22->lpVtbl->GetAudioFormat;
        if ( (char *)v16 == (char *)CAudioMediaType::GetAudioFormat )
        {
          v17 = CAudioMediaType::GetAudioFormat((CAudioMediaType *)v22);
        }
        else
        {
          v17 = (const struct tWAVEFORMATEX *)((__int64 (__fastcall *)(struct IAudioMediaType *))v16)(v22);
          v15 = (CAudioMediaType *)v22;
        }
        *(float *)&v28 = (float)(int)v17->nSamplesPerSec;
        v18 = *(const struct tWAVEFORMATEX *(__fastcall **)(CAudioMediaType *__hidden))(*(_QWORD *)v15 + 40LL);
        if ( v18 == CAudioMediaType::GetAudioFormat )
          v19 = CAudioMediaType::GetAudioFormat(v15);
        else
          v19 = v18(v15);
        *((float *)&v28 + 1) = (float)(int)v19->nSamplesPerSec;
        LODWORD(v29) = *((_DWORD *)this + 50);
        v30 = *(unsigned __int16 *)(((__int64 (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->GetAudioFormat)(v21)
                                  + 2);
        HIDWORD(v29) = *((_DWORD *)this + 3) != 0;
        v6 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, int *))a3->lpVtbl->Initialize)(
               a3,
               60LL,
               &v24);
        if ( v6 >= 0 )
          goto LABEL_3;
      }
    }
  }
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      59LL,
      &WPP_b52afc5823799b3c24512fb75c28f887_Traceguids,
      (unsigned int)v6);
  }
LABEL_3:
  if ( v22 )
  {
    Release = v22->lpVtbl->Release;
    if ( (char *)Release == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v22);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))Release)(v22);
  }
  if ( v21 )
    ((void (__fastcall *)(struct IAudioMediaType *))v21->lpVtbl->Release)(v21);
  if ( v23[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
  return (unsigned int)v6;
}
