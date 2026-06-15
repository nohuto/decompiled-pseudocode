/*
 * XREFs of ?CreateSystemEffect@@YAJAEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x180037E04
 * Callers:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x180030BDC (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 * Callees:
 *     ?AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z @ 0x18002B950 (-AtlComQIPtrAssign@ATL@@YAPEAUIUnknown@@PEAPEAU2@PEAU2@AEBU_GUID@@@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CreateSystemEffect(const struct _GUID *a1, struct IUnknown **a2)
{
  HRESULT Instance; // esi
  struct IUnknown *v4; // rbx
  struct IUnknown *v6; // [rsp+60h] [rbp+18h] BYREF

  v6 = 0LL;
  Instance = CoCreateInstance(a1, 0LL, 1u, &GUID_fd7f2b29_24d0_4b5c_b177_592c39f9ca10, (LPVOID *)a2);
  v4 = v6;
  if ( Instance >= 0 )
  {
    if ( v6 != *a2 )
    {
      ATL::AtlComQIPtrAssign(&v6, *a2, &GUID_5fa00f27_add6_499a_8a9d_6b98521fa75b);
      v4 = v6;
    }
    if ( !v4 )
    {
      if ( *a2 )
      {
        ((void (__fastcall *)(struct IUnknown *))(*a2)->lpVtbl->Release)(*a2);
        *a2 = 0LL;
        v4 = v6;
      }
      *a2 = 0LL;
      Instance = -2147467262;
    }
  }
  if ( v4 )
    ((void (__fastcall *)(struct IUnknown *))v4->lpVtbl->Release)(v4);
  return (unsigned int)Instance;
}
