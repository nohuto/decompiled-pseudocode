/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002FB10
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180033478 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180019460 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x180019500 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002DCD0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002DDDC (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180032B10 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x180032D90 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180032E98 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x18003A47C (-AuthenticatedUser@Sids@ATL@@YA-AVCSid@2@XZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     memcpy_0 @ 0x18004799C (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  int v2; // esi
  ATL::CSid *v3; // rax
  bool v4; // bl
  const struct ATL::CSid *v5; // rax
  bool v6; // bl
  bool v7; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v9; // rax
  void **v11; // [rsp+60h] [rbp-118h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-110h]
  void **v13; // [rsp+70h] [rbp-108h]
  void *v14[2]; // [rsp+78h] [rbp-100h] BYREF
  char v15; // [rsp+88h] [rbp-F0h]
  int v16; // [rsp+8Ch] [rbp-ECh]
  __int64 v17; // [rsp+90h] [rbp-E8h]
  __int64 v18; // [rsp+98h] [rbp-E0h]
  __int64 v19; // [rsp+A0h] [rbp-D8h]
  int v20; // [rsp+A8h] [rbp-D0h]
  __int64 v21; // [rsp+B8h] [rbp-C0h]
  struct _SID_IDENTIFIER_AUTHORITY v22; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v23[128]; // [rsp+D0h] [rbp-A8h] BYREF

  v21 = -2LL;
  v13 = a1;
  v2 = 0;
  v11 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v22.Value = 0;
  *(_WORD *)&v22.Value[4] = 1280;
  v14[1] = 0LL;
  v15 = 0;
  v16 = 2;
  v14[0] = &ATL::CDacl::`vftable';
  v17 = 0LL;
  v18 = 0LL;
  v19 = 0LL;
  v20 = 0;
  v3 = ATL::CSid::CSid(
         (ATL::CSid *)v23,
         &v22,
         6u,
         80LL,
         -1618417719,
         1911656217,
         -1669870755,
         -116925420,
         1366760775,
         0LL,
         0LL);
  v4 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v14, v3, 0x10000000) == 0;
  ATL::CSid::~CSid((ATL::CSid *)v23);
  if ( v4
    || (v5 = (const struct ATL::CSid *)ATL::Sids::AuthenticatedUser(v23),
        v6 = ATL::CDacl::AddAllowedAce((ATL::CDacl *)v14, v5, 4096) == 0,
        ATL::CSid::~CSid((ATL::CSid *)v23),
        v6) )
  {
    v2 = -2147467259;
    ATL::CDacl::~CDacl(v14);
  }
  else
  {
    ATL::CSecurityDesc::SetDacl((ATL::CSecurityDesc *)&v11, (const struct ATL::CDacl *)v14, v7);
    ATL::CSecurityDesc::MakeSelfRelative((ATL::CSecurityDesc *)&v11);
    ATL::CDacl::~CDacl(v14);
    SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
    v9 = operator new(SecurityDescriptorLength);
    *a1 = v9;
    if ( v9 )
      memcpy_0(v9, pSecurityDescriptor, SecurityDescriptorLength);
    else
      v2 = -2147024882;
  }
  operator delete(0LL);
  if ( v2 < 0
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
  {
    WPP_SF_D(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      13LL,
      &WPP_785362db39762c5e6daaa474a87b7ce9_Traceguids,
      (unsigned int)v2);
  }
  v11 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((ATL::CSecurityDesc *)&v11);
  return (unsigned int)v2;
}
