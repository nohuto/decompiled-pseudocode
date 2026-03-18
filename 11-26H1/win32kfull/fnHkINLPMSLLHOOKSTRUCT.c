/*
 * XREFs of fnHkINLPMSLLHOOKSTRUCT @ 0x1401B4CD8
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall fnHkINLPMSLLHOOKSTRUCT(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5)
{
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ebx
  __int64 *CurrentThreadWin32Thread; // rax
  __int64 v13; // rcx
  int v14; // ebx
  void *result; // rax
  void *v16; // [rsp+30h] [rbp-98h] BYREF
  int v17; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  int v19; // [rsp+60h] [rbp-68h] BYREF
  __int64 v20; // [rsp+68h] [rbp-60h]
  __int64 v21; // [rsp+70h] [rbp-58h]
  __int64 v22; // [rsp+78h] [rbp-50h]
  __int128 v23; // [rsp+80h] [rbp-48h]
  __int128 v24; // [rsp+90h] [rbp-38h]

  Src[0] = 0LL;
  v17 = 0;
  memset_0(&v19, 0, 0x40uLL);
  v19 = a1;
  v20 = a2;
  *((_DWORD *)a3 + 5) = 0;
  v23 = *a3;
  v24 = a3[1];
  v21 = a4;
  v22 = a5;
  LODWORD(v16) = GET_USERCRIT_DISPOSITION(v9);
  v11 = 1;
  HIDWORD(v16) = 1;
  if ( (_DWORD)v16 )
  {
    CurrentThreadWin32Thread = (__int64 *)PsGetCurrentThreadWin32Thread(v10);
    if ( CurrentThreadWin32Thread )
      v13 = *CurrentThreadWin32Thread;
    else
      v13 = 0LL;
    if ( *(_BYTE *)(v13 + 1708) == 1 )
      v11 = 0;
    HIDWORD(v16) = v11;
    UserSessionSwitchLeaveCrit(v13);
  }
  EtwTraceBeginCallback(46LL);
  v14 = KeUserModeCallback(46LL, &v19, 64LL, Src, &v17);
  EtwTraceEndCallback(46LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v16);
  if ( v14 < 0 || v17 != 24 )
    return 0LL;
  v16 = 0LL;
  RtlCopyFromUser(&v16, Src[0], 8uLL);
  result = v16;
  Src[1] = v16;
  return result;
}
