/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x180018DFC
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x180017F80 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001B01C (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001B0CC (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A154 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A3D0 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A3F4 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x18000FB80 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010414 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180020C18 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x180021108 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180021B70 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall TSSession::GetStreamClassPolicyGainsForEndpoint(
        TSSession *this,
        char *a2,
        struct _RTL_CRITICAL_SECTION **a3)
{
  unsigned int v6; // ebx
  char *v7; // rsi
  int v8; // r9d
  char v9; // bp
  unsigned __int16 **v10; // r10
  unsigned __int16 *v11; // rcx
  __int64 v12; // r8
  unsigned __int16 v13; // dx
  int v14; // ecx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  _QWORD *v16; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // r14
  struct _RTL_CRITICAL_SECTION **v22; // rcx
  volatile signed __int32 *v23; // rdx
  _QWORD v25[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v26; // [rsp+40h] [rbp-48h]
  char *v27; // [rsp+48h] [rbp-40h]
  _QWORD *v28; // [rsp+50h] [rbp-38h]
  volatile signed __int32 *v29; // [rsp+A8h] [rbp+20h] BYREF

  v25[1] = -2LL;
  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v25,
    a2);
  v7 = (char *)this + 152;
  v8 = 0;
  v9 = 1;
  if ( *((int *)this + 42) <= 0 )
  {
LABEL_13:
    v8 = -1;
  }
  else
  {
    v10 = *(unsigned __int16 ***)v7;
    while ( 1 )
    {
      if ( !v25[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v10;
      v12 = v25[0] - (_QWORD)*v10;
      while ( 1 )
      {
        v13 = *v11;
        if ( *v11 != *(unsigned __int16 *)((char *)v11 + v12) )
          break;
        ++v11;
        if ( !v13 )
        {
          v14 = 0;
          goto LABEL_9;
        }
      }
      v14 = v13 < *(unsigned __int16 *)((char *)v11 + v12) ? -1 : 1;
LABEL_9:
      if ( !v14 )
        break;
      ++v8;
      ++v10;
      if ( v8 >= *((_DWORD *)this + 42) )
        goto LABEL_13;
    }
  }
  if ( v8 == -1 )
  {
    v15 = 0LL;
  }
  else
  {
    if ( v8 < 0 || v8 >= *((_DWORD *)this + 42) )
    {
      ATL::_AtlRaiseException();
      __debugbreak();
    }
    v15 = *(struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)this + 20) + 8LL * v8);
  }
  v16 = (_QWORD *)(v25[0] - 24LL);
  if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v25[0] - 24LL + 16), 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)*v16 + 8LL))(*v16);
  if ( v15 )
    goto LABEL_38;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x810uLL);
  v15 = v18;
  if ( v18 )
  {
    v26 = v18;
    ATL::CCriticalSection::CCriticalSection(v18);
    `eh vector constructor iterator'(
      &v15[1],
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    `eh vector constructor iterator'(
      &v15[26].LockCount,
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
    v15[51].OwningThread = (char *)this + 336;
  }
  else
  {
    v15 = 0LL;
  }
  v26 = v15;
  if ( v15 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v29,
      a2);
    v27 = (char *)this + 152;
    v19 = _o__recalloc(*(_QWORD *)v7, *((_DWORD *)this + 42) + 1, 8LL);
    if ( v19 )
    {
      *(_QWORD *)v7 = v19;
      v20 = _o__recalloc(*((_QWORD *)this + 20), *((_DWORD *)this + 42) + 1, 8LL);
      if ( v20 )
      {
        *((_QWORD *)this + 20) = v20;
        v21 = *((int *)this + 42);
        v28 = (_QWORD *)(*(_QWORD *)v7 + 8 * v21);
        if ( v28 )
          ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
            v28,
            (const void **)&v29);
        v22 = (struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)v7 + 1) + 8 * v21);
        if ( v22 )
          *v22 = v15;
        ++*((_DWORD *)v7 + 4);
        v9 = 0;
      }
    }
    v23 = v29 - 6;
    if ( _InterlockedExchangeAdd(v29 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 8LL))(*(_QWORD *)v23);
    if ( v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v15[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      `eh vector destructor iterator'(
        &v15[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>::~CAtlList<IAudioAppVolumePolicyChange *,ATL::CElementTraits<IAudioAppVolumePolicyChange *>>);
      DeleteCriticalSection(v15);
      operator delete(v15, 0x810uLL);
      return v6;
    }
LABEL_38:
    *a3 = v15;
    return v6;
  }
  return (unsigned int)-2147024882;
}
