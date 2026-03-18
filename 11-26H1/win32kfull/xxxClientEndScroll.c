/*
 * XREFs of xxxClientEndScroll @ 0x14025BB48
 * Callers:
 *     ?xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z @ 0x14025FDB4 (-xxxDWP_DoCancelMode@@YAXPEAUtagWND@@@Z.c)
 * Callees:
 *     ??1LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x140039F00 (--1LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     ??0LeaveEnterUserCritIfAcquired@@QEAA@XZ @ 0x14003B648 (--0LeaveEnterUserCritIfAcquired@@QEAA@XZ.c)
 *     RtlCopyFromUser @ 0x1402983B8 (RtlCopyFromUser.c)
 */

__int64 __fastcall xxxClientEndScroll(__int64 a1)
{
  int v1; // ebx
  __int64 result; // rax
  _QWORD v3[4]; // [rsp+38h] [rbp-20h] BYREF
  void *Src; // [rsp+60h] [rbp+8h] BYREF
  int v5; // [rsp+68h] [rbp+10h] BYREF
  __int64 v6; // [rsp+70h] [rbp+18h] BYREF
  __int64 v7; // [rsp+78h] [rbp+20h]

  Src = 0LL;
  v5 = 0;
  v3[1] = 1LL;
  v3[0] = a1;
  LeaveEnterUserCritIfAcquired::LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6);
  EtwTraceBeginCallback(135LL);
  v1 = KeUserModeCallback(135LL, v3, 16LL, &Src, &v5);
  EtwTraceEndCallback(135LL);
  LeaveEnterUserCritIfAcquired::~LeaveEnterUserCritIfAcquired((LeaveEnterUserCritIfAcquired *)&v6);
  if ( v1 < 0 || v5 != 24 )
    return 0LL;
  v6 = 0LL;
  RtlCopyFromUser(&v6, Src, 8uLL);
  result = v6;
  v7 = v6;
  return result;
}
