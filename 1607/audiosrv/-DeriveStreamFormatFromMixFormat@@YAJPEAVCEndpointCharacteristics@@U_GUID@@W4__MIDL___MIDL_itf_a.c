/*
 * XREFs of ?DeriveStreamFormatFromMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAUIAudioMediaType@@PEAPEAU4@@Z @ 0x18006A538
 * Callers:
 *     AudioServerGetCurrentSharedModeEnginePeriod @ 0x180072670 (AudioServerGetCurrentSharedModeEnginePeriod.c)
 * Callees:
 *     ?AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z @ 0x180002144 (-AtlComPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@@Z.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B39C (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z @ 0x18007003C (-ValidateAPOInputFormat@@YAJPEAUIAudioMediaType@@@Z.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180088DF4 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall DeriveStreamFormatFromMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        struct IUnknown *a4,
        struct IAudioMediaType **a5)
{
  struct IAudioMediaType *v7; // rdi
  int StreamEffect; // eax
  int v9; // esi
  struct IAudioProcessingObject *v10; // rcx
  __int64 v11; // rbx
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  int v13; // eax
  struct IAudioMediaType *v14; // rdx
  struct IAudioSystemEffects2 **v16; // [rsp+20h] [rbp-50h]
  struct IAudioProcessingObject *v17; // [rsp+40h] [rbp-30h] BYREF
  struct IUnknown *v18; // [rsp+48h] [rbp-28h] BYREF
  struct _GUID v19; // [rsp+50h] [rbp-20h] BYREF
  __int64 v20; // [rsp+60h] [rbp-10h]
  struct IUnknown *v21; // [rsp+A0h] [rbp+30h] BYREF
  int v22; // [rsp+B0h] [rbp+40h] BYREF

  v20 = -2LL;
  v7 = 0LL;
  v18 = 0LL;
  v17 = 0LL;
  if ( *((_DWORD *)a1 + a3 + 10) )
  {
    v19 = *a2;
    StreamEffect = CEndpointCharacteristics::GetStreamEffect(a1, &v19, 0, a3, 0LL, &v17, 0LL);
  }
  else
  {
    StreamEffect = CEndpointCharacteristics::GetLfx(a1, a3, 0LL, &v17, v16);
  }
  v9 = StreamEffect;
  if ( StreamEffect >= 0 )
  {
    v10 = v17;
    if ( v17 )
    {
      v22 = 0;
      v11 = 0LL;
      *(_QWORD *)&v19.Data1 = 0LL;
      if ( a4 )
      {
        ATL::AtlComPtrAssign((struct IUnknown **)&v19, a4);
        v10 = v17;
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
        goto LABEL_37;
      }
      if ( v21 )
      {
        ATL::AtlComPtrAssign(&v18, v21);
        v7 = (struct IAudioMediaType *)v18;
      }
      v9 = ValidateAPOInputFormat(v7);
      if ( v9 < 0 )
      {
        if ( v21 )
          ((void (*)(void))v21->lpVtbl->Release)();
        if ( v11 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        v10 = v17;
LABEL_36:
        if ( v9 >= 0 )
          goto LABEL_38;
        goto LABEL_37;
      }
      if ( v21 )
        ((void (*)(void))v21->lpVtbl->Release)();
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    }
    else
    {
      if ( !a4 )
      {
LABEL_35:
        v14 = v7;
        v7 = 0LL;
        v18 = 0LL;
        *a5 = v14;
        goto LABEL_36;
      }
      ATL::AtlComPtrAssign(&v18, a4);
      v7 = (struct IAudioMediaType *)v18;
    }
    v10 = v17;
    goto LABEL_35;
  }
LABEL_37:
  AudSrvTraceLoggingErrorHelper("DeriveStreamFormatFromMixFormat", 1377, v9);
  v10 = v17;
LABEL_38:
  if ( v10 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v10->lpVtbl->Release)(v10);
  if ( v7 )
    ((void (__fastcall *)(struct IAudioMediaType *))v7->lpVtbl->Release)(v7);
  return (unsigned int)v9;
}
