/*
 * XREFs of ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E820
 * Callers:
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x180020DA0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 * Callees:
 *     ?FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@AEAUAPOInitSystemEffects2@@@Z @ 0x1800243F0 (-FillAPOInitSystemEffectsStructure@@YAJPEAUIMMDevice@@PEAU_GUID@@U2@HW4__MIDL___MIDL_itf_audioen.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     Template_jjt @ 0x1800A9DB8 (Template_jjt.c)
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
  int v12; // edi
  int v13; // r12d
  struct _GUID *v14; // rbx
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // eax
  struct IAudioSystemEffects2 *v19; // rax
  struct IAudioSystemEffects2 *v20; // [rsp+30h] [rbp-D0h] BYREF
  struct _GUID *v21; // [rsp+38h] [rbp-C8h]
  _QWORD v22[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _GUID v23; // [rsp+50h] [rbp-B0h] BYREF
  APOInitSystemEffects2 v24; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v25; // [rsp+C0h] [rbp-40h] BYREF
  int v26; // [rsp+D0h] [rbp-30h]
  IPropertyStore *pAPOEndpointProperties; // [rsp+D8h] [rbp-28h]
  IPropertyStore *pAPOSystemEffectsProperties; // [rsp+E0h] [rbp-20h]
  void *pReserved; // [rsp+E8h] [rbp-18h]
  IMMDeviceCollection *pDeviceCollection; // [rsp+F0h] [rbp-10h]

  v22[1] = -2LL;
  v21 = a3;
  v22[0] = 0LL;
  v20 = 0LL;
  v24.APOInit.cbSize = 0;
  memset_0(&v24.APOInit.clsid, 0, 0x54uLL);
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
          &v20);
  if ( v12 < 0 )
  {
    if ( a7 )
      goto LABEL_17;
    if ( ((__int64 (__fastcall *)(struct IAudioProcessingObject *, GUID *, _QWORD *))a2->lpVtbl->QueryInterface)(
           a2,
           &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
           v22) < 0 )
    {
      v12 = 0;
      goto LABEL_17;
    }
  }
  v23 = *a4;
  v13 = a5;
  v14 = v21;
  v12 = FillAPOInitSystemEffectsStructure(a1, v21, &v23, a5, a6, &v24);
  if ( v12 >= 0 )
  {
    if ( v20 )
    {
      v17 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, APOInitSystemEffects2 *))a2->lpVtbl->Initialize)(
              a2,
              88LL,
              &v24);
    }
    else
    {
      if ( !v22[0] )
      {
LABEL_12:
        if ( v12 >= 0 )
        {
          if ( (Microsoft_Windows_AudioEnableBits & 0x200) != 0 )
          {
            if ( !v20 )
            {
              v13 = 0;
              a4 = &GUID_00000000_0000_0000_0000_000000000000;
            }
            Template_jjt(v16, v15, v14, a4, v13);
          }
          if ( a7 )
          {
            v19 = v20;
            v20 = 0LL;
            *a7 = v19;
          }
          v12 = 0;
        }
        goto LABEL_17;
      }
      memset_0((char *)&v25 + 4, 0, 0x34uLL);
      v25 = *(_OWORD *)&v24.APOInit.cbSize;
      v26 = *(_DWORD *)&v24.APOInit.clsid.Data4[4];
      LODWORD(v25) = 56;
      pAPOEndpointProperties = v24.pAPOEndpointProperties;
      pAPOSystemEffectsProperties = v24.pAPOSystemEffectsProperties;
      pReserved = v24.pReserved;
      pDeviceCollection = v24.pDeviceCollection;
      v17 = ((__int64 (__fastcall *)(struct IAudioProcessingObject *, __int64, __int128 *))a2->lpVtbl->Initialize)(
              a2,
              56LL,
              &v25);
    }
    v14 = v21;
    v12 = v17;
    goto LABEL_12;
  }
LABEL_17:
  if ( v24.pAPOEndpointProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOEndpointProperties->lpVtbl->Release)(v24.pAPOEndpointProperties);
    v24.pAPOEndpointProperties = 0LL;
  }
  if ( v24.pAPOSystemEffectsProperties )
  {
    ((void (__fastcall *)(IPropertyStore *))v24.pAPOSystemEffectsProperties->lpVtbl->Release)(v24.pAPOSystemEffectsProperties);
    v24.pAPOSystemEffectsProperties = 0LL;
  }
  if ( v24.pDeviceCollection )
  {
    ((void (__fastcall *)(IMMDeviceCollection *))v24.pDeviceCollection->lpVtbl->Release)(v24.pDeviceCollection);
    v24.pDeviceCollection = 0LL;
  }
  if ( v20 )
    ((void (__fastcall *)(struct IAudioSystemEffects2 *))v20->lpVtbl->Release)(v20);
  if ( v22[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v22[0] + 16LL))(v22[0]);
  return (unsigned int)v12;
}
