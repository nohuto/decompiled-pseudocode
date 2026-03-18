/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x1C0214C20
 * Callers:
 *     DT_DrawStr @ 0x1C024AE58 (DT_DrawStr.c)
 *     DT_GetExtentMinusPrefixes @ 0x1C024AF7C (DT_GetExtentMinusPrefixes.c)
 * Callees:
 *     NtGdiBitBltInternal @ 0x1C0048C50 (NtGdiBitBltInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     GreSaveDC @ 0x1C00CC540 (GreSaveDC.c)
 *     CreateCompatiblePublicDC @ 0x1C00CCE28 (CreateCompatiblePublicDC.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
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
  __int64 v18; // rdx
  unsigned int v19; // ebx
  __int64 v20; // rdx
  __int64 v21; // rcx
  int v22; // r12d
  __int64 *v23; // rcx
  __int64 v24; // rbx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-358h] BYREF
  int v26; // [rsp+68h] [rbp-350h] BYREF
  __int64 v27; // [rsp+70h] [rbp-348h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-340h] BYREF
  unsigned __int8 *v29; // [rsp+88h] [rbp-330h]
  _QWORD v30[4]; // [rsp+90h] [rbp-328h] BYREF
  _QWORD v31[4]; // [rsp+B0h] [rbp-308h] BYREF
  unsigned __int8 v32[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v33[512]; // [rsp+180h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  v13 = CreateCompatiblePublicDC(a1, &v27);
  v30[1] = v13;
  if ( !v13 )
    return 0LL;
  MaximumLength = 2LL * (a5 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v16 = AllocCallbackMessage(168, 1u, MaximumLength, v33, 1, 0x200uLL);
  v17 = v16;
  v29 = v16;
  if ( !v16 )
  {
    if ( v13 != a1 )
    {
      GreDeleteDC(v13);
      GreDeleteObject(v27);
    }
    return 0LL;
  }
  if ( v16 != v32 && v16 != v33 )
    PushW32ThreadLock((__int64)v16, v31, (__int64)Win32FreePool);
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
  v19 = GreSaveDC((__int64)a1, v18);
  UserSessionSwitchLeaveCrit(v21, v20);
  EtwTraceBeginCallback(78LL);
  *((_QWORD *)v17 + 2) = 0LL;
  v22 = KeUserModeCallback(78LL, v17, *(unsigned int *)v17, v30, &v26);
  EtwTraceEndCallback(78LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v19);
  if ( v13 != a1 )
  {
    if ( v22 < 0 )
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
  if ( v22 >= 0 && v26 == 24 )
  {
    v23 = (__int64 *)v30[0];
    if ( (unsigned __int64)(v30[0] + 8LL) < v30[0] || (unsigned __int64)(v30[0] + 8LL) > W32UserProbeAddress )
      v23 = (__int64 *)W32UserProbeAddress;
    v24 = *v23;
    v30[2] = *v23;
    goto LABEL_22;
  }
LABEL_21:
  LODWORD(v24) = 0;
LABEL_22:
  if ( v13 != a1 )
  {
    GreDeleteDC(v13);
    GreDeleteObject(v27);
  }
  if ( v17 != v32 && v17 != v33 )
  {
    if ( *((_QWORD *)v17 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v17 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31);
  }
  return (unsigned int)v24;
}
