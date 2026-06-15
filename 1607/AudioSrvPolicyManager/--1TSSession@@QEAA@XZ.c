/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x18001A7C8
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180003DC0 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x18001BCF4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001C420 (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001C6B4 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001CD34 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001E6B0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009DD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x180010438 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001EAEC (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ??1?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA@XZ @ 0x18001EB5C (--1-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180024298 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _recalloc @ 0x180024480 (_recalloc.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
void __fastcall TSSession::~TSSession(TSSession *this, __int64 a2)
{
  char *v3; // r15
  unsigned int v4; // ecx
  __int64 v5; // rdi
  __int64 v6; // rdi
  _QWORD *v7; // r14
  __int64 v8; // r8
  volatile signed __int32 *v9; // rsi
  void *v10; // rcx
  void *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // rdi
  volatile signed __int32 *v13; // rdx
  __int64 v14; // rax
  errno_t v15; // eax
  errno_t v16; // eax
  void *v17; // rax
  void *v18; // rax
  HANDLE ProcessHeap; // rax
  void *v20; // rdi
  volatile signed __int32 *v21; // rdx
  __int64 v22; // rax
  errno_t v23; // eax
  errno_t v24; // eax
  void *v25; // rax
  void *v26; // rax
  HANDLE v27; // rax
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx

  v3 = (char *)this + 240;
  if ( *((_QWORD *)this + 31) )
  {
    v4 = 0;
    if ( *((_DWORD *)v3 + 4) )
    {
      v5 = *(_QWORD *)v3;
      while ( !*(_QWORD *)(v5 + 8LL * v4) )
      {
        if ( ++v4 >= *((_DWORD *)v3 + 4) )
          goto LABEL_8;
      }
      v6 = *(_QWORD *)(v5 + 8LL * v4);
    }
    else
    {
LABEL_8:
      v6 = 0LL;
    }
    while ( v6 )
    {
      v7 = (_QWORD *)v6;
      v8 = *(_QWORD *)(v6 + 16);
      if ( !v8 )
      {
        v8 = 0LL;
        a2 = (unsigned int)(*(_DWORD *)(v6 + 24) % *((_DWORD *)v3 + 4) + 1);
        do
        {
          if ( (unsigned int)a2 >= *((_DWORD *)v3 + 4) )
            break;
          if ( *(_QWORD *)(*(_QWORD *)v3 + 8 * a2) )
            v8 = *(_QWORD *)(*(_QWORD *)v3 + 8 * a2);
          a2 = (unsigned int)(a2 + 1);
        }
        while ( !v8 );
      }
      v6 = v8;
      v9 = (volatile signed __int32 *)v7[1];
      if ( _InterlockedExchangeAdd(v9 + 2, 0xFFFFFFFF) == 1 )
      {
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 16LL))(v9, a2);
        (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 8LL))(v9, 1LL);
      }
      ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::RemoveKey(
        v3,
        *v7);
    }
  }
  v10 = (void *)*((_QWORD *)this + 29);
  if ( v10 )
  {
    PowerSettingUnregisterNotification(v10);
    *((_QWORD *)this + 29) = 0LL;
  }
  *((_DWORD *)this + 57) = 1;
  v11 = (void *)*((_QWORD *)this + 5);
  if ( v11 )
    WTSFreeMemory(v11);
  while ( *((int *)this + 42) > 0 )
  {
    if ( *((int *)this + 42) <= 0 )
    {
      ATL::_AtlRaiseException();
      __debugbreak();
    }
    v12 = (struct _RTL_CRITICAL_SECTION *)**((_QWORD **)this + 20);
    v13 = (volatile signed __int32 *)(**((_QWORD **)this + 19) - 24LL);
    if ( _InterlockedExchangeAdd(v13 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v13 + 8LL))(*(_QWORD *)v13);
    v14 = *((int *)this + 42);
    if ( (_DWORD)v14 != 1 )
    {
      v15 = memmove_s(
              *((void *const *)this + 19),
              8 * v14,
              (const void *const)(*((_QWORD *)this + 19) + 8LL),
              8LL * ((int)v14 - 1));
      if ( v15 )
      {
        if ( v15 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v15 == 22 || v15 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v15 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      v16 = memmove_s(
              *((void *const *)this + 20),
              8LL * *((int *)this + 42),
              (const void *const)(*((_QWORD *)this + 20) + 8LL),
              8LL * (*((_DWORD *)this + 42) - 1));
      if ( v16 )
      {
        if ( v16 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v16 == 22 || v16 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v16 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
    }
    v17 = _recalloc(*((void **)this + 19), *((_DWORD *)this + 42) - 1, 8uLL);
    if ( v17 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 19) = v17;
    v18 = _recalloc(*((void **)this + 20), *((_DWORD *)this + 42) - 1, 8uLL);
    if ( v18 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 20) = v18;
    --*((_DWORD *)this + 42);
    if ( v12 )
    {
      `eh vector destructor iterator'(
        &v12[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
      `eh vector destructor iterator'(
        &v12[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
      DeleteCriticalSection(v12);
      ProcessHeap = GetProcessHeap();
      HeapFree(ProcessHeap, 0, v12);
    }
  }
  while ( *((int *)this + 88) > 0 )
  {
    v20 = (void *)**((_QWORD **)this + 43);
    v21 = (volatile signed __int32 *)(**((_QWORD **)this + 42) - 24LL);
    if ( _InterlockedExchangeAdd(v21 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v21 + 8LL))(*(_QWORD *)v21);
    v22 = *((int *)this + 88);
    if ( (_DWORD)v22 != 1 )
    {
      v23 = memmove_s(
              *((void *const *)this + 42),
              8 * v22,
              (const void *const)(*((_QWORD *)this + 42) + 8LL),
              8LL * ((int)v22 - 1));
      if ( v23 )
      {
        if ( v23 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v23 == 22 || v23 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v23 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
      v24 = memmove_s(
              *((void *const *)this + 43),
              8LL * *((int *)this + 88),
              (const void *const)(*((_QWORD *)this + 43) + 8LL),
              8LL * (*((_DWORD *)this + 88) - 1));
      if ( v24 )
      {
        if ( v24 == 12 )
          ATL::AtlThrowImpl(-2147024882);
        if ( v24 == 22 || v24 == 34 )
          ATL::AtlThrowImpl(-2147024809);
        if ( v24 != 80 )
          ATL::AtlThrowImpl(-2147467259);
      }
    }
    v25 = _recalloc(*((void **)this + 42), *((_DWORD *)this + 88) - 1, 8uLL);
    if ( v25 || *((_DWORD *)this + 88) == 1 )
      *((_QWORD *)this + 42) = v25;
    v26 = _recalloc(*((void **)this + 43), *((_DWORD *)this + 88) - 1, 8uLL);
    if ( v26 || *((_DWORD *)this + 88) == 1 )
      *((_QWORD *)this + 43) = v26;
    --*((_DWORD *)this + 88);
    v27 = GetProcessHeap();
    HeapFree(v27, 0, v20);
  }
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 336);
  v28 = *((_QWORD *)this + 41);
  if ( v28 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
  v29 = *((_QWORD *)this + 40);
  if ( v29 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v29 + 16LL))(v29);
  v30 = *((_QWORD *)this + 39);
  if ( v30 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 16LL))(v30);
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::~CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>(v3);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
