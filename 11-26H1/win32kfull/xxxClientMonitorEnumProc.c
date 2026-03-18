/*
 * XREFs of xxxClientMonitorEnumProc @ 0x1401BE750
 * Callers:
 *     <none>
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientMonitorEnumProc(__int64 a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  int v7; // ebx
  void *result; // rax
  void *v9; // [rsp+30h] [rbp-68h] BYREF
  int v10; // [rsp+38h] [rbp-60h] BYREF
  void *Src[3]; // [rsp+40h] [rbp-58h] BYREF
  _QWORD v12[2]; // [rsp+58h] [rbp-40h] BYREF
  __int128 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+78h] [rbp-20h]
  __int64 v15; // [rsp+80h] [rbp-18h]

  Src[0] = 0LL;
  v10 = 0;
  v12[0] = a1;
  v12[1] = a2;
  v13 = *a3;
  v14 = a4;
  v15 = a5;
  LODWORD(v9) = GET_USERCRIT_DISPOSITION(a1);
  HIDWORD(v9) = 1;
  if ( (_DWORD)v9 )
  {
    HIDWORD(v9) = *((_BYTE *)PtiCurrent(v5) + 1708) != 1;
    UserSessionSwitchLeaveCrit(v6);
  }
  EtwTraceBeginCallback(87LL);
  v7 = KeUserModeCallback(87LL, v12, 48LL, Src, &v10);
  EtwTraceEndCallback(87LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  if ( v7 < 0 || v10 != 24 )
    return 0LL;
  v9 = 0LL;
  RtlCopyFromUser(&v9, Src[0], 8uLL);
  result = v9;
  Src[1] = v9;
  return result;
}
