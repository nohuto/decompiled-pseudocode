/*
 * XREFs of ExpAllocatePoolForNode @ 0x1406F778C
 * Callers:
 *     ExpWorkerThreadBalanceManager @ 0x1405B12E8 (ExpWorkerThreadBalanceManager.c)
 * Callees:
 *     KeQueryNodeActiveAffinity @ 0x1400DBBC4 (KeQueryNodeActiveAffinity.c)
 *     KeInitializePriQueue @ 0x14016CF90 (KeInitializePriQueue.c)
 *     memset @ 0x140195A80 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall ExpAllocatePoolForNode(__int64 a1, int a2)
{
  __int64 v2; // r14
  __int64 v4; // r8
  _QWORD *v5; // rax
  __int64 v6; // rsi
  PVOID result; // rax
  __int64 v8; // rbx
  USHORT Count; // [rsp+48h] [rbp+10h] BYREF

  v2 = a2;
  v4 = (unsigned __int8)*(_QWORD *)(a1 + 8LL * a2 + 256) >> 1;
  v5 = (_QWORD *)KeNodeBlock[v4];
  if ( v5 == (_QWORD *)((char *)&KiNodeInit + 256 * v4) )
    v5 = 0LL;
  v6 = v5[a2 + 32];
  if ( (v6 & 1) != 0 )
    v6 = 0LL;
  result = ExAllocatePoolWithTag(NonPagedPoolNx, 0x2D0uLL, 0x6C577845u);
  v8 = (__int64)result;
  if ( result )
  {
    memset(result, 0, 0x2D0uLL);
    *(_QWORD *)(v8 + 688) = a1;
    *(_DWORD *)(v8 + 708) ^= (*(_DWORD *)(v8 + 708) ^ *(_DWORD *)(v6 + 708)) & 0x7FFFFFFF;
    *(_DWORD *)(v8 + 712) = *(_DWORD *)(v6 + 712);
    *(_DWORD *)(v8 + 716) = v2;
    KeQueryNodeActiveAffinity(*(_WORD *)(a1 + 146), 0LL, &Count);
    KeInitializePriQueue(v8, Count);
    result = (PVOID)v8;
    *(_QWORD *)(a1 + 8 * v2 + 256) = v8;
  }
  return result;
}
