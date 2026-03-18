/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C00CCAFC
 * Callers:
 *     xxxPSMGetTextExtent @ 0x1C00CD07C (xxxPSMGetTextExtent.c)
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00CD238 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C0148FE4 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014A490 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C0237D58 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
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

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // r14
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rsi
  __int64 v12; // rdx
  unsigned int v13; // ebx
  __int64 v14; // rdx
  __int64 v15; // rcx
  int v16; // r12d
  __int64 *v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rcx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  __int64 v21; // [rsp+68h] [rbp-300h]
  int v22; // [rsp+70h] [rbp-2F8h] BYREF
  unsigned __int8 *v23; // [rsp+78h] [rbp-2F0h]
  _QWORD v24[2]; // [rsp+80h] [rbp-2E8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v26; // [rsp+A0h] [rbp-2C8h]
  _QWORD v27[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v28[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v29[512]; // [rsp+120h] [rbp-248h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v21 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((int)a1);
  v24[1] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = 2LL * (int)(a3 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v10 = (unsigned __int8 *)AllocCallbackMessage(0x50u, 1u, MaximumLength, v29, 1, 0x200uLL);
  v11 = v10;
  v23 = v10;
  if ( !v10 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v21);
    }
    return 0LL;
  }
  if ( v10 != v28 && v10 != v29 )
    PushW32ThreadLock((__int64)v10, v27, (__int64)Win32FreePool);
  *((_QWORD *)v11 + 7) = CompatiblePublicDC;
  *((_DWORD *)v11 + 16) = a3;
  *((_WORD *)v11 + 20) = DestinationString.Length;
  *((_WORD *)v11 + 21) = DestinationString.MaximumLength;
  if ( CaptureCallbackData(
         (struct _CAPTUREBUF *)v11,
         DestinationString.Buffer,
         DestinationString.Length + 2,
         (void **)v11 + 6) < 0 )
    goto LABEL_24;
  v13 = GreSaveDC((__int64)a1, v12);
  UserSessionSwitchLeaveCrit(v15, v14);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v16 = KeUserModeCallback(80LL, v11, *(unsigned int *)v11, v24, &v22);
  EtwTraceEndCallback(80LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v13);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v16 < 0 )
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
  if ( v16 >= 0 && v22 == 24 )
  {
    v17 = (__int64 *)v24[0];
    if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || (unsigned __int64)(v24[0] + 8LL) > W32UserProbeAddress )
      v17 = (__int64 *)W32UserProbeAddress;
    v18 = *v17;
    v26 = *v17;
    v19 = *(_QWORD **)(v24[0] + 16LL);
    if ( v19 + 1 < v19 || (unsigned __int64)(v19 + 1) > W32UserProbeAddress )
      v19 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v19;
    goto LABEL_25;
  }
LABEL_24:
  LODWORD(v18) = 0;
LABEL_25:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v21);
  }
  if ( v11 != v28 && v11 != v29 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v27);
  }
  return (unsigned int)v18;
}
