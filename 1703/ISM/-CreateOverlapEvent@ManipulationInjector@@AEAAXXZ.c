/*
 * XREFs of ?CreateOverlapEvent@ManipulationInjector@@AEAAXXZ @ 0x180096484
 * Callers:
 *     ?Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z @ 0x180096804 (-Initialize@ManipulationInjector@@QEAAXPEAUHMONITOR__@@PEBUtagRECT@@K@Z.c)
 * Callees:
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x180005420 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x180086E0C (-_FailFast_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ?FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180096358 (-FailFast_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 *     memset @ 0x18009D814 (memset.c)
 */

void __fastcall ManipulationInjector::CreateOverlapEvent(ManipulationInjector *this)
{
  BOOL v2; // eax
  BOOL v3; // ebx
  ACCESS_MODE *p_grfAccessMode; // rax
  __int64 v5; // rcx
  struct _ACL *v6; // rsi
  DWORD v7; // edi
  struct _ACL *v8; // rax
  void *v9; // rdi
  HLOCAL v10; // rax
  HANDLE v11; // rax
  DWORD LastError; // eax
  unsigned int v13; // eax
  __int64 v14; // r8
  PSID pLabelSid; // [rsp+68h] [rbp-A0h] BYREF
  PSID pSid; // [rsp+70h] [rbp-98h] BYREF
  PSID v17; // [rsp+78h] [rbp-90h] BYREF
  PACL NewAcl; // [rsp+80h] [rbp-88h] BYREF
  struct _SECURITY_ATTRIBUTES EventAttributes; // [rsp+88h] [rbp-80h] BYREF
  _EXPLICIT_ACCESS_A pListOfExplicitEntries[2]; // [rsp+A8h] [rbp-60h] BYREF
  _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+38h]

  *(_WORD *)&pIdentifierAuthority.Value[4] = 3840;
  *((_QWORD *)this + 96) = 0LL;
  pSid = 0LL;
  *(_DWORD *)pIdentifierAuthority.Value = 0;
  v2 = AllocateAndInitializeSid(&pIdentifierAuthority, 2u, 2u, 1u, 0, 0, 0, 0, 0, 0, &pSid);
  v17 = 0LL;
  v3 = v2;
  if ( v2 )
  {
    *(_DWORD *)pIdentifierAuthority.Value = 0;
    *(_WORD *)&pIdentifierAuthority.Value[4] = 256;
    v3 = AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0, 0, 0, 0, 0, 0, 0, 0, &v17);
  }
  pLabelSid = 0LL;
  if ( v3 )
  {
    *(_DWORD *)pIdentifierAuthority.Value = 0;
    *(_WORD *)&pIdentifierAuthority.Value[4] = 4096;
    v3 = AllocateAndInitializeSid(&pIdentifierAuthority, 1u, 0x1000u, 0, 0, 0, 0, 0, 0, 0, &pLabelSid);
  }
  NewAcl = 0LL;
  if ( v3 )
  {
    memset(pListOfExplicitEntries, 0, sizeof(pListOfExplicitEntries));
    p_grfAccessMode = &pListOfExplicitEntries[0].grfAccessMode;
    v5 = 2LL;
    do
    {
      *((_DWORD *)p_grfAccessMode - 1) = 983043;
      *p_grfAccessMode = GRANT_ACCESS;
      *((_DWORD *)p_grfAccessMode + 1) = 3;
      *((_DWORD *)p_grfAccessMode + 6) = 0;
      *((_DWORD *)p_grfAccessMode + 7) = 5;
      p_grfAccessMode += 12;
      --v5;
    }
    while ( v5 );
    pListOfExplicitEntries[0].Trustee.ptstrName = (LPCH)pSid;
    pListOfExplicitEntries[1].Trustee.ptstrName = (LPCH)v17;
    v3 = SetEntriesInAclA(2u, pListOfExplicitEntries, 0LL, &NewAcl) == 0;
  }
  v6 = 0LL;
  if ( v3 )
  {
    v7 = GetLengthSid(pLabelSid) + 16;
    v8 = (struct _ACL *)LocalAlloc(0x40u, v7);
    v6 = v8;
    v3 = v8 != 0LL;
    if ( v8 )
    {
      v3 = InitializeAcl(v8, v7, 2u);
      if ( v3 )
        v3 = AddMandatoryAce(v6, 2u, 0, 1u, pLabelSid);
    }
  }
  v9 = 0LL;
  if ( v3 )
  {
    v10 = LocalAlloc(0x40u, 0x28uLL);
    v9 = v10;
    v3 = v10 != 0LL;
    if ( v10 )
    {
      v3 = InitializeSecurityDescriptor(v10, 1u);
      if ( v3 )
      {
        v3 = SetSecurityDescriptorDacl(v9, 1, NewAcl, 0);
        if ( v3 )
        {
          v3 = SetSecurityDescriptorSacl(v9, 1, v6, 0);
          if ( v3 )
          {
            EventAttributes.nLength = 24;
            EventAttributes.lpSecurityDescriptor = v9;
            EventAttributes.bInheritHandle = 0;
            v11 = CreateEventExA(&EventAttributes, "ManipulationInjectorEnableOverlapEvent", 0, 0x1F0003u);
            *((_QWORD *)this + 96) = v11;
            v3 = v11 != 0LL;
          }
        }
      }
    }
  }
  if ( pSid )
    FreeSid(pSid);
  if ( v17 )
    FreeSid(v17);
  if ( pLabelSid )
    FreeSid(pLabelSid);
  if ( NewAcl )
    LocalFree(NewAcl);
  if ( v6 )
    LocalFree(v6);
  if ( v9 )
    LocalFree(v9);
  if ( !v3 )
  {
    LastError = GetLastError();
    if ( !LastError )
    {
      v13 = wil::verify_hresult<long>(0x80004005);
      wil::details::in1diag3::FailFast_Hr(retaddr, (void *)0x100, v14, (const char *)v13);
      __debugbreak();
    }
    wil::details::in1diag3::_FailFast_Win32(
      retaddr,
      (void *)0xFD,
      (__int64)"onecoreuap\\windows\\dwm\\manipulationinjector\\lib\\manipulationinjector.cpp",
      (const char *)LastError);
    __debugbreak();
  }
}
