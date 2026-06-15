/*
 * XREFs of ?GetStreamClassPolicyGainsForEndpoint@TSSession@@QEAAJPEBGPEAPEAVCStreamClassPolicyGainsWrapper@@@Z @ 0x18001AEC8
 * Callers:
 *     ?IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_0000_0000_0001@@H@Z @ 0x18001A120 (-IsStreamCategoryDucked@CStreamClassPolicyManager@@UEAAHKPEBGKW4__MIDL___MIDL_itf_mmdeviceapi_00.c)
 *     ?TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z @ 0x18001CFCC (-TsSessionIdUpdateStreamClassPolicyGains@@YAJKPEBGKHPEAH@Z.c)
 *     ?TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z @ 0x18001D080 (-TsSessionIdGetPolicyVolumeForStreamClass@@YAJKPEBGKHAEA_NAEAMAEA_J@Z.c)
 * Callees:
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z @ 0x18000A428 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@AEBV01@@Z.c)
 *     ?AtlThrowImpl@ATL@@YAXJ@Z @ 0x18000A664 (-AtlThrowImpl@ATL@@YAXJ@Z.c)
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x18000A68C (--0CCriticalSection@ATL@@QEAA@XZ.c)
 *     ??0?$CStringT@GV?$StrTraitATL@GV?$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z @ 0x1800104C8 (--0-$CStringT@GV-$StrTraitATL@GV-$ChTraitsCRT@G@ATL@@@ATL@@@ATL@@QEAA@PEBG@Z.c)
 *     ?_AtlRaiseException@ATL@@YAXKK@Z @ 0x180010DA4 (-_AtlRaiseException@ATL@@YAXKK@Z.c)
 *     ??_M@YAXPEAX_K1P6AX0@Z@Z @ 0x180024298 (--_M@YAXPEAX_K1P6AX0@Z@Z.c)
 *     _recalloc @ 0x180024480 (_recalloc.c)
 *     ??_L@YAXPEAX_K1P6AX0@Z2@Z @ 0x1800244D8 (--_L@YAXPEAX_K1P6AX0@Z2@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180024CF0 (_guard_dispatch_icall_nop.c)
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
  int v9; // ebp
  char **v10; // r10
  char *v11; // rcx
  char *v12; // r8
  unsigned __int16 v13; // dx
  int v14; // ecx
  struct _RTL_CRITICAL_SECTION *v15; // rdi
  int *v16; // rdx
  HANDLE ProcessHeap; // rax
  struct _RTL_CRITICAL_SECTION *v18; // rax
  void *v19; // rax
  void *v20; // rax
  __int64 v21; // r14
  struct _RTL_CRITICAL_SECTION **v22; // rcx
  int *v23; // rdx
  HANDLE v24; // rax
  int *v26[2]; // [rsp+30h] [rbp-58h] BYREF
  struct _RTL_CRITICAL_SECTION *v27; // [rsp+40h] [rbp-48h]
  char *v28; // [rsp+48h] [rbp-40h]
  _QWORD *v29; // [rsp+50h] [rbp-38h]
  int *v30; // [rsp+A8h] [rbp+20h] BYREF

  v26[1] = (int *)-2LL;
  v6 = 0;
  ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
    v26,
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
    v10 = *(char ***)v7;
    while ( 1 )
    {
      if ( !v26[0] )
        ATL::AtlThrowImpl(-2147467259);
      v11 = *v10;
      v12 = (char *)((char *)v26[0] - *v10);
      while ( 1 )
      {
        v13 = *(_WORD *)v11;
        if ( *(_WORD *)v11 != *(_WORD *)&v12[(_QWORD)v11] )
          break;
        v11 += 2;
        if ( !v13 )
        {
          v14 = 0;
          goto LABEL_9;
        }
      }
      v14 = v13 < *(_WORD *)&v12[(_QWORD)v11] ? -1 : 1;
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
  v16 = v26[0] - 6;
  if ( _InterlockedExchangeAdd(v26[0] - 2, 0xFFFFFFFF) <= 1 )
    (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v16 + 8LL))(*(_QWORD *)v16);
  if ( v15 )
    goto LABEL_39;
  ProcessHeap = GetProcessHeap();
  v18 = (struct _RTL_CRITICAL_SECTION *)HeapAlloc(ProcessHeap, 0, 0x810uLL);
  v15 = v18;
  if ( v18 )
  {
    v27 = v18;
    ATL::CCriticalSection::CCriticalSection(v18);
    `eh vector constructor iterator'(
      &v15[1],
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
    `eh vector constructor iterator'(
      &v15[26].LockCount,
      0x30uLL,
      0x15uLL,
      ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::`default constructor closure',
      (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
    v15[51].OwningThread = (char *)this + 336;
  }
  else
  {
    v15 = 0LL;
  }
  v27 = v15;
  if ( v15 )
  {
    ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
      &v30,
      a2);
    v28 = (char *)this + 152;
    v19 = _recalloc(*(void **)v7, *((_DWORD *)this + 42) + 1, 8uLL);
    if ( v19 && (*(_QWORD *)v7 = v19, (v20 = _recalloc(*((void **)this + 20), *((_DWORD *)this + 42) + 1, 8uLL)) != 0LL) )
    {
      *((_QWORD *)this + 20) = v20;
      v21 = *((int *)this + 42);
      v29 = (_QWORD *)(*(_QWORD *)v7 + 8 * v21);
      if ( v29 )
        ATL::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>::CStringT<unsigned short,ATL::StrTraitATL<unsigned short,ATL::ChTraitsCRT<unsigned short>>>(
          v29,
          (const void **)&v30);
      v22 = (struct _RTL_CRITICAL_SECTION **)(*((_QWORD *)v7 + 1) + 8 * v21);
      if ( v22 )
        *v22 = v15;
      ++*((_DWORD *)v7 + 4);
    }
    else
    {
      v9 = 0;
    }
    v23 = v30 - 6;
    if ( _InterlockedExchangeAdd(v30 - 2, 0xFFFFFFFF) <= 1 )
      (*(void (__fastcall **)(_QWORD))(**(_QWORD **)v23 + 8LL))(*(_QWORD *)v23);
    if ( !v9 )
    {
      v6 = -2147024882;
      `eh vector destructor iterator'(
        &v15[26].LockCount,
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
      `eh vector destructor iterator'(
        &v15[1],
        0x30uLL,
        0x15uLL,
        (void (*)(void *))ATL::CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>::~CAtlList<CGainStage *,ATL::CElementTraits<CGainStage *>>);
      DeleteCriticalSection(v15);
      v24 = GetProcessHeap();
      HeapFree(v24, 0, v15);
      return v6;
    }
LABEL_39:
    *a3 = v15;
    return v6;
  }
  return (unsigned int)-2147024882;
}
