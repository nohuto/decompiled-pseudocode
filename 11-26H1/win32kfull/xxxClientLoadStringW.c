/*
 * XREFs of xxxClientLoadStringW @ 0x1400CCAE8
 * Callers:
 *     ?xxxLoadSomeStrings@@YAXXZ @ 0x1400CC9A8 (-xxxLoadSomeStrings@@YAXXZ.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z @ 0x140129D3C (-AllocateCallbackData@@YAJPEAU_CAPTUREBUF@@KPEAPEAX@Z.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientLoadStringW(int a1, __int64 a2, unsigned int a3)
{
  unsigned int v6; // r14d
  __int64 v7; // rcx
  unsigned __int8 *v8; // rdi
  __int64 v9; // rcx
  int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // rcx
  __int64 v13; // rcx
  unsigned int v14; // ebx
  struct tagTHREADINFO *v16; // rax
  int v17; // [rsp+30h] [rbp-2F8h] BYREF
  unsigned int v18[2]; // [rsp+38h] [rbp-2F0h] BYREF
  void *Src; // [rsp+40h] [rbp-2E8h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-2E0h] BYREF
  _DWORD v21[2]; // [rsp+58h] [rbp-2D0h] BYREF
  __int64 v22; // [rsp+60h] [rbp-2C8h]
  __int128 v23; // [rsp+68h] [rbp-2C0h] BYREF
  void (*v24)(void *); // [rsp+78h] [rbp-2B0h]
  __int128 v25; // [rsp+80h] [rbp-2A8h] BYREF
  __int64 v26; // [rsp+90h] [rbp-298h]
  __int128 v27; // [rsp+98h] [rbp-290h] BYREF
  __int64 v28; // [rsp+A8h] [rbp-280h]
  unsigned __int8 v29[64]; // [rsp+C0h] [rbp-268h] BYREF
  unsigned __int8 v30[512]; // [rsp+100h] [rbp-228h] BYREF

  memset_0(v29, 0, sizeof(v29));
  Src = 0LL;
  v17 = 0;
  v6 = 2 * a3;
  v22 = a2;
  v21[0] = 0;
  v21[1] = 2;
  v8 = AllocCallbackMessage(64, 1u, 2 * a3, v30, 0, 0x200uLL);
  RegionSize[1] = (ULONG_PTR)v8;
  if ( !v8 )
    return 0LL;
  PtiCurrent(v7);
  v23 = 0LL;
  v24 = 0LL;
  if ( v8 != v29 && v8 != v30 )
  {
    v16 = PtiCurrent(v9);
    *(_QWORD *)&v23 = *((_QWORD *)v16 + 47);
    *((_QWORD *)v16 + 47) = &v23;
    *((_QWORD *)&v23 + 1) = v8;
    v24 = Win32FreePool;
  }
  *((_DWORD *)v8 + 10) = a1;
  *((_DWORD *)v8 + 11) = a3;
  if ( (int)AllocateCallbackData((struct _CAPTUREBUF *)v8, v6, (void **)v8 + 6) < 0 )
    goto LABEL_15;
  *((_DWORD *)v8 + 14) = v6;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v18);
  EtwTraceBeginCallback(98LL);
  *((_QWORD *)v8 + 2) = 0LL;
  v10 = KeUserModeCallback(98LL, v8, *(unsigned int *)v8, &Src, &v17);
  EtwTraceEndCallback(98LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v18);
  if ( v10 < 0 )
    goto LABEL_15;
  if ( v17 != 24 )
    goto LABEL_15;
  *(_QWORD *)v18 = 0LL;
  RtlCopyFromUser(v18, Src, 8uLL);
  v11 = v18[0];
  RegionSize[0] = *(_QWORD *)v18;
  v25 = 0LL;
  v26 = 0LL;
  RtlCopyFromUser(&v25, Src, 0x18uLL);
  v27 = v25;
  v28 = v26;
  v13 = *((_QWORD *)PtiCurrent(v12) + 68);
  if ( !v13 )
    goto LABEL_9;
  if ( (*(_DWORD *)(v13 + 84) & 1) != 0 && *(_DWORD **)(v13 + 96) == v21 )
  {
LABEL_15:
    v14 = 0;
  }
  else
  {
LABEL_9:
    v14 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v27, v11, 0, 0);
    RegionSize[0] = v14;
    CopyOutputString((struct _CALLBACKSTATUS *)&v27, (struct _LARGE_STRING *)v21, a3, 0);
  }
  if ( v8 != v29 && v8 != v30 )
  {
    if ( *((_QWORD *)v8 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v8 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)&v23);
  }
  return v14;
}
