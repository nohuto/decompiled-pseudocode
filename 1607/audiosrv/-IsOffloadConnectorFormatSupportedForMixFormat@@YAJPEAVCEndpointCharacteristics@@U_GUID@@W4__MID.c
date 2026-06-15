/*
 * XREFs of ?IsOffloadConnectorFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3@Z @ 0x18006C018
 * Callers:
 *     ?DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATEX@@U_GUID@@22PEAPEAU2@@Z @ 0x18006A298 (-DeriveOffloadConnectorFormatFromStreamFormat@@YAJPEAVCEndpointCharacteristics@@PEAUtWAVEFORMATE.c)
 * Callees:
 *     ?Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z @ 0x18001AF20 (-Create@CAudioMediaType@@SAJPEBUtWAVEFORMATEX@@IPEAPEAUIAudioMediaType@@M@Z.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001B49C (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z @ 0x18006772C (-CloneWaveFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAU1@@Z.c)
 *     ?ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z @ 0x18006857C (-ConvertPCMWfxToIEEEFloat@@YAXPEAUtWAVEFORMATEX@@@Z.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall IsOffloadConnectorFormatSupportedForMixFormat(
        struct CEndpointCharacteristics *a1,
        struct _GUID *a2,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a3,
        const struct tWAVEFORMATEX *a4,
        const struct tWAVEFORMATEX *Src)
{
  int ModeEffect; // r12d
  struct IAudioProcessingObject *v8; // rdi
  void *v9; // rcx
  struct tWAVEFORMATEX *v10; // rcx
  struct tWAVEFORMATEX *v11; // rbx
  void *v12; // rcx
  const struct tWAVEFORMATEX *v13; // r15
  struct IAudioMediaTypeVtbl *v14; // rax
  struct IAudioProcessingObjectVtbl *lpVtbl; // rax
  __int64 v16; // r14
  bool v17; // zf
  struct IAudioMediaType *v18; // rsi
  int v19; // eax
  struct tWAVEFORMATEX *v21; // [rsp+40h] [rbp-40h] BYREF
  struct IAudioMediaType *v22; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v23[2]; // [rsp+50h] [rbp-30h] BYREF
  struct _GUID v24; // [rsp+60h] [rbp-20h] BYREF
  struct IAudioProcessingObject *v25[2]; // [rsp+70h] [rbp-10h] BYREF
  LPVOID pv; // [rsp+B8h] [rbp+38h] BYREF

  v25[1] = (struct IAudioProcessingObject *)-2LL;
  v25[0] = 0LL;
  v24 = *a2;
  ModeEffect = CEndpointCharacteristics::GetModeEffect(a1, &v24, 0, eOffloadConnector, 0LL, v25, 0LL);
  v8 = v25[0];
  if ( ModeEffect >= 0 )
  {
    if ( !v25[0] )
    {
      ModeEffect = 0;
      goto LABEL_37;
    }
    v21 = 0LL;
    pv = 0LL;
    ModeEffect = CloneWaveFormat(Src, &v21);
    if ( ModeEffect < 0 )
    {
      v9 = 0LL;
LABEL_6:
      CoTaskMemFree(v9);
      pv = 0LL;
      v10 = v21;
LABEL_36:
      CoTaskMemFree(v10);
      v21 = 0LL;
      goto LABEL_37;
    }
    ModeEffect = CloneWaveFormat(a4, (struct tWAVEFORMATEX **)&pv);
    if ( ModeEffect < 0 )
    {
      v9 = pv;
      goto LABEL_6;
    }
    v11 = v21;
    if ( (v21->wBitsPerSample & 0xFFF8u) > 0x100 )
    {
      ModeEffect = -2004287480;
      v12 = pv;
LABEL_35:
      CoTaskMemFree(v12);
      pv = 0LL;
      v10 = v11;
      goto LABEL_36;
    }
    ConvertPCMWfxToIEEEFloat(v21);
    v13 = (const struct tWAVEFORMATEX *)pv;
    ConvertPCMWfxToIEEEFloat((struct tWAVEFORMATEX *)pv);
    v22 = 0LL;
    *(_QWORD *)&v24.Data1 = 0LL;
    v23[0] = 0LL;
    ModeEffect = CAudioMediaType::Create(v13, (unsigned int)v13->cbSize + 18, &v22, 0.0);
    if ( ModeEffect >= 0 )
    {
      ModeEffect = CAudioMediaType::Create(v11, (unsigned int)v11->cbSize + 18, (struct IAudioMediaType **)&v24, 0.0);
      if ( ModeEffect >= 0 )
      {
        lpVtbl = v8->lpVtbl;
        v16 = *(_QWORD *)&v24.Data1;
        v17 = *((_DWORD *)a1 + 93) == 0;
        v18 = v22;
        if ( v17 )
          v19 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, _QWORD *))lpVtbl->IsInputFormatSupported)(
                  v8,
                  v22,
                  *(_QWORD *)&v24.Data1,
                  v23);
        else
          v19 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, struct IAudioMediaType *, _QWORD, _QWORD *))lpVtbl->IsOutputFormatSupported)(
                  v8,
                  v22,
                  *(_QWORD *)&v24.Data1,
                  v23);
        ModeEffect = v19;
        if ( v19 && v19 != -2005073917 )
          ModeEffect = -2004287480;
        if ( v23[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
        if ( v16 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
        if ( !v18 )
          goto LABEL_34;
        v14 = v18->lpVtbl;
        goto LABEL_33;
      }
      if ( v23[0] )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
      if ( *(_QWORD *)&v24.Data1 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&v24.Data1 + 16LL))(*(_QWORD *)&v24.Data1);
    }
    else if ( v23[0] )
    {
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v23[0] + 16LL))(v23[0]);
    }
    if ( !v22 )
    {
LABEL_34:
      v12 = (void *)v13;
      goto LABEL_35;
    }
    v14 = v22->lpVtbl;
LABEL_33:
    ((void (*)(void))v14->Release)();
    goto LABEL_34;
  }
LABEL_37:
  if ( v8 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v8->lpVtbl->Release)(v8);
  return (unsigned int)ModeEffect;
}
