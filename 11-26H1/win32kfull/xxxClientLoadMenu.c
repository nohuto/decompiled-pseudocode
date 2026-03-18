/*
 * XREFs of xxxClientLoadMenu @ 0x14000A328
 * Callers:
 *     xxxLoadSysMenu @ 0x14000BE58 (xxxLoadSysMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     ?xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z @ 0x1402F454C (-xxxGetScrollMenu@@YAPEAUtagMENU@@PEAUtagWND@@H@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

unsigned __int8 *__fastcall xxxClientLoadMenu(__int64 a1, char **a2)
{
  __int64 v4; // r9
  unsigned __int8 *v5; // rdi
  unsigned __int16 v6; // ax
  __int64 v7; // rbx
  int v8; // ebx
  __int64 v9; // rdx
  unsigned __int8 *result; // rax
  struct tagTHREADINFO *v11; // rax
  int v12; // [rsp+30h] [rbp-2A8h] BYREF
  __int64 v13; // [rsp+38h] [rbp-2A0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-298h] BYREF
  void *Src; // [rsp+48h] [rbp-290h] BYREF
  __int128 v16; // [rsp+50h] [rbp-288h] BYREF
  void (*v17)(void *); // [rsp+60h] [rbp-278h]
  __int64 v18; // [rsp+68h] [rbp-270h]
  _DWORD v19[16]; // [rsp+80h] [rbp-258h] BYREF
  unsigned __int8 v20[512]; // [rsp+C0h] [rbp-218h] BYREF

  memset_0(v19, 0, sizeof(v19));
  Src = 0LL;
  v12 = 0;
  v4 = *((unsigned __int16 *)a2 + 1);
  if ( (_WORD)v4 )
  {
    result = AllocCallbackMessage(64, (_WORD)v4 != 0, v4 & -(__int64)((_WORD)v4 != 0), v20, 1, 0x200uLL);
    v5 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v5 = (unsigned __int8 *)v19;
    RegionSize = (ULONG_PTR)v19;
    v19[0] = 64;
  }
  PtiCurrent();
  v16 = 0LL;
  v17 = 0LL;
  if ( v5 != (unsigned __int8 *)v19 && v5 != v20 )
  {
    v11 = PtiCurrent();
    *(_QWORD *)&v16 = *((_QWORD *)v11 + 47);
    *((_QWORD *)v11 + 47) = &v16;
    *((_QWORD *)&v16 + 1) = v5;
    v17 = Win32FreePool;
  }
  *((_QWORD *)v5 + 5) = a1;
  *((_WORD *)v5 + 24) = *(_WORD *)a2;
  v6 = *((_WORD *)a2 + 1);
  *((_WORD *)v5 + 25) = v6;
  if ( v6 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v5,
                a2[1],
                (unsigned int)*(unsigned __int16 *)a2 + 2,
                (void **)v5 + 7) < 0 )
    {
LABEL_6:
      v7 = 0LL;
      goto LABEL_11;
    }
  }
  else
  {
    *((_QWORD *)v5 + 7) = a2[1];
  }
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(76LL);
  *((_QWORD *)v5 + 2) = 0LL;
  v8 = KeUserModeCallback(76LL, v5, *(unsigned int *)v5, &Src, &v12);
  EtwTraceEndCallback(76LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( v8 < 0 || v12 != 24 )
    goto LABEL_6;
  v13 = 0LL;
  RtlCopyFromUser(&v13, Src, 8uLL);
  v18 = v13;
  LOBYTE(v9) = 2;
  v7 = HMValidateHandleNoRip(v13, v9);
LABEL_11:
  if ( v5 != (unsigned __int8 *)v19 && v5 != v20 )
  {
    if ( *((_QWORD *)v5 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v5 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v16);
  }
  return (unsigned __int8 *)v7;
}
