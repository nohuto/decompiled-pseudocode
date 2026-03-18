/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x1C00B9374
 * Callers:
 *     ?xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z @ 0x1C00B91E4 (-xxxMB_FindLongestString@@YAIPEAUHDC__@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z @ 0x1C014E06C (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@PEAUtagMENU@@IIKK@Z.c)
 *     ?xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z @ 0x1C014FB78 (-xxxTooltipGetSizeAndPosition@@YAHPEAUtagTOOLTIPWND@@PEAUtagSIZE@@PEAUtagPOINT@@@Z.c)
 *     xxxDrawCaptionTemp @ 0x1C022FFA0 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236574 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
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

__int64 __fastcall xxxClientGetTextExtentPointW(HDC a1, const WCHAR *a2, unsigned int a3, _QWORD *a4)
{
  HDC CompatiblePublicDC; // rsi
  unsigned __int64 MaximumLength; // r8
  unsigned __int8 *v9; // rax
  __int64 v10; // r9
  unsigned __int8 *v11; // rdi
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // rdx
  unsigned int v15; // r12d
  __int64 v16; // rcx
  int v17; // r15d
  __int64 *v18; // rcx
  __int64 v19; // r15
  _QWORD *v20; // rcx
  PVOID *v22; // rdx
  ULONG_PTR RegionSize; // [rsp+60h] [rbp-308h] BYREF
  int v24; // [rsp+68h] [rbp-300h] BYREF
  __int64 v25; // [rsp+70h] [rbp-2F8h]
  _QWORD v26[3]; // [rsp+78h] [rbp-2F0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+90h] [rbp-2D8h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-2C8h]
  _QWORD v29[3]; // [rsp+B8h] [rbp-2B0h] BYREF
  unsigned __int8 v30[80]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v31[512]; // [rsp+120h] [rbp-248h] BYREF

  RegionSize = (ULONG_PTR)a1;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC(a1);
  v26[2] = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = 2LL * (int)(a3 + 1);
  if ( DestinationString.MaximumLength > MaximumLength )
    MaximumLength = DestinationString.MaximumLength;
  v9 = AllocCallbackMessage(80, 1u, MaximumLength, v31, 1, 0x200uLL);
  v11 = v9;
  v26[1] = v9;
  if ( !v9 )
  {
    if ( CompatiblePublicDC != a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v25);
    }
    return 0LL;
  }
  if ( v9 != v30 && v9 != v31 )
    PushW32ThreadLock((__int64)v9, v29, (__int64)Win32FreePool, v10);
  *((_QWORD *)v11 + 7) = CompatiblePublicDC;
  *((_DWORD *)v11 + 16) = a3;
  *((_WORD *)v11 + 20) = DestinationString.Length;
  *((_WORD *)v11 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v11,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v11 + 6) < 0 )
    goto LABEL_27;
  v15 = GreSaveDC(a1);
  v16 = gdwInAtomicOperation;
  if ( gdwInAtomicOperation )
  {
    v16 = gdwExtraInstrumentations;
    v14 = gdwExtraInstrumentations;
    if ( (gdwExtraInstrumentations & 1) != 0 )
      KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
  }
  UserSessionSwitchLeaveCrit(v16, v14);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v17 = KeUserModeCallback(81LL, v11, *(unsigned int *)v11, v26, &v24);
  EtwTraceEndCallback(81LL);
  EnterCrit(0LL, 1LL);
  GreRestoreDC(a1, v15);
  if ( CompatiblePublicDC != a1 )
  {
    if ( v17 < 0 )
      goto LABEL_27;
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
  if ( v17 >= 0 && v24 == 24 )
  {
    v18 = (__int64 *)v26[0];
    if ( (unsigned __int64)(v26[0] + 8LL) < v26[0] || (unsigned __int64)(v26[0] + 8LL) > W32UserProbeAddress )
      v18 = (__int64 *)W32UserProbeAddress;
    v19 = *v18;
    v28 = *v18;
    v20 = *(_QWORD **)(v26[0] + 16LL);
    if ( v20 + 1 < v20 || (unsigned __int64)(v20 + 1) > W32UserProbeAddress )
      v20 = (_QWORD *)W32UserProbeAddress;
    *a4 = *v20;
    goto LABEL_22;
  }
LABEL_27:
  LODWORD(v19) = 0;
LABEL_22:
  if ( CompatiblePublicDC != a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v25);
  }
  if ( v11 != v30 && v11 != v31 )
  {
    v22 = (PVOID *)(v11 + 32);
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, v22, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v29, (__int64)v22, v12, v13);
  }
  return (unsigned int)v19;
}
