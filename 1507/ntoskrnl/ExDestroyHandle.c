/*
 * XREFs of ExDestroyHandle @ 0x140505200
 * Callers:
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     RtlpFreeHandleForAtom @ 0x140504DC4 (RtlpFreeHandleForAtom.c)
 *     AlpcpFreeMessageFunction @ 0x140504E5C (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x140504F18 (PspThreadDelete.c)
 *     RtlpInsertStringAtom @ 0x14054223C (RtlpInsertStringAtom.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 * Callees:
 *     ExfUnblockPushLock @ 0x14017E9A0 (ExfUnblockPushLock.c)
 *     ExpFreeHandleTableEntry @ 0x140505270 (ExpFreeHandleTableEntry.c)
 *     ExpUpdateDebugInfo @ 0x1406F051C (ExpUpdateDebugInfo.c)
 */

__int64 __fastcall ExDestroyHandle(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned int v6; // ebp
  signed __int32 v8[10]; // [rsp+0h] [rbp-28h] BYREF

  if ( *(_QWORD *)(a1 + 96) )
    ExpUpdateDebugInfo(a1, KeGetCurrentThread(), a2, 2LL);
  v6 = (unsigned __int16)((unsigned __int64)*(unsigned int *)a3 >> 1);
  *a3 = 0LL;
  _InterlockedOr(v8, 0);
  if ( *(_QWORD *)(a1 + 48) )
    ExfUnblockPushLock((volatile __int64 *)(a1 + 48), 0LL);
  ExpFreeHandleTableEntry(a1, a2, a3);
  return v6;
}
