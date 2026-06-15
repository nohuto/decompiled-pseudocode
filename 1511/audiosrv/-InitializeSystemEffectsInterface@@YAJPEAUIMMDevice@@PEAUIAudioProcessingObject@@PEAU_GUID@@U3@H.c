/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8C0
 * Callers:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x18000FBB0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_jjt @ 0x1800A78C4 (Template_jjt.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall InitializeSystemEffectsInterface(
        struct IMMDevice *a1,
        struct IAudioProcessingObject *a2,
        struct _GUID *a3,
        struct _GUID *a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct IAudioSystemEffects2 **a7)
{
  __int64 v10; // rcx
  GUID *v11; // rax
  int v12; // esi
  int v13; // r12d
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // eax
  struct IAudioSystemEffects2 *v17; // rax
  struct IAudioSystemEffects2 *v19; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v20; // [rsp+38h] [rbp-C8h] BYREF
  struct IMMDevice *v21; // [rsp+40h] [rbp-C0h]
  __int64 v22; // [rsp+48h] [rbp-B8h]
  struct _GUID v23; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+60h] [rbp-A0h] BYREF
  int v25; // [rsp+70h] [rbp-90h]
  int v26; // [rsp+74h] [rbp-8Ch]
  _OWORD v27[2]; // [rsp+78h] [rbp-88h]
  APOInitSystemEffects2 v28; // [rsp+A0h] [rbp-60h] BYREF

  v22 = -2LL;
  v21 = a1;
  v20 = 0LL;
  v19 = 0LL;
  v28.APOInit.cbSize = 0;
  memset_0(&v28.APOInit.clsid, 0, 0x54uLL);
  v10 = *(_QWORD *)&a4->Data1 - *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1;
  if ( *(_QWORD *)&a4->Data1 == *(_QWORD *)&GUID_00000000_0000_0000_0000_000000000000.Data1 )
    v10 = *(_QWORD *)a4->Data4 - *(_QWORD *)GUID_00000000_0000_0000_0000_000000000000.Data4;
  v11 = &GUID_c18e2f7e_933d_4965_b7d1_1eef228d2af3;
  if ( v10 )
    v11 = a4;
  *a4 = *v11;
  if ( a7 )
    *a7 = 0LL;
  v12 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioSystemEffects2 **))a2->lpVtbl->QueryInterface)(
          a2,
          &GUID_bafe99d2_7436_44ce_9e0e_4d89afbfff56,
          &v19);
  if ( v12 < 0 )
  {
    if ( a7 )
      goto LABEL_25;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, __int64 *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           &v20) < 0 )
    {
      v12 = 0;
      goto LABEL_25;
    }
  }
  v23 = *a4;
  v13 = a5;
  v12 = FillAPOInitSystemEffectsStructure(v21, a3, &v23, a5, a6, &v28);
  if ( v12 >= 0 )
  {
    if ( v19 )
    {
      v16 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
              a2,
              88LL,
              &v28);
    }
    else
    {
      if ( !v20 )
        goto LABEL_17;
      v26 = 0;
      v24 = *(_OWORD *)&v28.APOInit.cbSize;
      v25 = *(_DWORD *)&v28.APOInit.clsid.Data4[4];
      LODWORD(v24) = 56;
      v27[0] = *(_OWORD *)&v28.pAPOEndpointProperties;
      v27[1] = *(_OWORD *)&v28.pReserved;
      v16 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
              a2,
              56LL,
              &v24);
    }
    v12 = v16;
LABEL_17:
    if ( v12 >= 0 )
    {
      if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
      {
        if ( !v19 )
        {
          v13 = 0;
          a4 = &GUID_00000000_0000_0000_0000_000000000000;
        }
        Template_jjt(v15, v14, a3, a4, v13);
      }
      if ( a7 )
      {
        v17 = v19;
        v19 = 0LL;
        *a7 = v17;
      }
      v12 = 0;
    }
  }
LABEL_25:
  if ( v28.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v28.pAPOEndpointProperties->lpVtbl->Release)(v28.pAPOEndpointProperties);
    v28.pAPOEndpointProperties = 0LL;
  }
  if ( v28.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v28.pAPOSystemEffectsProperties->lpVtbl->Release)(v28.pAPOSystemEffectsProperties);
    v28.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v28.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v28.pDeviceCollection->lpVtbl->Release)(v28.pDeviceCollection);
    v28.pDeviceCollection = 0LL;
  }
  if ( v19 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v19->lpVtbl->Release)(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  return (unsigned int)v12;
}
