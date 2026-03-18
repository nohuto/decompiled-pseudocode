/*
 * XREFs of xxxClientPSMTextOut @ 0x1401FBB08
 * Callers:
 *     xxxPSMTextOut @ 0x1401FB8A8 (xxxPSMTextOut.c)
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

HDC __fastcall xxxClientPSMTextOut(Gre::Base *a1, unsigned int a2, unsigned int a3, char **a4, int a5, int a6)
{
  HDC result; // rax
  HDC v11; // r14
  __int64 v12; // rcx
  unsigned __int8 *v13; // rdi
  __int64 v14; // rcx
  struct tagTHREADINFO *v15; // rax
  unsigned int v16; // ebx
  int v17; // r12d
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  int v21; // ebx
  __int64 v22; // rdx
  __int64 UserSessionState; // rax
  int v24; // [rsp+60h] [rbp-2E8h] BYREF
  HBITMAP v25; // [rsp+68h] [rbp-2E0h] BYREF
  __int64 v26; // [rsp+70h] [rbp-2D8h] BYREF
  ULONG_PTR RegionSize; // [rsp+78h] [rbp-2D0h] BYREF
  void *Src; // [rsp+80h] [rbp-2C8h] BYREF
  __int128 v29; // [rsp+88h] [rbp-2C0h] BYREF
  void (*v30)(void *); // [rsp+98h] [rbp-2B0h]
  HDC v31; // [rsp+A0h] [rbp-2A8h]
  HDC v32; // [rsp+A8h] [rbp-2A0h]
  unsigned __int8 v33[80]; // [rsp+C0h] [rbp-288h] BYREF
  unsigned __int8 v34[512]; // [rsp+110h] [rbp-238h] BYREF

  RegionSize = (ULONG_PTR)a1;
  memset_0(v33, 0, sizeof(v33));
  Src = 0LL;
  v24 = 0;
  v25 = 0LL;
  result = (HDC)CreateCompatiblePublicDC(a1, &v25);
  v11 = result;
  v31 = result;
  if ( !result )
    return result;
  result = (HDC)AllocCallbackMessage(80, 1u, *((unsigned __int16 *)a4 + 1), v34, 1, 0x200uLL);
  v13 = (unsigned __int8 *)result;
  v32 = result;
  if ( !result )
  {
    if ( v11 != (HDC)a1 )
    {
      GreDeleteDC(v11);
      return (HDC)GreDeleteObject(v25);
    }
    return result;
  }
  PtiCurrent(v12);
  v29 = 0LL;
  v30 = 0LL;
  if ( v13 != v33 && v13 != v34 )
  {
    v15 = PtiCurrent(v14);
    *(_QWORD *)&v29 = *((_QWORD *)v15 + 47);
    *((_QWORD *)v15 + 47) = &v29;
    *((_QWORD *)&v29 + 1) = v13;
    v30 = Win32FreePool;
  }
  *((_QWORD *)v13 + 7) = v11;
  *((_DWORD *)v13 + 16) = a2;
  *((_DWORD *)v13 + 17) = a3;
  *((_DWORD *)v13 + 18) = a5;
  *((_DWORD *)v13 + 19) = a6;
  *((_WORD *)v13 + 20) = *(_WORD *)a4;
  *((_WORD *)v13 + 21) = *((_WORD *)a4 + 1);
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              a4[1],
              (unsigned int)*(unsigned __int16 *)a4 + 2,
              (void **)v13 + 6) >= 0 )
  {
    v16 = GreSaveDC((HDC)a1);
    LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v26);
    EtwTraceBeginCallback(78LL);
    *((_QWORD *)v13 + 2) = 0LL;
    v17 = KeUserModeCallback(78LL, v13, *(unsigned int *)v13, &Src, &v24);
    EtwTraceEndCallback(78LL);
    LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v26);
    GreRestoreDC(a1, v16);
    if ( v11 == (HDC)a1 )
    {
LABEL_12:
      if ( v17 >= 0 && v24 == 24 )
      {
        v26 = 0LL;
        RtlCopyFromUser(&v26, Src, 8uLL);
      }
      goto LABEL_15;
    }
    if ( v17 >= 0 )
    {
      v20 = *(_QWORD *)(W32GetUserSessionState(v19, v18) + 56968);
      v21 = *(_DWORD *)(v20 + 92);
      UserSessionState = W32GetUserSessionState(v20, v22);
      GreBitBltInternal(
        a1,
        0,
        0,
        *(_DWORD *)(*(_QWORD *)(UserSessionState + 56968) + 88LL),
        v21,
        (__int64)v11,
        0,
        0,
        0xCC0020u,
        0,
        0);
      goto LABEL_12;
    }
  }
LABEL_15:
  if ( v11 != (HDC)a1 )
  {
    GreDeleteDC(v11);
    GreDeleteObject(v25);
  }
  result = (HDC)v33;
  if ( v13 != v33 )
  {
    result = (HDC)v34;
    if ( v13 != v34 )
    {
      if ( *((_QWORD *)v13 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
      }
      return (HDC)PopAndFreeAlwaysW32ThreadLock((__int64)&v29);
    }
  }
  return result;
}
