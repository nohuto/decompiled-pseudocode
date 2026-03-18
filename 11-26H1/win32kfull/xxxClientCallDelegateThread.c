/*
 * XREFs of xxxClientCallDelegateThread @ 0x1401D39EC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientCallDelegateThread(__int64 a1, __int64 a2, __int64 a3)
{
  int v3; // ebx
  __int64 result; // rax
  _QWORD v5[3]; // [rsp+40h] [rbp-48h] BYREF
  int v6; // [rsp+58h] [rbp-30h]
  int v7; // [rsp+5Ch] [rbp-2Ch]
  __int64 v8; // [rsp+60h] [rbp-28h]
  __int64 v9; // [rsp+68h] [rbp-20h]
  int v10; // [rsp+70h] [rbp-18h]
  __int64 v11; // [rsp+74h] [rbp-14h]
  int v12; // [rsp+7Ch] [rbp-Ch]
  int v13; // [rsp+90h] [rbp+8h] BYREF
  void *Src; // [rsp+98h] [rbp+10h] BYREF
  __int64 v15; // [rsp+A0h] [rbp+18h] BYREF
  __int64 v16; // [rsp+A8h] [rbp+20h]

  Src = 0LL;
  v13 = 0;
  v7 = 0;
  v12 = 0;
  v5[0] = a1;
  v5[1] = a3;
  v5[2] = *(_QWORD *)a2;
  v6 = *(_DWORD *)(a2 + 8);
  v8 = *(_QWORD *)(a2 + 16);
  v9 = *(_QWORD *)(a2 + 24);
  v10 = *(_DWORD *)(a2 + 32);
  v11 = *(_QWORD *)(a2 + 36);
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15);
  EtwTraceBeginCallback(50LL);
  v3 = KeUserModeCallback(50LL, v5, 64LL, &Src, &v13);
  EtwTraceEndCallback(50LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v15);
  if ( v3 < 0 || v13 != 24 )
    return 0LL;
  v15 = 0LL;
  RtlCopyFromUser(&v15, Src, 8uLL);
  result = v15;
  v16 = v15;
  return result;
}
