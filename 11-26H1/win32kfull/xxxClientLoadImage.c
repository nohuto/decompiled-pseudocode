/*
 * XREFs of xxxClientLoadImage @ 0x140008ACC
 * Callers:
 *     ?xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReason@@@Z @ 0x14000886C (-xxxUpdateSystemCursorFromRegistry@@YAXPEAU_UNICODE_STRING@@HW4InputTracing_SetSystemCursorReaso.c)
 *     xxxUpdateSystemIconsFromRegistry @ 0x140009C5C (xxxUpdateSystemIconsFromRegistry.c)
 *     _anonymous_namespace_::xxxReplaceMouseCursorsWithPenCursors @ 0x1400F86EC (_anonymous_namespace_--xxxReplaceMouseCursorsWithPenCursors.c)
 *     ?xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z @ 0x140152004 (-xxxEnsureDpiCursors@@YAXPEAUtagCURSOR@@PEAU_UNICODE_STRING@@I@Z.c)
 * Callees:
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x140007904 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1400087BC (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     HMValidateHandleNoRip @ 0x140095FE4 (HMValidateHandleNoRip.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     _guard_dispatch_icall @ 0x14034FDB0 (_guard_dispatch_icall.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

__int64 __fastcall xxxClientLoadImage(char **a1, __int64 a2, unsigned __int16 a3, int a4, int a5, int a6)
{
  int v7; // r15d
  unsigned int v9; // r8d
  unsigned __int8 *v10; // rdi
  unsigned __int16 v11; // ax
  int v12; // ebx
  __int64 v13; // rdx
  __int64 v14; // rbx
  struct tagTHREADINFO *v16; // rax
  int v17; // [rsp+30h] [rbp-2E8h] BYREF
  __int64 v18; // [rsp+38h] [rbp-2E0h] BYREF
  ULONG_PTR RegionSize; // [rsp+40h] [rbp-2D8h] BYREF
  __int64 v20; // [rsp+48h] [rbp-2D0h]
  void *Src; // [rsp+50h] [rbp-2C8h]
  void *v22; // [rsp+58h] [rbp-2C0h] BYREF
  __int128 v23; // [rsp+60h] [rbp-2B8h] BYREF
  void (*v24)(void *); // [rsp+70h] [rbp-2A8h]
  __int64 v25; // [rsp+78h] [rbp-2A0h]
  _DWORD v26[24]; // [rsp+90h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+F0h] [rbp-228h] BYREF

  v7 = a3;
  v20 = 0LL;
  memset_0(v26, 0, sizeof(v26));
  v22 = 0LL;
  v17 = 0;
  v9 = *((unsigned __int16 *)a1 + 1);
  Src = 0LL;
  if ( (_WORD)v9 )
  {
    v10 = AllocCallbackMessage(96, (_WORD)v9 != 0, v9 & (unsigned __int64)-(__int64)((_WORD)v9 != 0), v27, 1, 0x200uLL);
    RegionSize = (ULONG_PTR)v10;
    if ( !v10 )
      return 0LL;
  }
  else
  {
    v10 = (unsigned __int8 *)v26;
    RegionSize = (ULONG_PTR)v26;
    v26[0] = 96;
  }
  PtiCurrent();
  v23 = 0LL;
  v24 = 0LL;
  if ( v10 != (unsigned __int8 *)v26 && v10 != v27 )
  {
    v16 = PtiCurrent();
    *(_QWORD *)&v23 = *((_QWORD *)v16 + 47);
    *((_QWORD *)v16 + 47) = &v23;
    *((_QWORD *)&v23 + 1) = v10;
    v24 = Win32FreePool;
  }
  *((_DWORD *)v10 + 10) = v20;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v10,
              (char *)Src,
              (unsigned int)(unsigned __int16)v20 + 2,
              (void **)v10 + 6) < 0 )
    goto LABEL_19;
  *((_WORD *)v10 + 28) = *(_WORD *)a1;
  v11 = *((_WORD *)a1 + 1);
  *((_WORD *)v10 + 29) = v11;
  if ( v11 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v10,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v10 + 8) < 0 )
      goto LABEL_19;
  }
  else
  {
    *((_QWORD *)v10 + 8) = a1[1];
  }
  *((_DWORD *)v10 + 18) = v7;
  *((_DWORD *)v10 + 19) = a4;
  *((_DWORD *)v10 + 20) = a5;
  *((_DWORD *)v10 + 21) = a6;
  *((_DWORD *)v10 + 22) = 0;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  EtwTraceBeginCallback(74LL);
  *((_QWORD *)v10 + 2) = 0LL;
  v12 = KeUserModeCallback(74LL, v10, *(unsigned int *)v10, &v22, &v17);
  EtwTraceEndCallback(74LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v18);
  if ( v12 >= 0 && v17 == 24 )
  {
    v18 = 0LL;
    RtlCopyFromUser(&v18, v22, 8uLL);
    v14 = v18;
    v25 = v18;
    if ( v18 )
    {
      LOBYTE(v13) = 3;
      v14 = HMValidateHandleNoRip(v18, v13);
    }
    goto LABEL_11;
  }
LABEL_19:
  v14 = 0LL;
LABEL_11:
  if ( v10 != (unsigned __int8 *)v26 && v10 != v27 )
  {
    if ( *((_QWORD *)v10 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v10 + 4, &RegionSize, 0x8000u);
    }
    *((_QWORD *)PtiCurrent() + 47) = v23;
    ((void (__fastcall *)(_QWORD))v24)(*((_QWORD *)&v23 + 1));
  }
  return v14;
}
