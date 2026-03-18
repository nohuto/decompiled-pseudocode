/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C0126A38
 * Callers:
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C011F970 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z @ 0x1C0120F88 (-xxxTooltipGetSize@@YAXPEAUtagTOOLTIPWND@@PEAUtagSIZE@@@Z.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C013815C (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     xxxDrawCaptionTemp @ 0x1C0237948 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EA14 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
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

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rsi
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rcx
  int v15; // r12d
  __int64 *v16; // rcx
  __int64 v17; // rbx
  _QWORD *v18; // rcx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int64 v20; // [rsp+68h] [rbp-300h]
  int v21; // [rsp+70h] [rbp-2F8h] BYREF
  unsigned __int8 *v22; // [rsp+78h] [rbp-2F0h]
  _QWORD v23[2]; // [rsp+80h] [rbp-2E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v25; // [rsp+A0h] [rbp-2C8h]
  _QWORD v26[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v27[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v28[512]; // [rsp+120h] [rbp-248h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v20 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v23[1] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = 2LL * (int)(a3 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v10 = AllocCallbackMessage(80, 1u, MaximumLength, v28, 1, 0x200uLL);
  v11 = v10;
  v22 = v10;
  if ( !v10 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v20);
    }
    return 0LL;
  }
  if ( v10 != v27 && v10 != v28 )
    PushW32ThreadLock((__int64)v10, v26, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 7) = CompatiblePublicDC;
  *((_DWORD *)v11 + 16) = a3;
  *((_WORD *)v11 + 20) = DestinationString.Length;
  *((_WORD *)v11 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v11,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v11 + 6) < 0 )
    goto LABEL_24;
  v12 = GreSaveDC(a1);
  UserSessionSwitchLeaveCrit(v14, v13);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v15 = KeUserModeCallback(80LL, v11, *(unsigned int *)v11, v23, &v21);
  EtwTraceEndCallback(80LL);
  EnterCrit(1LL);
  GreRestoreDC(a1, v12);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v15 < 0 )
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
  if ( v15 >= 0 && v21 == 24 )
  {
    v16 = (__int64 *)v23[0];
    if ( (unsigned __int64)(v23[0] + 8LL) < v23[0] || (unsigned __int64)(v23[0] + 8LL) > W32UserProbeAddress )
      v16 = (__int64 *)W32UserProbeAddress;
    v17 = *v16;
    v25 = *v16;
    v18 = *(_QWORD **)(v23[0] + 16LL);
    if ( v18 + 1 < v18 || (unsigned __int64)(v18 + 1) > W32UserProbeAddress )
      v18 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v18;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v17) = 0;
LABEL_25:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v20);
  }
  if ( v11 != v27 && v11 != v28 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v26);
  }
  return (unsigned int)v17;
}
