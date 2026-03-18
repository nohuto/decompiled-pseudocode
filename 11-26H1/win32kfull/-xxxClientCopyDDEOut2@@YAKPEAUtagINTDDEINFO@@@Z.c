/*
 * XREFs of ?xxxClientCopyDDEOut2@@YAKPEAUtagINTDDEINFO@@@Z @ 0x1402D4D2C
 * Callers:
 *     xxxClientCopyDDEOut1 @ 0x14026AF44 (xxxClientCopyDDEOut1.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCopyDDEOut2(struct tagINTDDEINFO *a1)
{
  int v2; // ebx
  void *result; // rax
  int v4; // [rsp+30h] [rbp-98h] BYREF
  void *v5; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  __int128 v7; // [rsp+60h] [rbp-68h] BYREF
  __int128 v8; // [rsp+70h] [rbp-58h]
  __int128 v9; // [rsp+80h] [rbp-48h]
  __int128 v10; // [rsp+90h] [rbp-38h]
  __int64 v11; // [rsp+A0h] [rbp-28h]

  Src[0] = 0LL;
  v4 = 0;
  v7 = *(_OWORD *)a1;
  v8 = *((_OWORD *)a1 + 1);
  v9 = *((_OWORD *)a1 + 2);
  v10 = *((_OWORD *)a1 + 3);
  v11 = *((_QWORD *)a1 + 8);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  EtwTraceBeginCallback(63LL);
  v2 = KeUserModeCallback(63LL, &v7, 72LL, Src, &v4);
  EtwTraceEndCallback(63LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  *((_QWORD *)a1 + 3) = *((_QWORD *)&v8 + 1);
  if ( v2 < 0 || v4 != 24 )
    return 0LL;
  v5 = 0LL;
  RtlCopyFromUser(&v5, Src[0], 8uLL);
  result = v5;
  Src[1] = v5;
  return result;
}
