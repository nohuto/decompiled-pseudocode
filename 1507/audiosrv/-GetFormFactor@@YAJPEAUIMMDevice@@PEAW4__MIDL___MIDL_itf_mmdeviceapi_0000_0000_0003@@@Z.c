/*
 * XREFs of ?GetFormFactor@@YAJPEAUIMMDevice@@PEAW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003@@@Z @ 0x18006E770
 * Callers:
 *     ?Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z @ 0x18006ED40 (-Initialize@CVolumeSoftware@@UEAAJPEAUIMMDevice@@@Z.c)
 * Callees:
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall GetFormFactor(struct IMMDevice *a1, enum __MIDL___MIDL_itf_mmdeviceapi_0000_0000_0003 *a2)
{
  int v3; // esi
  PROPVARIANT pvar; // [rsp+28h] [rbp-20h] BYREF
  __int64 v6; // [rsp+30h] [rbp-18h]
  __int64 v7; // [rsp+38h] [rbp-10h]
  __int64 v8; // [rsp+50h] [rbp+8h] BYREF

  pvar = 0LL;
  v6 = 0LL;
  v7 = 0LL;
  v8 = 0LL;
  v3 = ((__int64 (__fastcall *)(struct IMMDevice *, _QWORD, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 0LL, &v8);
  if ( v3 < 0
    || (v3 = (*(__int64 (__fastcall **)(__int64, const PROPERTYKEY *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(
               v8,
               &PKEY_AudioEndpoint_FormFactor,
               &pvar),
        v3 < 0) )
  {
    if ( *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
      && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x10000) != 0
      && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
    {
      WPP_SF_D(
        *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
        0x4Du,
        (__int64)&WPP_b999b71a7868065e7997871bd7ab5ae5_Traceguids,
        v3);
    }
    v3 = 0;
  }
  else
  {
    *a2 = (unsigned __int16)v6;
    PropVariantClear(&pvar);
  }
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v3;
}
