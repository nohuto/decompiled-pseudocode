/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x1800114C0
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18001A680 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002C130 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ??2@YAPEAX_K@Z @ 0x180006F40 (--2@YAPEAX_K@Z.c)
 *     ??3@YAXPEAX@Z @ 0x180006F70 (--3@YAXPEAX@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18000AFD0 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000CA44 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x180017740 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x180017928 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x180017970 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x1800179E0 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x180030AA0 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSimpleM.c)
 *     memset_0 @ 0x180043A34 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x180043A70 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180069190 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180073F04 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x180074EA4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     WPP_SF_dSS @ 0x1800A3DF4 (WPP_SF_dSS.c)
 */

// Hidden C++ exception states: #wind=4
void __fastcall CProcess::UpdateStreamCountAndProcessCategory(
        CProcess *this,
        __int64 a2,
        unsigned int a3,
        int a4,
        int a5,
        int *a6,
        enum _APPLICATION_CATEGORY *a7)
{
  int v9; // eax
  char *v10; // r13
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rbx
  unsigned int *NilString; // rax
  unsigned __int16 v13; // dx
  unsigned int *v14; // rbx
  __int64 v15; // rdi
  unsigned __int64 v16; // r14
  unsigned __int64 v17; // r15
  rsize_t v18; // r9
  int v19; // r8d
  int v20; // r9d
  char **v21; // r10
  char *v22; // rax
  signed __int64 v23; // rdx
  unsigned __int16 v24; // cx
  int v25; // eax
  void *v26; // rdi
  volatile signed __int32 *v27; // rbx
  void (*v28)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // r15
  int v29; // r10d
  int v30; // r9d
  int v31; // edx
  __int64 v32; // r8
  int v33; // r10d
  int v34; // r8d
  __int64 v35; // r9
  int v36; // r10d
  int v37; // r8d
  __int64 v38; // r9
  int v39; // r10d
  int v40; // r8d
  __int64 v41; // r9
  int v42; // r10d
  int v43; // r8d
  __int64 v44; // r9
  int v45; // r10d
  int v46; // r8d
  __int64 v47; // r9
  int v48; // r9d
  int v49; // r8d
  __int64 v50; // rdx
  int v51; // ecx
  __int64 v52; // rax
  void *v53; // rax
  bool v54; // bl
  HINSTANCE StringResourceInstance; // rax
  unsigned int *v56; // [rsp+30h] [rbp-58h] BYREF
  char *v57; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v58[9]; // [rsp+40h] [rbp-48h] BYREF
  int v59; // [rsp+90h] [rbp+8h]
  int v61; // [rsp+A8h] [rbp+20h]

  v58[1] = -2LL;
  v59 = *((_DWORD *)this + 78);
  v9 = -1;
  if ( a4 )
    v9 = 1;
  v61 = v9;
  if ( a5 )
    v10 = (char *)this + 280;
  else
    v10 = (char *)this + 256;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
    NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = (unsigned int *)v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v14 = NilString + 6;
  v56 = NilString + 6;
  if ( !a2 )
  {
LABEL_104:
    ATL::CSimpleStringT<unsigned short,0>::Empty(&v56);
    goto LABEL_105;
  }
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( *(_WORD *)(a2 + 2 * v15) );
    if ( (_DWORD)v15 )
    {
      v16 = NilString[2];
      v17 = (a2 - (__int64)v14) >> 1;
      if ( (int)((1 - NilString[4]) | (NilString[3] - v15)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v56, (unsigned int)v15);
        v14 = v56;
      }
      v18 = 2LL * (int)v15;
      if ( v17 <= v16 )
        memmove_s(v14, v18, (char *)v14 + 2 * v17, v18);
      else
        memcpy_s(v14, v18, (const void *const)a2, v18);
      if ( (int)v15 < 0 || (int)v15 > (int)*(v14 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *(v14 - 4) = v15;
      *((_WORD *)v14 + (int)v15) = 0;
      goto LABEL_19;
    }
    goto LABEL_104;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v13);
  if ( StringResourceInstance )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v56,
      StringResourceInstance,
      (unsigned __int16)a2);
LABEL_105:
    v14 = v56;
  }
LABEL_19:
  v19 = 0;
  v20 = *((_DWORD *)v10 + 4);
  if ( v20 <= 0 )
    goto LABEL_88;
  v21 = *(char ***)v10;
  while ( 1 )
  {
    if ( !v14 )
      ATL::AtlThrowImpl(-2147467259);
    v22 = *v21;
    v23 = (char *)v14 - *v21;
    while ( 1 )
    {
      v24 = *(_WORD *)v22;
      if ( *(_WORD *)v22 != *(_WORD *)&v22[v23] )
        break;
      v22 += 2;
      if ( !v24 )
      {
        v25 = 0;
        goto LABEL_26;
      }
    }
    v25 = v24 < *(_WORD *)&v22[v23] ? -1 : 1;
LABEL_26:
    if ( !v25 )
      break;
    ++v19;
    ++v21;
    if ( v19 >= v20 )
      goto LABEL_88;
  }
  if ( v19 == -1 )
  {
LABEL_88:
    v26 = 0LL;
  }
  else
  {
    if ( v19 < 0 || v19 >= v20 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18005059FLL);
    }
    v26 = *(void **)(*((_QWORD *)v10 + 1) + 8LL * v19);
  }
  v27 = (volatile signed __int32 *)(v14 - 6);
  if ( _InterlockedExchangeAdd(v27 + 4, 0xFFFFFFFF) <= 1 )
  {
    v28 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v27 + 8LL);
    if ( v28 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v27, (struct ATL::CStringData *)v27);
    else
      ((void (__fastcall *)(_QWORD, volatile signed __int32 *))v28)(*(_QWORD *)v27, v27);
  }
  if ( !v26 )
  {
    v53 = operator new(0x54uLL);
    v26 = v53;
    v58[0] = v53;
    if ( v53 )
    {
      memset_0(v53, 0, 0x54uLL);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        &v57,
        a2);
      v54 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::Add(
                            v10,
                            &v57,
                            v58) == 0;
      ATL::CStringData::Release((ATL::CStringData *)(v57 - 24));
      if ( !v54 )
      {
        operator delete(0LL);
        goto LABEL_35;
      }
      operator delete(v26);
    }
    else
    {
      operator delete(0LL);
    }
