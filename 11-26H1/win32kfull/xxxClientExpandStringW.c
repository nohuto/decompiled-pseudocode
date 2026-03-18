/*
 * XREFs of xxxClientExpandStringW @ 0x140008DFC
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x14000886C (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1400CC73C (PopAndFreeAlwaysW32ThreadLock.c)
 *     ?CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z @ 0x140129D94 (-CalcOutputStringSize@@YAKPEAU_CALLBACKSTATUS@@KHH@Z.c)
 *     ?CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z @ 0x140129E80 (-CopyOutputString@@YAXPEAU_CALLBACKSTATUS@@PEAU_LARGE_STRING@@IH@Z.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxClientExpandStringW(struct _LARGE_STRING *a1)
{
  unsigned int v2; // eax
  unsigned __int8 *v3; // rdi
  int v4; // ebx
  unsigned int v5; // ebx
  unsigned int v7; // ebx
  __int64 v8; // rcx
  struct tagTHREADINFO *v9; // rax
  int v10; // [rsp+30h] [rbp-328h] BYREF
  unsigned int v11[2]; // [rsp+38h] [rbp-320h] BYREF
  void *Src; // [rsp+40h] [rbp-318h] BYREF
  ULONG_PTR RegionSize[2]; // [rsp+48h] [rbp-310h] BYREF
  __int128 v14; // [rsp+58h] [rbp-300h] BYREF
  void (*v15)(void *); // [rsp+68h] [rbp-2F0h]
  __int128 v16; // [rsp+70h] [rbp-2E8h] BYREF
  __int64 v17; // [rsp+80h] [rbp-2D8h]
  __int128 v18; // [rsp+88h] [rbp-2D0h] BYREF
  __int64 v19; // [rsp+98h] [rbp-2C0h]
  _OWORD v20[3]; // [rsp+B0h] [rbp-2A8h] BYREF
  __int64 v21; // [rsp+E0h] [rbp-278h]
  unsigned __int8 v22[592]; // [rsp+F0h] [rbp-268h] BYREF

  memset(v20, 0, sizeof(v20));
  v21 = 0LL;
  Src = 0LL;
  v10 = 0;
  v2 = *((_DWORD *)a1 + 1) & 0x7FFFFFFF;
  if ( v2 > 0x208 )
    v2 = 520;
  v3 = AllocCallbackMessage(56, 1u, v2, v22, 1, 0x248uLL);
  RegionSize[1] = (ULONG_PTR)v3;
  if ( !v3 )
    return 0LL;
  PtiCurrent();
  v14 = 0LL;
  v15 = 0LL;
  if ( v3 != (unsigned __int8 *)v20 && v3 != v22 )
  {
    v9 = PtiCurrent();
    *(_QWORD *)&v14 = *((_QWORD *)v9 + 47);
    *((_QWORD *)v9 + 47) = &v14;
    *((_QWORD *)&v14 + 1) = v3;
    v15 = Win32FreePool;
  }
  *((_DWORD *)v3 + 10) = *(_DWORD *)a1;
  *((_DWORD *)v3 + 11) ^= (*((_DWORD *)a1 + 1) ^ *((_DWORD *)v3 + 11)) & 0x7FFFFFFF;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v3,
              *((char **)a1 + 1),
              (unsigned int)(*(_DWORD *)a1 + 2),
              (void **)v3 + 6) < 0 )
    goto LABEL_9;
  *((_DWORD *)v3 + 11) &= ~0x80000000;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v11);
  EtwTraceBeginCallback(59LL);
  *((_QWORD *)v3 + 2) = 0LL;
  v4 = KeUserModeCallback(59LL, v3, *(unsigned int *)v3, &Src, &v10);
  EtwTraceEndCallback(59LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)v11);
  if ( v4 < 0 )
    goto LABEL_9;
  if ( v10 != 24 )
    goto LABEL_9;
  *(_QWORD *)v11 = 0LL;
  RtlCopyFromUser(v11, Src, 8uLL);
  v7 = v11[0];
  RegionSize[0] = *(_QWORD *)v11;
  v16 = 0LL;
  v17 = 0LL;
  RtlCopyFromUser(&v16, Src, 0x18uLL);
  v18 = v16;
  v19 = v17;
  v8 = *((_QWORD *)PtiCurrent() + 68);
  if ( !v8 )
    goto LABEL_17;
  if ( (*(_DWORD *)(v8 + 84) & 1) != 0 && *(struct _LARGE_STRING **)(v8 + 96) == a1 )
  {
LABEL_9:
    v5 = 0;
  }
  else
  {
LABEL_17:
    v5 = CalcOutputStringSize((struct _CALLBACKSTATUS *)&v18, v7, *((_DWORD *)a1 + 1) >> 31, 0);
    RegionSize[0] = v5;
    CopyOutputString((struct _CALLBACKSTATUS *)&v18, a1, *((_DWORD *)a1 + 1) & 0x7FFFFFFF, 0);
  }
  if ( v3 != (unsigned __int8 *)v20 && v3 != v22 )
  {
    if ( *((_QWORD *)v3 + 4) )
    {
      RegionSize[0] = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v3 + 4, RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock(&v14);
  }
  return v5;
}
