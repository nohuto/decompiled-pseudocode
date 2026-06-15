/*
 * XREFs of ?IsConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x180083B54
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x180081AB4 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x180020DE0 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18007F8A0 (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x180080350 (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  int ModeEffect; // r13d
  struct IAudioProcessingObject *v8; // rdi
  void *v9; // rcx
  struct tWAVEFORMATEX *v10; // rcx
  struct tWAVEFORMATEX *v11; // rbx
  struct IAudioMediaType *v12; // rsi
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  HRESULT (__stdcall *IsOutputFormatSupported)(IAudioProcessingObject *, IAudioMediaType *, IAudioMediaType *, IAudioMediaType **); // r15
  __int64 v15; // r14
  struct tWAVEFORMATEX *v17; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v18; // [rsp+48h] [rbp-38h] BYREF
  __int64 v19; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v20; // [rsp+60h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v21[2]; // [rsp+70h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+38h] BYREF
  enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 v23; // [rsp+C0h] [rbp+40h]

  v23 = a3;
  v21[1] = (struct IAudioProcessingObject *)-2LL;
  v21[0] = 0LL;
  v20 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v20, 0, eOffloadConnector, 0LL, v21, 0LL);
  v8 = v21[0];
  if ( ModeEffect >= 0 )
  {
    if ( !v21[0] )
    {
      ModeEffect = 0;
      goto LABEL_35;
    }
    v17 = 0LL;
    pv = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v17);
    if ( ModeEffect < 0 )
    {
      v9 = 0LL;
LABEL_6:
      CoTaskMemFree(v9);
      pv = 0LL;
      v10 = v17;
LABEL_34:
      CoTaskMemFree(v10);
      v17 = 0LL;
      goto LABEL_35;
    }
    ModeEffect = CloneWaveFormat(a4, (struct tWAVEFORMATEX **)&pv);
    if ( ModeEffect < 0 )
    {
      v9 = pv;
      goto LABEL_6;
    }
    v11 = v17;
    if ( (v17->wBitsPerSample & 0xFFF8u) > 0x100 )
    {
      ModeEffect = -2004287480;
LABEL_33:
      CoTaskMemFree(pv);
      pv = 0LL;
      v10 = v11;
      goto LABEL_34;
    }
    ConvertPCMWfxToIEEEFloat(v17);
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v18 = 0LL;
    *(_QWORD *)&v20.Data1 = 0LL;
    v19 = 0LL;
    ModeEffect = CAudioMediaType::Create(a4, (unsigned int)a4->cbSize + 18, &v18, 0.0);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CAudioMediaType::Create(v11, (unsigned int)v11->cbSize + 18, (struct IAudioMediaType **)&v20, 0.0);
      if ( ModeEffect >= 0 )
      {
        lpVtbl = v8->lpVtbl;
        if ( *((_DWORD *)a1 + 93) )
          IsOutputFormatSupported = lpVtbl->IsOutputFormatSupported;
        else
          IsOutputFormatSupported = lpVtbl->IsInputFormatSupported;
        v15 = *(_QWORD *)&v20.Data1;
        v12 = v18;
        ModeEffect = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, __int64 *))IsOutputFormatSupported)(
                       v8,
                       v18,
                       *(_QWORD *)&v20.Data1,
                       &v19);
        v23 = ModeEffect;
        if ( ModeEffect )
        {
          if ( ModeEffect != -2005073917 )
            ModeEffect = -2004287480;
          v23 = ModeEffect;
        }
        if ( v19 )
        {
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
          ModeEffect = v23;
        }
        if ( v15 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
        goto LABEL_31;
      }
      if ( v19 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
      if ( *(_QWORD *)&v20.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v20.Data1 + 16LL))(*(_QWORD *)&v20.Data1);
    }
    else if ( v19 )
    {
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
    }
    v12 = v18;
LABEL_31:
    if ( v12 )
      ((void (__fastcall *)(struct IAudioMediaType *))v12->lpVtbl->Release)(v12);
    goto LABEL_33;
  }
LABEL_35:
  if ( v8 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ModeEffect;
}
