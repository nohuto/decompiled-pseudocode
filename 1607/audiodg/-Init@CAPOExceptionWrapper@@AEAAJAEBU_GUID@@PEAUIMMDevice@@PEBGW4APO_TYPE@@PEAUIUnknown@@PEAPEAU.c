/*
 * XREFs of ?Init@CAPOExceptionWrapper@@AEAAJAEBU_GUID@@PEAUIMMDevice@@PEBGW4APO_TYPE@@PEAUIUnknown@@PEAPEAU5@@Z @ 0x140010920
 * Callers:
 *     ?CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObject@@@Z @ 0x14000FF60 (-CreateSystemEffect@CAPOWrapperSrv@@UEAAJPEBGW4APO_TYPE@@AEBU_GUID@@PEAPEAUIAudioProcessingObjec.c)
 * Callees:
 *     ?StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z @ 0x1400126C0 (-StringCchCopyNExW@@YAJPEAG_KPEBG1PEAPEAGPEA_KK@Z.c)
 *     ?APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z @ 0x140012798 (-APOCatchCoCreateInstance@@YAJAEBU_GUID@@PEAUIUnknown@@K0PEAPEAXPEAJ@Z.c)
 *     ?APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N6@Z @ 0x140033D28 (-APOTrackAndLogException@@YAXPEBU_TlgProvider_t@@PEBGPEAUIMMDevice@@W4APO_TYPE@@U_GUID@@PEADKJ_N.c)
 */

__int64 __fastcall CAPOExceptionWrapper::Init(
        __int64 a1,
        const struct _GUID *a2,
        unsigned int a3,
        const unsigned __int16 *a4,
        int a5,
        __int64 a6,
        _QWORD *a7)
{
  struct _GUID v7; // xmm0
  int v8; // r14d
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rsi
  unsigned __int16 *v14; // rax
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // r8
  int v18; // ebx
  __int64 v20; // r9
  unsigned __int16 **v21; // [rsp+20h] [rbp-58h]
  int *v22; // [rsp+28h] [rbp-50h]
  unsigned int v23; // [rsp+30h] [rbp-48h]
  __int128 v24; // [rsp+50h] [rbp-28h] BYREF

  v7 = *a2;
  v8 = 0;
  *(_DWORD *)(a1 + 80) = a5;
  *(struct _GUID *)(a1 + 56) = v7;
  *(_QWORD *)(a1 + 88) = 0LL;
  v12 = -1LL;
  do
    ++v12;
  while ( a4[v12] );
  v13 = v12 + 1;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( v12 + 1 < v12 )
    return 2147942934LL;
  *(_QWORD *)(a1 + 72) = 0LL;
  if ( is_mul_ok(v13, 2uLL) )
  {
    v14 = (unsigned __int16 *)CoTaskMemAlloc(2 * v13);
    *(_QWORD *)(a1 + 72) = v14;
    if ( !v14 )
      return 2147942414LL;
    StringCchCopyNExW(v14, v12 + 1, a4, v12, v21, (unsigned __int64 *)v22, v23);
  }
  else
  {
    v8 = -2147024362;
  }
  a5 = v8;
  if ( v8 < 0 )
    return (unsigned int)v8;
  v15 = APOCatchCoCreateInstance(
          a2,
          (struct IUnknown *)(a1 + 8),
          a3,
          (const struct _GUID *)a4,
          (LPVOID *)(a1 + 48),
          &a5);
  v18 = v15;
  if ( v15 < 0 )
  {
    v20 = *(unsigned int *)(a1 + 80);
    v24 = *(_OWORD *)(a1 + 56);
    APOTrackAndLogException(v16, a4, v17, v20, &v24, "CAPOExceptionWrapper::Init", 53, v15);
  }
  else
  {
    v18 = a5;
  }
  if ( v18 >= 0 )
    *a7 = a1 + 8;
  return (unsigned int)v18;
}
