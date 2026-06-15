/*
 * XREFs of ??0CSid@ATL@@QEAA@AEBV01@@Z @ 0x1800192A0
 * Callers:
 *     ?AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z @ 0x18002DCD0 (-AddAllowedAce@CDacl@ATL@@QEAA_NAEBVCSid@2@KE@Z.c)
 *     ?Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z @ 0x18002DE40 (-Copy@CDacl@ATL@@AEAAXAEBU_ACL@@@Z.c)
 *     ??0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z @ 0x1800662A8 (--0CAccessAce@CDacl@ATL@@QEAA@AEBVCSid@2@KE_N@Z.c)
 * Callees:
 *     ?Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ @ 0x180018950 (-Clone@CAtlStringMgr@ATL@@UEAAPEAUIAtlStringMgr@2@XZ.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?ThrowMemoryException@?$CSimpleStringT@G$0A@@ATL@@KAXXZ @ 0x180069968 (-ThrowMemoryException@-$CSimpleStringT@G$0A@@ATL@@KAXXZ.c)
 *     ?AtlHresultFromLastError@ATL@@YAJXZ @ 0x18006A118 (-AtlHresultFromLastError@ATL@@YAJXZ.c)
 */

// Hidden C++ exception states: #wind=4
ATL::CSid *__fastcall ATL::CSid::CSid(ATL::CSid *this, const struct ATL::CSid *a2)
{
  _QWORD *v4; // r15
  char *v5; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v6)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v7; // rax
  char *v8; // rbx
  char *v9; // rdi
  struct ATL::IAtlStringMgr *(__fastcall *v10)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v11; // rax
  char *v12; // rbx
  char *v13; // rbx
  struct ATL::IAtlStringMgr *(__fastcall *v14)(ATL::CAtlStringMgr *); // r14
  struct ATL::IAtlStringMgr *v15; // rax
  char *v16; // rdi
  struct ATL::CStringData *(__fastcall *v17)(ATL::CAtlStringMgr *); // rbx
  struct ATL::CStringData *NilString; // rax
  DWORD LengthSid; // eax
  __int64 v21; // rax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  rsize_t v26; // rdx
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  rsize_t v32; // rdx
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // r8
  __int64 v37; // r9
  rsize_t v38; // rdx
  int Error; // eax

  *(_QWORD *)this = &ATL::CSid::`vftable';
  *((_BYTE *)this + 76) = *((_BYTE *)a2 + 76);
  *((_DWORD *)this + 20) = *((_DWORD *)a2 + 20);
  v4 = (_QWORD *)((char *)this + 88);
  v5 = (char *)*((_QWORD *)a2 + 11);
  v6 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v5 - 3) + 32LL);
  if ( v6 == ATL::CAtlStringMgr::Clone )
    v7 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v5 - 3));
  else
    v7 = v6(*((ATL::CAtlStringMgr **)v5 - 3));
  if ( *((int *)v5 - 2) >= 0 && v7 == *((struct ATL::IAtlStringMgr **)v5 - 3) )
  {
    v8 = v5 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v5 - 2);
  }
  else
  {
    v21 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v7)(
            v7,
            *((unsigned int *)v5 - 4),
            2LL);
    v8 = (char *)v21;
    if ( !v21 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v23, v22, v24, v25);
    *(_DWORD *)(v21 + 8) = *((_DWORD *)v5 - 4);
    v26 = 2LL * (*((_DWORD *)v5 - 4) + 1);
    memcpy_s((void *const)(v21 + 24), v26, v5, v26);
  }
  *v4 = v8 + 24;
  v9 = (char *)*((_QWORD *)a2 + 12);
  v10 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v9 - 3) + 32LL);
  if ( v10 == ATL::CAtlStringMgr::Clone )
    v11 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v9 - 3));
  else
    v11 = v10(*((ATL::CAtlStringMgr **)v9 - 3));
  if ( *((int *)v9 - 2) >= 0 && v11 == *((struct ATL::IAtlStringMgr **)v9 - 3) )
  {
    v12 = v9 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v9 - 2);
  }
  else
  {
    v27 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v11)(
            v11,
            *((unsigned int *)v9 - 4),
            2LL);
    v12 = (char *)v27;
    if ( !v27 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v29, v28, v30, v31);
    *(_DWORD *)(v27 + 8) = *((_DWORD *)v9 - 4);
    v32 = 2LL * (*((_DWORD *)v9 - 4) + 1);
    memcpy_s((void *const)(v27 + 24), v32, v9, v32);
  }
  *((_QWORD *)this + 12) = v12 + 24;
  v13 = (char *)*((_QWORD *)a2 + 13);
  v14 = *(struct ATL::IAtlStringMgr *(__fastcall **)(ATL::CAtlStringMgr *))(**((_QWORD **)v13 - 3) + 32LL);
  if ( v14 == ATL::CAtlStringMgr::Clone )
    v15 = ATL::CAtlStringMgr::Clone(*((ATL::CAtlStringMgr **)v13 - 3));
  else
    v15 = v14(*((ATL::CAtlStringMgr **)v13 - 3));
  if ( *((int *)v13 - 2) >= 0 && v15 == *((struct ATL::IAtlStringMgr **)v13 - 3) )
  {
    v16 = v13 - 24;
    _InterlockedIncrement((volatile signed __int32 *)v13 - 2);
  }
  else
  {
    v33 = (**(__int64 (__fastcall ***)(struct ATL::IAtlStringMgr *, _QWORD, __int64))v15)(
            v15,
            *((unsigned int *)v13 - 4),
            2LL);
    v16 = (char *)v33;
    if ( !v33 )
      ATL::CSimpleStringT<unsigned short,0>::ThrowMemoryException(v35, v34, v36, v37);
    *(_DWORD *)(v33 + 8) = *((_DWORD *)v13 - 4);
    v38 = 2LL * (*((_DWORD *)v13 - 4) + 1);
    memcpy_s((void *const)(v33 + 24), v38, v13, v38);
  }
  *((_QWORD *)this + 13) = v16 + 24;
  v17 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v17 == ATL::CAtlStringMgr::GetNilString )
    NilString = ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = v17((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  *((_QWORD *)this + 14) = (char *)NilString + 24;
  if ( *((_BYTE *)a2 + 76) )
  {
    if ( !IsValidSid((char *)a2 + 8) )
      ATL::AtlThrowImpl(-2147024809);
    LengthSid = GetLengthSid((char *)a2 + 8);
    if ( !CopySid(LengthSid, (char *)this + 8, (char *)a2 + 8) )
    {
      Error = ATL::AtlHresultFromLastError();
      ATL::AtlThrowImpl(Error);
    }
  }
  return this;
}
