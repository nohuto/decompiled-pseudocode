/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C020DA2C
 * Callers:
 *     DT_DrawStr @ 0x1C0247168 (DT_DrawStr.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024728C (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C003E620 (NtGdiBitBltInternal.c)
 *     GreSaveDC @ 0x1C0049A00 (GreSaveDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C0070458 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C00704F4 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x1C00B966C (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientLpkDrawTextEx(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC v13; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v16; // rax
  __int64 v17; // r9
  unsigned __int8 *v18; // rdi
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rdx
  unsigned int v22; // r12d
  __int64 v23; // rcx
  int v24; // r15d
  __int64 *v25; // rcx
  __int64 v26; // r15
  PVOID *v27; // rdx
  int v28; // [rsp+60h] [rbp-358h] BYREF
  __int64 v29; // [rsp+68h] [rbp-350h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  _QWORD v32[5]; // [rsp+88h] [rbp-330h] BYREF
  _QWORD v33[4]; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int8 v34[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v35[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v29);
  v32[2] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = 2LL * (a5 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v16 = AllocCallbackMessage(168, 1u, MaximumLength, v35, 1, 0x200uLL);
  v18 = v16;
  v32[1] = v16;
  if ( !v16 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v29);
    }
    return 0LL;
  }
  if ( v16 != v34 && v16 != v35 )
    PushW32ThreadLock((__int64)v16, v33, (__int64)Win32FreePool, v17);
  *((_QWORD *)v18 + 7) = v13;
  *((_DWORD *)v18 + 16) = a2;
  *((_DWORD *)v18 + 17) = a3;
  *((_DWORD *)v18 + 18) = a5;
  *((_DWORD *)v18 + 19) = a6;
  *((_DWORD *)v18 + 20) = a7;
  *(_OWORD *)(v18 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v18 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v18 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v18 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v18 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v18 + 40) = a9;
  *((_DWORD *)v18 + 41) = a10;
  *((_WORD *)v18 + 20) = DestinationString.Length;
  *((_WORD *)v18 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v18,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v18 + 6) < 0 )
    goto LABEL_24;
  v22 = GreSaveDC(a1);
  v23 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v23 = gdwExtraInstrumentations;
    v21 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v23, v21);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v18 + 2) = 0LL;
  v24 = KeUserModeCallback(79LL, v18, *(unsigned int *)v18, v32, &v28);
  EtwTraceEndCallback(79LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v22);
  if ( v13 != a1 )
  {
    if ( v24 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 56LL),
      *(_DWORD *)(gpDispInfo + 60LL),
      v13,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v24 >= 0 && v28 == 24 )
  {
    v25 = (__int64 *)v32[0];
    if ( (unsigned __int64)(v32[0] + 8LL) < v32[0] || (unsigned __int64)(v32[0] + 8LL) > W32UserProbeAddress )
      v25 = (__int64 *)W32UserProbeAddress;
    v26 = *v25;
    v32[3] = *v25;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v26) = 0;
LABEL_25:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v29);
  }
  if ( v18 != v34 && v18 != v35 )
  {
    v27 = (PVOID *)(v18 + 32);
    if ( *((_QWORD *)v18 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v27, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v33, (__int64)v27, v19, v20);
  }
  return (unsigned int)v26;
}
