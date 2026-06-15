/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180037880
 * Callers:
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A6F0 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A940 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z @ 0x18009D1D0 (-TsSessionIdIsStreamCategoryDucked@@YAHKPEBGKH@Z.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019040 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x18002ED60 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSimpleM.c)
 *     ??2@YAPEAX_K@Z @ 0x1800301FC (--2@YAPEAX_K@Z.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ??0CStreamClassPolicyGainsWrapper@@QEAA@AEBV?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@@Z @ 0x180066AC8 (--0CStreamClassPolicyGainsWrapper@@QEAA@AEBV-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTrait.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180071D20 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800750C4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     ??_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z @ 0x18009BDD0 (--_GCStreamClassPolicyGainsWrapper@@QEAAPEAXI@Z.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        __int64 a2,
        struct CStreamClassPolicyGainsWrapper **a3)
{
  unsigned int v5; // r13d
  struct ATL::CStringData *(__fastcall *v6)(ATL::CAtlStringMgr *); // rbx
  unsigned int *NilString; // rax
  unsigned __int16 v8; // dx
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned int *v11; // rbx
  __int64 v12; // rdi
  unsigned __int64 v13; // r14
  unsigned __int64 v14; // rbp
  rsize_t v15; // r9
  int v16; // r8d
  int v17; // r9d
  char **v18; // r10
  char *v19; // rax
  signed __int64 v20; // rdx
  unsigned __int16 v21; // cx
  int v22; // eax
  CStreamClassPolicyGainsWrapper *v23; // rdi
  void (__fastcall *v24)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // rbp
  HINSTANCE StringResourceInstance; // rax
  unsigned int *v27; // rax
  bool v28; // bl
  unsigned int v29; // edx
  __int64 v30; // [rsp+20h] [rbp-58h] BYREF
  __int64 v31[10]; // [rsp+28h] [rbp-50h] BYREF
  unsigned int *v34; // [rsp+98h] [rbp+20h] BYREF

  v31[1] = -2LL;
  v5 = 0;
  v6 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v6 == ATL::CAtlStringMgr::GetNilString )
    NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = (unsigned int *)v6((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v11 = NilString + 6;
  v34 = NilString + 6;
  if ( !a2 )
  {
LABEL_40:
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v34);
    goto LABEL_41;
  }
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(a2 + 2 * v12) );
    if ( (_DWORD)v12 )
    {
      v13 = NilString[2];
      v14 = (a2 - (__int64)v11) >> 1;
      if ( (int)((1 - NilString[4]) | (NilString[3] - v12)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v34, v12, v9, v10);
        v11 = v34;
      }
      v15 = 2LL * (int)v12;
      if ( v14 <= v13 )
        memmove_s(v11, v15, (char *)v11 + 2 * v14, v15);
      else
        memcpy_s(v11, v15, (const void *const)a2, v15);
      if ( (int)v12 < 0 || (int)v12 > (int)*(v11 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *(v11 - 4) = v12;
      *((_WORD *)v11 + (int)v12) = 0;
      goto LABEL_15;
    }
    goto LABEL_40;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v8);
  if ( StringResourceInstance )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v34,
      StringResourceInstance,
      (unsigned __int16)a2);
LABEL_41:
    v11 = v34;
  }
LABEL_15:
  v16 = 0;
  v17 = *((_DWORD *)this + 42);
  if ( v17 <= 0 )
    goto LABEL_34;
  v18 = (char **)*((_QWORD *)this + 19);
  while ( 1 )
  {
    if ( !v11 )
      ATL::AtlThrowImpl(-2147467259);
    v19 = *v18;
    v20 = (char *)v11 - *v18;
    while ( 1 )
    {
      v21 = *(_WORD *)v19;
      if ( *(_WORD *)v19 != *(_WORD *)&v19[v20] )
        break;
      v19 += 2;
      if ( !v21 )
      {
        v22 = 0;
        goto LABEL_22;
      }
    }
    v22 = v21 < *(_WORD *)&v19[v20] ? -1 : 1;
LABEL_22:
    if ( !v22 )
      break;
    ++v16;
    ++v18;
    if ( v16 >= v17 )
      goto LABEL_34;
  }
  if ( v16 == -1 )
  {
LABEL_34:
    v23 = 0LL;
  }
  else
  {
    if ( v16 < 0 || v16 >= v17 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180060543LL);
    }
    v23 = *(CStreamClassPolicyGainsWrapper **)(*((_QWORD *)this + 20) + 8LL * v16);
  }
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)v11 - 2, 0xFFFFFFFF) <= 1 )
  {
    v24 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**((_QWORD **)v11 - 3) + 8LL);
    if ( v24 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*((ATL::CAtlStringMgr **)v11 - 3), (struct ATL::CStringData *)(v11 - 6));
    else
      v24(*((ATL::CAtlStringMgr **)v11 - 3), (struct ATL::CStringData *)(v11 - 6));
  }
  if ( !v23 )
  {
    v27 = (unsigned int *)operator new(0x810uLL);
    v34 = v27;
    if ( v27 )
      v23 = (CStreamClassPolicyGainsWrapper *)CStreamClassPolicyGainsWrapper::CStreamClassPolicyGainsWrapper(
                                                v27,
                                                (char *)this + 336);
    else
      v23 = 0LL;
    v31[0] = (__int64)v23;
    if ( !v23 )
      return (unsigned int)-2147024882;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v30,
      a2);
    v28 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::Add(
                          (__int64)this + 152,
                          &v30,
                          v31) == 0;
    ATL::CStringData::Release((ATL::CStringData *)(v30 - 24));
    if ( v28 )
    {
      v5 = -2147024882;
      CStreamClassPolicyGainsWrapper::`scalar deleting destructor'(v23, v29);
      return v5;
    }
  }
  *a3 = v23;
  return v5;
}
