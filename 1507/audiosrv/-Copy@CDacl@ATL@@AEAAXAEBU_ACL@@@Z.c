/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x1800328E0
 * Callers:
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x1800365AC (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180036BBC (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x180007F30 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x18000A660 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x18000A774 (--1CSid@ATL@@UEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x18000C9B4 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180032158 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x18003286C (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     __security_check_cookie @ 0x180043550 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006B37C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x1800846AC (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // rdi
  DWORD i; // esi
  unsigned int v5; // r12d
  HANDLE ProcessHeap; // rax
  _DWORD *v7; // rbx
  bool v8; // r14
  char v9; // r15
  const struct _GUID *v10; // rbx
  const struct _GUID *v11; // r14
  struct _SID *v12; // r8
  ATL::CDacl::CAccessObjectAce *v13; // rax
  ATL::CDacl::CAccessObjectAce *v14; // [rsp+40h] [rbp-118h] BYREF
  DWORD v15; // [rsp+48h] [rbp-110h]
  LPVOID pAce; // [rsp+50h] [rbp-108h] BYREF
  int v17; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v18; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  _DWORD *v20; // [rsp+70h] [rbp-E8h]
  __int64 v21; // [rsp+78h] [rbp-E0h]
  ATL::CDacl::CAccessObjectAce *v22; // [rsp+80h] [rbp-D8h]
  DWORD pAclInformation[6]; // [rsp+88h] [rbp-D0h] BYREF
  _QWORD v24[9]; // [rsp+A0h] [rbp-B8h] BYREF
  char v25; // [rsp+ECh] [rbp-6Ch]
  int v26; // [rsp+F0h] [rbp-68h]
  __int64 v27; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v28; // [rsp+100h] [rbp-58h] BYREF
  __int64 v29; // [rsp+108h] [rbp-50h] BYREF
  __int64 v30; // [rsp+110h] [rbp-48h] BYREF

  v21 = -2LL;
  v3 = this;
  v18 = this;
  pAcl = a2;
  if ( a2 )
  {
    v24[0] = &ATL::CSid::`vftable';
    v25 = 0;
    v26 = 7;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v27);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v28);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v29);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v30);
    v14 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    if ( !GetAclInformation(a2, &v17, 4u, AclRevisionInformation) )
      ATL::AtlThrowLastWin32();
    *((_DWORD *)v3 + 5) = v17;
    for ( i = 0; ; ++i )
    {
      v15 = i;
      if ( i >= pAclInformation[0] )
      {
        ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v14);
        ATL::CSid::~CSid((ATL::CSid *)v24);
        return;
      }
      if ( !GetAce(pAcl, i, &pAce) )
        ATL::AtlThrowLastWin32();
      v5 = *((_DWORD *)pAce + 1);
      if ( *(_BYTE *)pAce <= 1u )
        break;
      if ( (unsigned __int8)(*(_BYTE *)pAce - 5) <= 1u )
      {
        v10 = 0LL;
        v11 = 0LL;
        v12 = (struct _SID *)((char *)pAce + 44);
        if ( (*((_BYTE *)pAce + 8) & 1) != 0 )
          v10 = (const struct _GUID *)((char *)pAce + 12);
        else
          v12 = (struct _SID *)((char *)pAce + 28);
        if ( (*((_BYTE *)pAce + 8) & 2) != 0 )
          v11 = (const struct _GUID *)((char *)pAce + (v10 != 0LL ? 0x10 : 0) + 12);
        else
          v12 = (struct _SID *)((char *)v12 - 16);
        ATL::CSid::operator=((ATL::CSid *)v24, v12);
        try
        {
          v13 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
          v22 = v13;
          if ( v13 )
            v13 = (ATL::CDacl::CAccessObjectAce *)ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                                                    v13,
                                                    (const struct ATL::CSid *)v24,
                                                    v5,
                                                    *((_BYTE *)pAce + 1),
                                                    *(_BYTE *)pAce == 5,
                                                    v10,
                                                    v11);
          v14 = v13;
        }
        catch ( ... )
        {
          v13 = v14;
          i = v15;
          v3 = v18;
        }
        if ( !v13 )
          ATL::AtlThrowImpl(-2147024882);
        goto LABEL_13;
      }
LABEL_14:
      ;
    }
    ATL::CSid::operator=((ATL::CSid *)v24, (struct _SID *)((char *)pAce + 8));
    try
    {
      ProcessHeap = GetProcessHeap();
      v7 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
      v20 = v7;
      if ( v7 )
      {
        v8 = *(_BYTE *)pAce == 0;
        v9 = *((_BYTE *)pAce + 1);
        *(_QWORD *)v7 = &ATL::CAcl::CAce::`vftable';
        ATL::CSid::CSid((ATL::CSid *)(v7 + 2), (const struct ATL::CSid *)v24);
        v7[32] = v5;
        *((_BYTE *)v7 + 132) = v9;
        *((_QWORD *)v7 + 17) = 0LL;
        *(_QWORD *)v7 = &ATL::CDacl::CAccessAce::`vftable';
        *((_BYTE *)v7 + 144) = v8;
      }
      else
      {
        v7 = 0LL;
      }
      v14 = (ATL::CDacl::CAccessObjectAce *)v7;
    }
    catch ( ... )
    {
      v7 = v14;
      i = v15;
      v3 = v18;
    }
    if ( !v7 )
      ATL::AtlThrowImpl(-2147024882);
LABEL_13:
    ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
      (_QWORD *)v3 + 3,
      (__int64 *)&v14);
    goto LABEL_14;
  }
  (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
  *((_BYTE *)v3 + 16) = 1;
}
