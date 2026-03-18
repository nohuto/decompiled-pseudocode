/*
 * XREFs of DpiCreateSpbResourceRecord @ 0x1C0173B30
 * Callers:
 *     DpOpenSpbResource @ 0x1C0173290 (DpOpenSpbResource.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DpiCreateSpbResourceRecord(ULONG_PTR a1, ULONG_PTR a2, struct _EX_RUNDOWN_REF **a3)
{
  struct _EX_RUNDOWN_REF *PoolWithTag; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  struct _EX_RUNDOWN_REF *v11; // rbx
  _QWORD *v12; // rax
  unsigned int v13; // ebx
  __int64 result; // rax
  PKEVENT NotificationEvent; // rax
  __int64 v16; // rcx
  _QWORD *v17; // rax
  struct _EX_RUNDOWN_REF **v18; // rcx

  PoolWithTag = (struct _EX_RUNDOWN_REF *)ExAllocatePoolWithTag(PagedPool, 0x48uLL, 0x74727044u);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = (_QWORD *)WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    v13 = -1073741801;
    v12[3] = DpiCreateSpbResourceRecord;
    v12[4] = ExAllocatePoolWithTag;
    v12[5] = -1073741801LL;
    WdLogEvent5_WdLowResource(v12);
    return v13;
  }
  LODWORD(PoolWithTag[2].Count) = 1953656900;
  HIDWORD(PoolWithTag[2].Ptr) = 12;
  PoolWithTag[4].Count = a1;
  PoolWithTag[5].Count = a2;
  LODWORD(PoolWithTag[6].Count) = 1;
  NotificationEvent = IoCreateNotificationEvent(0LL, (PHANDLE)&PoolWithTag[7]);
  v11[8].Count = (ULONG_PTR)NotificationEvent;
  if ( !NotificationEvent )
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdError(v16);
    v13 = -1073741670;
    v17[3] = DpiCreateSpbResourceRecord;
    v17[4] = IoCreateNotificationEvent;
    v17[5] = -1073741670LL;
    WdLogEvent5_WdError(v17);
    ExFreePoolWithTag(a3, 0);
    return v13;
  }
  ExInitializeRundownProtection(v11 + 3);
  v18 = *(struct _EX_RUNDOWN_REF ***)(a1 + 1496);
  v11->Count = a1 + 1488;
  v11[1].Count = (ULONG_PTR)v18;
  if ( *v18 != (struct _EX_RUNDOWN_REF *)(a1 + 1488) )
    __fastfail(3u);
  *v18 = v11;
  *(_QWORD *)(a1 + 1496) = v11;
  result = 0LL;
  *a3 = v11;
  return result;
}
