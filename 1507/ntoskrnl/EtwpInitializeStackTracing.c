/*
 * XREFs of EtwpInitializeStackTracing @ 0x140595A28
 * Callers:
 *     EtwInitializeProcessor @ 0x14059597C (EtwInitializeProcessor.c)
 * Callees:
 *     KeInitializeDpc @ 0x1400212A4 (KeInitializeDpc.c)
 *     InitializeSListHead @ 0x1400D9F4C (InitializeSListHead.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 */

__int64 __fastcall EtwpInitializeStackTracing(__int64 a1, unsigned int a2)
{
  unsigned __int64 v3; // rbx
  _DWORD *v4; // rsi
  __int64 v5; // r14
  _SLIST_ENTRY *v6; // rbp
  __int64 result; // rax

  v3 = a2;
  InitializeSListHead((PSLIST_HEADER)(a1 + 80));
  v4 = (_DWORD *)(a1 + 192);
  v5 = 12LL;
  v6 = (_SLIST_ENTRY *)(a1 + 96);
  do
  {
    *v4 = v3;
    RtlpInterlockedPushEntrySList((PSLIST_HEADER)(a1 + 80), v6);
    v6 += 7;
    v4 += 28;
    --v5;
  }
  while ( v5 );
  KeInitializeDpc((PRKDPC)(a1 + 16), (PKDEFERRED_ROUTINE)EtwpStackWalkDpc, (PVOID)v3);
  result = 640LL;
  *(_WORD *)(a1 + 18) = v3 + 640;
  *(_BYTE *)(a1 + 17) = 2;
  return result;
}
