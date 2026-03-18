/*
 * XREFs of xxxClientExtTextOutW @ 0x1401FAFD0
 * Callers:
 *     xxxDrawCaptionTemp @ 0x140123E08 (xxxDrawCaptionTemp.c)
 *     ?xxxDrawMenuItemText@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z @ 0x1401FAD80 (-xxxDrawMenuItemText@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGHH@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     GreBitBltInternal @ 0x1400B5980 (GreBitBltInternal.c)
 *     CreateCompatiblePublicDC @ 0x140122300 (CreateCompatiblePublicDC.c)
 *     GreSaveDC @ 0x140122524 (GreSaveDC.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientExtTextOutW(Gre::Base *a1, int a2, int a3, int a4, _OWORD *a5, PCWSTR SourceString, int a7)
{
  Gre::Base *v10; // r14
  __int64 MaximumLength; // r8
  int v12; // ebx
  __int64 v13; // rcx
  unsigned __int8 *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  unsigned int v17; // ebx
  unsigned int v19; // ebx
  int v20; // r12d
  __int64 v21; // rdx
  struct tagTHREADINFO *v22; // rax
  struct tagTHREADINFO *v23; // rax
  __int64 v24; // rcx
  int v25; // ebx
  __int64 v26; // rdx
  __int64 UserSessionState; // rax
  __int64 v28; // [rsp+60h] [rbp-308h] BYREF
  int v29; // [rsp+68h] [rbp-300h] BYREF
  HBITMAP v30; // [rsp+70h] [rbp-2F8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2F0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-2E8h] BYREF
  void *Src; // [rsp+90h] [rbp-2D8h] BYREF
  __int128 v34; // [rsp+98h] [rbp-2D0h] BYREF
  void (*v35)(void *); // [rsp+A8h] [rbp-2C0h]
  Gre::Base *v36; // [rsp+B0h] [rbp-2B8h]
  unsigned __int8 *v37; // [rsp+B8h] [rbp-2B0h]
  __int64 v38; // [rsp+C0h] [rbp-2A8h]
  unsigned __int8 v39[112]; // [rsp+D0h] [rbp-298h] BYREF
  unsigned __int8 v40[512]; // [rsp+140h] [rbp-228h] BYREF

  LODWORD(v28) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v39, 0, 0x68uLL);
  Src = 0LL;
  v29 = 0;
  v30 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  v10 = CreateCompatiblePublicDC(a1, &v30);
  v36 = v10;
  if ( !v10 )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= 2 * (unsigned __int64)(unsigned int)(a7 + 1) )
    MaximumLength = 2LL * (unsigned int)(a7 + 1);
  v12 = 1;
  v14 = AllocCallbackMessage(104, 1u, MaximumLength, v40, 1, 0x200uLL);
  v37 = v14;
  if ( !v14 )
  {
    if ( v10 != a1 )
    {
      GreDeleteDC(v10);
      GreDeleteObject(v30);
    }
    return 0LL;
  }
  PtiCurrent(v13);
  v34 = 0LL;
  v35 = 0LL;
  if ( v14 != v39 && v14 != v40 )
  {
    v23 = PtiCurrent(v15);
    *(_QWORD *)&v34 = *((_QWORD *)v23 + 47);
    *((_QWORD *)v23 + 47) = &v34;
    *((_QWORD *)&v34 + 1) = v14;
    v35 = Win32FreePool;
  }
  *((_QWORD *)v14 + 7) = v10;
  *((_DWORD *)v14 + 16) = v28;
  *((_DWORD *)v14 + 17) = a3;
  *((_DWORD *)v14 + 18) = a4;
  if ( a5 )
    *(_OWORD *)(v14 + 76) = *a5;
  else
    v12 = 0;
  *((_DWORD *)v14 + 24) = v12;
  *((_DWORD *)v14 + 23) = a7;
  *((_WORD *)v14 + 20) = DestinationString.Length;
  *((_WORD *)v14 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v14,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v14 + 6) < 0 )
    goto LABEL_9;
  v19 = GreSaveDC((HDC)a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v28);
  EtwTraceBeginCallback(80LL);
  *((_QWORD *)v14 + 2) = 0LL;
  v20 = KeUserModeCallback(80LL, v14, *(unsigned int *)v14, &Src, &v29);
  EtwTraceEndCallback(80LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v28);
  GreRestoreDC(a1, v19);
  if ( v10 != a1 )
  {
    if ( v20 < 0 )
      goto LABEL_9;
    v24 = *(_QWORD *)(W32GetUserSessionState(v16, v21) + 56968);
    v25 = *(_DWORD *)(v24 + 92);
    UserSessionState = W32GetUserSessionState(v24, v26);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 88LL),
      v25,
      (__int64)v10,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v20 >= 0 && v29 == 24 )
  {
    v28 = 0LL;
    RtlCopyFromUser(&v28, Src, 8uLL);
    v17 = v28;
    v38 = v28;
    goto LABEL_10;
  }
LABEL_9:
  v17 = 0;
LABEL_10:
  if ( v10 != a1 )
  {
    GreDeleteDC(v10);
    GreDeleteObject(v30);
  }
  if ( v14 != v39 && v14 != v40 )
  {
    if ( *((_QWORD *)v14 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v14 + 4, &RegionSize, 0x8000u);
    }
    v22 = PtiCurrent(v16);
    *((_QWORD *)v22 + 47) = v34;
    ((void (__fastcall *)(_QWORD))v35)(*((_QWORD *)&v34 + 1));
  }
  return v17;
}
