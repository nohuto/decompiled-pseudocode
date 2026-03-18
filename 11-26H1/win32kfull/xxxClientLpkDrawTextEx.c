/*
 * XREFs of xxxClientLpkDrawTextEx @ 0x140121E74
 * Callers:
 *     ?DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z @ 0x140122584 (-DT_GetExtentMinusPrefixes@@YAHPEAUHDC__@@PEBGHIHPEAUDRAWTEXTDATA@@H@Z.c)
 *     ?DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z @ 0x140234E48 (-DT_DrawStr@@YAHPEAUHDC__@@HHPEBGHHIPEAUDRAWTEXTDATA@@H@Z.c)
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

__int64 __fastcall xxxClientLpkDrawTextEx(
        Gre::Base *a1,
        int a2,
        int a3,
        const WCHAR *a4,
        int a5,
        int a6,
        int a7,
        __int64 a8,
        int a9,
        int a10)
{
  HDC CompatiblePublicDC; // r14
  __int64 MaximumLength; // r8
  __int64 v15; // rcx
  unsigned __int8 *v16; // rsi
  __int64 v17; // rcx
  unsigned int v18; // ebx
  int v19; // r12d
  __int64 v20; // rdx
  __int64 v21; // rcx
  unsigned int v22; // ebx
  struct tagTHREADINFO *v24; // rax
  __int64 v25; // rcx
  int v26; // ebx
  __int64 v27; // rdx
  __int64 UserSessionState; // rax
  __int64 v29; // [rsp+60h] [rbp-358h] BYREF
  int v30; // [rsp+68h] [rbp-350h] BYREF
  __int64 v31; // [rsp+70h] [rbp-348h]
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-340h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-338h] BYREF
  void *Src; // [rsp+90h] [rbp-328h] BYREF
  __int128 v35; // [rsp+98h] [rbp-320h] BYREF
  void (*v36)(void *); // [rsp+A8h] [rbp-310h]
  HDC v37; // [rsp+B0h] [rbp-308h]
  unsigned __int8 *v38; // [rsp+B8h] [rbp-300h]
  __int64 v39; // [rsp+C0h] [rbp-2F8h]
  unsigned __int8 v40[176]; // [rsp+D0h] [rbp-2E8h] BYREF
  unsigned __int8 v41[512]; // [rsp+180h] [rbp-238h] BYREF

  LODWORD(v29) = a2;
  RegionSize = (ULONG_PTR)a1;
  memset_0(v40, 0, 0xA8uLL);
  Src = 0LL;
  v30 = 0;
  v31 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, a4);
  CompatiblePublicDC = (HDC)CreateCompatiblePublicDC((HDC)a1);
  v37 = CompatiblePublicDC;
  if ( !CompatiblePublicDC )
    return 0LL;
  MaximumLength = DestinationString.MaximumLength;
  if ( DestinationString.MaximumLength <= (unsigned __int64)(2LL * a5 + 2) )
    MaximumLength = 2LL * a5 + 2;
  v16 = AllocCallbackMessage(168, 1u, MaximumLength, v41, 1, 0x200uLL);
  v38 = v16;
  if ( !v16 )
  {
    if ( CompatiblePublicDC != (HDC)a1 )
    {
      GreDeleteDC(CompatiblePublicDC);
      GreDeleteObject(v31);
    }
    return 0LL;
  }
  PtiCurrent(v15);
  v35 = 0LL;
  v36 = 0LL;
  if ( v16 != v40 && v16 != v41 )
  {
    v24 = PtiCurrent(v17);
    *(_QWORD *)&v35 = *((_QWORD *)v24 + 47);
    *((_QWORD *)v24 + 47) = &v35;
    *((_QWORD *)&v35 + 1) = v16;
    v36 = Win32FreePool;
  }
  *((_QWORD *)v16 + 7) = CompatiblePublicDC;
  *((_DWORD *)v16 + 16) = v29;
  *((_DWORD *)v16 + 17) = a3;
  *((_DWORD *)v16 + 18) = a5;
  *((_DWORD *)v16 + 19) = a6;
  *((_DWORD *)v16 + 20) = a7;
  *(_OWORD *)(v16 + 88) = *(_OWORD *)a8;
  *(_OWORD *)(v16 + 104) = *(_OWORD *)(a8 + 16);
  *(_OWORD *)(v16 + 120) = *(_OWORD *)(a8 + 32);
  *(_OWORD *)(v16 + 136) = *(_OWORD *)(a8 + 48);
  *((_QWORD *)v16 + 19) = *(_QWORD *)(a8 + 64);
  *((_DWORD *)v16 + 40) = a9;
  *((_DWORD *)v16 + 41) = a10;
  *((_WORD *)v16 + 20) = DestinationString.Length;
  *((_WORD *)v16 + 21) = DestinationString.MaximumLength;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v16,
              (char *)DestinationString.Buffer,
              (unsigned int)DestinationString.Length + 2,
              (void **)v16 + 6) < 0 )
    goto LABEL_18;
  v18 = GreSaveDC((HDC)a1);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
  EtwTraceBeginCallback(79LL);
  *((_QWORD *)v16 + 2) = 0LL;
  v19 = KeUserModeCallback(79LL, v16, *(unsigned int *)v16, &Src, &v30);
  EtwTraceEndCallback(79LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v29);
  GreRestoreDC(a1, v18);
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    if ( v19 < 0 )
    {
LABEL_18:
      v22 = 0;
      goto LABEL_11;
    }
    v25 = *(_QWORD *)(W32GetUserSessionState(v21, v20) + 56968);
    v26 = *(_DWORD *)(v25 + 92);
    UserSessionState = W32GetUserSessionState(v25, v27);
    GreBitBltInternal(
      a1,
      0,
      0,
      *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 88LL),
      v26,
      (__int64)CompatiblePublicDC,
      0,
      0,
      0xCC0020u,
      0,
      0);
  }
  if ( v19 < 0 || v30 != 24 )
    goto LABEL_18;
  v29 = 0LL;
  RtlCopyFromUser(&v29, Src, 8uLL);
  v22 = v29;
  v39 = v29;
LABEL_11:
  if ( CompatiblePublicDC != (HDC)a1 )
  {
    GreDeleteDC(CompatiblePublicDC);
    GreDeleteObject(v31);
  }
  if ( v16 != v40 && v16 != v41 )
  {
    if ( *((_QWORD *)v16 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v16 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v35);
  }
  return v22;
}
