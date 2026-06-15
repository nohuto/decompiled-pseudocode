/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x180068624
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x18006A8E0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x18006B780 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000CBE8 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??2@YAPEAX_K@Z @ 0x18002BC10 (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x18002D168 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18005021C (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x180050B98 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180050C6C (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180052240 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x180066D10 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x1800671B0 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006759C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rbx
  DWORD i; // edi
  int v5; // r15d
  const struct _GUID *v6; // rsi
  const struct _GUID *v7; // r14
  struct _SID *v8; // r8
  ATL::CDacl::CAccessObjectAce *v9; // rax
  ATL::CDacl::CAccessAce *v10; // rax
  ATL::CDacl::CAccessAce *v11; // [rsp+48h] [rbp-100h] BYREF
  int v12; // [rsp+50h] [rbp-F8h] BYREF
  LPVOID pAce; // [rsp+58h] [rbp-F0h] BYREF
  ATL::CDacl *v14; // [rsp+60h] [rbp-E8h]
  PACL pAcl; // [rsp+68h] [rbp-E0h]
  __int64 v16; // [rsp+70h] [rbp-D8h]
  ATL::CDacl::CAccessObjectAce *v17; // [rsp+78h] [rbp-D0h]
  ATL::CDacl::CAccessAce *v18; // [rsp+80h] [rbp-C8h]
  DWORD pAclInformation[6]; // [rsp+88h] [rbp-C0h] BYREF
  _QWORD v20[9]; // [rsp+A0h] [rbp-A8h] BYREF
  char v21; // [rsp+ECh] [rbp-5Ch]
  int v22; // [rsp+F0h] [rbp-58h]
  __int64 v23; // [rsp+F8h] [rbp-50h] BYREF
  __int64 v24; // [rsp+100h] [rbp-48h] BYREF
  __int64 v25; // [rsp+108h] [rbp-40h] BYREF
  __int64 v26; // [rsp+110h] [rbp-38h] BYREF

  v16 = -2LL;
  v3 = this;
  v14 = this;
  pAcl = a2;
  if ( !a2 )
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
    return;
  }
  v20[0] = &ATL::CSid::`vftable';
  v21 = 0;
  v22 = 7;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v23);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v24);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v25);
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v26);
  v11 = 0LL;
  free(*((void **)v3 + 1));
  *((_QWORD *)v3 + 1) = 0LL;
  if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
    ATL::AtlThrowLastWin32();
  if ( !GetAclInformation(a2, &v12, 4u, AclRevisionInformation) )
    ATL::AtlThrowLastWin32();
  *((_DWORD *)v3 + 5) = v12;
  for ( i = 0; i < pAclInformation[0]; ++i )
  {
    if ( !GetAce(pAcl, i, &pAce) )
      ATL::AtlThrowLastWin32();
    v5 = *((_DWORD *)pAce + 1);
    if ( *(_BYTE *)pAce <= 1u )
    {
      ATL::CSid::operator=((ATL::CSid *)v20, (struct _SID *)((char *)pAce + 8));
      try
      {
        v10 = (ATL::CDacl::CAccessAce *)operator new(0x98uLL);
        v18 = v10;
        if ( v10 )
          v10 = ATL::CDacl::CAccessAce::CAccessAce(
                  v10,
                  (const struct ATL::CSid *)v20,
                  v5,
                  *((_BYTE *)pAce + 1),
                  *(_BYTE *)pAce == 0);
        v11 = v10;
      }
      catch ( ... )
      {
        v10 = v11;
        v3 = v14;
      }
      if ( !v10 )
        ATL::AtlThrowImpl(-2147024882);
    }
    else
    {
      if ( (unsigned __int8)(*(_BYTE *)pAce - 5) > 1u )
        continue;
      v6 = 0LL;
      v7 = 0LL;
      v8 = (struct _SID *)((char *)pAce + 44);
      if ( (*((_BYTE *)pAce + 8) & 1) != 0 )
        v6 = (const struct _GUID *)((char *)pAce + 12);
      else
        v8 = (struct _SID *)((char *)pAce + 28);
      if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
        v7 = (const struct _GUID *)((char *)pAce + (v6 != 0LL ? 0x10 : 0) + 12);
      else
        v8 = (struct _SID *)((char *)v8 - 16);
      ATL::CSid::operator=((ATL::CSid *)v20, v8);
      try
      {
        v9 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
        v17 = v9;
        if ( v9 )
          v9 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                 v9,
                 (const struct ATL::CSid *)v20,
                 v5,
                 *((_BYTE *)pAce + 1),
                 *(_BYTE *)pAce == 5,
                 v6,
                 v7);
        v11 = v9;
      }
      catch ( ... )
      {
        v9 = v11;
        v3 = v14;
      }
      if ( !v9 )
        ATL::AtlThrowImpl(-2147024882);
    }
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (_QWORD *)v3 + 3,
      (__int64 *)&v11);
  }
  ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free((__int64 (__fastcall ****)(_QWORD, __int64))&v11);
  ATL::CSid::~CSid((ATL::CSid *)v20);
}
