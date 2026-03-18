/*
 * XREFs of xxxClientExtTextOutW @ 0x1C014C20C
 * Callers:
 *     ?xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z @ 0x1C014C01C (-xxxTooltipRender@@YAXPEAUtagTOOLTIPWND@@PEAUHDC__@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1C023EEA4 (-xxxDrawMenuItemText@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
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

__int64 __fastcall xxxClientExtTextOutW(
        HDC a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        _OWORD *a5,
        PCWSTR SourceString,
        int a7)
{
  HDC v11; // r14
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v14; // rax
  unsigned __int8 *v15; // rdi
  __int64 v16; // rdx
  unsigned int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // rcx
  int v20; // r12d
  __int64 *v21; // rcx
  __int64 v22; // rbx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  int v24; // [rsp+68h] [rbp-300h] BYREF
  __int64 v25; // [rsp+70h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+78h] [rbp-2F0h] BYREF
  unsigned __int8 *v27; // [rsp+88h] [rbp-2E0h]
  _QWORD v28[4]; // [rsp+90h] [rbp-2D8h] BYREF
  _QWORD v29[4]; // [rsp+B0h] [rbp-2B8h] BYREF
  unsigned __int8 v30[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v31[512]; // [rsp+140h] [rbp-228h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v11 = CreateCompatiblePublicDC(a1, &v25);
  v28[1] = v11;
  if ( !v11 )
    return 0LL;
  MaximumLength = 2LL * (unsigned int)(a7 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v31, 1, 0x200uLL);
  v15 = v14;
  v27 = v14;
  if ( !v14 )
  {
    if ( v11 != a1 )
    {
      GreDeleteDC(v11);
      GreDeleteObject(v25);
    }
    return 0LL;
  }
  if ( v14 != v30 && v14 != v31 )
    PushW32ThreadLock((__int64)v14, v29, (__int64)Win32FreePool);
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
  v17 = GreSaveDC((__int64)a1, v16);
  UserSessionSwitchLeaveCrit(v19, v18);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v15 + 2) = 0LL;
  v20 = KeUserModeCallback(79LL, v15, *(unsigned int *)v15, v28, &v24);
  EtwTraceEndCallback(79LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v17);
  if ( v11 != a1 )
  {
    if ( v20 < 0 )
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
  if ( v20 >= 0 && v24 == 24 )
  {
    v21 = (__int64 *)v28[0];
    if ( (unsigned __int64)(v28[0] + 8LL) < v28[0] || (unsigned __int64)(v28[0] + 8LL) > W32UserProbeAddress )
      v21 = (__int64 *)W32UserProbeAddress;
    v22 = *v21;
    v28[2] = *v21;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v22) = 0;
LABEL_25:
  if ( v11 != a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v25);
  }
  if ( v15 != v30 && v15 != v31 )
  {
    if ( *((_QWORD *)v15 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v15 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v29);
  }
  return (unsigned int)v22;
}
