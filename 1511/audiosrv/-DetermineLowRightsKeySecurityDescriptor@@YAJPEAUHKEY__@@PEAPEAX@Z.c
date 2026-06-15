/*
 * XREFs of ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0
 * Callers:
 *     ?CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z @ 0x180034D24 (-CreateLowRightsRegistryKey@@YAJPEAUHKEY__@@PEBGKPEAPEAU1@@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180019460 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180019500 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ @ 0x18002D700 (-GetPACL@CAcl@ATL@@QEBAPEBU_ACL@@XZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002DCD0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002DDDC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180032B10 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180032D90 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180032E98 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z @ 0x180032FCC (-Init@CSecurityDesc@ATL@@IEAAXAEBU_SECURITY_DESCRIPTOR@@@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180033058 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?EditAppContainerMask@@YAXPEAU_ACL@@@Z @ 0x180034C50 (-EditAppContainerMask@@YAXPEAU_ACL@@@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 */

// Hidden C++ exception states: #wind=6 #try_helpers=1
__int64 __fastcall DetermineLowRightsKeySecurityDescriptor(HKEY hKey, void **a2)
{
  struct _SECURITY_DESCRIPTOR *v4; // r14
  unsigned int v5; // esi
  struct _SECURITY_DESCRIPTOR *v6; // rax
  LSTATUS KeySecurity; // eax
  bool *v8; // r8
  bool *v9; // r9
  void (__fastcall *v10)(ATL::CSecurityDesc *); // rbx
  struct _ACL *PACL; // rbx
  ATL::CSid *v12; // rax
  char v13; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v15; // rax
  void **v17; // [rsp+60h] [rbp-168h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-160h]
  DWORD cbSecurityDescriptor; // [rsp+70h] [rbp-158h] BYREF
  struct _SECURITY_DESCRIPTOR *v20; // [rsp+78h] [rbp-150h]
  void **v21; // [rsp+80h] [rbp-148h]
  void *v22[2]; // [rsp+88h] [rbp-140h] BYREF
  char v23; // [rsp+98h] [rbp-130h]
  int v24; // [rsp+9Ch] [rbp-12Ch]
  __int64 v25; // [rsp+A0h] [rbp-128h]
  __int64 v26; // [rsp+A8h] [rbp-120h]
  __int64 v27; // [rsp+B0h] [rbp-118h]
  int v28; // [rsp+B8h] [rbp-110h]
  void *v29[2]; // [rsp+C0h] [rbp-108h] BYREF
  char v30; // [rsp+D0h] [rbp-F8h]
  int v31; // [rsp+D4h] [rbp-F4h]
  __int64 v32; // [rsp+D8h] [rbp-F0h]
  __int64 v33; // [rsp+E0h] [rbp-E8h]
  __int64 v34; // [rsp+E8h] [rbp-E0h]
  int v35; // [rsp+F0h] [rbp-D8h]
  __int64 v36; // [rsp+F8h] [rbp-D0h]
  struct _SID_IDENTIFIER_AUTHORITY pIdentifierAuthority; // [rsp+108h] [rbp-C0h] BYREF
  _BYTE v38[128]; // [rsp+110h] [rbp-B8h] BYREF

  v36 = -2LL;
  v21 = a2;
  cbSecurityDescriptor = 0;
  v4 = 0LL;
  v5 = 0;
  if ( RegGetKeySecurity(hKey, 4u, 0LL, &cbSecurityDescriptor) == 122 )
  {
    v6 = (struct _SECURITY_DESCRIPTOR *)operator new(cbSecurityDescriptor);
    v4 = v6;
    v20 = v6;
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
        v17 = &ATL::CSecurityDesc::`vftable';
        pSecurityDescriptor = 0LL;
        *(_DWORD *)pIdentifierAuthority.Value = 0;
        *(_WORD *)&pIdentifierAuthority.Value[4] = 1280;
        v29[1] = 0LL;
        v30 = 0;
        v31 = 2;
        v29[0] = &ATL::CDacl::`vftable';
        v32 = 0LL;
        v33 = 0LL;
        v34 = 0LL;
        v35 = 0;
        if ( v4 )
        {
          v10 = (void (__fastcall *)(ATL::CSecurityDesc *))v17[1];
          if ( v10 == ATL::CSecurityDesc::Clear )
            ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
          else
            v10((ATL::CSecurityDesc *)&v17);
          ATL::CSecurityDesc::Init((ATL::CSecurityDesc *)&v17, v4);
        }
        ATL::CSecurityDesc::GetDacl((ATL::CSecurityDesc *)&v17, v29, v8, v9);
        PACL = (struct _ACL *)ATL::CAcl::GetPACL((ATL::CAcl *)v29);
        EditAppContainerMask(PACL);
        v22[1] = 0LL;
        v23 = 0;
        v24 = 2;
        v22[0] = &ATL::CDacl::`vftable';
        v25 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v28 = 0;
        ATL::CDacl::Copy((ATL::CDacl *)v22, PACL);
        v12 = ATL::CSid::CSid((ATL::CSid *)v38, &pIdentifierAuthority, 6u);
        LOBYTE(PACL) = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v22, v12, 0x10000000) == 0;
        ATL::CSid::~CSid((ATL::CSid *)v38);
        if ( (_BYTE)PACL )
        {
          v5 = -2147467259;
          ATL::CDacl::~CDacl(v22);
          ATL::CDacl::~CDacl(v29);
          v17 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
        }
        else
        {
          ATL::CSecurityDesc::SetDacl((PSECURITY_DESCRIPTOR *)&v17, (const struct ATL::CDacl *)v22, v13);
          ATL::CSecurityDesc::MakeSelfRelative((PSECURITY_DESCRIPTOR *)&v17);
          ATL::CDacl::~CDacl(v22);
          ATL::CDacl::~CDacl(v29);
          SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
          v15 = operator new(SecurityDescriptorLength);
          *a2 = v15;
          if ( v15 )
            memcpy_0(v15, pSecurityDescriptor, SecurityDescriptorLength);
          else
            v5 = -2147024882;
          v17 = &ATL::CSecurityDesc::`vftable';
          ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v17);
        }
      }
    }
    else
    {
      v5 = -2147024882;
    }
  }
  operator delete(v4);
  if ( (v5 & 0x80000000) != 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_fc485e014cea5a4c1924790da308a5ac_Traceguids, v5);
  }
  return v5;
}
