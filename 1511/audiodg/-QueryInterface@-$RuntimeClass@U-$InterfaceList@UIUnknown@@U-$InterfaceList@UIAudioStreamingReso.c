/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140004960
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140004D34 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019D80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudio_ea_140019D80.c)
 * Callees:
 *     ?InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z @ 0x1400049D4 (-InlineIsEqualGUID@@YAHAEBU_GUID@@0@Z.c)
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C60 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  unsigned int v3; // esi
  __int64 v4; // rdi

  v3 = 0;
  *a3 = 0LL;
  v4 = a1;
  if ( *(_DWORD *)a2 || *(_DWORD *)(a2 + 4) != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2 )
    goto LABEL_2;
  if ( *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    goto LABEL_5;
  }
  if ( *(_DWORD *)(a2 + 4) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && *(_DWORD *)(a2 + 8) == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && *(_DWORD *)(a2 + 12) == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
LABEL_2:
    if ( !(unsigned int)InlineIsEqualGUID((const struct _GUID *)a2, &GUID_be7a4789_2891_49b3_923e_dc97de058472) )
      return (unsigned int)-2147467262;
    *a3 = v4 + 8;
  }
  v4 = *a3;
LABEL_5:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return v3;
}
