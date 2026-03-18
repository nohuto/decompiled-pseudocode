/*
 * XREFs of xxxClientDrawScrollBar @ 0x1402D7DB4
 * Callers:
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientDrawScrollBar(__int64 a1, __int64 a2, int a3)
{
  int v3; // ebx
  __int64 result; // rax
  _QWORD v5[2]; // [rsp+38h] [rbp-20h] BYREF
  int v6; // [rsp+48h] [rbp-10h]
  int v7; // [rsp+4Ch] [rbp-Ch]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  __int64 v9; // [rsp+68h] [rbp+10h] BYREF
  int v10; // [rsp+70h] [rbp+18h] BYREF
  __int64 v11; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v10 = 0;
  v7 = 0;
  v5[0] = a1;
  v5[1] = a2;
  v6 = a3;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  EtwTraceBeginCallback(137LL);
  v3 = KeUserModeCallback(137LL, v5, 24LL, &Src, &v10);
  EtwTraceEndCallback(137LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  if ( v3 < 0 || v10 != 24 )
    return 0LL;
  v9 = 0LL;
  RtlCopyFromUser(&v9, Src, 8uLL);
  result = v9;
  v11 = v9;
  return result;
}
