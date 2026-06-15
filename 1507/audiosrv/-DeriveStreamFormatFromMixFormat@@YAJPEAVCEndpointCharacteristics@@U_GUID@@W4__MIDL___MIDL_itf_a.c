/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180086008
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x18008C790 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?Release@CAudioMediaType@@UEAAKXZ @ 0x180021740 (-Release@CAudioMediaType@@UEAAKXZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x180032B24 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x1800342D0 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180066248 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8D14 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveStreamFormatFromMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v7; // rsi
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v8; // eax
  int StreamEffect; // eax
  int v10; // r15d
  struct IAudioProcessingObject *v11; // r14
  CAudioMediaType *v12; // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v14; // eax
  ULONG (__stdcall *v15)(IUnknown *); // r12
  __int64 (__fastcall *v16)(CAudioMediaType *); // rbx
  ULONG (__stdcall *Release)(IUnknown *); // r12
  __int64 (__fastcall *v18)(CAudioMediaType *); // rbx
  ULONG (__stdcall *v19)(IUnknown *); // r12
  __int64 (__fastcall *v20)(CAudioMediaType *); // rbx
  struct IAudioMediaType *v21; // rcx
  ULONG (__stdcall *v22)(IAudioMediaType *); // rbx
  struct IAudioSystemEffects2 **v24; // [rsp+20h] [rbp-50h]
  struct IUnknown *v25; // [rsp+40h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v26; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v27; // [rsp+50h] [rbp-20h] BYREF
  __int64 v28; // [rsp+60h] [rbp-10h]
  struct IUnknown *v29; // [rsp+B0h] [rbp+40h] BYREF
  int v30; // [rsp+C0h] [rbp+50h] BYREF

  v28 = -2LL;
  v7 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v8 = a3;
  if ( a3 == eOffloadConnector )
    v8 = eHostProcessConnector;
  if ( *((_DWORD *)a1 + v8 + 10) )
  {
    v27 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(a1, &v27, 0, a3, 0LL, &v26, 0LL);
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, &v26, v24);
  }
  v10 = StreamEffect;
  v11 = v26;
  if ( StreamEffect < 0 )
    goto LABEL_49;
  if ( !v26 )
  {
    if ( a4 )
    {
      ATL::AtlComPtrAssign(&v25, a4);
      v7 = (struct IAudioMediaType *)v25;
    }
    goto LABEL_47;
  }
  v30 = 0;
  v12 = 0LL;
  *(_QWORD *)&v27.Data1 = 0LL;
  if ( a4 )
  {
    ATL::AtlComPtrAssign((struct IUnknown **)&v27, a4);
    v12 = *(CAudioMediaType **)&v27.Data1;
  }
  v29 = 0LL;
  lpVtbl = v11->lpVtbl;
  if ( *((_DWORD *)a1 + 93) )
    v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
            v11,
            a4,
            v12,
            &v29);
  else
    v14 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, CAudioMediaType *, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
            v11,
            a4,
            v12,
            &v29);
  if ( v14 >= 0 && ((int (__fastcall *)(struct IUnknown *, int *))v29->lpVtbl[1].QueryInterface)(v29, &v30) >= 0 && !v30 )
  {
    if ( v29 )
    {
      ATL::AtlComPtrAssign(&v25, v29);
      v7 = (struct IAudioMediaType *)v25;
    }
    v10 = ValidateAPOInputFormat(v7);
    if ( v10 < 0 )
    {
      if ( v29 )
      {
        Release = v29->lpVtbl->Release;
        if ( (char *)Release == (char *)CAudioMediaType::Release )
          CAudioMediaType::Release((CAudioMediaType *)v29);
        else
          ((void (__fastcall *)(struct IUnknown *))Release)(v29);
      }
      if ( v12 )
      {
        v18 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
        if ( v18 == CAudioMediaType::Release )
          CAudioMediaType::Release(v12);
        else
          v18(v12);
      }
LABEL_48:
      if ( v10 >= 0 )
        goto LABEL_53;
      goto LABEL_49;
    }
    if ( v29 )
    {
      v19 = v29->lpVtbl->Release;
      if ( (char *)v19 == (char *)CAudioMediaType::Release )
        CAudioMediaType::Release((CAudioMediaType *)v29);
      else
        ((void (__fastcall *)(struct IUnknown *))v19)(v29);
    }
    if ( v12 )
    {
      v20 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
      if ( v20 == CAudioMediaType::Release )
        CAudioMediaType::Release(v12);
      else
        v20(v12);
    }
LABEL_47:
    v21 = v7;
    v7 = 0LL;
    v25 = 0LL;
    *a5 = v21;
    goto LABEL_48;
  }
  v10 = -2004287480;
  if ( v29 )
  {
    v15 = v29->lpVtbl->Release;
    if ( (char *)v15 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v29);
    else
      ((void (__fastcall *)(struct IUnknown *))v15)(v29);
  }
  if ( v12 )
  {
    v16 = *(__int64 (__fastcall **)(CAudioMediaType *))(*(_QWORD *)v12 + 16LL);
    if ( v16 == CAudioMediaType::Release )
      CAudioMediaType::Release(v12);
    else
      v16(v12);
  }
LABEL_49:
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x19u,
      (__int64)&WPP_6e00fd835f7d6636badfe8f1a08ae6f4_Traceguids,
      v10);
  }
LABEL_53:
  if ( v11 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v11->lpVtbl->Release)(v11);
  if ( v7 )
  {
    v22 = v7->lpVtbl->Release;
    if ( (char *)v22 == (char *)CAudioMediaType::Release )
      CAudioMediaType::Release((CAudioMediaType *)v7);
    else
      ((void (__fastcall *)(struct IAudioMediaType *))v22)(v7);
  }
  return (unsigned int)v10;
}
