/*
 * XREFs of ?GetADGProcessSD@CAudioDGProcess@@CAJPEAPEAX@Z @ 0x18002CA38
 * Callers:
 *     ?LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001793C (-LaunchADGProcess@CAudioDGProcess@@AEAAJ_N@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000CBE8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ @ 0x18000CC3C (--0CSid@ATL@@QEAA@AEBU_SID_IDENTIFIER_AUTHORITY@@EZZ.c)
 *     ??3@YAXPEAX@Z @ 0x180027E90 (--3@YAXPEAX@Z.c)
 *     _TlgWrite @ 0x180029790 (_TlgWrite.c)
 *     _TlgCreateSz @ 0x180029AE0 (_TlgCreateSz.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Clear@CSecurityDesc@ATL@@MEAAXXZ @ 0x18002C730 (-Clear@CSecurityDesc@ATL@@MEAAXXZ.c)
 *     ?MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ @ 0x18002C800 (-MakeSelfRelative@CSecurityDesc@ATL@@QEAAXXZ.c)
 *     ?SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z @ 0x18002C904 (-SetDacl@CSecurityDesc@ATL@@QEAAXAEBVCDacl@2@_N@Z.c)
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002CFF0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ??1CDacl@ATL@@UEAA@XZ @ 0x18002D120 (--1CDacl@ATL@@UEAA@XZ.c)
 *     ?AuthenticatedUser@Sids@ATL@@YA?AVCSid@2@XZ @ 0x18002D31C (-AuthenticatedUser@Sids@ATL@@YA-AVCSid@2@XZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     memcpy_0 @ 0x180038F10 (memcpy_0.c)
 *     WPP_SF_D @ 0x18005435C (WPP_SF_D.c)
 */

// Hidden C++ exception states: #wind=4 #try_helpers=1
__int64 __fastcall CAudioDGProcess::GetADGProcessSD(void **a1)
{
  ATL::CSid *v2; // rax
  unsigned __int8 v3; // r9
  bool v4; // bl
  const struct ATL::CSid *v5; // rax
  unsigned __int8 v6; // r9
  bool v7; // bl
  char v8; // r8
  DWORD SecurityDescriptorLength; // ebx
  void *v10; // rax
  unsigned int v11; // ebx
  LPCGUID v13; // r8
  LPCGUID v14; // r9
  int v15; // [rsp+60h] [rbp-128h] BYREF
  void **v16; // [rsp+68h] [rbp-120h] BYREF
  PSECURITY_DESCRIPTOR pSecurityDescriptor; // [rsp+70h] [rbp-118h]
  void **v18; // [rsp+78h] [rbp-110h]
  __int64 v19; // [rsp+80h] [rbp-108h]
  struct _SID_IDENTIFIER_AUTHORITY v20[2]; // [rsp+90h] [rbp-F8h] BYREF
  _BYTE v21[128]; // [rsp+A0h] [rbp-E8h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+120h] [rbp-68h] BYREF
  char v23; // [rsp+130h] [rbp-58h]
  int v24; // [rsp+134h] [rbp-54h]
  __int64 v25; // [rsp+138h] [rbp-50h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+140h] [rbp-48h] BYREF
  struct _SID_IDENTIFIER_AUTHORITY *v27; // [rsp+150h] [rbp-38h]
  __int64 v28; // [rsp+158h] [rbp-30h]
  int *v29; // [rsp+160h] [rbp-28h]
  __int64 v30; // [rsp+168h] [rbp-20h]

  v19 = -2LL;
  v18 = a1;
  v15 = 0;
  v16 = &ATL::CSecurityDesc::`vftable';
  pSecurityDescriptor = 0LL;
  *(_DWORD *)v20[0].Value = 0;
  *(_WORD *)&v20[0].Value[4] = 1280;
  *(_QWORD *)&pData.Size = 0LL;
  v23 = 0;
  v24 = 2;
  pData.Ptr = (ULONGLONG)&ATL::CDacl::`vftable';
  v25 = 0LL;
  pDesc.Ptr = 0LL;
  *(_QWORD *)&pDesc.Size = 0LL;
  LODWORD(v27) = 0;
  v2 = ATL::CSid::CSid(
         (ATL::CSid *)v21,
         v20,
         6u,
         80LL,
         -1618417719,
         1911656217,
         -1669870755,
         -116925420,
         1366760775,
         0LL,
         0LL);
  v4 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, v2, 0x10000000u, v3);
  ATL::CSid::~CSid((ATL::CSid *)v21);
  if ( v4
    || (v5 = (const struct ATL::CSid *)ATL::Sids::AuthenticatedUser(v21),
        v7 = !ATL::CDacl::AddAllowedAce((ATL::CDacl *)&pData, v5, 0x1000u, v6),
        ATL::CSid::~CSid((ATL::CSid *)v21),
        v7) )
  {
    v15 = -2147467259;
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
  }
  else
  {
    ATL::CSecurityDesc::SetDacl((void **)&v16, (const struct ATL::CDacl *)&pData, v8);
    ATL::CSecurityDesc::MakeSelfRelative((PSECURITY_DESCRIPTOR *)&v16);
    ATL::CDacl::~CDacl((ATL::CDacl *)&pData);
    SecurityDescriptorLength = GetSecurityDescriptorLength(pSecurityDescriptor);
    v10 = operator new(SecurityDescriptorLength);
    *a1 = v10;
    if ( v10 )
      memcpy_0(v10, pSecurityDescriptor, SecurityDescriptorLength);
    else
      v15 = -2147024882;
  }
  operator delete(0LL);
  v11 = v15;
  if ( v15 < 0 )
  {
    if ( WPP_GLOBAL_Control != (CAudioSession *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        13LL,
        &WPP_1980ef3193d738ecffc607926aa7df6d_Traceguids,
        (unsigned int)v15);
      v11 = v15;
    }
    if ( (unsigned int)hProvider > 2 )
    {
      TlgCreateSz(&pDesc, "CAudioDGProcess::GetADGProcessSD");
      *(_DWORD *)v20[0].Value = 225;
      v27 = v20;
      v28 = 4LL;
      v29 = &v15;
      v30 = 4LL;
      TlgWrite((TraceLoggingHProvider)&hProvider, &unk_1800A877D, v13, v14, 5u, &pData);
      v11 = v15;
    }
  }
  v16 = &ATL::CSecurityDesc::`vftable';
  ATL::CSecurityDesc::Clear((PSECURITY_DESCRIPTOR *)&v16);
  return v11;
}
