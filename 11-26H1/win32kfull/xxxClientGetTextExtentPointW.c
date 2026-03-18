/*
 * XREFs of xxxClientGetTextExtentPointW @ 0x140122668
 * Callers:
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x140122584 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ?xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV?$SmartObjStackRef@UtagMENU@@@@IIKK@Z @ 0x1401FAB28 (-xxxMNRecalcTabStrings@@YAKPEAUHDC__@@AEBV-$SmartObjStackRef@UtagMENU@@@@IIKK@Z.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x14028F650 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     GreSaveDC @ 0x140122524 (GreSaveDC.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientGetTextExtentPointW(Gre::Base *a1, PCWSTR SourceString, int a3, _QWORD *a4)
{
  __int64 v5; // r12
  Gre::Base *v8; // r14
  __int64 MaximumLength; // r8
  __int64 v10; // rcx
  unsigned __int8 *v11; // rsi
  __int64 v12; // rcx
  unsigned int v13; // ebx
  int v14; // r12d
  __int64 v15; // rdx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  __int64 v18; // rcx
  __int64 v19; // rcx
  void *v20; // rdx
  struct tagTHREADINFO *v22; // rax
  __int64 v23; // rcx
  int v24; // ebx
  __int64 v25; // rdx
  __int64 UserSessionState; // rax
  __int64 v27; // [rsp+60h] [rbp-318h] BYREF
  int v28; // [rsp+68h] [rbp-310h] BYREF
  ULONG_PTR RegionSize; // [rsp+70h] [rbp-308h] BYREF
  void *Src; // [rsp+78h] [rbp-300h] BYREF
  HBITMAP v31; // [rsp+80h] [rbp-2F8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+88h] [rbp-2F0h] BYREF
  Gre::Base *v33; // [rsp+98h] [rbp-2E0h]
  unsigned __int8 *v34; // [rsp+A0h] [rbp-2D8h]
  __int128 v35; // [rsp+A8h] [rbp-2D0h] BYREF
  void (*v36)(void *); // [rsp+B8h] [rbp-2C0h]
  __int64 v37; // [rsp+C0h] [rbp-2B8h]
  unsigned __int8 v38[80]; // [rsp+E0h] [rbp-298h] BYREF
  unsigned __int8 v39[512]; // [rsp+130h] [rbp-248h] BYREF

  v5 = a3;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v38, 0, sizeof(v38));
  Src = 0LL;
  v28 = 0;
  v31 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v8 = CreateCompatiblePublicDC(a1, &v31);
  v33 = v8;
  if ( !v8 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2 * v5 + 2) )
    MaximumLength = 2 * v5 + 2;
  v11 = AllocCallbackMessage(80, 1u, MaximumLength, v39, 1, 0x200uLL);
  v34 = v11;
  if ( !v11 )
  {
    if ( v8 != a1 )
    {
      GreDeleteDC(v8);
      GreDeleteObject(v31);
    }
    return 0LL;
  }
  PtiCurrent(v10);
  v35 = 0LL;
  v36 = 0LL;
  if ( v11 != v38 && v11 != v39 )
  {
    v22 = PtiCurrent(v12);
    *(_QWORD *)&v35 = *((_QWORD *)v22 + 47);
    *((_QWORD *)v22 + 47) = &v35;
    *((_QWORD *)&v35 + 1) = v11;
    v36 = Win32FreePool;
  }
  *((_QWORD *)v11 + 7) = v8;
  *((_DWORD *)v11 + 16) = v5;
  *((_WORD *)v11 + 20) = DestinationString.Length;
  *((_WORD *)v11 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v11,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v11 + 6) < 0 )
    goto LABEL_22;
  v13 = GreSaveDC((HDC)a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v27);
  EtwTraceBeginCallback(81LL);
  *((_QWORD *)v11 + 2) = 0LL;
  v14 = KeUserModeCallback(81LL, v11, *(unsigned int *)v11, &Src, &v28);
  EtwTraceEndCallback(81LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v27);
  GreRestoreDC(a1, v13);
  if ( v8 != a1 )
  {
    if ( v14 < 0 )
    {
LABEL_22:
      v17 = 0;
      goto LABEL_12;
    }
    v23 = *(_QWORD *)(W32GetUserSessionState(v16, v15) + 56968);
    v24 = *(_DWORD *)(v23 + 92);
    UserSessionState = W32GetUserSessionState(v23, v25);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 88LL),
      v24,
      (__int64)v8,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v14 < 0 )
    goto LABEL_22;
  if ( v28 != 24 )
    goto LABEL_22;
  v27 = 0LL;
  RtlCopyFromUser(&v27, Src, 8uLL);
  v17 = v27;
  v37 = v27;
  v19 = *((_QWORD *)PtiCurrent(v18) + 68);
  if ( v19 )
  {
    if ( (*(_DWORD *)(v19 + 84) & 1) != 0 && *(_QWORD **)(v19 + 96) == a4 )
      goto LABEL_22;
  }
  v20 = (void *)*((_QWORD *)Src + 2);
  v27 = 0LL;
  RtlCopyFromUser(&v27, v20, 8uLL);
  *a4 = v27;
LABEL_12:
  if ( v8 != a1 )
  {
    GreDeleteDC(v8);
    GreDeleteObject(v31);
  }
  if ( v11 != v38 && v11 != v39 )
  {
    if ( *((_QWORD *)v11 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v11 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return v17;
}
