/*
 * XREFs of ?TrackSystemEffectBehavior@@YAJPEAUIMMDevice@@_N1AEBU_GUID@@@Z @ 0x1800A76D8
 * Callers:
 *     ?GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEAU3@PEAPEAUIAudioProcessingObject@@PEAPEAUIAudioSystemEffects2@@@Z @ 0x1800115C0 (-GetInitializedSystemEffectInterface@@YAJPEAUIMMDevice@@U_tagpropertykey@@U_GUID@@HHW4__MIDL___M.c)
 *     ?IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@PEBUtWAVEFORMATEX@@3PEAPEAU4@@Z @ 0x1800210E0 (-IsStreamFormatSupportedForMixFormat@@YAJPEAVCEndpointCharacteristics@@U_GUID@@W4__MIDL___MIDL_i.c)
 * Callees:
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     WPP_SF__guid_ @ 0x180070DE4 (WPP_SF__guid_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall TrackSystemEffectBehavior(struct IMMDevice *a1, __int64 a2, __int64 a3, struct _GUID *a4)
{
  int v5; // r14d
  unsigned int v6; // ebx
  __int64 v8; // [rsp+20h] [rbp-50h] BYREF
  LPOLESTR lpsz; // [rsp+28h] [rbp-48h] BYREF
  PROPVARIANT pvar; // [rsp+30h] [rbp-40h] BYREF
  __int64 v11; // [rsp+38h] [rbp-38h]
  __int64 v12; // [rsp+40h] [rbp-30h]
  __int64 v13; // [rsp+48h] [rbp-28h]
  __int128 v14; // [rsp+50h] [rbp-20h] BYREF
  int v15; // [rsp+60h] [rbp-10h]

  v13 = -2LL;
  v8 = 0LL;
  pvar = 0LL;
  v11 = 0LL;
  v12 = 0LL;
  v5 = ((__int64 (__fastcall *)(struct IMMDevice *, __int64, __int64 *))a1->lpVtbl->OpenPropertyStore)(a1, 2LL, &v8);
  if ( v5 >= 0 )
  {
    v14 = PKEY_Endpoint_GFX_FailCount;
    v15 = 8;
    (*(void (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v8 + 40LL))(v8, &v14, &pvar);
    if ( (_WORD)pvar == 19 )
    {
      LODWORD(v11) = v11 + 1;
      if ( (_DWORD)v11 == 10 )
      {
        v6 = a4->Data1 + *(_DWORD *)a4->Data4 + (*(_QWORD *)&a4->Data1 + *(_QWORD *)a4->Data4) / 0xFFFFFFFFuLL;
        lpsz = 0LL;
        StringFromCLSID(a4, &lpsz);
        WerRegisterMemoryBlock(a4, 0x10u);
        if ( lpsz )
        {
          ShipAssertMsgW(47105LL, v6);
          CoTaskMemFree(lpsz);
        }
        else
        {
          ShipAssert(47105LL, v6);
        }
        if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
          && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x20000) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF__guid_(
            *((_QWORD *)WPP_GLOBAL_Control + 2),
            0xBu,
            (__int64)&WPP_2bda92312337278facb79c049a01aa8d_Traceguids,
            (__int64)a4);
        }
      }
    }
    else
    {
      LOWORD(pvar) = 19;
      LODWORD(v11) = 1;
    }
    v5 = (*(__int64 (__fastcall **)(__int64, __int128 *, PROPVARIANT *))(*(_QWORD *)v8 + 48LL))(v8, &v14, &pvar);
  }
  PropVariantClear(&pvar);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return (unsigned int)v5;
}
