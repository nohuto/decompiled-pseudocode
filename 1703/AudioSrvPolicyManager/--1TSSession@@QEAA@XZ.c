/*
 * XREFs of ??1TSSession@@QEAA@XZ @ 0x180018868
 * Callers:
 *     ?Shutdown@CWindowsPolicyManager@@UEAAXXZ @ 0x180004010 (-Shutdown@CWindowsPolicyManager@@UEAAXXZ.c)
 *     ?TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z @ 0x180019BB4 (-TsSessionCreate@@YAJKPEAPEAXPEAPEAVTSSession@@@Z.c)
 *     ?TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z @ 0x18001A40C (-TsSessionUpdateAudioProtocol@@YAXPEAVTSSession@@PEAXI@Z.c)
 *     ?TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z @ 0x18001A658 (-TsSessionIdDeleteNotify@@YAJKPEAUAUDIOPROTOCOLNOTIFY@@@Z.c)
 *     ?TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z @ 0x18001ABB4 (-TsSessionIdDeleteAppManagerClient@@YAXPEAVCProcess@@@Z.c)
 *     TS_AudioProtocolNotifyRundown @ 0x18001C2F0 (TS_AudioProtocolNotifyRundown.c)
 * Callees:
 *     ?RemoveAll@?$CAtlList@PEAVCPickerHostContext@@V?$CElementTraits@PEAVCPickerHostContext@@@ATL@@@ATL@@QEAAXXZ @ 0x180009AD4 (-RemoveAll@-$CAtlList@PEAVCPickerHostContext@@V-$CElementTraits@PEAVCPickerHostContext@@@ATL@@@A.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??1?$CSimpleMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@V?$CSimpleMapEqualHelper@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescriptor@@@2@@ATL@@QEAA@XZ @ 0x18000FAF4 (--1-$CSimpleMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAUDuckingDescri.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ?RemoveKey@?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA_NPEBG@Z @ 0x18001C6E4 (-RemoveKey@-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpoin.c)
 *     ??1?$CAtlMap@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeState@@V?$CElementTraits@V?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@@2@V?$CElementTraits@PEAVCEndpointVolumeState@@@2@@ATL@@QEAA@XZ @ 0x18001C74C (--1-$CAtlMap@V-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@PEAVCEndpointVolumeS.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180020C18 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     _invalid_parameter_noinfo @ 0x18002164E (_invalid_parameter_noinfo.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
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
  size_t v15; // r8
  char *v16; // rcx
  const void *v17; // rdx
  unsigned __int64 v18; // r9
  __int64 v19; // rcx
  size_t v20; // r8
  char *v21; // rax
  const void *v22; // rdx
  unsigned __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // rax
  void *v26; // rdi
  volatile signed __int32 *v27; // rdx
  __int64 v28; // rax
  size_t v29; // r8
  char *v30; // rcx
  const void *v31; // rdx
  unsigned __int64 v32; // r9
  __int64 v33; // rcx
  size_t v34; // r8
  char *v35; // rax
  const void *v36; // rdx
  unsigned __int64 v37; // r9
  __int64 v38; // rax
  __int64 v39; // rax
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v42; // rcx

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
      v15 = 8LL * ((int)v14 - 1);
      v16 = (char *)*((_QWORD *)this + 19);
      v17 = v16 + 8;
      v18 = 8 * v14;
      if ( v15 )
      {
        if ( !v16 || v16 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v16, v17, v15, v18) = 22;
LABEL_50:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v18 < v15 )
        {
          *(_DWORD *)_o__errno(v16, v17, v15, v18) = 34;
          goto LABEL_50;
        }
        memmove(v16, v17, v15);
      }
      v19 = *((int *)this + 42);
      v20 = 8LL * ((int)v19 - 1);
      v21 = (char *)*((_QWORD *)this + 20);
      v22 = v21 + 8;
      v23 = 8 * v19;
      if ( v20 )
      {
        if ( !v21 || v21 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v19, v22, v20, v23) = 22;
LABEL_53:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v23 < v20 )
        {
          *(_DWORD *)_o__errno(v19, v22, v20, v23) = 34;
          goto LABEL_53;
        }
        memmove(v21, v22, v20);
      }
    }
    v24 = _o__recalloc(*((_QWORD *)this + 19), *((_DWORD *)this + 42) - 1, 8LL);
    if ( v24 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 19) = v24;
    v25 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) - 1, 8LL);
    if ( v25 || *((_DWORD *)this + 42) == 1 )
      *((_QWORD *)this + 20) = v25;
    --*((_DWORD *)this + 42);
    if ( v12 )
    {
      `eh vector destructor iterator'(
        &v12[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      `eh vector destructor iterator'(
        &v12[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      DeleteCriticalSection(v12);
      operator delete(v12, 0x810uLL);
    }
  }
  while ( *((int *)this + 88) > 0 )
  {
    v26 = (void *)**((_QWORD **)this + 43);
    v27 = (volatile signed __int32 *)(**((_QWORD **)this + 42) - 24LL);
    if ( _InterlockedExchangeAdd(v27 + 4, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v27 + 8LL))(*(_QWORD *)v27);
    v28 = *((int *)this + 88);
    if ( (_DWORD)v28 != 1 )
    {
      v29 = 8LL * ((int)v28 - 1);
      v30 = (char *)*((_QWORD *)this + 42);
      v31 = v30 + 8;
      v32 = 8 * v28;
      if ( v29 )
      {
        if ( !v30 || v30 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v30, v31, v29, v32) = 22;
LABEL_78:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v32 < v29 )
        {
          *(_DWORD *)_o__errno(v30, v31, v29, v32) = 34;
          goto LABEL_78;
        }
        memmove(v30, v31, v29);
      }
      v33 = *((int *)this + 88);
      v34 = 8LL * ((int)v33 - 1);
      v35 = (char *)*((_QWORD *)this + 43);
      v36 = v35 + 8;
      v37 = 8 * v33;
      if ( v34 )
      {
        if ( !v35 || v35 == (char *)-8LL )
        {
          *(_DWORD *)_o__errno(v33, v36, v34, v37) = 22;
LABEL_81:
          invalid_parameter_noinfo();
          ATL::AtlThrowImpl(-2147024809);
        }
        if ( v37 < v34 )
        {
          *(_DWORD *)_o__errno(v33, v36, v34, v37) = 34;
          goto LABEL_81;
        }
        memmove(v35, v36, v34);
      }
    }
    v38 = _o__recalloc(*((_QWORD *)this + 42), *((_DWORD *)this + 88) - 1, 8LL);
    if ( v38 || *((_DWORD *)this + 88) == 1 )
      *((_QWORD *)this + 42) = v38;
    v39 = _o__recalloc(*((_QWORD *)this + 43), *((_DWORD *)this + 88) - 1, 8LL);
    if ( v39 || *((_DWORD *)this + 88) == 1 )
      *((_QWORD *)this + 43) = v39;
    --*((_DWORD *)this + 88);
    operator delete(v26, 0x10uLL);
  }
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 336);
  v40 = *((_QWORD *)this + 41);
  if ( v40 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 16LL))(v40);
  v41 = *((_QWORD *)this + 40);
  if ( v41 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v41 + 16LL))(v41);
  v42 = *((_QWORD *)this + 39);
  if ( v42 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v42 + 16LL))(v42);
  ATL::CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>::~CAtlMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,CEndpointVolumeState *,ATL::CElementTraits<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>>,ATL::CElementTraits<CEndpointVolumeState *>>(v3);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 176);
  ATL::CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>::~CSimpleMap<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *,ATL::CSimpleMapEqualHelper<ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>,DuckingDescriptor *>>((__int64)this + 152);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 104);
  ATL::CAtlList<CPickerHostContext *,ATL::CElementTraits<CPickerHostContext *>>::RemoveAll((__int64)this + 56);
}
