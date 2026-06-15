/*
 * XREFs of ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4
 * Callers:
 *     ?TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001C370 (-TsSessionFromSessionId@@YAJKHPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TS_ServiceStart@@YAXXZ @ 0x18001E7AC (-TS_ServiceStart@@YAXXZ.c)
 * Callees:
 *     WPP_SF_D @ 0x180003ADC (WPP_SF_D.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     WPP_SF_dii @ 0x18001A3C8 (WPP_SF_dii.c)
 *     ??0TSSession@@QEAA@K@Z @ 0x18001A688 (--0TSSession@@QEAA@K@Z.c)
 *     ??1TSSession@@QEAA@XZ @ 0x18001A7C8 (--1TSSession@@QEAA@XZ.c)
 *     ?TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z @ 0x18001B9BC (-TsSessionRefreshSessionInformation@@YAJPEAVTSSession@@@Z.c)
 *     ?TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z @ 0x18001BBEC (-TsSessionConsiderForPrimaryConsoleAudioSession@@YAXPEAVTSSession@@@Z.c)
 *     ?Add@?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAAHAEBV?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@2@AEBQEAUDuckingDescriptor@@@Z @ 0x18001E92C (-Add@-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDesc.c)
 *     ?lock@critical_section@wil@@QEAA?AV?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$01@wistd@@PEAU1@$0A@$$T@details@wil@@@details@wil@@@2@XZ @ 0x18001F788 (-lock@critical_section@wil@@QEAA-AV-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_.c)
 *     ?GetTsAudioProtocol@@YAIK@Z @ 0x1800224B0 (-GetTsAudioProtocol@@YAIK@Z.c)
 *     ?CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z @ 0x180022C40 (-CreateInstance@CVolumeLimitTrackerFactory@@SAJPEAPEAUIVolumeLimitTracker@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall TsSessionCreate(DWORD SessionId, void **a2, struct TSSession **a3)
{
  HANDLE ProcessHeap; // rax
  int *v7; // rax
  int *v8; // rdx
  __int64 v9; // r8
  TSSession *v10; // rdi
  unsigned int refreshed; // ebx
  __int64 v12; // r8
  void *v13; // rcx
  HANDLE v14; // rax
  _QWORD *v15; // rax
  _QWORD *v16; // rbx
  HANDLE v17; // rax
  _BYTE *v18; // rax
  bool v19; // bl
  HANDLE v20; // rax
  _BYTE *v21; // rax
  bool v22; // bl
  HANDLE v23; // rax
  _BYTE *v24; // rax
  bool v25; // bl
  HANDLE v26; // rax
  _BYTE *v27; // rax
  bool v28; // bl
  HANDLE v29; // rax
  _BYTE *v30; // rax
  bool v31; // bl
  HANDLE v32; // rax
  HANDLE v33; // rax
  int *v35; // [rsp+30h] [rbp-50h] BYREF
  int *v36; // [rsp+38h] [rbp-48h] BYREF
  int *v37; // [rsp+40h] [rbp-40h] BYREF
  LPCRITICAL_SECTION lpCriticalSection; // [rsp+48h] [rbp-38h] BYREF
  _BYTE *v39; // [rsp+50h] [rbp-30h] BYREF
  _BYTE *v40; // [rsp+58h] [rbp-28h] BYREF
  _BYTE *v41; // [rsp+60h] [rbp-20h] BYREF
  _BYTE *v42; // [rsp+68h] [rbp-18h] BYREF
  _QWORD v43[2]; // [rsp+70h] [rbp-10h] BYREF
  void *lpMem; // [rsp+C8h] [rbp+48h]
  int *v45; // [rsp+D0h] [rbp+50h] BYREF
  int *v46; // [rsp+D8h] [rbp+58h] BYREF

  v43[1] = -2LL;
  lpMem = 0LL;
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x40000000) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 0x12u, &WPP_e3e7735b747b3b21be9d3d9ebc03ddc3_Traceguids, SessionId);
  }
  if ( a2 )
    *a2 = 0LL;
  *a3 = 0LL;
  ProcessHeap = GetProcessHeap();
  v7 = (int *)HeapAlloc(ProcessHeap, 0, 0x170uLL);
  v45 = v7;
  if ( v7 )
    v10 = TSSession::TSSession((TSSession *)v7, SessionId, v9);
  else
    v10 = 0LL;
  if ( !v10
    || !SessionId && (int)CVolumeLimitTrackerFactory::CreateInstance((struct IVolumeLimitTracker **)v10 + 39) < 0 )
  {
    goto LABEL_11;
  }
  *((_DWORD *)v10 + 1) = GetTsAudioProtocol(SessionId);
  *((_DWORD *)v10 + 2) = ++dword_180034C04;
  refreshed = TsSessionRefreshSessionInformation(v10);
  if ( refreshed )
    goto LABEL_63;
  v13 = WPP_GLOBAL_Control;
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
  wil::critical_section::lock(v13, &lpCriticalSection);
  v14 = GetProcessHeap();
  v15 = HeapAlloc(v14, 0, 0x18uLL);
  v16 = v15;
  if ( v15 )
  {
    *v15 = 0LL;
    v15[1] = 0LL;
    v15[2] = 0LL;
  }
  else
  {
    v16 = 0LL;
  }
  if ( v16 )
  {
    v16[2] = v10;
    *v16 = ::lpMem;
    v16[1] = 0LL;
    if ( ::lpMem )
      *((_QWORD *)::lpMem + 1) = v16;
    else
      qword_180034CC8 = (__int64)v16;
    ::lpMem = v16;
    ++dword_180034CD0;
    TsSessionConsiderForPrimaryConsoleAudioSession(v10);
    if ( lpCriticalSection )
      LeaveCriticalSection(lpCriticalSection);
    if ( a2 )
      *a2 = v16;
    *a3 = v10;
    v17 = GetProcessHeap();
    v18 = HeapAlloc(v17, 0, 0x10uLL);
    if ( v18 )
    {
      *(_DWORD *)v18 = -1042284544;
      v18[4] = 1;
      *((_QWORD *)v18 + 1) = 400000LL;
    }
    lpMem = v18;
    if ( v18 )
    {
      v40 = v18;
      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
        &v45,
        (char *)L"Comm");
      v19 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                            (char *)v10 + 336,
                            &v45,
                            &v40) == 0;
      v8 = v45 - 6;
      if ( _InterlockedDecrement(v45 - 2) <= 0 )
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
      if ( !v19 )
      {
        v20 = GetProcessHeap();
        v21 = HeapAlloc(v20, 0, 0x10uLL);
        if ( v21 )
        {
          *(_DWORD *)v21 = -1061158912;
          v21[4] = 0;
          *((_QWORD *)v21 + 1) = 400000LL;
        }
        lpMem = v21;
        if ( v21 )
        {
          v41 = v21;
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            &v46,
            (char *)L"1");
          v22 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                (char *)v10 + 336,
                                &v46,
                                &v41) == 0;
          v8 = v46 - 6;
          if ( _InterlockedDecrement(v46 - 2) <= 0 )
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
          if ( !v22 )
          {
            v23 = GetProcessHeap();
            v24 = HeapAlloc(v23, 0, 0x10uLL);
            if ( v24 )
            {
              *(_DWORD *)v24 = -1042284544;
              v24[4] = 0;
              *((_QWORD *)v24 + 1) = 400000LL;
            }
            lpMem = v24;
            if ( v24 )
            {
              v42 = v24;
              ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                &v35,
                (char *)L"2");
              v25 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                    (char *)v10 + 336,
                                    &v35,
                                    &v42) == 0;
              v8 = v35 - 6;
              if ( _InterlockedDecrement(v35 - 2) <= 0 )
                (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
              if ( !v25 )
              {
                v26 = GetProcessHeap();
                v27 = HeapAlloc(v26, 0, 0x10uLL);
                v39 = v27;
                if ( v27 )
                {
                  *(_DWORD *)v27 = -8388608;
                  v27[4] = 0;
                  *((_QWORD *)v27 + 1) = 400000LL;
                }
                lpMem = v27;
                if ( v27 )
                {
                  v39 = v27;
                  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                    &v36,
                    (char *)L"3");
                  v28 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                        (char *)v10 + 336,
                                        &v36,
                                        &v39) == 0;
                  v8 = v36 - 6;
                  if ( _InterlockedDecrement(v36 - 2) <= 0 )
                    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
                  if ( !v28 )
                  {
                    v29 = GetProcessHeap();
                    v30 = HeapAlloc(v29, 0, 0x10uLL);
                    if ( v30 )
                    {
                      *(_DWORD *)v30 = -1042284544;
                      v30[4] = 1;
                      *((_QWORD *)v30 + 1) = 400000LL;
                    }
                    lpMem = v30;
                    if ( v30 )
                    {
                      v43[0] = v30;
                      ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
                        &v37,
                        (char *)L"4");
                      v31 = (unsigned int)ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::Add(
                                            (char *)v10 + 336,
                                            &v37,
                                            v43) == 0;
                      v8 = v37 - 6;
                      if ( _InterlockedDecrement(v37 - 2) <= 0 )
                        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v8 + 8LL))(*(_QWORD *)v8);
                      if ( !v31 )
                      {
                        lpMem = 0LL;
                        v10 = 0LL;
                        refreshed = 0;
                        goto LABEL_63;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
LABEL_11:
    refreshed = 14;
    goto LABEL_63;
  }
  refreshed = 14;
  if ( lpCriticalSection )
    LeaveCriticalSection(lpCriticalSection);
LABEL_63:
  if ( v10 )
  {
    TSSession::~TSSession(v10, (__int64)v8);
    v32 = GetProcessHeap();
    HeapFree(v32, 0, v10);
  }
  v33 = GetProcessHeap();
  HeapFree(v33, 0, lpMem);
  return refreshed;
}
