/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x180081D6C
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180089190 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012CC4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180071BD4 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x1800867D4 (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A665C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
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
  int StreamEffect; // eax
  int v9; // r12d
  struct IAudioProcessingObject *v10; // r14
  __int64 v11; // rdi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v13; // eax
  struct IAudioMediaType *v14; // rcx
  struct IAudioSystemEffects2 **v16; // [rsp+20h] [rbp-50h]
  struct IUnknown *v17; // [rsp+40h] [rbp-30h] BYREF
  struct IAudioProcessingObject *v18; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  int v22; // [rsp+B0h] [rbp+40h] BYREF

  v20 = -2LL;
  v7 = 0LL;
  v17 = 0LL;
  v18 = 0LL;
  if ( *((_DWORD *)a1 + a3 + 10) )
  {
    v19 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(a1, &v19, 0, a3, 0LL, &v18, 0LL);
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, &v18, v16);
  }
  v9 = StreamEffect;
  v10 = v18;
  if ( StreamEffect >= 0 )
  {
    if ( v18 )
    {
      v22 = 0;
      v11 = 0LL;
      *(_QWORD *)&v19.Data1 = 0LL;
      if ( a4 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v19, a4);
        v11 = *(_QWORD *)&v19.Data1;
      }
      v21 = 0LL;
      lpVtbl = v10->lpVtbl;
      if ( *((_DWORD *)a1 + 93) )
        v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsOutputFormatSupported)(
                v10,
                a4,
                v11,
                &v21);
      else
        v13 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IUnknown *, __int64, struct IUnknown **))lpVtbl->IsInputFormatSupported)(
                v10,
                a4,
                v11,
                &v21);
      if ( v13 < 0
        || ((int (__fastcall *)(struct IUnknown *, int *))v21->lpVtbl[1].QueryInterface)(v21, &v22) < 0
        || v22 )
      {
        v9 = -2004287480;
        if ( v21 )
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        goto LABEL_35;
      }
      if ( v21 )
      {
        ATL::AtlComPtrAssign(&v17, v21);
        v7 = (struct IAudioMediaType *)v17;
      }
      v9 = ValidateAPOInputFormat(v7);
      if ( v9 < 0 )
      {
        if ( v21 )
          ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
LABEL_34:
        if ( v9 >= 0 )
          goto LABEL_39;
        goto LABEL_35;
      }
      if ( v21 )
        ((void (__fastcall *)(struct IUnknown *))v21->lpVtbl->Release)(v21);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else if ( a4 )
    {
      ATL::AtlComPtrAssign(&v17, a4);
      v7 = (struct IAudioMediaType *)v17;
    }
    v14 = v7;
    v7 = 0LL;
    v17 = 0LL;
    *a5 = v14;
    goto LABEL_34;
  }
LABEL_35:
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 8) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x1Au, (__int64)&WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v9);
  }
LABEL_39:
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->Release)(v10);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v9;
}
