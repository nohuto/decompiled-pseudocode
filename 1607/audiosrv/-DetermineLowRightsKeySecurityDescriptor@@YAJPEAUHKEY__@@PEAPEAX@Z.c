/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18006A8E0
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180068AA0 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000CBE8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000CC3C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x180027744 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18002C730 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002C800 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002C904 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002CCA8 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002CFF0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002D120 (--1CDacl@ATL@@UEAA@XZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180068624 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x18006AE54 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18006B780 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x18006BD60 (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r15
  signed int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  bool *v8; // r8
  bool *v9; // r9
  struct _ACL *PACL; // rbx
  ATL::CSid *v11; // rax
  char v12; // r8
  SIZE_T SecurityDescriptorLength; // rbx
  void *v14; // rax
  void **v16; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v19; // [rsp+78h] [rbp-150h]
  void **v20; // [rsp+80h] [rbp-148h]
  void *v21[2]; // [rsp+88h] [rbp-140h] BYREF
  char v22; // [rsp+98h] [rbp-130h]
  int v23; // [rsp+9Ch] [rbp-12Ch]
  __int64 v24; // [rsp+A0h] [rbp-128h]
  __int64 v25; // [rsp+A8h] [rbp-120h]
  __int64 v26; // [rsp+B0h] [rbp-118h]
  int v27; // [rsp+B8h] [rbp-110h]
  void *v28[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v29; // [rsp+D0h] [rbp-F8h]
  int v30; // [rsp+D4h] [rbp-F4h]
  __int64 v31; // [rsp+D8h] [rbp-F0h]
  __int64 v32; // [rsp+E0h] [rbp-E8h]
  __int64 v33; // [rsp+E8h] [rbp-E0h]
  int v34; // [rsp+F0h] [rbp-D8h]
  __int64 v35; // [rsp+F8h] [rbp-D0h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v37[128]; // [rsp+110h] [rbp-B8h] BYREF

  v35 = -2LL;
  v20 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new(cbSecurityDescriptor);
    v4 = v6;
    v19 = v6;
    if ( v6 )
    {
      KeySecurity = RegGetKeySecurity(hKey, 4u, v6, &cbSecurityDescriptor);
      if ( KeySecurity )
      {
        if ( KeySecurity > 0 )
          v5 = (unsigned __int16)KeySecurity | 0x80070000;
        else
          v5 = KeySecurity;
      }
      else
      {
        v16 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v28[1] = 0LL;
        v29 = 0;
        v30 = 2;
        v28[0] = &ATL::CDacl::`vftable';
        v31 = 0LL;
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0;
        if ( v4 )
        {
          ((void (__fastcall *)(void ***))v16[1])(&v16);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v16, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v16, (struct ATL::CDacl *)v28, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v28);
        EditAppContainerMask(PACL);
        v21[1] = 0LL;
        v22 = 0;
        v23 = 2;
        v21[0] = &ATL::CDacl::`vftable';
        v24 = 0LL;
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v21, PACL);
        v11 = ATL::CSid::CSid((ATL::CSid *)v37, &pIdentifierAuthority, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v21, v11, 0x10000000) == 0;
        ATL::CSid::~CSid((ATL::CSid *)v37);
        if ( (_BYTE)PACL )
        {
          v5 = -2147467259;
          ATL::CDacl::~CDacl(v21);
          ATL::CDacl::~CDacl(v28);
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v16);
        }
        else
        {
          ATL::CSecurityDesc::SetDacl((void **)&v16, (const struct ATL::CDacl *)v21, v12);
          ATL::CSecurityDesc::MakeSelfRelative((PSECURITY_DESCRIPTOR *)&v16);
          ATL::CDacl::~CDacl(v21);
          ATL::CDacl::~CDacl(v28);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v14 = operator new(SecurityDescriptorLength);
          *a2 = v14;
          if ( v14 )
            memcpy_0(v14, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v16 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v16);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  operator delete(v4);
  if ( v5 < 0 )
    AudSrvTraceLoggingErrorHelper("DetermineLowRightsKeySecurityDescriptor", 597, v5);
  return (unsigned int)v5;
}
