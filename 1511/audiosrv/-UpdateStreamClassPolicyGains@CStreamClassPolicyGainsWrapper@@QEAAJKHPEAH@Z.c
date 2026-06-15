/*
 * XREFs of ?UpdateStreamClassPolicyGains@CStreamClassPolicyGainsWrapper@@QEAAJKHPEAH@Z @ 0x180017E60
 * Callers:
 *     ?UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A6F0 (-UpdatePolicyForOutgoingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 *     ?UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@PEAH@Z @ 0x18002A940 (-UpdatePolicyForIncomingStream@CStreamClassPolicyManager@@UEAAJKPEBGKW4__MIDL___MIDL_itf_mmdevic.c)
 * Callees:
 *     ?UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z @ 0x180005668 (-UpdateStreamClassGainStage@CStreamClassPolicyGains@@QEAAJK_NPEBUDuckingDescriptor@@HPEAH@Z.c)
 *     ?PrepareWrite2@?$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z @ 0x1800186F0 (-PrepareWrite2@-$CSimpleStringT@G$0A@@ATL@@AEAAXH@Z.c)
 *     ?Empty@?$CSimpleStringT@G$0A@@ATL@@QEAAXXZ @ 0x1800188B0 (-Empty@-$CSimpleStringT@G$0A@@ATL@@QEAAXXZ.c)
 *     ?GetValueAt@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAI@2@@ATL@@QEBAAEAPEAIH@Z @ 0x18002BC04 (-GetValueAt@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAIV-$C.c)
 *     WPP_SF_D @ 0x180039528 (WPP_SF_D.c)
 *     ?OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z @ 0x1800479B0 (-OnTaskInstanceCompleted@CBackgroundSessionCallbacks@@UEAAXU_GUID@@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x180067B60 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ?AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z @ 0x180071D20 (-AtlFindStringResourceInstance@ATL@@YAPEAUHINSTANCE__@@IG@Z.c)
 *     ?LoadStringW@?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@@I@Z @ 0x1800750C4 (-LoadStringW@-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAAHPEAUHINSTANCE__@.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall CStreamClassPolicyGainsWrapper::UpdateStreamClassPolicyGains(
        CStreamClassPolicyGainsWrapper *this,
        unsigned int a2,
        int a3,
        int *a4)
{
  const struct DuckingDescriptor *v5; // rbp
  int updated; // r14d
  unsigned int v7; // r15d
  __int64 v8; // r12
  struct ATL::CStringData *(__fastcall *v9)(ATL::CAtlStringMgr *__hidden); // rdx
  wchar_t *v10; // rsi
  struct ATL::CStringData *(__fastcall *v11)(ATL::CAtlStringMgr *__hidden); // rbx
  unsigned int *v12; // rax
  unsigned int *v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 v15; // r14
  unsigned __int64 v16; // rbp
  rsize_t v17; // r9
  signed __int64 v18; // rdx
  char **v19; // r9
  __int64 v20; // r11
  __int64 v21; // r8
  int v22; // r10d
  char *v23; // rax
  unsigned __int16 v24; // cx
  int v25; // eax
  volatile signed __int32 *v26; // rbx
  HANDLE *v27; // rdi
  void (*v28)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  unsigned int i; // r15d
  wchar_t *v30; // rsi
  struct ATL::CStringData *(__fastcall *v31)(ATL::CAtlStringMgr *__hidden); // rbx
  unsigned int *v32; // rax
  _BYTE *v33; // rbx
  __int64 v34; // rdi
  unsigned __int64 v35; // r14
  unsigned __int64 v36; // rbp
  rsize_t v37; // r9
  __int64 v38; // r11
  int v39; // r10d
  unsigned __int16 *v40; // rax
  unsigned __int16 v41; // cx
  int v42; // eax
  volatile signed __int32 *v43; // rbx
  HANDLE *v44; // rdi
  void (*v45)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *); // rsi
  HINSTANCE StringResourceInstance; // rax
  HINSTANCE v48; // rax
  int v49; // [rsp+30h] [rbp-68h]
  int v50; // [rsp+34h] [rbp-64h]
  int v51; // [rsp+38h] [rbp-60h] BYREF
  int v52; // [rsp+3Ch] [rbp-5Ch] BYREF
  unsigned int *v53; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v54[10]; // [rsp+48h] [rbp-50h] BYREF

  v54[1] = -2LL;
  v5 = 0LL;
  updated = 0;
  v50 = 0;
  v49 = 0;
  v7 = 0;
  v8 = 21LL * a2;
  do
  {
    v9 = ATL::CAtlStringMgr::GetNilString;
    v10 = (&off_1800B9B40[v8])[v7];
    v11 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v11 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(dword_1800E64A8);
      v12 = (unsigned int *)&qword_1800E6498;
    }
    else
    {
      v12 = (unsigned int *)v11((ATL::CAtlStringMgr *)&ATL::g_strmgr);
    }
    v13 = v12 + 6;
    v53 = v12 + 6;
    if ( !v10 )
    {
LABEL_84:
      ATL::CSimpleStringT<unsigned short,0>::Empty(&v53);
LABEL_85:
      v13 = v53;
      goto LABEL_16;
    }
    if ( ((unsigned __int64)v10 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      StringResourceInstance = ATL::AtlFindStringResourceInstance((unsigned __int16)v10, (unsigned __int16)v9);
      if ( !StringResourceInstance )
        goto LABEL_16;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        &v53,
        StringResourceInstance,
        (unsigned __int16)v10);
      goto LABEL_85;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( v10[v14] );
    if ( !(_DWORD)v14 )
      goto LABEL_84;
    v15 = v12[2];
    v16 = ((char *)v10 - (char *)v13) >> 1;
    if ( (int)((1 - v12[4]) | (v12[3] - v14)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(&v53, (unsigned int)v14);
      v13 = v53;
    }
    v17 = 2LL * (int)v14;
    if ( v16 <= v15 )
      memmove_s(v13, v17, (char *)v13 + 2 * v16, v17);
    else
      memcpy_s(v13, v17, v10, v17);
    if ( (int)v14 < 0 || (int)v14 > (int)*(v13 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *(v13 - 4) = v14;
    v5 = 0LL;
    *((_WORD *)v13 + (int)v14) = 0;
    updated = v50;
LABEL_16:
    v20 = *((_QWORD *)this + 257);
    v21 = 0LL;
    v22 = *(_DWORD *)(v20 + 16);
    if ( v22 > 0 )
    {
      v19 = *(char ***)v20;
      while ( 1 )
      {
        if ( !v13 )
          ATL::AtlThrowImpl(-2147467259);
        v23 = *v19;
        v18 = (char *)v13 - *v19;
        while ( 1 )
        {
          v24 = *(_WORD *)v23;
          if ( *(_WORD *)v23 != *(_WORD *)&v23[v18] )
            break;
          v23 += 2;
          if ( !v24 )
          {
            v25 = 0;
            goto LABEL_23;
          }
        }
        v25 = v24 < *(_WORD *)&v23[v18] ? -1 : 1;
LABEL_23:
        if ( !v25 )
          break;
        v21 = (unsigned int)(v21 + 1);
        ++v19;
        if ( (int)v21 >= v22 )
          goto LABEL_25;
      }
      if ( (_DWORD)v21 != -1 )
        v5 = *(const struct DuckingDescriptor **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                                   *((_QWORD *)this + 257),
                                                   (unsigned int)v21);
    }
LABEL_25:
    v26 = (volatile signed __int32 *)(v13 - 6);
    if ( _InterlockedExchangeAdd(v26 + 4, 0xFFFFFFFF) <= 1 )
    {
      v27 = *(HANDLE **)v26;
      v28 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v26 + 8LL);
      if ( v28 == ATL::CAtlStringMgr::Free
        && (v27 = (HANDLE *)v27[1],
            v28 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v27 + 1),
            (char *)v28 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v27[1], 0, (LPVOID)v26);
      }
      else
      {
        ((void (__fastcall *)(HANDLE *, volatile signed __int32 *, __int64, char **))v28)(v27, v26, v21, v19);
      }
    }
    if ( !v5 )
      goto LABEL_30;
    v51 = 0;
    updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, v7, 1, v5, a3, &v51);
    v50 = updated;
    if ( updated < 0 )
      goto LABEL_101;
    if ( v49 || v51 )
    {
      v49 = 1;
LABEL_30:
      v5 = 0LL;
      goto LABEL_31;
    }
    v5 = 0LL;
    v49 = 0;
LABEL_31:
    ++v7;
  }
  while ( v7 < 0x15 );
  for ( i = 0; i < 0x15; ++i )
  {
    v30 = (&off_1800B8D70[v8])[i];
    v31 = *(struct ATL::CStringData *(__fastcall **)(ATL::CAtlStringMgr *__hidden))(ATL::g_strmgr + 24LL);
    if ( v31 == ATL::CAtlStringMgr::GetNilString )
    {
      _InterlockedIncrement(dword_1800E64A8);
      v32 = (unsigned int *)&qword_1800E6498;
    }
    else
    {
      v32 = (unsigned int *)((__int64 (__fastcall *)(void *, signed __int64, __int64, char **))v31)(
                              &ATL::g_strmgr,
                              v18,
                              v21,
                              v19);
    }
    v33 = v32 + 6;
    v54[0] = v32 + 6;
    if ( !v30 )
    {
LABEL_94:
      ATL::CSimpleStringT<unsigned short,0>::Empty(v54);
LABEL_95:
      v33 = (_BYTE *)v54[0];
      goto LABEL_47;
    }
    if ( ((unsigned __int64)v30 & 0xFFFFFFFFFFFF0000uLL) == 0 )
    {
      v48 = ATL::AtlFindStringResourceInstance((unsigned __int16)v30, v18);
      if ( !v48 )
        goto LABEL_47;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::LoadStringW(
        v54,
        v48,
        (unsigned __int16)v30);
      goto LABEL_95;
    }
    v34 = -1LL;
    do
      ++v34;
    while ( v30[v34] );
    if ( !(_DWORD)v34 )
      goto LABEL_94;
    v35 = v32[2];
    v36 = ((char *)v30 - v33) >> 1;
    if ( (int)((1 - v32[4]) | (v32[3] - v34)) < 0 )
    {
      ATL::CSimpleStringT<unsigned short,0>::PrepareWrite2(v54, (unsigned int)v34);
      v33 = (_BYTE *)v54[0];
    }
    v37 = 2LL * (int)v34;
    if ( v36 <= v35 )
      memmove_s(v33, v37, &v33[2 * v36], v37);
    else
      memcpy_s(v33, v37, v30, v37);
    if ( (int)v34 < 0 || (int)v34 > *((_DWORD *)v33 - 3) )
      ATL::AtlThrowImpl(-2147024809);
    *((_DWORD *)v33 - 4) = v34;
    v5 = 0LL;
    *(_WORD *)&v33[2 * (int)v34] = 0;
    updated = v50;
LABEL_47:
    v38 = *((_QWORD *)this + 257);
    v21 = 0LL;
    v39 = *(_DWORD *)(v38 + 16);
    if ( v39 > 0 )
    {
      v19 = *(char ***)v38;
      while ( 1 )
      {
        if ( !v33 )
          ATL::AtlThrowImpl(-2147467259);
        v40 = (unsigned __int16 *)*v19;
        v18 = v33 - *v19;
        while ( 1 )
        {
          v41 = *v40;
          if ( *v40 != *(unsigned __int16 *)((char *)v40 + v18) )
            break;
          ++v40;
          if ( !v41 )
          {
            v42 = 0;
            goto LABEL_54;
          }
        }
        v42 = v41 < *(unsigned __int16 *)((char *)v40 + v18) ? -1 : 1;
LABEL_54:
        if ( !v42 )
          break;
        v21 = (unsigned int)(v21 + 1);
        ++v19;
        if ( (int)v21 >= v39 )
          goto LABEL_56;
      }
      if ( (_DWORD)v21 != -1 )
        v5 = *(const struct DuckingDescriptor **)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,unsigned int *>>::GetValueAt(
                                                   *((_QWORD *)this + 257),
                                                   (unsigned int)v21);
    }
LABEL_56:
    v43 = (volatile signed __int32 *)(v33 - 24);
    if ( _InterlockedExchangeAdd(v43 + 4, 0xFFFFFFFF) <= 1 )
    {
      v44 = *(HANDLE **)v43;
      v45 = *(void (**)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))(**(_QWORD **)v43 + 8LL);
      if ( v45 == ATL::CAtlStringMgr::Free
        && (v44 = (HANDLE *)v44[1],
            v45 = (void (*)(ATL::CAtlStringMgr *__hidden, struct ATL::CStringData *))*((_QWORD *)*v44 + 1),
            (char *)v45 == (char *)ATL::CWin32Heap::Free) )
      {
        HeapFree(v44[1], 0, (LPVOID)v43);
      }
      else
      {
        ((void (__fastcall *)(HANDLE *, volatile signed __int32 *, __int64, char **))v45)(v44, v43, v21, v19);
      }
    }
    if ( !v5 )
      goto LABEL_61;
    v52 = 0;
    updated = CStreamClassPolicyGains::UpdateStreamClassGainStage(this, i, 0, v5, a3, &v52);
    v50 = updated;
    if ( updated < 0 )
      goto LABEL_101;
    if ( v49 || v52 )
    {
      v49 = 1;
LABEL_61:
      v5 = 0LL;
      continue;
    }
    v5 = 0LL;
    v49 = 0;
  }
  if ( a4 )
    *a4 = v49;
  if ( updated < 0 )
  {
LABEL_101:
    if ( WPP_GLOBAL_Control != (TraceLoggingHProvider)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 2u )
    {
      WPP_SF_D(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        11LL,
        &WPP_e3cb839858e24a86ecbedc7f79bd5a67_Traceguids,
        (unsigned int)updated);
    }
  }
  return (unsigned int)updated;
}
