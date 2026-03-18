/*
 * XREFs of xxxClientExtTextOutW @ 0x1C0123184
 * Callers:
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C0122A90 (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023ECF4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        PCWSTR SourceString,
        int a7)
{
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdi
  unsigned int v16; // ebx
  __int64 v17; // rdx
  __int64 v18; // rcx
  int v19; // r12d
  __int64 *v20; // rcx
  __int64 v21; // rbx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  int v23; // [rsp+68h] [rbp-300h] BYREF
  __int64 v24; // [rsp+70h] [rbp-2F8h]
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int8 *v26; // [rsp+88h] [rbp-2E0h]
  _QWORD v27[4]; // [rsp+90h] [rbp-2D8h] BYREF
  _QWORD v28[4]; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int8 v29[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v30[512]; // [rsp+140h] [rbp-228h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v24 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v27[1] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = 2LL * (unsigned int)(a7 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v30, 1, 0x200uLL);
  v15 = v14;
  v26 = v14;
  if ( !v14 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v24);
    }
    return 0LL;
  }
  if ( v14 != v29 && v14 != v30 )
    PushW32ThreadLock((__int64)v14, v28, (__int64)Win32FreePool);
  *((_QWORD *)v15 + 7) = CompatiblePublicDC;
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
  v16 = GreSaveDC(a1);
  UserSessionSwitchLeaveCrit(v18, v17);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v19 = KeUserModeCallback(79LL, v15, *(unsigned int *)v15, v27, &v23);
  EtwTraceEndCallback(79LL);
  EnterCrit(1LL);
  GreRestoreDC(a1, v16);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v19 < 0 )
      goto LABEL_24;
    NtGdiBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(gpDispInfo + 56LL),
      *(_DWORD *)(gpDispInfo + 60LL),
      CompatiblePublicDC,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v19 >= 0 && v23 == 24 )
  {
    v20 = (__int64 *)v27[0];
    if ( (unsigned __int64)(v27[0] + 8LL) < v27[0] || (unsigned __int64)(v27[0] + 8LL) > W32UserProbeAddress )
      v20 = (__int64 *)W32UserProbeAddress;
    v21 = *v20;
    v27[2] = *v20;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v21) = 0;
LABEL_25:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v24);
  }
  if ( v15 != v29 && v15 != v30 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v28);
  }
  return (unsigned int)v21;
}
