/*
 * XREFs of ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC
 * Callers:
 *     ?CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@3_J4PEBUtWAVEFORMATEX@@53PEAPEAUIAudioDeviceGraph@@@Z @ 0x180021F10 (-CreateSaDevice@@YAJPEAVCEndpointCharacteristics@@W4_AUDCLNT_SHAREMODE@@KW4__MIDL___MIDL_itf_aud.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800345F8 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180034734 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180066248 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8C84 (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A8D14 (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18001E820 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z @ 0x180024830 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z.c)
 *     ?CreateSystemEffect@@YAJAEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x180037E04 (-CreateSystemEffect@@YAJAEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18007C094 (WPP_SF_Dd.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x1800A9BCC (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetInitializedSystemEffectInterface(
        struct IMMDevice *a1,
        struct _tagpropertykey *a2,
        struct _GUID *a3,
        int a4,
        int a5,
        enum __MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001 a6,
        struct _GUID *a7,
        struct IAudioProcessingObject **a8,
        struct IAudioSystemEffects2 **a9)
{
  int v12; // esi
  struct IAudioProcessingObject *v13; // rbx
  bool v15; // dl
  bool v16; // r8
  struct IAudioProcessingObject *v17; // rax
  struct IAudioProcessingObject *v18; // [rsp+48h] [rbp-59h] BYREF
  struct _GUID v19; // [rsp+58h] [rbp-49h] BYREF
  struct _tagpropertykey v20; // [rsp+68h] [rbp-39h] BYREF
  __int64 v21; // [rsp+88h] [rbp-19h]
  struct _GUID v22; // [rsp+90h] [rbp-11h] BYREF

  v21 = -2LL;
  *(_QWORD *)&v19.Data1 = a3;
  v12 = 0;
  v22 = GUID_00000000_0000_0000_0000_000000000000;
  v18 = 0LL;
  v20 = *a2;
  if ( (int)GetFxClsid(a1, &v20, &v22, a5) < 0 )
    goto LABEL_12;
  if ( !a8 && !a9 )
    goto LABEL_4;
  v12 = CreateSystemEffect(&v22, &v18);
  if ( v12 >= 0 )
  {
    v19 = *(struct _GUID *)*(_QWORD *)&v19.Data1;
    v12 = InitializeSystemEffectsInterface(a1, v18, &v22, &v19, a4, a6, a9);
    if ( v12 >= 0 )
    {
LABEL_12:
      if ( a8 )
      {
        v17 = v18;
        v13 = 0LL;
        v18 = 0LL;
        *a8 = v17;
LABEL_5:
        if ( a7 )
          *a7 = v22;
        goto LABEL_7;
      }
LABEL_4:
      v13 = v18;
      goto LABEL_5;
    }
  }
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x20000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_Dd(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      12LL,
      &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
      a2->pid,
      v12);
  }
  TrackSystemEffectBehavior(a1, v15, v16, &v22);
  v13 = v18;
LABEL_7:
  if ( v13 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
  return (unsigned int)v12;
}
