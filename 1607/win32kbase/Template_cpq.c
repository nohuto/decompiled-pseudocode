/*
 * XREFs of Template_cpq @ 0x1C00B6C18
 * Callers:
 *     EtwTraceInputQueueLocked @ 0x1C00047B0 (EtwTraceInputQueueLocked.c)
 *     EtwTraceInputQueueLockedPeekRecursion @ 0x1C007B8C0 (EtwTraceInputQueueLockedPeekRecursion.c)
 *     EtwTraceInputQueueNoRemoveLocker @ 0x1C007CA70 (EtwTraceInputQueueNoRemoveLocker.c)
 *     EtwTraceInputQueueUnLocked @ 0x1C0082C90 (EtwTraceInputQueueUnLocked.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 */

NTSTATUS __fastcall Template_cpq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, char a4, char a5, char a6)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+30h] [rbp-40h] BYREF
  char *v8; // [rsp+40h] [rbp-30h]
  __int64 v9; // [rsp+48h] [rbp-28h]
  char *v10; // [rsp+50h] [rbp-20h]
  __int64 v11; // [rsp+58h] [rbp-18h]
  char v12; // [rsp+98h] [rbp+28h] BYREF

  v12 = a4;
  UserData.Ptr = (ULONGLONG)&v12;
  *(_QWORD *)&UserData.Size = 1LL;
  v8 = &a5;
  v9 = 8LL;
  v10 = &a6;
  v11 = 4LL;
  return EtwWrite(Microsoft_Windows_Win32kHandle, a2, &W32kControlGuid, 3u, &UserData);
}
