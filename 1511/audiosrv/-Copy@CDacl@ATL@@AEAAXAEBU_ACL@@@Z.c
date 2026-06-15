/*
 * XREFs of ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40
 * Callers:
 *     ?GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z @ 0x180033058 (-GetDacl@CSecurityDesc@ATL@@QEBA_NPEAVCDacl@2@PEA_N1@Z.c)
 *     ?DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z @ 0x180033EF0 (-DetermineLowRightsKeySecurityDescriptor@@YAJPEAUHKEY__@@PEAPEAX@Z.c)
 * Callees:
 *     ?SetLength@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180018814 (-SetLength@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ @ 0x1800191BC (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@XZ.c)
 *     ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800192A0 (--0CSid@ATL@@QEAA@AEBV01@@Z.c)
 *     ??1CSid@ATL@@UEAA@XZ @ 0x180019460 (--1CSid@ATL@@UEAA@XZ.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?GrowBuffer@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@AEAA_N_K@Z @ 0x18002E270 (-GrowBuffer@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAcce.c)
 *     ?Add@?$CAtlArray@V?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V?$CAutoPtrElementTraits@VCAccessAce@CDacl@ATL@@@2@@ATL@@QEAA_KAEAV?$CAutoPtr@VCAccessAce@CDacl@ATL@@@2@@Z @ 0x18002E3E0 (-Add@-$CAtlArray@V-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@V-$CAutoPtrElementTraits@VCAccessAce@C.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?Free@?$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ @ 0x180039FE8 (-Free@-$CAutoPtr@VCAccessAce@CDacl@ATL@@@ATL@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x180047490 (__security_check_cookie.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z @ 0x180066200 (--4CSid@ATL@@QEAAAEAV01@AEBU_SID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006A118 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 *     ?AtlThrowLastWin32@ATL@@YAXXZ @ 0x18006A13C (-AtlThrowLastWin32@ATL@@YAXXZ.c)
 *     ??0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z @ 0x18007F104 (--0CAccessObjectAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_NPEBU_GUID@@2@Z.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall ATL::CDacl::Copy(ATL::CDacl *this, struct _ACL *a2)
{
  ATL::CDacl *v3; // r13
  DWORD v4; // r14d
  unsigned int v5; // r15d
  char v6; // al
  char *v7; // rdi
  int *v8; // rcx
  __int64 v9; // rsi
  int *v10; // rcx
  __int64 v11; // rsi
  int *v12; // rcx
  __int64 v13; // rsi
  int *v14; // rcx
  __int64 v15; // rsi
  DWORD LengthSid; // eax
  HANDLE ProcessHeap; // rax
  _DWORD *v18; // rbx
  bool v19; // di
  char v20; // si
  unsigned __int64 v21; // rsi
  _QWORD *v22; // rcx
  const struct _GUID *v23; // rbx
  const struct _GUID *v24; // rdi
  struct _SID *v25; // rdx
  int v26; // eax
  __int64 v27; // rdi
  ATL::CDacl::CAccessObjectAce *v28; // rax
  __int64 v29; // rax
  __int64 (__fastcall *v30)(__int64); // rbx
  __int64 (__fastcall *v31)(__int64); // rbx
  __int64 (__fastcall *v32)(__int64); // rbx
  __int64 (__fastcall *v33)(__int64); // rbx
  int Error; // eax
  _DWORD *v35; // [rsp+40h] [rbp-118h] BYREF
  DWORD v36; // [rsp+48h] [rbp-110h]
  LPVOID pAce; // [rsp+50h] [rbp-108h] BYREF
  int v38; // [rsp+58h] [rbp-100h] BYREF
  ATL::CDacl *v39; // [rsp+60h] [rbp-F8h]
  PACL pAcl; // [rsp+68h] [rbp-F0h]
  _DWORD *v41; // [rsp+70h] [rbp-E8h]
  __int64 v42; // [rsp+78h] [rbp-E0h]
  ATL::CDacl::CAccessObjectAce *v43; // [rsp+80h] [rbp-D8h]
  void **v44; // [rsp+90h] [rbp-C8h] BYREF
  _BYTE pDestinationSid[68]; // [rsp+98h] [rbp-C0h] BYREF
  char v46; // [rsp+DCh] [rbp-7Ch]
  int v47; // [rsp+E0h] [rbp-78h]
  __int64 v48; // [rsp+E8h] [rbp-70h] BYREF
  __int64 v49; // [rsp+F0h] [rbp-68h] BYREF
  __int64 v50; // [rsp+F8h] [rbp-60h] BYREF
  __int64 v51[2]; // [rsp+100h] [rbp-58h] BYREF
  DWORD pAclInformation[4]; // [rsp+110h] [rbp-48h] BYREF

  v42 = -2LL;
  v3 = this;
  v39 = this;
  pAcl = a2;
  if ( a2 )
  {
    v44 = &ATL::CSid::`vftable';
    v46 = 0;
    v47 = 7;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v48);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v49);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(&v50);
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(v51);
    v35 = 0LL;
    free(*((void **)v3 + 1));
    *((_QWORD *)v3 + 1) = 0LL;
    if ( !GetAclInformation(a2, pAclInformation, 0xCu, AclSizeInformation) )
      ATL::AtlThrowLastWin32();
    if ( !GetAclInformation(a2, &v38, 4u, AclRevisionInformation) )
      ATL::AtlThrowLastWin32();
    *((_DWORD *)v3 + 5) = v38;
    v4 = 0;
    v36 = 0;
    while ( v4 < pAclInformation[0] )
    {
      if ( !GetAce(pAcl, v4, &pAce) )
        ATL::AtlThrowLastWin32();
      v5 = *((_DWORD *)pAce + 1);
      v6 = *(_BYTE *)pAce;
      if ( !*(_BYTE *)pAce || v6 == 1 )
      {
        v7 = (char *)pAce + 8;
        if ( !v46 || pDestinationSid != v7 )
        {
          v47 = 7;
          v8 = (int *)(v48 - 24);
          v9 = *(_QWORD *)(v48 - 24);
          if ( *(_DWORD *)(v48 - 24 + 8) )
          {
            if ( v8[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v8);
              v30 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 24LL);
              v48 = v30(v9) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v48, 0);
            }
          }
          v10 = (int *)(v49 - 24);
          v11 = *(_QWORD *)(v49 - 24);
          if ( *(_DWORD *)(v49 - 24 + 8) )
          {
            if ( v10[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v10);
              v31 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v11 + 24LL);
              v49 = v31(v11) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v49, 0);
            }
          }
          v12 = (int *)(v50 - 24);
          v13 = *(_QWORD *)(v50 - 24);
          if ( *(_DWORD *)(v50 - 24 + 8) )
          {
            if ( v12[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v12);
              v32 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v13 + 24LL);
              v50 = v32(v13) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(&v50, 0);
            }
          }
          v14 = (int *)(v51[0] - 24);
          v15 = *(_QWORD *)(v51[0] - 24);
          if ( *(_DWORD *)(v51[0] - 24 + 8) )
          {
            if ( v14[4] >= 0 )
            {
              ATL::CStringData::Release((ATL::CStringData *)v14);
              v33 = *(__int64 (__fastcall **)(__int64))(*(_QWORD *)v15 + 24LL);
              v51[0] = v33(v15) + 24;
            }
            else
            {
              ATL::CSimpleStringT<unsigned short,0>::SetLength(v51, 0);
            }
          }
          v46 = 0;
          if ( !IsValidSid(v7) )
            ATL::AtlThrowImpl(-2147024809);
          LengthSid = GetLengthSid(v7);
          if ( LengthSid > 0x44 )
            ATL::AtlThrowImpl(-2147024809);
          v46 = 1;
          if ( !CopySid(LengthSid, pDestinationSid, v7) )
          {
            Error = ATL::AtlHresultFromLastError();
            v46 = 0;
            ATL::AtlThrowImpl(Error);
          }
          v47 = 8;
        }
        try
        {
          ProcessHeap = GetProcessHeap();
          v18 = HeapAlloc(ProcessHeap, 0, 0x98uLL);
          v41 = v18;
          if ( v18 )
          {
            v19 = *(_BYTE *)pAce == 0;
            v20 = *((_BYTE *)pAce + 1);
            *(_QWORD *)v18 = &ATL::CAcl::CAce::`vftable';
            ATL::CSid::CSid((ATL::CSid *)(v18 + 2), (const struct ATL::CSid *)&v44);
            v18[32] = v5;
            *((_BYTE *)v18 + 132) = v20;
            *((_QWORD *)v18 + 17) = 0LL;
            *(_QWORD *)v18 = &ATL::CDacl::CAccessAce::`vftable';
            *((_BYTE *)v18 + 144) = v19;
          }
          else
          {
            v18 = 0LL;
          }
          v35 = v18;
        }
        catch ( ... )
        {
          v18 = v35;
          v4 = v36;
          v3 = v39;
        }
        if ( !v18 )
          ATL::AtlThrowImpl(-2147024882);
        v21 = *((_QWORD *)v3 + 4);
        if ( v21 >= *((_QWORD *)v3 + 5)
          && !(unsigned __int8)ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::GrowBuffer(
                                 (char *)v3 + 24,
                                 v21 + 1) )
        {
          ATL::AtlThrowImpl(-2147024882);
        }
        v22 = (_QWORD *)(*((_QWORD *)v3 + 3) + 8 * v21);
        if ( v22 )
        {
          v35 = 0LL;
          *v22 = v18;
        }
        ++*((_QWORD *)v3 + 4);
      }
      else if ( (unsigned __int8)(v6 - 5) <= 1u )
      {
        v23 = 0LL;
        v24 = 0LL;
        v25 = (struct _SID *)((char *)pAce + 44);
        v26 = *((_DWORD *)pAce + 2);
        if ( (v26 & 1) != 0 )
          v23 = (const struct _GUID *)((char *)pAce + 12);
        else
          v25 = (struct _SID *)((char *)pAce + 28);
        if ( (v26 & 2) != 0 )
        {
          v27 = 12LL;
          if ( v23 )
            v27 = 28LL;
          v24 = (const struct _GUID *)((char *)pAce + v27);
        }
        else
        {
          v25 = (struct _SID *)((char *)v25 - 16);
        }
        ATL::CSid::operator=((ATL::CSid *)&v44, v25);
        try
        {
          v28 = (ATL::CDacl::CAccessObjectAce *)operator new(0xA8uLL);
          v43 = v28;
          if ( v28 )
            v29 = ATL::CDacl::CAccessObjectAce::CAccessObjectAce(
                    v28,
                    (const struct ATL::CSid *)&v44,
                    v5,
                    *((_BYTE *)pAce + 1),
                    *(_BYTE *)pAce == 5,
                    v23,
                    v24);
          else
            v29 = 0LL;
          v35 = (_DWORD *)v29;
        }
        catch ( ... )
        {
          v29 = (__int64)v35;
          v4 = v36;
          v3 = v39;
        }
        if ( !v29 )
          ATL::AtlThrowImpl(-2147024882);
        ATL::CAtlArray<ATL::CAutoPtr<ATL::CDacl::CAccessAce>,ATL::CAutoPtrElementTraits<ATL::CDacl::CAccessAce>>::Add(
          (char *)v3 + 24,
          &v35);
      }
      v36 = ++v4;
    }
    ATL::CAutoPtr<ATL::CDacl::CAccessAce>::Free(&v35);
    ATL::CSid::~CSid((ATL::CSid *)&v44);
  }
  else
  {
    (*(void (__fastcall **)(ATL::CDacl *))(*(_QWORD *)this + 16LL))(this);
    *((_BYTE *)v3 + 16) = 1;
  }
}
