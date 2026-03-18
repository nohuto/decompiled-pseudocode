/*
 * XREFs of xxxClientDrawSize @ 0x1402D7E84
 * Callers:
 *     xxxDrawWindowFrame @ 0x14025B5E8 (xxxDrawWindowFrame.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientDrawSize(__int64 a1, __int64 a2, int a3, int a4)
{
  int v4; // ebx
  _QWORD v6[2]; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+50h] [rbp-18h]
  int v8; // [rsp+54h] [rbp-14h]
  void *Src; // [rsp+70h] [rbp+8h] BYREF
  __int64 v10; // [rsp+78h] [rbp+10h] BYREF
  int v11; // [rsp+80h] [rbp+18h] BYREF

  Src = 0LL;
  v11 = 0;
  v6[0] = a1;
  v6[1] = a2;
  v7 = a3;
  v8 = a4;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  EtwTraceBeginCallback(136LL);
  v4 = KeUserModeCallback(136LL, v6, 24LL, &Src, &v11);
  EtwTraceEndCallback(136LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v10);
  if ( v4 < 0 || v11 != 24 )
    return 0LL;
  v10 = 0LL;
  RtlCopyFromUser(&v10, Src, 8uLL);
  return v10;
}
