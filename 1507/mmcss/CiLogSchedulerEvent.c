/*
 * XREFs of CiLogSchedulerEvent @ 0x1C00036D0
 * Callers:
 *     CiSchedulerTaskIndexYield @ 0x1C0001FA0 (CiSchedulerTaskIndexYield.c)
 *     CiSchedulerSetPriority @ 0x1C0002400 (CiSchedulerSetPriority.c)
 *     CiSchedulerThreadFunction @ 0x1C0002810 (CiSchedulerThreadFunction.c)
 * Callees:
 *     __security_check_cookie @ 0x1C0002AA0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CiLogSchedulerEvent(__int64 a1, int a2)
{
  HANDLE ThreadProcessId; // rax
  struct _KTHREAD *v4; // rcx
  __int64 v5; // rax
  HANDLE v7; // [rsp+30h] [rbp-68h] BYREF
  HANDLE ThreadId; // [rsp+38h] [rbp-60h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+40h] [rbp-58h] BYREF
  HANDLE *p_ThreadId; // [rsp+50h] [rbp-48h]
  __int64 v11; // [rsp+58h] [rbp-40h]
  int *v12; // [rsp+60h] [rbp-38h]
  __int64 v13; // [rsp+68h] [rbp-30h]
  __int64 v14; // [rsp+70h] [rbp-28h]
  __int64 v15; // [rsp+78h] [rbp-20h]
  int v16; // [rsp+A8h] [rbp+10h] BYREF

  v16 = a2;
  ThreadProcessId = PsGetThreadProcessId(*(PETHREAD *)(a1 + 96));
  v4 = *(struct _KTHREAD **)(a1 + 96);
  v7 = ThreadProcessId;
  ThreadId = PsGetThreadId(v4);
  *(_QWORD *)&UserData.Size = 4LL;
  UserData.Ptr = (ULONGLONG)&v7;
  v11 = 4LL;
  p_ThreadId = &ThreadId;
  v12 = &v16;
  v5 = *(_QWORD *)(a1 + 72);
  v13 = 4LL;
  v14 = v5 + 104;
  v15 = 4LL;
  return EtwWrite(RegHandle, &CiSchedulerPriorityEvent, 0LL, 4u, &UserData);
}
