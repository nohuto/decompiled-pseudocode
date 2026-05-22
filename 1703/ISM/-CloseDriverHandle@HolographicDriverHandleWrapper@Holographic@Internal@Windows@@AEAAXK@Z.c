/*
 * XREFs of ?CloseDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@AEAAXK@Z @ 0x18009332C
 * Callers:
 *     ??1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ @ 0x180092ED8 (--1HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAA@XZ.c)
 *     ?DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOTIFICATION__@@PEAXW4_CM_NOTIFY_ACTION@@PEAU_CM_NOTIFY_EVENT_DATA@@K@Z @ 0x180093470 (-DeviceHandleCallback@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@CAKPEAUHCMNOT.c)
 * Callees:
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?Stop@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180090D68 (-Stop@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param.c)
 *     ??1?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@XZ @ 0x180091964 (--1-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0Is.c)
 *     ?Destroy@?$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Param0IsProviderType@@@wil@@IEAAXXZ @ 0x180091D00 (-Destroy@-$ActivityBase@VHolographicDriverClientTrace@@$00$0EAAAAAAAAAAA@$04U_TlgReflectorTag_Pa.c)
 *     ??$Start@PEB_WAEAW4TraceDriverType@@AEAU_GUID@@@TelemetryCloseHolographicDevice@HolographicDriverClientTrace@@SA?AV01@$$QEAPEB_WAEAW4TraceDriverType@@AEAU_GUID@@@Z @ 0x180093604 (--$Start@PEB_WAEAW4TraceDriverType@@AEAU_GUID@@@TelemetryCloseHolographicDevice@HolographicDrive.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

void __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::CloseDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this,
        int a2,
        __int64 a3,
        const char *a4)
{
  signed int v5; // esi
  __int64 v6; // rbx
  __int64 *v7; // rax
  DWORD LastError; // edi
  PSRWLOCK SRWLock; // [rsp+20h] [rbp-168h] BYREF
  char v10; // [rsp+28h] [rbp-160h] BYREF
  _QWORD v11[40]; // [rsp+30h] [rbp-158h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+0h]

  v5 = (unsigned __int16)a2 | 0x80070000;
  if ( a2 <= 0 )
    v5 = a2;
  if ( v5 >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x89,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
      a4);
    JUMPOUT(0x180093462LL);
  }
  v6 = -1LL;
  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 6, &SRWLock);
  v7 = (__int64 *)((char *)this + 64);
  *((_DWORD *)this + 14) = v5;
  if ( &v10 != (char *)this + 64 )
  {
    v6 = *v7;
    *v7 = -1LL;
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v6 != -1 )
  {
    SRWLock = (PSRWLOCK)WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
    ((void (__fastcall *)(_QWORD *, PSRWLOCK *, char *, char *))HolographicDriverClientTrace::TelemetryCloseHolographicDevice::Start<wchar_t const *,enum TraceDriverType &,_GUID &>)(
      v11,
      &SRWLock,
      (char *)this + 8,
      (char *)this + 12);
    CancelIoEx((HANDLE)v6, 0LL);
    if ( v6 )
    {
      LastError = GetLastError();
      CloseHandle((HANDLE)v6);
      SetLastError(LastError);
    }
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Stop((__int64)v11);
    v11[0] = &HolographicDriverClientTrace::TelemetryCloseHolographicDevice::`vftable';
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::Destroy(v11);
    wil::ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>::~ActivityBase<HolographicDriverClientTrace,1,70368744177664,5,_TlgReflectorTag_Param0IsProviderType>((__int64)v11);
  }
}
