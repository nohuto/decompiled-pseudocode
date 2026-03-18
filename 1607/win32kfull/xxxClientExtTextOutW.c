/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0151798
 * Callers:
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C015116C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C0236810 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        PCWSTR SourceString,
        int a7)
{
  HDC v11; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v13; // rax
  __int64 v14; // r9
  unsigned __int8 *v15; // rbx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rdx
  unsigned int v19; // r12d
  __int64 v20; // rcx
  int v21; // r15d
  __int64 *v22; // rcx
  __int64 v23; // r15
  PVOID *v25; // rdx
  int v26; // [rsp+60h] [rbp-308h] BYREF
  __int64 v27; // [rsp+68h] [rbp-300h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  _QWORD v30[5]; // [rsp+88h] [rbp-2E0h] BYREF
  _QWORD v31[4]; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int8 v32[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v33[512]; // [rsp+140h] [rbp-228h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v27 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = CreateCompatiblePublicDC(a1, &v27);
  v30[2] = v11;
  if ( !v11 )
    return 0LL;
  MaximumLength = 2LL * (unsigned int)(a7 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v13 = AllocCallbackMessage(104, 1u, MaximumLength, v33, 1, 0x200uLL);
  v15 = v13;
  v30[1] = v13;
  if ( !v13 )
  {
    if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      GreDeleteObject(v27);
    }
    return 0LL;
  }
  if ( v13 != v32 && v13 != v33 )
    PushW32ThreadLock((__int64)v13, v31, (__int64)Win32FreePool, v14);
  *((_QWORD *)v15 + 7) = v11;
  *((_DWORD *)v15 + 16) = a2;
  *((_DWORD *)v15 + 17) = a3;
  *((_DWORD *)v15 + 18) = a4;
  if ( a5 )
  {
    *(_OWORD *)(v15 + 76) = *a5;
    *((_DWORD *)v15 + 24) = 1;
  }
  else
  {
    *((_DWORD *)v15 + 24) = 0;
  }
  *((_DWORD *)v15 + 23) = a7;
  *((_WORD *)v15 + 20) = DestinationString.Length;
  *((_WORD *)v15 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v15,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v15 + 6) < 0 )
    goto LABEL_24;
  v19 = GreSaveDC(a1);
  v20 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v20 = gdwExtraInstrumentations;
    v18 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v20, v18);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v21 = KeUserModeCallback(80LL, v15, *(unsigned int *)v15, v30, &v26);
  EtwTraceEndCallback(80LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v19);
  if ( v11 != a1 )
  {
    if ( v21 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 56LL),
      *(_DWORD *)(gpDispInfo + 60LL),
      v11,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v21 >= 0 && v26 == 24 )
  {
    v22 = (__int64 *)v30[0];
    if ( (unsigned __int64)(v30[0] + 8LL) < v30[0] || (unsigned __int64)(v30[0] + 8LL) > W32UserProbeAddress )
      v22 = (__int64 *)W32UserProbeAddress;
    v23 = *v22;
    v30[3] = *v22;
    goto LABEL_19;
  }
LABEL_24:
  LODWORD(v23) = 0;
LABEL_19:
  if ( v11 != a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v27);
  }
  if ( v15 != v32 && v15 != v33 )
  {
    v25 = (PVOID *)(v15 + 32);
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v25, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v31, (__int64)v25, v16, v17);
  }
  return (unsigned int)v23;
}
