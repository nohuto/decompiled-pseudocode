/*
 * XREFs of ObAuditInheritedHandleProcedure @ 0x1406AAF08
 * Callers:
 *     <none>
 * Callees:
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     SeAuditHandleDuplication @ 0x1406D1A54 (SeAuditHandleDuplication.c)
 */

char __fastcall ObAuditInheritedHandleProcedure(__int64 a1, volatile signed __int64 *a2, __int64 a3, _QWORD *a4)
{
  __int64 v6; // rbx
  int v7; // ebx
  volatile __int64 *v8; // rcx
  signed __int32 v10[10]; // [rsp+0h] [rbp-28h] BYREF

  v6 = ((__int64)*(unsigned int *)a2 >> 17) & 7;
  if ( (a2[1] & 0x2000000) != 0 )
    LOBYTE(v6) = v6 | 8;
  v7 = v6 & 4;
  _InterlockedExchangeAdd64(a2, 1uLL);
  v8 = (volatile __int64 *)(a1 + 48);
  _InterlockedOr(v10, 0);
  if ( *v8 )
    ExfUnblockPushLock(v8, 0LL);
  if ( v7 )
    SeAuditHandleDuplication(a3, a3, a4[1], *a4);
  return 0;
}
