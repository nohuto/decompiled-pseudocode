/*
 * XREFs of EtwpInitializeStackTracing @ 0x140553288
 * Callers:
 *     EtwInitializeProcessor @ 0x1405531DC (EtwInitializeProcessor.c)
 * Callees:
 *     InitializeSListHead @ 0x140002CB0 (InitializeSListHead.c)
 *     KeInitializeDpc @ 0x14000D25C (KeInitializeDpc.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
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
  result = *(_QWORD *)(a1 + 72);
  if ( !result )
  {
    result = 640LL;
    *(_WORD *)(a1 + 18) = v3 + 640;
  }
  *(_BYTE *)(a1 + 17) = 2;
  return result;
}
