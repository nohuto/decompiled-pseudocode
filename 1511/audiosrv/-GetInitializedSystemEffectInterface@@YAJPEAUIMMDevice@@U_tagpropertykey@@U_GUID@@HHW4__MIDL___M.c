/*
 * XREFs of ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0
 * Callers:
 *     ?GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012A90 (-GetEndpointEffect@CEndpointCharacteristics@@QEAAJHW4__MIDL___MIDL_itf_audioengineendpoint_0000_.c)
 *     ?GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012BC0 (-GetModeEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0.c)
 *     ?GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU2@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180012CC4 (-GetStreamEffect@CEndpointCharacteristics@@QEAAJU_GUID@@HW4__MIDL___MIDL_itf_audioengineendpoint.c)
 *     ?GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A65CC (-GetGfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 *     ?GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU_GUID@@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800A665C (-GetLfx@CEndpointCharacteristics@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@P.c)
 * Callees:
 *     ?InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@HW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x18000F8C0 (-InitializeSystemEffectsInterface@@YAJPEAUIMMDevice@@PEAUIAudioProcessingObject@@PEAU_GUID@@U3@H.c)
 *     ?GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z @ 0x1800112B0 (-GetFxClsid@@YAJPEAUIMMDevice@@U_tagpropertykey@@PEAU_GUID@@H@Z.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF_Dd @ 0x18006F85C (WPP_SF_Dd.c)
 *     ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x1800A76D8 (-TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=2
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
  struct IAudioProcessingObject *v9; // rbx
  int v10; // r14d
  bool v11; // dl
  bool v12; // r8
  struct IAudioProcessingObject *v13; // rdi
  struct IAudioProcessingObject *v14; // rsi
  struct IAudioProcessingObject *v15; // rax
  struct IMMDevice *v16; // rdi
  struct IAudioProcessingObject *v18; // rax
  struct IAudioProcessingObject *ppv; // [rsp+40h] [rbp-79h] BYREF
  struct IAudioProcessingObject *v20; // [rsp+48h] [rbp-71h] BYREF
  struct IMMDevice *v21; // [rsp+50h] [rbp-69h]
  int v22; // [rsp+58h] [rbp-61h]
  struct IAudioProcessingObject *v23; // [rsp+60h] [rbp-59h]
  struct _tagpropertykey *v24; // [rsp+68h] [rbp-51h]
  struct _GUID v25; // [rsp+70h] [rbp-49h] BYREF
  struct _tagpropertykey v26; // [rsp+80h] [rbp-39h] BYREF
  __int64 v27; // [rsp+A0h] [rbp-19h]
  IID rclsid; // [rsp+A8h] [rbp-11h] BYREF

  v27 = -2LL;
  v22 = a4;
  *(_QWORD *)&v25.Data1 = a3;
  v24 = a2;
  v21 = a1;
  v9 = 0LL;
  v10 = 0;
  rclsid = GUID_00000000_0000_0000_0000_000000000000;
  ppv = 0LL;
  v26 = *a2;
  if ( (int)GetFxClsid(a1, &v26, &rclsid, a5) < 0 )
    goto LABEL_15;
  if ( !a8 && !a9 )
    goto LABEL_16;
  v20 = 0LL;
  v10 = CoCreateInstance(&rclsid, 0LL, 1u, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, (LPVOID *)&ppv);
  v13 = v20;
  v14 = ppv;
  if ( v10 >= 0 )
  {
    if ( v20 != ppv )
    {
      v15 = v20;
      v23 = v20;
      v13 = 0LL;
      v20 = 0LL;
      if ( ppv )
      {
        ((void (__fastcall *)(struct IAudioProcessingObject *, GUID *, struct IAudioProcessingObject **))ppv->lpVtbl->QueryInterface)(
          ppv,
          &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b,
          &v20);
        v14 = ppv;
        v13 = v20;
        v15 = v23;
      }
      if ( v15 )
      {
        ((void (__fastcall *)(struct IAudioProcessingObject *))v15->lpVtbl->Release)(v23);
        v14 = ppv;
        v13 = v20;
      }
    }
    if ( !v13 )
    {
      if ( v14 )
      {
        ((void (__fastcall *)(struct IAudioProcessingObject *))v14->lpVtbl->Release)(v14);
        v13 = v20;
      }
      v14 = 0LL;
      ppv = 0LL;
      v10 = -2147467262;
    }
  }
  if ( v13 )
  {
    ((void (__fastcall *)(struct IAudioProcessingObject *))v13->lpVtbl->Release)(v13);
    v14 = ppv;
  }
  v16 = v21;
  if ( v10 >= 0 )
  {
    v25 = *(struct _GUID *)*(_QWORD *)&v25.Data1;
    v10 = InitializeSystemEffectsInterface(v21, v14, &rclsid, &v25, v22, a6, a9);
    if ( v10 >= 0 )
    {
LABEL_15:
      if ( a8 )
      {
        v18 = ppv;
        ppv = 0LL;
        *a8 = v18;
LABEL_17:
        if ( a7 )
          *a7 = rclsid;
        goto LABEL_19;
      }
LABEL_16:
      v9 = ppv;
      goto LABEL_17;
    }
  }
  if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_Dd(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      12LL,
      &WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
      v24->pid,
      v10);
  }
  TrackSystemEffectBehavior(v16, v11, v12, &rclsid);
  v9 = ppv;
LABEL_19:
  if ( v9 )
    ((void (__fastcall *)(struct IAudioProcessingObject *))v9->lpVtbl->Release)(v9);
  return (unsigned int)v10;
}
