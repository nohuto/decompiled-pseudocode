/*
 * XREFs of ?xxxClientCopyDDEIn2@@YAHPEAUtagINTDDEINFO@@@Z @ 0x140258FE8
 * Callers:
 *     xxxClientCopyDDEIn1 @ 0x1402591EC (xxxClientCopyDDEIn1.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

void *__fastcall xxxClientCopyDDEIn2(struct tagINTDDEINFO *a1)
{
  int v1; // ebx
  void *result; // rax
  int v3; // [rsp+30h] [rbp-98h] BYREF
  void *v4; // [rsp+38h] [rbp-90h] BYREF
  void *Src[4]; // [rsp+40h] [rbp-88h] BYREF
  _OWORD v6[4]; // [rsp+60h] [rbp-68h] BYREF
  __int64 v7; // [rsp+A0h] [rbp-28h]

  Src[0] = 0LL;
  v3 = 0;
  v6[0] = *(_OWORD *)a1;
  v6[1] = *((_OWORD *)a1 + 1);
  v6[2] = *((_OWORD *)a1 + 2);
  v6[3] = *((_OWORD *)a1 + 3);
  v7 = *((_QWORD *)a1 + 8);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v4);
  EtwTraceBeginCallback(61LL);
  v1 = KeUserModeCallback(61LL, v6, 72LL, Src, &v3);
  EtwTraceEndCallback(61LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v4);
  if ( v1 < 0 || v3 != 24 )
    return 0LL;
  v4 = 0LL;
  RtlCopyFromUser(&v4, Src[0], 8uLL);
  result = v4;
  Src[1] = v4;
  return result;
}
