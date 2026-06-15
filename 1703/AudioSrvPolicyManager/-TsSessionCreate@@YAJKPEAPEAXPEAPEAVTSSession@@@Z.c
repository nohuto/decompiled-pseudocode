/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001A328 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001C3A4 (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003BD8 (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000FB80 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x18001849C (WPP_SF_dii.c)
 *     ??0TSSession@@QEAA@K@Z @ 0x180018728 (--0TSSession@@QEAA@K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x180018868 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x1800198F0 (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x180019ADC (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18001C534 (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x18001EF00 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x18001F72C (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall TsSessionCreate(DWORD SessionId, void **a2, struct TSSession **a3)
{
  HANDLE ProcessHeap; // rax
  TSSession *v7; // rax
  _QWORD *v8; // rdx
  __int64 v9; // r8
  TSSession *v10; // rdi
  unsigned int refreshed; // ebx
  __int64 v12; // r8
  HANDLE v13; // rax
  _QWORD *v14; // rax
  _QWORD *v15; // rbx
  HANDLE v16; // rax
  _BYTE *v17; // rax
  bool v18; // bl
  HANDLE v19; // rax
  _BYTE *v20; // rax
  bool v21; // bl
  HANDLE v22; // rax
  _BYTE *v23; // rax
  bool v24; // bl
  HANDLE v25; // rax
  _BYTE *v26; // rax
  bool v27; // bl
  HANDLE v28; // rax
  _BYTE *v29; // rax
  bool v30; // bl
  HANDLE v31; // rax
  _BYTE *v32; // rax
  bool v33; // bl
  HANDLE v34; // rax
  _BYTE *v35; // rax
  bool v36; // bl
  __int64 v38; // [rsp+38h] [rbp-49h] BYREF
  __int64 v39; // [rsp+40h] [rbp-41h] BYREF
  __int64 v40; // [rsp+48h] [rbp-39h] BYREF
  __int64 v41; // [rsp+50h] [rbp-31h] BYREF
  __int64 v42; // [rsp+58h] [rbp-29h] BYREF
  _BYTE *v43; // [rsp+60h] [rbp-21h] BYREF
  _BYTE *v44; // [rsp+68h] [rbp-19h] BYREF
  _BYTE *v45; // [rsp+70h] [rbp-11h] BYREF
  _BYTE *v46; // [rsp+78h] [rbp-9h] BYREF
  _BYTE *v47; // [rsp+80h] [rbp-1h] BYREF
  _BYTE *v48; // [rsp+88h] [rbp+7h] BYREF
  _QWORD v49[9]; // [rsp+90h] [rbp+Fh] BYREF
  void *v50; // [rsp+F0h] [rbp+6Fh]
  TSSession *v51; // [rsp+F8h] [rbp+77h] BYREF
  __int64 v52; // [rsp+100h] [rbp+7Fh] BYREF

  v49[1] = -2LL;
  v50 = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_8c6176e2ee2e3d308447856c4f339b3c_Traceguids, SessionId);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (TSSession *)HeapAlloc(ProcessHeap, 0, 0x178uLL);
  v51 = v7;
  if ( v7 )
    v10 = TSSession::TSSession(v7, SessionId, v9);
  else
    v10 = 0LL;
  if ( !v10
    || !SessionId && (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v10 + 39) < 0 )
  {
    goto LABEL_78;
  }
  *((_DWORD *)v10 + 1) = GetTsAudioProtocol(SessionId);
  *((_DWORD *)v10 + 2) = ++dword_180031E84;
  refreshed = TsSessionRefreshSessionInformation(v10);
  if ( refreshed )
    goto LABEL_79;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 5u )
  {
    WPP_SF_dii(
      *((_QWORD *)WPP_GLOBAL_Control + 2),
      *((_QWORD *)v10 + 5),
      v12,
      *(_DWORD *)v10,
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 176LL),
      *(_QWORD *)(*((_QWORD *)v10 + 5) + 200LL));
  }
  v13 = GetProcessHeap();
  v14 = HeapAlloc(v13, 0, 0x18uLL);
  v15 = v14;
  if ( v14 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    v14[2] = 0LL;
  }
  else
  {
    v15 = 0LL;
  }
  if ( v15 )
  {
    v15[2] = v10;
    *v15 = qword_180031D68;
    v15[1] = 0LL;
    if ( qword_180031D68 )
      *((_QWORD *)qword_180031D68 + 1) = v15;
    else
      qword_180031D70 = (__int64)v15;
    qword_180031D68 = v15;
    ++dword_180031D78;
    TsSessionConsiderForPrimaryConsoleAudioSession(v10);
    if ( a2 )
      *a2 = v15;
    *a3 = v10;
    v16 = GetProcessHeap();
    v17 = HeapAlloc(v16, 0, 0x10uLL);
    if ( v17 )
    {
      *(_DWORD *)v17 = -1047527424;
      v17[4] = 0;
      *((_QWORD *)v17 + 1) = 400000LL;
    }
    else
    {
      v17 = 0LL;
    }
    v50 = v17;
    if ( !v17 )
      goto LABEL_31;
    v44 = v17;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v51,
      (char *)L"SR");
    v18 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v51,
                          &v44) == 0;
    v8 = (_QWORD *)((char *)v51 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)v51 - 2) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v18 )
      goto LABEL_31;
    v19 = GetProcessHeap();
    v20 = HeapAlloc(v19, 0, 0x10uLL);
    if ( v20 )
    {
      *(_DWORD *)v20 = -1042284544;
      v20[4] = 1;
      *((_QWORD *)v20 + 1) = 400000LL;
    }
    else
    {
      v20 = 0LL;
    }
    v50 = v20;
    if ( !v20 )
      goto LABEL_31;
    v45 = v20;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v52,
      (char *)L"Comm");
    v21 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v52,
                          &v45) == 0;
    v8 = (_QWORD *)(v52 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v52 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v21 )
      goto LABEL_31;
    v22 = GetProcessHeap();
    v23 = HeapAlloc(v22, 0, 0x10uLL);
    if ( v23 )
    {
      *(_DWORD *)v23 = -1061158912;
      v23[4] = 0;
      *((_QWORD *)v23 + 1) = 400000LL;
    }
    else
    {
      v23 = 0LL;
    }
    v50 = v23;
    if ( !v23 )
      goto LABEL_31;
    v46 = v23;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v38,
      (char *)L"1");
    v24 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v38,
                          &v46) == 0;
    v8 = (_QWORD *)(v38 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v38 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v24 )
      goto LABEL_31;
    v25 = GetProcessHeap();
    v26 = HeapAlloc(v25, 0, 0x10uLL);
    if ( v26 )
    {
      *(_DWORD *)v26 = -1047527424;
      v26[4] = 0;
      *((_QWORD *)v26 + 1) = 400000LL;
    }
    else
    {
      v26 = 0LL;
    }
    v50 = v26;
    if ( !v26 )
      goto LABEL_31;
    v47 = v26;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v39,
      (char *)L"2");
    v27 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v39,
                          &v47) == 0;
    v8 = (_QWORD *)(v39 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v39 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v27 )
      goto LABEL_31;
    v28 = GetProcessHeap();
    v29 = HeapAlloc(v28, 0, 0x10uLL);
    if ( v29 )
    {
      *(_DWORD *)v29 = -1042284544;
      v29[4] = 0;
      *((_QWORD *)v29 + 1) = 400000LL;
    }
    else
    {
      v29 = 0LL;
    }
    v50 = v29;
    if ( !v29 )
      goto LABEL_31;
    v48 = v29;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v40,
      (char *)L"3");
    v30 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v40,
                          &v48) == 0;
    v8 = (_QWORD *)(v40 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v40 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v30 )
      goto LABEL_31;
    v31 = GetProcessHeap();
    v32 = HeapAlloc(v31, 0, 0x10uLL);
    v43 = v32;
    if ( v32 )
    {
      *(_DWORD *)v32 = -8388608;
      v32[4] = 0;
      *((_QWORD *)v32 + 1) = 400000LL;
    }
    else
    {
      v32 = 0LL;
    }
    v50 = v32;
    if ( !v32 )
      goto LABEL_31;
    v43 = v32;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v41,
      (char *)L"4");
    v33 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v41,
                          &v43) == 0;
    v8 = (_QWORD *)(v41 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v41 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v33 )
      goto LABEL_31;
    v34 = GetProcessHeap();
    v35 = HeapAlloc(v34, 0, 0x10uLL);
    if ( v35 )
    {
      *(_DWORD *)v35 = -1042284544;
      v35[4] = 1;
      *((_QWORD *)v35 + 1) = 400000LL;
    }
    else
    {
      v35 = 0LL;
    }
    v50 = v35;
    if ( !v35 )
      goto LABEL_31;
    v49[0] = v35;
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v42,
      (char *)L"5");
    v36 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                          (char *)v10 + 336,
                          &v42,
                          v49) == 0;
    v8 = (_QWORD *)(v42 - 24);
    if ( _InterlockedDecrement((volatile signed __int32 *)(v42 - 24 + 16)) <= 0 )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v8 + 8LL))(*v8);
    if ( v36 )
    {
LABEL_31:
      refreshed = 14;
    }
    else
    {
      v50 = 0LL;
      v10 = 0LL;
      refreshed = 0;
    }
  }
  else
  {
LABEL_78:
    refreshed = 14;
  }
LABEL_79:
  if ( v10 )
  {
    TSSession::~TSSession(v10, (__int64)v8);
    operator delete(v10, 0x178uLL);
  }
  operator delete(v50, 0x10uLL);
  return refreshed;
}