LABEL_79:
    v51 = 1;
    goto LABEL_80;
  }
LABEL_35:
  *((_DWORD *)v26 + a3) += v61;
  if ( a5 )
  {
    *((_DWORD *)this + 77) += v61;
    goto LABEL_79;
  }
  *((_DWORD *)this + 76) += v61;
  v29 = 0;
  v30 = 0;
  v31 = *((_DWORD *)this + 68);
  if ( v31 > 0 )
  {
    v32 = 0LL;
    do
    {
      if ( v32 < 0 || v30 >= v31 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x1800505F3LL);
      }
      v29 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v32) + 12LL);
      ++v30;
      v32 += 8LL;
    }
    while ( v30 < v31 );
    if ( v29 )
      goto LABEL_114;
  }
  v33 = 0;
  v34 = 0;
  if ( v31 > 0 )
  {
    v35 = 0LL;
    do
    {
      if ( v35 < 0 || v34 >= v31 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180050615LL);
      }
      v33 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v35) + 32LL);
      ++v34;
      v35 += 8LL;
    }
    while ( v34 < v31 );
    if ( v33 )
    {
LABEL_114:
      *((_DWORD *)this + 78) = 0;
      goto LABEL_79;
    }
  }
  v36 = 0;
  v37 = 0;
  if ( v31 <= 0 )
    goto LABEL_54;
  v38 = 0LL;
  do
  {
    if ( v38 < 0 || v37 >= v31 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x18005063BLL);
    }
    v36 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v38) + 8LL);
    ++v37;
    v38 += 8LL;
  }
  while ( v37 < v31 );
  if ( !v36 )
  {
LABEL_54:
    v39 = 0;
    v40 = 0;
    if ( v31 > 0 )
    {
      v41 = 0LL;
      do
      {
        if ( v41 < 0 || v40 >= v31 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180050651LL);
        }
        v39 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v41) + 44LL);
        ++v40;
        v41 += 8LL;
      }
      while ( v40 < v31 );
      if ( v39 )
        goto LABEL_97;
    }
    v42 = 0;
    v43 = 0;
    if ( v31 > 0 )
    {
      v44 = 0LL;
      do
      {
        if ( v44 < 0 || v43 >= v31 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180050667LL);
        }
        v42 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v44) + 40LL);
        ++v43;
        v44 += 8LL;
      }
      while ( v43 < v31 );
      if ( v42 )
        goto LABEL_97;
    }
    v45 = 0;
    v46 = 0;
    if ( v31 <= 0 )
      goto LABEL_72;
    v47 = 0LL;
    do
    {
      if ( v47 < 0 || v46 >= v31 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x18005067DLL);
      }
      v45 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v47) + 4LL);
      ++v46;
      v47 += 8LL;
    }
    while ( v46 < v31 );
    if ( v45 )
    {
LABEL_97:
      *((_DWORD *)this + 78) = 2;
    }
    else
    {
LABEL_72:
      v48 = 0;
      v49 = 0;
      if ( v31 <= 0 )
        goto LABEL_78;
      v50 = 0LL;
      do
      {
        if ( v50 < 0 || v49 >= *((_DWORD *)this + 68) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x1800506A2LL);
        }
        v48 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v50) + 28LL);
        ++v49;
        v50 += 8LL;
      }
      while ( v49 < *((_DWORD *)this + 68) );
      if ( v48 )
        *((_DWORD *)this + 78) = 3;
      else
LABEL_78:
        *((_DWORD *)this + 78) = 4;
    }
    goto LABEL_79;
  }
  v51 = 1;
  *((_DWORD *)this + 78) = 1;
LABEL_80:
  if ( a7 )
    *(_DWORD *)a7 = v59;
  if ( a6 )
  {
    if ( v59 == *((_DWORD *)this + 78) )
      v51 = 0;
    *a6 = v51;
  }
  v52 = *((int *)this + 78);
  if ( v59 != (_DWORD)v52
    && *(struct _GUID **)&WPP_GLOBAL_Control.Data1 != &WPP_GLOBAL_Control
    && (*(_DWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 28LL) & 0x40000000) != 0
    && *(_BYTE *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 25LL) >= 4u )
  {
    WPP_SF_dSS(
      *(_QWORD *)(*(_QWORD *)&WPP_GLOBAL_Control.Data1 + 16LL),
      (__int64)off_1800C8F50[v59],
      (__int64)off_1800C8F50[v52]);
  }
}
