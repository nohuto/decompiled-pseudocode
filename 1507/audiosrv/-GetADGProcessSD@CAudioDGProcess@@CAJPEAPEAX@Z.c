/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18000794C
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x180006690 (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x180006F00 (-AuthenticatedUser@Sids@ATL@@YA-AVCSid@2@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x180007340 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18000740C (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x180007514 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x180008860 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18000896C (--1CDacl@ATL@@UEAA@XZ.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A774 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000A7C8 (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     WPP_SF_D @ 0x180031934 (WPP_SF_D.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180043A58 (memcpy_0.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  int v2; // esi
  const struct ATL::CSid *v3; // rax
  unsigned __int8 v4; // r9
  bool v5; // bl
  ATL::CSid *v6; // rax
  unsigned __int8 v7; // r9
  bool v8; // bl
  char v9; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v11; // rax
  void **v13; // [rsp+60h] [rbp-118h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+68h] [rbp-110h]
  void **v15; // [rsp+70h] [rbp-108h]
  _QWORD v16[2]; // [rsp+78h] [rbp-100h] BYREF
  char v17; // [rsp+88h] [rbp-F0h]
  int v18; // [rsp+8Ch] [rbp-ECh]
  __int64 v19; // [rsp+90h] [rbp-E8h]
  __int64 v20; // [rsp+98h] [rbp-E0h]
  __int64 v21; // [rsp+A0h] [rbp-D8h]
  int v22; // [rsp+A8h] [rbp-D0h]
  __int64 v23; // [rsp+B8h] [rbp-C0h]
  struct _SID_IDENTIFIER_AUTHORITY v24; // [rsp+C0h] [rbp-B8h] BYREF
  _BYTE v25[128]; // [rsp+D0h] [rbp-A8h] BYREF

  v23 = -2LL;
  v15 = a1;
  v2 = 0;
  v13 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v24.Value = 0;
  *(_WORD *)&v24.Value[4] = 1280;
  v16[1] = 0LL;
  v17 = 0;
  v18 = 2;
  v16[0] = &ATL::CDacl::`vftable';
  v19 = 0LL;
  v20 = 0LL;
  v21 = 0LL;
  v22 = 0;
  v3 = (const struct ATL::CSid *)ATL::CSid::CSid(
                                   (ATL::CSid *)v25,
                                   &v24,
                                   6u,
                                   80LL,
                                   -1618417719,
                                   1911656217,
                                   -1669870755,
                                   -116925420,
                                   1366760775,
                                   0LL,
                                   0LL);
  v5 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v16, v3, 0x10000000u, v4);
  ATL::CSid::~CSid((ATL::CSid *)v25);
  if ( v5
    || (v6 = ATL::Sids::AuthenticatedUser((ATL::CSid *)v25),
        v8 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)v16, v6, 0x1000u, v7),
        ATL::CSid::~CSid((ATL::CSid *)v25),
        v8) )
  {
    v2 = -2147467259;
    ATL::CDacl::~CDacl((ATL::CDacl *)v16);
  }
  else
  {
    ATL::CSecurityDesc::SetDacl((void **)&v13, (const struct ATL::CDacl *)v16, v9);
    ATL::CSecurityDesc::MakeSelfRelative((PSECURITY_DESCRIPTOR *)&v13);
    ATL::CDacl::~CDacl((ATL::CDacl *)v16);
    SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
    v11 = operator new(SecurityDescriptorLength);
    *a1 = v11;
    if ( v11 )
      memcpy_0(v11, pSecurityDescriptor, SecurityDescriptorLength);
    else
      v2 = -2147024882;
  }
  operator delete(0LL);
  if ( v2 < 0
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 4) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 2u )
  {
    WPP_SF_D(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      13LL,
      &WPP_790b6676494959b41396352d3c3efd49_Traceguids,
      (unsigned int)v2);
  }
  v13 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v13);
  return (unsigned int)v2;
}
