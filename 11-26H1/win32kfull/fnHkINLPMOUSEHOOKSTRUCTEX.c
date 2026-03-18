/*
 * XREFs of fnHkINLPMOUSEHOOKSTRUCTEX @ 0x14003DCE4
 * Callers:
 *     xxxHkCallHook @ 0x14003AD80 (xxxHkCallHook.c)
 *     xxxCallCtfHook @ 0x14003CF78 (xxxCallCtfHook.c)
 * Callees:
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ?GET_USERCRIT_DISPOSITION@@YA?AW4tagUserCritDisposition@@XZ @ 0x14003AB20 (-GET_USERCRIT_DISPOSITION@@YA-AW4tagUserCritDisposition@@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 *     memset_0 @ 0x140350200 (memset_0.c)
 */

void *__fastcall fnHkINLPMOUSEHOOKSTRUCTEX(int a1, __int64 a2, __int128 *a3, __int64 a4, __int64 a5, int *a6)
{
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rcx
  int v13; // ebx
  void *v14; // rbx
  void *v15; // rdx
  void *v17; // [rsp+30h] [rbp-A8h] BYREF
  int v18; // [rsp+38h] [rbp-A0h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-98h] BYREF
  int v20; // [rsp+60h] [rbp-78h] BYREF
  __int64 v21; // [rsp+68h] [rbp-70h]
  __int64 v22; // [rsp+70h] [rbp-68h]
  __int64 v23; // [rsp+78h] [rbp-60h]
  int v24; // [rsp+80h] [rbp-58h]
  __int128 v25; // [rsp+88h] [rbp-50h]
  __int128 v26; // [rsp+98h] [rbp-40h]
  __int64 v27; // [rsp+A8h] [rbp-30h]

  Src[0] = 0LL;
  v18 = 0;
  memset_0(&v20, 0, 0x50uLL);
  v20 = a1;
  v21 = a2;
  *((_DWORD *)a3 + 5) = 0;
  *((_DWORD *)a3 + 9) = 0;
  v25 = *a3;
  v26 = a3[1];
  v27 = *((_QWORD *)a3 + 4);
  v22 = a4;
  v23 = a5;
  v24 = *a6;
  LODWORD(v17) = GET_USERCRIT_DISPOSITION(v10);
  HIDWORD(v17) = 1;
  if ( (_DWORD)v17 )
  {
    HIDWORD(v17) = *((_BYTE *)PtiCurrent(v11) + 1708) != 1;
    UserSessionSwitchLeaveCrit(v12);
  }
  EtwTraceBeginCallback(44LL);
  v13 = KeUserModeCallback(44LL, &v20, 80LL, Src, &v18);
  EtwTraceEndCallback(44LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v17);
  if ( v13 < 0 || v18 != 24 )
    return 0LL;
  v17 = 0LL;
  RtlCopyFromUser(&v17, Src[0], 8uLL);
  v14 = v17;
  Src[1] = v17;
  v15 = (void *)*((_QWORD *)Src[0] + 2);
  LODWORD(v17) = 0;
  RtlCopyFromUser(&v17, v15, 4uLL);
  *a6 ^= ((unsigned __int8)v17 ^ (unsigned __int8)*a6) & 0x10;
  return v14;
}
