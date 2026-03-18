/*
 * XREFs of xxxClientLoadImage @ 0x1C012031C
 * Callers:
 *     xxxUpdateSystemIconsFromRegistry @ 0x1C00CC8DC (xxxUpdateSystemIconsFromRegistry.c)
 *     xxxUpdateSystemCursorFromRegistry @ 0x1C01232FC (xxxUpdateSystemCursorFromRegistry.c)
 *     xxxSetMonitorIcoCurIndex @ 0x1C012356C (xxxSetMonitorIcoCurIndex.c)
 *     ?xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ @ 0x1C01DBA2C (-xxxReplaceArrowWithNullCursor@Feedback@@YAXXZ.c)
 *     ?xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ @ 0x1C01DBAA8 (-xxxReplaceMouseCursorsWithPenCursors@Feedback@@YAXXZ.c)
 * Callees:
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     HMValidateHandleNoRip @ 0x1C00809E4 (HMValidateHandleNoRip.c)
 *     ?CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z @ 0x1C011D254 (-CaptureCallbackData@@YAJPEAU_CAPTUREBUF@@PEAXKPEAPEAX@Z.c)
 *     ?AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z @ 0x1C011D2F0 (-AllocCallbackMessage@@YAPEAXKK_KPEAEH0@Z.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     memset @ 0x1C0152CC0 (memset.c)
 */

unsigned __int8 *__fastcall xxxClientLoadImage(
        char **a1,
        __int64 a2,
        unsigned __int16 a3,
        unsigned int a4,
        unsigned int a5,
        unsigned int a6)
{
  unsigned __int16 v9; // ax
  unsigned int v10; // edx
  unsigned int v11; // ecx
  unsigned __int8 *result; // rax
  unsigned __int8 *v13; // rdi
  __int64 v14; // rdx
  __int64 v15; // rcx
  unsigned __int16 v16; // ax
  int v17; // ebx
  __int64 *v18; // rbx
  __int64 v19; // rbx
  ULONG_PTR RegionSize; // [rsp+30h] [rbp-2D8h] BYREF
  int v21; // [rsp+38h] [rbp-2D0h] BYREF
  unsigned int v22; // [rsp+40h] [rbp-2C8h]
  void *v23; // [rsp+48h] [rbp-2C0h]
  _QWORD v24[3]; // [rsp+50h] [rbp-2B8h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-2A0h] BYREF
  _DWORD v26[24]; // [rsp+80h] [rbp-288h] BYREF
  unsigned __int8 v27[512]; // [rsp+E0h] [rbp-228h] BYREF

  v9 = *((_WORD *)a1 + 1);
  if ( v9 )
  {
    v10 = 1;
    v11 = v9;
  }
  else
  {
    v11 = 0;
    v10 = 0;
  }
  v22 = 0;
  v23 = 0LL;
  if ( v10 )
  {
    result = AllocCallbackMessage(96, v10, v11, v27, 1, 0x200uLL);
    v13 = result;
    RegionSize = (ULONG_PTR)result;
    if ( !result )
      return result;
  }
  else
  {
    v13 = (unsigned __int8 *)v26;
    RegionSize = (ULONG_PTR)v26;
    memset(v26, 0, sizeof(v26));
    v26[0] = 96;
  }
  if ( v13 != (unsigned __int8 *)v26 && v13 != v27 )
    PushW32ThreadLock((__int64)v13, v25, (__int64)Win32FreePool);
  *((_DWORD *)v13 + 10) = v22;
  if ( (int)CaptureCallbackData(
              (struct _CAPTUREBUF *)v13,
              (char *)v23,
              (unsigned int)(unsigned __int16)v22 + 2,
              (void **)v13 + 6) < 0 )
    goto LABEL_23;
  *((_WORD *)v13 + 28) = *(_WORD *)a1;
  v16 = *((_WORD *)a1 + 1);
  *((_WORD *)v13 + 29) = v16;
  if ( v16 )
  {
    if ( (int)CaptureCallbackData(
                (struct _CAPTUREBUF *)v13,
                a1[1],
                (unsigned int)*(unsigned __int16 *)a1 + 2,
                (void **)v13 + 8) < 0 )
      goto LABEL_23;
  }
  else
  {
    *((_QWORD *)v13 + 8) = a1[1];
  }
  *((_DWORD *)v13 + 18) = a3;
  *((_DWORD *)v13 + 19) = a4;
  *((_DWORD *)v13 + 20) = a5;
  *((_DWORD *)v13 + 21) = a6;
  *((_DWORD *)v13 + 22) = 0;
  UserSessionSwitchLeaveCrit(v15, v14);
  EtwTraceBeginCallback(73LL);
  *((_QWORD *)v13 + 2) = 0LL;
  v17 = KeUserModeCallback(73LL, v13, *(unsigned int *)v13, v24, &v21);
  EtwTraceEndCallback(73LL);
  EnterCrit(0LL, 1LL);
  if ( v17 >= 0 && v21 == 24 )
  {
    v18 = (__int64 *)v24[0];
    if ( (unsigned __int64)(v24[0] + 8LL) < v24[0] || (unsigned __int64)(v24[0] + 8LL) > W32UserProbeAddress )
      v18 = (__int64 *)W32UserProbeAddress;
    v19 = *v18;
    v24[2] = v19;
    if ( v19 )
      v19 = HMValidateHandleNoRip(v19, 3);
    goto LABEL_24;
  }
LABEL_23:
  v19 = 0LL;
LABEL_24:
  if ( v13 != (unsigned __int8 *)v26 && v13 != v27 )
  {
    if ( *((_QWORD *)v13 + 4) )
    {
      RegionSize = 0LL;
      ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, (PVOID *)v13 + 4, &RegionSize, 0x8000u);
    }
    PopAndFreeAlwaysW32ThreadLock((__int64)v25);
  }
  return (unsigned __int8 *)v19;
}
