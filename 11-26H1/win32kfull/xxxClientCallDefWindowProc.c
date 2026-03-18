/*
 * XREFs of xxxClientCallDefWindowProc @ 0x1401FCEE4
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientCallDefWindowProc(__int64 *a1)
{
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // [rsp+38h] [rbp-40h] BYREF
  int v4; // [rsp+40h] [rbp-38h]
  int v5; // [rsp+44h] [rbp-34h]
  __int64 v6; // [rsp+48h] [rbp-30h]
  __int64 v7; // [rsp+50h] [rbp-28h]
  int v8; // [rsp+58h] [rbp-20h]
  __int64 v9; // [rsp+5Ch] [rbp-1Ch]
  int v10; // [rsp+64h] [rbp-14h]
  int v11; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+88h] [rbp+10h] BYREF
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h]

  Src = 0LL;
  v11 = 0;
  v5 = 0;
  v10 = 0;
  v3 = *a1;
  v4 = *((_DWORD *)a1 + 2);
  v6 = a1[2];
  v7 = a1[3];
  v8 = *((_DWORD *)a1 + 8);
  v9 = *(__int64 *)((char *)a1 + 36);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  EtwTraceBeginCallback(128LL);
  v1 = KeUserModeCallback(128LL, &v3, 48LL, &Src, &v11);
  EtwTraceEndCallback(128LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v13);
  if ( v1 < 0 || v11 != 24 )
    return 0LL;
  v13 = 0LL;
  RtlCopyFromUser(&v13, Src, 8uLL);
  result = v13;
  v14 = v13;
  return result;
}
