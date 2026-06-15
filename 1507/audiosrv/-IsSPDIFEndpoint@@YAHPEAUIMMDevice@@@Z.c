/*
 * XREFs of ?IsSPDIFEndpoint@@YAHPEAUIMMDevice@@@Z @ 0x18008B984
 * Callers:
 *     AudioServerIsFormatSupported @ 0x180022F00 (AudioServerIsFormatSupported.c)
 *     ?DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@W4_AUDCLNT_SHAREMODE@@U_GUID@@44PEAUtWAVEFORMATEX@@PEAPEAU5@66@Z @ 0x180030080 (-DeriveDeviceGraphFormatsForStream@@YAJPEAVCEndpointCharacteristics@@_NW4__MIDL___MIDL_itf_audio.c)
 *     ?IsSPDIFEndpoint@@YAHPEBG@Z @ 0x18008BB34 (-IsSPDIFEndpoint@@YAHPEBG@Z.c)
 * Callees:
 *     WPP_SF_ @ 0x180001600 (WPP_SF_.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z @ 0x18008A054 (-EndpointRequiresAC97VistaShim@@YAHPEAUIMMDevice@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall IsSPDIFEndpoint(struct IMMDevice *a1)
{
  unsigned int v2; // esi
  int v3; // eax
  int v4; // eax
  int v5; // ebp
  PROPVARIANT pvar; // [rsp+28h] [rbp-30h] BYREF
  __int64 v8; // [rsp+30h] [rbp-28h]
  __int64 v9; // [rsp+38h] [rbp-20h]
  __int64 v10; // [rsp+60h] [rbp+8h] BYREF

  v10 = 0LL;
  v2 = 0;
  pvar = 0LL;
  v8 = 0LL;
  v9 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v10);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v10 + 40LL))(
               v10,
               &PKEY_AudioEndpoint_FormFactor,
               &pvar),
        v3 < 0) )
  {
LABEL_16:
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x74u,
        (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
        v3);
    }
    goto LABEL_20;
  }
  if ( (_WORD)pvar != 19 )
  {
    v3 = -2147467259;
    goto LABEL_16;
  }
  if ( (unsigned int)(unsigned __int16)v8 - 7 <= 1 )
    goto LABEL_15;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x72u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids);
  }
  v4 = EndpointRequiresAC97VistaShim(a1);
  v5 = v4;
  if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x100) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      0x73u,
      (__int64)&WPP_1ce008ef94d310117402048c610b448c_Traceguids,
      v4);
  }
  if ( v5 )
LABEL_15:
    v2 = 1;
LABEL_20:
  PropVariantClear(&pvar);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return v2;
}
