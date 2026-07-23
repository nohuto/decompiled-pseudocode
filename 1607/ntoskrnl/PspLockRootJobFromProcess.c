/*
 * XREFs of PspLockRootJobFromProcess @ 0x140465E00
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x140468524 (PspRemoveProcessFromJobChain.c)
 *     PspSendProcessNotificationToJobChain @ 0x1404BF458 (PspSendProcessNotificationToJobChain.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 */

__int64 __fastcall PspLockRootJobFromProcess(__int64 a1, __int64 a2, _QWORD *a3, _QWORD *a4)
{
  __int64 v8; // rcx
  __int64 result; // rax
  __int64 v10; // [rsp+40h] [rbp+8h]
  __int64 v11; // [rsp+48h] [rbp+10h]

  v10 = *(_QWORD *)(a1 + 944);
  v11 = *(_QWORD *)(v10 + 1072);
  v8 = v11;
  if ( a2 )
    --*(_WORD *)(a2 + 486);
  while ( 1 )
  {
    ExAcquireResourceExclusiveLite((PERESOURCE)(v8 + 56), 1u);
    if ( v10 == *(_QWORD *)(a1 + 944) && v11 == *(_QWORD *)(v10 + 1072) )
      break;
    PspUnlockJob(v11, a2);
    v10 = *(_QWORD *)(a1 + 944);
    v11 = *(_QWORD *)(v10 + 1072);
    v8 = v11;
    if ( a2 )
      --*(_WORD *)(a2 + 486);
  }
  *a3 = v10;
  result = v11;
  *a4 = v11;
  return result;
}
