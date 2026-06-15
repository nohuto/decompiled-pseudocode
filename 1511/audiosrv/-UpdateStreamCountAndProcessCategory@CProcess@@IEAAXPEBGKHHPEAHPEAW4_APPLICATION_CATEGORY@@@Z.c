/*
 * XREFs of ?UpdateStreamCountAndProcessCategory@CProcess@@IEAAXPEBGKHHPEAHPEAW4_APPLICATION_CATEGORY@@@Z @ 0x180029280
 * Callers:
 *     ?Invoke@CStreamStartedWorkItem@@UEAAXXZ @ 0x18002E5E0 (-Invoke@CStreamStartedWorkItem@@UEAAXXZ.c)
 *     ?Invoke@CStreamStoppedWorkItem@@UEAAXXZ @ 0x18002F360 (-Invoke@CStreamStoppedWorkItem@@UEAAXXZ.c)
 * Callees:
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z @ 0x1800188F0 (-Free@CAtlStringMgr@ATL@@UEAAXPEAUCStringData@2@@Z.c)
 *     ?GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ @ 0x180018960 (-GetNilString@CAtlStringMgr@ATL@@UEAAPEAUCStringData@2@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x180019040 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?Release@CStringData@ATL@@QEAAXXZ @ 0x18002C240 (-Release@CStringData@ATL@@QEAAXXZ.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAI@Z @ 0x18002ED60 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$CSimpleM.c)
 *     ??3@YAXPEAX@Z @ 0x1800301D0 (--3@YAXPEAX@Z.c)
 *     memset_0 @ 0x180047978 (memset_0.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180071D20 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800750C4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 *     WPP_SF_dSS @ 0x1800A1164 (WPP_SF_dSS.c)
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
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *); // rbx
  unsigned int *NilString; // rax
  unsigned __int16 v13; // dx
  __int64 v14; // r8
  __int64 v15; // r9
  unsigned int *v16; // rbx
  __int64 v17; // rdi
  unsigned __int64 v18; // r14
  unsigned __int64 v19; // r15
  rsize_t v20; // r9
  int v21; // r8d
  int v22; // r9d
  char **v23; // r10
  char *v24; // rax
  signed __int64 v25; // rdx
  unsigned __int16 v26; // cx
  int v27; // eax
  void *v28; // rdi
  volatile signed __int32 *v29; // rbx
  void (__fastcall *v30)(ATL::CAtlStringMgr *, struct ATL::CStringData *); // r15
  int v31; // r10d
  int v32; // r9d
  int v33; // edx
  __int64 v34; // r8
  int v35; // r10d
  int v36; // r8d
  __int64 v37; // r9
  int v38; // r10d
  int v39; // r8d
  __int64 v40; // r9
  int v41; // r10d
  int v42; // r8d
  __int64 v43; // r9
  int v44; // r10d
  int v45; // r8d
  __int64 v46; // r9
  int v47; // r10d
  int v48; // r8d
  __int64 v49; // r9
  int v50; // r9d
  int v51; // r8d
  __int64 v52; // rdx
  int v53; // ecx
  __int64 v54; // rax
  HANDLE ProcessHeap; // rax
  void *v56; // rax
  bool v57; // bl
  HANDLE v58; // rax
  HINSTANCE StringResourceInstance; // rax
  unsigned int *v60; // [rsp+30h] [rbp-58h] BYREF
  __int64 v61; // [rsp+38h] [rbp-50h] BYREF
  _QWORD v62[9]; // [rsp+40h] [rbp-48h] BYREF
  int v63; // [rsp+90h] [rbp+8h]
  int v65; // [rsp+A8h] [rbp+20h]

  v62[1] = -2LL;
  v63 = *((_DWORD *)this + 78);
  v9 = -1;
  if ( a4 )
    v9 = 1;
  v65 = v9;
  if ( a5 )
    v10 = (char *)this + 280;
  else
    v10 = (char *)this + 256;
  v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *))(ATL::g_strmgr + 24LL);
  if ( v11 == ATL::CAtlStringMgr::GetNilString )
    NilString = (unsigned int *)ATL::CAtlStringMgr::GetNilString((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  else
    NilString = (unsigned int *)v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
  v16 = NilString + 6;
  v60 = NilString + 6;
  if ( !a2 )
  {
LABEL_104:
    ATL::CSimpleStringT<unsigned short,0>::Empty((__int64 *)&v60);
    goto LABEL_105;
  }
  if ( (a2 & 0xFFFFFFFFFFFF0000uLL) != 0 )
  {
    v17 = -1LL;
    do
      ++v17;
    while ( *(_WORD *)(a2 + 2 * v17) );
    if ( (_DWORD)v17 )
    {
      v18 = NilString[2];
      v19 = (a2 - (__int64)v16) >> 1;
      if ( (int)((1 - NilString[4]) | (NilString[3] - v17)) < 0 )
      {
        ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2((__int64 *)&v60, v17, v14, v15);
        v16 = v60;
      }
      v20 = 2LL * (int)v17;
      if ( v19 <= v18 )
        memmove_s(v16, v20, (char *)v16 + 2 * v19, v20);
      else
        memcpy_s(v16, v20, (const void *const)a2, v20);
      if ( (int)v17 < 0 || (int)v17 > (int)*(v16 - 3) )
        ATL::AtlThrowImpl(-2147024809);
      *(v16 - 4) = v17;
      *((_WORD *)v16 + (int)v17) = 0;
      goto LABEL_19;
    }
    goto LABEL_104;
  }
  StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)a2, v13);
  if ( StringResourceInstance )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
      &v60,
      StringResourceInstance,
      (unsigned __int16)a2);
LABEL_105:
    v16 = v60;
  }
LABEL_19:
  v21 = 0;
  v22 = *((_DWORD *)v10 + 4);
  if ( v22 <= 0 )
    goto LABEL_88;
  v23 = *(char ***)v10;
  while ( 1 )
  {
    if ( !v16 )
      ATL::AtlThrowImpl(-2147467259);
    v24 = *v23;
    v25 = (char *)v16 - *v23;
    while ( 1 )
    {
      v26 = *(_WORD *)v24;
      if ( *(_WORD *)v24 != *(_WORD *)&v24[v25] )
        break;
      v24 += 2;
      if ( !v26 )
      {
        v27 = 0;
        goto LABEL_26;
      }
    }
    v27 = v26 < *(_WORD *)&v24[v25] ? -1 : 1;
LABEL_26:
    if ( !v27 )
      break;
    ++v21;
    ++v23;
    if ( v21 >= v22 )
      goto LABEL_88;
  }
  if ( v21 == -1 )
  {
LABEL_88:
    v28 = 0LL;
  }
  else
  {
    if ( v21 < 0 || v21 >= v22 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180057B7BLL);
    }
    v28 = *(void **)(*((_QWORD *)v10 + 1) + 8LL * v21);
  }
  v29 = (volatile signed __int32 *)(v16 - 6);
  if ( _InterlockedExchangeAdd(v29 + 4, 0xFFFFFFFF) <= 1 )
  {
    v30 = *(void (__fastcall **)(ATL::CAtlStringMgr *, struct ATL::CStringData *))(**(_QWORD **)v29 + 8LL);
    if ( v30 == ATL::CAtlStringMgr::Free )
      ATL::CAtlStringMgr::Free(*(ATL::CAtlStringMgr **)v29, (struct ATL::CStringData *)v29);
    else
      v30(*(ATL::CAtlStringMgr **)v29, (struct ATL::CStringData *)v29);
  }
  if ( !v28 )
  {
    ProcessHeap = GetProcessHeap();
    v56 = HeapAlloc(ProcessHeap, 0, 0x54uLL);
    v28 = v56;
    v62[0] = v56;
    if ( v56 )
    {
      memset_0(v56, 0, 0x54uLL);
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        &v61,
        a2);
      v57 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::Add(
                            v10,
                            &v61,
                            v62) == 0;
      ATL::CStringData::Release((ATL::CStringData *)(v61 - 24));
      if ( !v57 )
      {
        v58 = GetProcessHeap();
        HeapFree(v58, 0, 0LL);
        goto LABEL_35;
      }
      operator delete(v28);
    }
    else
    {
      operator delete(0LL);
    }
LABEL_79:
    v53 = 1;
    goto LABEL_80;
  }
LABEL_35:
  *((_DWORD *)v28 + a3) += v65;
  if ( a5 )
  {
    *((_DWORD *)this + 77) += v65;
    goto LABEL_79;
  }
  *((_DWORD *)this + 76) += v65;
  v31 = 0;
  v32 = 0;
  v33 = *((_DWORD *)this + 68);
  if ( v33 > 0 )
  {
    v34 = 0LL;
    do
    {
      if ( v34 < 0 || v32 >= v33 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180057BCFLL);
      }
      v31 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v34) + 12LL);
      ++v32;
      v34 += 8LL;
    }
    while ( v32 < v33 );
    if ( v31 )
      goto LABEL_114;
  }
  v35 = 0;
  v36 = 0;
  if ( v33 > 0 )
  {
    v37 = 0LL;
    do
    {
      if ( v37 < 0 || v36 >= v33 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180057BF1LL);
      }
      v35 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v37) + 32LL);
      ++v36;
      v37 += 8LL;
    }
    while ( v36 < v33 );
    if ( v35 )
    {
LABEL_114:
      *((_DWORD *)this + 78) = 0;
      goto LABEL_79;
    }
  }
  v38 = 0;
  v39 = 0;
  if ( v33 <= 0 )
    goto LABEL_54;
  v40 = 0LL;
  do
  {
    if ( v40 < 0 || v39 >= v33 )
    {
      RaiseException(0xC000008C, 1u, 0, 0LL);
      JUMPOUT(0x180057C17LL);
    }
    v38 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v40) + 8LL);
    ++v39;
    v40 += 8LL;
  }
  while ( v39 < v33 );
  if ( !v38 )
  {
LABEL_54:
    v41 = 0;
    v42 = 0;
    if ( v33 > 0 )
    {
      v43 = 0LL;
      do
      {
        if ( v43 < 0 || v42 >= v33 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180057C2DLL);
        }
        v41 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v43) + 44LL);
        ++v42;
        v43 += 8LL;
      }
      while ( v42 < v33 );
      if ( v41 )
        goto LABEL_97;
    }
    v44 = 0;
    v45 = 0;
    if ( v33 > 0 )
    {
      v46 = 0LL;
      do
      {
        if ( v46 < 0 || v45 >= v33 )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180057C43LL);
        }
        v44 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v46) + 40LL);
        ++v45;
        v46 += 8LL;
      }
      while ( v45 < v33 );
      if ( v44 )
        goto LABEL_97;
    }
    v47 = 0;
    v48 = 0;
    if ( v33 <= 0 )
      goto LABEL_72;
    v49 = 0LL;
    do
    {
      if ( v49 < 0 || v48 >= v33 )
      {
        RaiseException(0xC000008C, 1u, 0, 0LL);
        JUMPOUT(0x180057C59LL);
      }
      v47 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v49) + 4LL);
      ++v48;
      v49 += 8LL;
    }
    while ( v48 < v33 );
    if ( v47 )
    {
LABEL_97:
      *((_DWORD *)this + 78) = 2;
    }
    else
    {
LABEL_72:
      v50 = 0;
      v51 = 0;
      if ( v33 <= 0 )
        goto LABEL_78;
      v52 = 0LL;
      do
      {
        if ( v52 < 0 || v51 >= *((_DWORD *)this + 68) )
        {
          RaiseException(0xC000008C, 1u, 0, 0LL);
          JUMPOUT(0x180057C7ELL);
        }
        v50 += *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 33) + v52) + 28LL);
        ++v51;
        v52 += 8LL;
      }
      while ( v51 < *((_DWORD *)this + 68) );
      if ( v50 )
        *((_DWORD *)this + 78) = 3;
      else
LABEL_78:
        *((_DWORD *)this + 78) = 4;
    }
    goto LABEL_79;
  }
  v53 = 1;
  *((_DWORD *)this + 78) = 1;
LABEL_80:
  if ( a7 )
    *(_DWORD *)a7 = v63;
  if ( a6 )
  {
    if ( v63 == *((_DWORD *)this + 78) )
      v53 = 0;
    *a6 = v53;
  }
  v54 = *((int *)this + 78);
  if ( v63 != (_DWORD)v54
    && WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_dSS(*((_QWORD *)WPP_GLOBAL_Control + 2), (__int64)off_1800C7270[v63], (__int64)off_1800C7270[v54]);
  }
}
