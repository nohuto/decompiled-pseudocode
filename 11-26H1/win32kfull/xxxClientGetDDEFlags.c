/*
 * XREFs of xxxClientGetDDEFlags @ 0x1402D8270
 * Callers:
 *     ?xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z @ 0x1402CD950 (-xxxRequestAck@@YAKPEAKPEA_JPEAUtagDDECONV@@@Z.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientGetDDEFlags(__int64 a1, int a2)
{
  int v2; // ebx
  __int64 result; // rax
  __int64 v4; // [rsp+38h] [rbp-20h] BYREF
  int v5; // [rsp+40h] [rbp-18h]
  int v6; // [rsp+44h] [rbp-14h]
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  int v8; // [rsp+68h] [rbp+10h] BYREF
  __int64 v9; // [rsp+70h] [rbp+18h] BYREF
  __int64 v10; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v8 = 0;
  v6 = 0;
  v4 = a1;
  v5 = a2;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  EtwTraceBeginCallback(70LL);
  v2 = KeUserModeCallback(70LL, &v4, 16LL, &Src, &v8);
  EtwTraceEndCallback(70LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v9);
  if ( v2 < 0 || v8 != 24 )
    return 0LL;
  v9 = 0LL;
  RtlCopyFromUser(&v9, Src, 8uLL);
  result = v9;
  v10 = v9;
  return result;
}
