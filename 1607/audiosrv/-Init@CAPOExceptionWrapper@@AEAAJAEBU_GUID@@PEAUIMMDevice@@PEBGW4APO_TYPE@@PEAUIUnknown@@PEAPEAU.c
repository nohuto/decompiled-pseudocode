/*
 * XREFs of ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C508
 * Callers:
 *     ?Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x18008C1C0 (-Create@CAPOExceptionWrapper@@SAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU.c)
 * Callees:
 *     ?Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z @ 0x18002545C (-Alloc@CTCoAllocPolicy@@SAJPEAXK_KPEAPEAX@Z.c)
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x180025520 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     _guard_dispatch_icall_nop @ 0x180038F30 (_guard_dispatch_icall_nop.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x18008BDB0 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x18008BEB8 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::Init(
        __int64 a1,
        const struct _GUID *a2,
        __int64 a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _GUID v7; // xmm0
  int v11; // ebx
  char **v12; // r14
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rbp
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // r9d
  __int128 v20; // [rsp+50h] [rbp-38h] BYREF

  v7 = *a2;
  *(_DWORD *)(a1 + 80) = a5;
  *(_QWORD *)(a1 + 88) = 0LL;
  *(struct _GUID *)(a1 + 56) = v7;
  if ( a3 )
  {
    v11 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 40LL))(a3, a1 + 72);
    a5 = v11;
  }
  else
  {
    v12 = (char **)(a1 + 72);
    v13 = -1LL;
    do
      ++v13;
    while ( a4[v13] );
    v14 = v13 + 1;
    *v12 = 0LL;
    if ( v13 + 1 >= v13 && (*v12 = 0LL, is_mul_ok(v14, 2uLL)) )
    {
      v11 = CTCoAllocPolicy::Alloc((void *)a1, (v14 * (unsigned __int128)2uLL) >> 64, 2 * v14, (void **)(a1 + 72));
      if ( v11 >= 0 )
        StringCchCopyNExW(*v12, v13 + 1, a4, v13);
    }
    else
    {
      v11 = -2147024362;
    }
    a5 = v11;
  }
  if ( v11 >= 0 )
  {
    v15 = APOCatchCoCreateInstance(
            a2,
            (struct IUnknown *)(a1 + 8),
            a3,
            (const struct _GUID *)a4,
            (LPVOID *)(a1 + 48),
            &a5);
    v11 = v15;
    if ( v15 >= 0 )
    {
      v11 = a5;
    }
    else
    {
      v18 = *(_DWORD *)(a1 + 80);
      v20 = *(_OWORD *)(a1 + 56);
      APOTrackAndLogException(v16, a4, v17, v18, (__int64)&v20, "CAPOExceptionWrapper::Init", 53, v15);
    }
    if ( v11 >= 0 )
      *a7 = a1 + 8;
  }
  return (unsigned int)v11;
}
