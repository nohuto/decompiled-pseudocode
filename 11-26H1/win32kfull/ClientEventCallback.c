/*
 * XREFs of ClientEventCallback @ 0x1402D4E5C
 * Callers:
 *     xxxEventWndProc @ 0x140216850 (xxxEventWndProc.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

unsigned __int8 *__fastcall ClientEventCallback(__int64 a1, __int64 a2)
{
  unsigned int v4; // r14d
  unsigned __int8 *result; // rax
  __int64 v6; // rcx
  unsigned __int8 *v7; // rdi
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // ebx
  unsigned int v11; // ebx
  int v12; // [rsp+30h] [rbp-298h] BYREF
  __int64 v13; // [rsp+38h] [rbp-290h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-288h] BYREF
  void *Src; // [rsp+48h] [rbp-280h] BYREF
  __int128 v16; // [rsp+50h] [rbp-278h] BYREF
  void (*v17)(void *); // [rsp+60h] [rbp-268h]
  __int64 v18; // [rsp+68h] [rbp-260h]
  _OWORD v19[3]; // [rsp+78h] [rbp-250h] BYREF
  __int64 v20; // [rsp+A8h] [rbp-220h]
  unsigned __int8 v21[512]; // [rsp+B0h] [rbp-218h] BYREF

  v4 = *(unsigned __int16 *)(a2 + 6) + 8;
  memset(v19, 0, sizeof(v19));
  v20 = 0LL;
  Src = 0LL;
  v12 = 0;
  result = AllocCallbackMessage(56, 1u, v4, v21, 1, 0x200uLL);
  v7 = result;
  RegionSize = (ULONG_PTR)result;
  if ( result )
  {
    PtiCurrent(v6);
    v16 = 0LL;
    v17 = 0LL;
    if ( v7 != (unsigned __int8 *)v19 && v7 != v21 )
    {
      v9 = PtiCurrent(v8);
      *(_QWORD *)&v16 = *((_QWORD *)v9 + 47);
      *((_QWORD *)v9 + 47) = &v16;
      *((_QWORD *)&v16 + 1) = v7;
      v17 = Win32FreePool;
    }
    *((_QWORD *)v7 + 5) = a1;
    if ( (int)CaptureCallbackData((struct _CAPTUREBUF *)v7, (char *)a2, v4, (void **)v7 + 6) >= 0
      && (LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13),
          EtwTraceBeginCallback(65LL),
          *((_QWORD *)v7 + 2) = 0LL,
          v10 = KeUserModeCallback(65LL, v7, *(unsigned int *)v7, &Src, &v12),
          EtwTraceEndCallback(65LL),
          LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13),
          v10 >= 0)
      && v12 == 24 )
    {
      v13 = 0LL;
      RtlCopyFromUser(&v13, Src, 8uLL);
      v11 = v13;
      v18 = v13;
    }
    else
    {
      v11 = 0;
    }
    if ( v7 != (unsigned __int8 *)v19 && v7 != v21 )
    {
      if ( *((_QWORD *)v7 + 4) )
      {
        RegionSize = 0LL;
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v7 + 4, &RegionSize, 0x8000u);
      }
      PopAndFreeAlwaysW32ThreadLock((__int64)&v16);
    }
    return (unsigned __int8 *)v11;
  }
  return result;
}
