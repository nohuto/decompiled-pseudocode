/*
 * XREFs of EtwpQueueStackWalkApc @ 0x140260000
 * Callers:
 *     MiDeleteValidSystemPte @ 0x140038C20 (MiDeleteValidSystemPte.c)
 *     EtwpStackTraceDispatcher @ 0x1402601B0 (EtwpStackTraceDispatcher.c)
 *     EtwpStackWalkDpc @ 0x1402603B0 (EtwpStackWalkDpc.c)
 * Callees:
 *     KeInsertQueueApc @ 0x14000CF3C (KeInsertQueueApc.c)
 *     KeInitializeApc @ 0x1400215A8 (KeInitializeApc.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     KeTryToInsertQueueApc @ 0x140204508 (KeTryToInsertQueueApc.c)
 *     EtwpQueueStackWalkDpc @ 0x14026015C (EtwpQueueStackWalkDpc.c)
 */

__int64 __fastcall EtwpQueueStackWalkApc(__int64 a1, unsigned __int8 a2, unsigned int a3, unsigned int *a4)
{
  __int64 v5; // r15
  __int64 result; // rax
  char *v9; // rdi
  unsigned int v10; // esi
  _SLIST_ENTRY *v11; // rbp
  char inserted; // al

  v5 = a3;
  result = (__int64)KeGetCurrentThread();
  v9 = (char *)KeGetCurrentPrcb()->EtwSupport + 1104;
  if ( a1 == result )
  {
    result = *(_DWORD *)(*(_QWORD *)(a1 + 544) + 616LL) + ((*(_DWORD *)(*(_QWORD *)(a1 + 544) + 440LL) >> 3) & 1u);
    if ( !(_DWORD)result && !*(_BYTE *)(a1 + 644) )
    {
      v10 = (HIWORD(a3) & 7) + 24;
      if ( !_interlockedbittestandset((volatile signed __int32 *)(a1 + 120), v10) )
      {
        if ( (*(_DWORD *)(a1 + 116) & 0x4000) == 0 )
          goto LABEL_13;
        result = (__int64)RtlpInterlockedPopEntrySList((PSLIST_HEADER)v9 + 5);
        v11 = (_SLIST_ENTRY *)result;
        if ( !result )
          goto LABEL_13;
        KeInitializeApc(result, a1, 0, (__int64)EtwpStackWalkApc, 0LL, (__int64)EtwpStackWalkApc, 0, v5);
        if ( a2 <= 2u )
          inserted = KeInsertQueueApc((__int64)v11, *a4, a4[1], 0);
        else
          inserted = KeTryToInsertQueueApc((__int64)v11);
        if ( !inserted )
        {
          result = (__int64)RtlpInterlockedPushEntrySList((PSLIST_HEADER)v9 + 5, v11);
          if ( a2 > 2u )
            result = EtwpQueueStackWalkDpc(a1, (unsigned int)v5, a4);
LABEL_13:
          _interlockedbittestandreset((volatile signed __int32 *)(a1 + 120), v10);
          return result;
        }
        _InterlockedIncrement((volatile signed __int32 *)v9 + 360);
        result = *((unsigned int *)v9 + 360);
        if ( (int)result > *((_DWORD *)v9 + 361) )
          *((_DWORD *)v9 + 361) = result;
      }
    }
  }
  return result;
}
