/*
 * XREFs of ?OpenDriverHandle@HolographicDriverHandleWrapper@Holographic@Internal@Windows@@MEAAJXZ @ 0x1800930B0
 * Callers:
 *     ?OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ @ 0x18008A0F0 (-OpenDriverHandle@SpatialGraphDriverHandleWrapper@Holographic@Internal@Windows@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180003188 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x180003234 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x18000326C (-_FailFast_Unexpected@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ?lock_exclusive@srwlock@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_SRWLOCK@@P6AXPEAU1@@Z$1?ReleaseSRWLockExclusive@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x1800074F8 (-lock_exclusive@srwlock@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x18004391C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Instance@HolographicDriverClientTrace@@KAPEAV1@XZ @ 0x180091C50 (-Instance@HolographicDriverClientTrace@@KAPEAV1@XZ.c)
 *     ?Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z @ 0x1800939CC (-Log_Error_@HolographicDriverClientTrace@@QEAAXKPEB_W@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall Windows::Internal::Holographic::HolographicDriverHandleWrapper::OpenDriverHandle(
        Windows::Internal::Holographic::HolographicDriverHandleWrapper *this)
{
  const char *v2; // r9
  char v3; // bl
  const WCHAR *StringRawBuffer; // rax
  HANDLE FileW; // rax
  const char *v6; // r9
  char *v7; // rbp
  HANDLE v8; // rsi
  DWORD LastError; // ebx
  unsigned int v10; // ebx
  const char *v11; // r9
  __int64 v12; // rax
  __int64 v13; // rcx
  unsigned int v14; // ebx
  _DWORD *v15; // rcx
  HolographicDriverClientTrace *v16; // rcx
  signed int v18; // eax
  unsigned __int64 v19; // rcx
  PSRWLOCK SRWLock; // [rsp+40h] [rbp-1C8h] BYREF
  PSRWLOCK v21; // [rsp+48h] [rbp-1C0h] BYREF
  _QWORD v22[52]; // [rsp+50h] [rbp-1B8h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+208h] [rbp+0h]

  wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 6, &v21);
  if ( *((_QWORD *)this + 8) != -1LL )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x53,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
      v2);
    __debugbreak();
  }
  if ( *((int *)this + 14) >= 0 )
  {
    wil::details::in1diag3::_FailFast_Unexpected(
      retaddr,
      (void *)0x54,
      (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
      v2);
    __debugbreak();
  }
  v3 = *((_BYTE *)this + 40);
  StringRawBuffer = WindowsGetStringRawBuffer(*((HSTRING *)this + 4), 0LL);
  FileW = CreateFileW(StringRawBuffer, v3 != 0 ? 0x80000000 : -1073741824, v3 != 0 ? 1 : 3, 0LL, 3u, 0, 0LL);
  v7 = (char *)*((_QWORD *)this + 8);
  v8 = FileW;
  if ( (unsigned __int64)(v7 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    LastError = GetLastError();
    CloseHandle(v7);
    SetLastError(LastError);
  }
  *((_QWORD *)this + 8) = v8;
  if ( v8 == (HANDLE)-1LL )
  {
    v10 = wil::details::in1diag3::Return_GetLastError(
            retaddr,
            (void *)0x68,
            (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
            v6);
  }
  else
  {
    *((_DWORD *)this + 14) = 0;
    wil::srwlock::lock_exclusive((RTL_SRWLOCK *)this + 9, &SRWLock);
    if ( *((_QWORD *)this + 11) )
    {
      wil::details::in1diag3::_FailFast_Unexpected(
        retaddr,
        (void *)0x6F,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
        v11);
      __debugbreak();
    }
    memset(v22, 0, sizeof(v22));
    v12 = *((_QWORD *)this + 8);
    LODWORD(v22[0]) = 416;
    v13 = *((_QWORD *)this + 11);
    LODWORD(v22[1]) = 1;
    v22[2] = v12;
    if ( v13 )
    {
      if ( (unsigned int)CM_Unregister_Notification(v13) )
      {
        v18 = GetLastError();
        v19 = (unsigned __int16)v18 | 0x80070000;
        if ( v18 <= 0 )
          v19 = (unsigned int)v18;
        Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)v19);
        JUMPOUT(0x18009332ALL);
      }
      *((_QWORD *)this + 11) = 0LL;
    }
    v14 = CM_Register_Notification(
            v22,
            this,
            &Windows::Internal::Holographic::HolographicDriverHandleWrapper::DeviceHandleCallback,
            (char *)this + 88);
    if ( v14 )
    {
      v15 = (_DWORD *)*((_QWORD *)HolographicDriverClientTrace::Instance() + 1);
      if ( v15 && *v15 )
      {
        HolographicDriverClientTrace::Instance();
        HolographicDriverClientTrace::Log_Error_(
          v16,
          v14,
          L"CM_MapCrToWin32Err() failed, hresult is actually a CONFIGRET value");
      }
      v10 = -2147418113;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x7E,
        (__int64)"onecoreuap\\analog\\input\\holographicdriverclientlib\\lib\\holographicdriverhandlewrapper.cpp",
        (const char *)0x8000FFFFLL);
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
    }
    else
    {
      if ( SRWLock )
        ReleaseSRWLockExclusive(SRWLock);
      v10 = 0;
    }
  }
  if ( v21 )
    ReleaseSRWLockExclusive(v21);
  return v10;
}
