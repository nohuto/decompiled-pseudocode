/*
 * XREFs of ?Create@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@SAJPEAUHSTRING__@@_NPEAV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@std@@@Z @ 0x180089D6C
 * Callers:
 *     ?RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING__@@@Z @ 0x180088C7C (-RuntimeClassInitialize@SpatialGraphDriverClient@Holographic@Internal@Windows@@QEAAJPEAUHSTRING_.c)
 *     ?CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJPEAUHSTRING__@@AEBUDynamicNodeInfo@234@PEAPEAUISpatialGraphNodeReference@234@@Z @ 0x18008B460 (-CreateDynamicNodeReference@SpatialGraphNodeReferenceFactory@Holographic@Internal@Windows@@UEAAJ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003204 (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180043938 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$Start@AEAPEB_WW4TraceDriverType@@AEAU_GUID@@@TelemetryOpenHolographicDevice@HolographicDriverClientTrace@@SA?AV01@AEAPEB_W$$QEAW4TraceDriverType@@AEAU_GUID@@@Z @ 0x18008C880 (--$Start@AEAPEB_WW4TraceDriverType@@AEAU_GUID@@@TelemetryOpenHolographicDevice@HolographicDriver.c)
 *     ??$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA?AV?$shared_ptr@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@@0@XZ @ 0x18008C950 (--$make_shared@VSpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@$$V@std@@YA-AV-$sh.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090D68 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091964 (--1-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180091D00 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2 #try_helpers=1
__int64 __fastcall Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper::Create(
        HSTRING string,
        char a2,
        __int64 a3)
{
  HRESULT v6; // eax
  __int64 v8; // rdi
  HSTRING *v9; // rsi
  HRESULT v10; // eax
  int v11; // ebx
  __int64 v12; // rdx
  const wchar_t *StringRawBuffer; // rax
  volatile signed __int32 *v14; // rsi
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int128 v17; // kr10_16
  __int64 v18; // rdx
  __int64 v19; // rbx
  volatile signed __int32 *v20; // rbx
  int v21; // [rsp+20h] [rbp-1B8h] BYREF
  unsigned __int128 v22; // [rsp+28h] [rbp-1B0h] BYREF
  _QWORD v23[2]; // [rsp+38h] [rbp-1A0h] BYREF
  __int64 v24; // [rsp+48h] [rbp-190h]
  __int64 v25; // [rsp+50h] [rbp-188h]
  unsigned __int64 v26; // [rsp+58h] [rbp-180h]
  GUID pguid; // [rsp+60h] [rbp-178h] BYREF
  _QWORD v28[40]; // [rsp+70h] [rbp-168h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+0h]

  v25 = -2LL;
  v23[0] = WindowsGetStringRawBuffer(string, 0LL);
  v6 = CoCreateGuid(&pguid);
  if ( v6 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x22E,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v6);
  v21 = 1;
  ((void (__fastcall *)(_QWORD *, _QWORD *, int *, GUID *))HolographicDriverClientTrace::TelemetryOpenHolographicDevice::Start<wchar_t const * &,enum TraceDriverType,_GUID &>)(
    v28,
    v23,
    &v21,
    &pguid);
  if ( !string )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x232,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)0x80070057LL);
    v28[0] = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v28);
    return 2147942487LL;
  }
  std::make_shared<Windows::Internal::Holographic::SpatialGraphDriverHandleWrapper,>(&v22);
  v8 = v22;
  *(_DWORD *)(v22 + 8) = 1;
  *(GUID *)(v8 + 12) = pguid;
  v9 = (HSTRING *)(v8 + 32);
  if ( string == *(HSTRING *)(v8 + 32)
    || (WindowsDeleteString(*v9),
        *v9 = 0LL,
        v10 = WindowsDuplicateString(string, (HSTRING *)(v8 + 32)),
        v11 = v10,
        v10 >= 0) )
  {
    *(_BYTE *)(v8 + 40) = a2;
    v10 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v8 + 8LL))(v8);
    v11 = v10;
    if ( v10 >= 0 )
    {
      v11 = 0;
      goto LABEL_12;
    }
    v12 = 74LL;
  }
  else
  {
    v12 = 71LL;
  }
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)v12,
    (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
    (const char *)(unsigned int)v10);
LABEL_12:
  if ( v11 >= 0 )
  {
    StringRawBuffer = WindowsGetStringRawBuffer(*v9, 0LL);
    if ( !wcsncmp(StringRawBuffer, L"\\\\?\\root#holographic", 0x14uLL) )
      *(_BYTE *)(v8 + 96) = 1;
    v11 = 0;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x245,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v11);
  }
  if ( v11 >= 0 )
  {
    v17 = v22;
    v15 = v17 >> 64;
    v16 = v17;
    v23[1] = v22;
    v22 = 0LL;
    v26 = v15;
    v24 = *(_QWORD *)(a3 + 8);
    v18 = v24;
    *(_OWORD *)a3 = __PAIR128__(v15, v16);
    if ( v18 )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(v18 + 8)) )
      {
        v19 = v24;
        (**(void (__fastcall ***)(__int64))v24)(v24);
        if ( !_InterlockedDecrement((volatile signed __int32 *)(v19 + 12)) )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 8LL))(v24);
      }
    }
    v20 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1) )
    {
      if ( !_InterlockedDecrement((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL)) )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
        if ( !_InterlockedDecrement(v20 + 3) )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
      }
    }
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop(v28);
    v28[0] = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v28);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x237,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\spatialgraphdriverclient.cpp",
      (const char *)(unsigned int)v11);
    v14 = (volatile signed __int32 *)*((_QWORD *)&v22 + 1);
    if ( *((_QWORD *)&v22 + 1)
      && _InterlockedExchangeAdd((volatile signed __int32 *)(*((_QWORD *)&v22 + 1) + 8LL), 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v14)(v14);
      if ( !_InterlockedDecrement(v14 + 3) )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v14 + 8LL))(v14);
    }
    v28[0] = &HolographicDriverClientTrace::TelemetryOpenHolographicDevice::`vftable';
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v28);
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>(v28);
    return (unsigned int)v11;
  }
}
