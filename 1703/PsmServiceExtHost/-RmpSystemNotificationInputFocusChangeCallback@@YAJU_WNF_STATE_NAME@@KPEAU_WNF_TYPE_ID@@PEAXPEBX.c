/*
 * XREFs of ?RmpSystemNotificationInputFocusChangeCallback@@YAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x180004D20
 * Callers:
 *     <none>
 * Callees:
 *     ?RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z @ 0x180004F50 (-RmpGameModeQueuePolicyWorkerWithLock@@YAXPEAU_RM_GAME_MODE_CONTEXT@@@Z.c)
 *     ?RmpSystemOpenProcess@@YAJPEAPEAXKK@Z @ 0x180004F78 (-RmpSystemOpenProcess@@YAJPEAPEAXKK@Z.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 */

__int64 __fastcall RmpSystemNotificationInputFocusChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        char *a4,
        unsigned int *a5)
{
  char *v6; // rdi
  int v7; // r14d
  unsigned int v8; // ebx
  void *v9; // r15
  char v11; // [rsp+38h] [rbp-79h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-71h] BYREF
  unsigned int v13; // [rsp+48h] [rbp-69h] BYREF
  int v14; // [rsp+4Ch] [rbp-65h] BYREF
  EVENT_DESCRIPTOR EventDescriptor; // [rsp+50h] [rbp-61h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-49h] BYREF
  void *v17; // [rsp+78h] [rbp-39h]
  int v18; // [rsp+80h] [rbp-31h]
  int v19; // [rsp+84h] [rbp-2Dh]
  unsigned int *v20; // [rsp+88h] [rbp-29h]
  __int64 v21; // [rsp+90h] [rbp-21h]
  int *v22; // [rsp+98h] [rbp-19h]
  __int64 v23; // [rsp+A0h] [rbp-11h]
  char *v24; // [rsp+A8h] [rbp-9h]
  __int64 v25; // [rsp+B0h] [rbp-1h]

  v6 = a4 + 592;
  v7 = *((_DWORD *)a4 + 154);
  v11 = 0;
  if ( a5 )
    v8 = *a5;
  else
    v8 = 0;
  Handle = 0LL;
  if ( v8 != v7 )
  {
    if ( v8 && (int)RmpSystemOpenProcess(&Handle, 0x2000u, v8) < 0 )
      v8 = 0;
    v9 = (void *)*((_QWORD *)v6 + 2);
    RtlAcquireSRWLockExclusive(v6);
    GetCurrentThreadId();
    *((_QWORD *)v6 + 2) = Handle;
    *((_DWORD *)v6 + 6) = v8;
    *((_DWORD *)v6 + 7) = 0;
    Handle = 0LL;
    RtlReleaseSRWLockExclusive(v6);
    RtlAcquireSRWLockExclusive(a4 + 1144);
    *((_DWORD *)a4 + 290) = GetCurrentThreadId();
    RmpGameModeQueuePolicyWorkerWithLock((struct _RM_GAME_MODE_CONTEXT *)(a4 + 1104));
    *((_DWORD *)a4 + 290) = 0;
    RtlReleaseSRWLockExclusive(a4 + 1144);
    v11 = 1;
    if ( Handle )
      NtClose(Handle);
    if ( v9 )
      NtClose(v9);
  }
  if ( (unsigned int)dword_18004D030 > 4 && (qword_18004D040 & 1) != 0 && (qword_18004D048 & 1) == qword_18004D048 )
  {
    v13 = v8;
    v20 = &v13;
    v22 = &v14;
    v24 = &v11;
    v21 = 4LL;
    v14 = v7;
    v23 = 4LL;
    v25 = 1LL;
    *(_DWORD *)&EventDescriptor.Level = 4;
    UserData.Ptr = (ULONGLONG)off_18004D038;
    *(_DWORD *)&EventDescriptor.Id = ((unsigned int)&unk_180042460 - (unsigned int)&TraceLoggingMetadata) | 0xB000000;
    EventDescriptor.Keyword = 1LL;
    UserData.Size = *(unsigned __int16 *)off_18004D038;
    v17 = &unk_18004246B;
    UserData.Reserved = 2;
    v18 = 61;
    v19 = 1;
    EventWriteTransfer(RegHandle, &EventDescriptor, 0LL, 0LL, 5u, &UserData);
  }
  return 0LL;
}
