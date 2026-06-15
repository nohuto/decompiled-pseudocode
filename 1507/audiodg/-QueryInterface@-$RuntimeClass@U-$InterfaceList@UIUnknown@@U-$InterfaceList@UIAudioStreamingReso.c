/*
 * XREFs of ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x140015300
 * Callers:
 *     ?CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z @ 0x140015388 (-CreateStreamingResourceManager@@YAJPEAPEAUIAudioStreamingResourceRegistration@@@Z.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@UIUnknown@@U?$InterfaceList@UIAudioStreamingResourceRegistration@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@W7EAAJAEBU_GUID@@PEAPEAX@Z @ 0x140019DE0 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@UIUnknown@@U-$InterfaceList@UIAudio_ea_140019DE0.c)
 * Callees:
 *     ??1?$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ @ 0x140026C00 (--1-$CComObjectRootEx@VCComMultiThreadModelNoCS@ATL@@@ATL@@QEAA@XZ.c)
 */

__int64 __fastcall Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::InterfaceList<IAudioStreamingResourceRegistration,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::QueryInterface(
        __int64 a1,
        _DWORD *a2,
        __int64 *a3)
{
  unsigned int v3; // ebx
  __int64 v4; // rsi
  int v6; // r10d

  v3 = 0;
  v4 = a1;
  *a3 = 0LL;
  if ( *a2 )
    goto LABEL_5;
  v6 = a2[1];
  if ( v6 != *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2 )
    goto LABEL_5;
  if ( a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
    goto LABEL_8;
  }
  if ( v6 == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data2
    && a2[2] == *(_DWORD *)GUID_00000000_0000_0000_c000_000000000046.Data4
    && a2[3] == *(_DWORD *)&GUID_00000000_0000_0000_c000_000000000046.Data4[4] )
  {
    *a3 = a1;
  }
  else
  {
LABEL_5:
    if ( *a2 != -1099282551
      || a2[1] != *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data2
      || a2[2] != *(_DWORD *)GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4
      || a2[3] != *(_DWORD *)&GUID_be7a4789_2891_49b3_923e_dc97de058472.Data4[4] )
    {
      return (unsigned int)-2147467262;
    }
    *a3 = a1 + 8;
  }
  v4 = *a3;
LABEL_8:
  (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 8LL))(v4);
  return v3;
}
