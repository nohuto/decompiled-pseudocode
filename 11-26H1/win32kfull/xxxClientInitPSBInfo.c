/*
 * XREFs of xxxClientInitPSBInfo @ 0x1402D84DC
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientInitPSBInfo(__int64 a1)
{
  int v1; // ebx
  int v3; // [rsp+50h] [rbp+8h] BYREF
  void *Src; // [rsp+58h] [rbp+10h] BYREF
  __int64 v5; // [rsp+60h] [rbp+18h] BYREF
  __int64 v6; // [rsp+68h] [rbp+20h] BYREF

  Src = 0LL;
  v3 = 0;
  v6 = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  EtwTraceBeginCallback(133LL);
  v1 = KeUserModeCallback(133LL, &v6, 8LL, &Src, &v3);
  EtwTraceEndCallback(133LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v5);
  if ( v1 < 0 || v3 != 24 )
    return 0LL;
  v5 = 0LL;
  RtlCopyFromUser(&v5, Src, 8uLL);
  return v5;
}
