/*
 * XREFs of xxxClientRimDevCallback @ 0x140222CB8
 * Callers:
 *     RIMDevChangeDoUsermodeCallback @ 0x140222A4C (RIMDevChangeDoUsermodeCallback.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientRimDevCallback(
        int a1,
        int a2,
        int a3,
        __int64 a4,
        __int64 a5,
        __int16 a6,
        __int16 a7,
        __int64 a8,
        __int64 a9)
{
  int v9; // ebx
  __int64 result; // rax
  _QWORD v11[2]; // [rsp+38h] [rbp-40h] BYREF
  int v12; // [rsp+48h] [rbp-30h]
  int v13; // [rsp+4Ch] [rbp-2Ch]
  int v14; // [rsp+50h] [rbp-28h]
  __int16 v15; // [rsp+54h] [rbp-24h]
  __int16 v16; // [rsp+56h] [rbp-22h]
  __int64 v17; // [rsp+58h] [rbp-20h]
  __int64 v18; // [rsp+60h] [rbp-18h]
  int v19; // [rsp+80h] [rbp+8h] BYREF
  void *Src; // [rsp+98h] [rbp+20h] BYREF

  Src = 0LL;
  v19 = 0;
  v11[0] = a4;
  v11[1] = a5;
  v12 = a1;
  v13 = a2;
  v14 = a3;
  v15 = a6;
  v16 = a7;
  v17 = a8;
  v18 = a9;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  EtwTraceBeginCallback(118LL);
  v9 = KeUserModeCallback(118LL, v11, 48LL, &Src, &v19);
  EtwTraceEndCallback(118LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&a5);
  if ( v9 < 0 || v19 != 24 )
    return 0LL;
  a5 = 0LL;
  RtlCopyFromUser(&a5, Src, 8uLL);
  result = a5;
  a8 = a5;
  return result;
}
