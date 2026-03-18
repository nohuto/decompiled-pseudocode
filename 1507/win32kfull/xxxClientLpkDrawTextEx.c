/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C0214D78
 * Callers:
 *     DT_DrawStr @ 0x1C024AE98 (DT_DrawStr.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AFBC (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     GreSaveDC @ 0x1C00167D0 (GreSaveDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C005ADD0 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C005AE6C (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     NtGdiBitBltInternal @ 0x1C0095CC0 (NtGdiBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x1C0126D64 (CreateCompatiblePublicDC.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
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
  HDC v13; // r14
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v16; // rax
  unsigned __int8 *v17; // rsi
  unsigned int v18; // ebx
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // r12d
  __int64 *v22; // rcx
  __int64 v23; // rbx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-358h] BYREF
  int v25; // [rsp+68h] [rbp-350h] BYREF
  __int64 v26; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  unsigned __int8 *v28; // [rsp+88h] [rbp-330h]
  _QWORD v29[4]; // [rsp+90h] [rbp-328h] BYREF
  _QWORD v30[4]; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int8 v31[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v32[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v26 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v26);
  v29[1] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = 2LL * (a5 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v16 = AllocCallbackMessage(168, 1u, MaximumLength, v32, 1, 0x200uLL);
  v17 = v16;
  v28 = v16;
  if ( !v16 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v26);
    }
    return 0LL;
  }
  if ( v16 != v31 && v16 != v32 )
    PushW32ThreadLock((__int64)v16, v30, (__int64)Win32FreePool);
  *((_QWORD *)v17 + 7) = v13;
  *((_DWORD *)v17 + 16) = a2;
  *((_DWORD *)v17 + 17) = a3;
  *((_DWORD *)v17 + 18) = a5;
  *((_DWORD *)v17 + 19) = a6;
  *((_DWORD *)v17 + 20) = a7;
  *(_OWORD *)(v17 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v17 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v17 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v17 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v17 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v17 + 40) = a9;
  *((_DWORD *)v17 + 41) = a10;
  *((_WORD *)v17 + 20) = DestinationString.Length;
  *((_WORD *)v17 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v17,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v17 + 6) < 0 )
    goto LABEL_21;
  v18 = GreSaveDC(a1);
  UserSessionSwitchLeaveCrit(v20, v19);
  EtwTraceBeginCallback(78LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v21 = KeUserModeCallback(78LL, v17, *(unsigned int *)v17, v29, &v25);
  EtwTraceEndCallback(78LL);
  EnterCrit(1LL);
  GreRestoreDC(a1, v18);
  if ( v13 != a1 )
  {
    if ( v21 < 0 )
      goto LABEL_21;
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
  if ( v21 >= 0 && v25 == 24 )
  {
    v22 = (__int64 *)v29[0];
    if ( (unsigned __int64)(v29[0] + 8LL) < v29[0] || (unsigned __int64)(v29[0] + 8LL) > W32UserProbeAddress )
      v22 = (__int64 *)W32UserProbeAddress;
    v23 = *v22;
    v29[2] = *v22;
    goto LABEL_22;
  }
LABEL_21:
  LODWORD(v23) = 0;
LABEL_22:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v26);
  }
  if ( v17 != v31 && v17 != v32 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v30);
  }
  return (unsigned int)v23;
}
