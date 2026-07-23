/*
 * XREFs of CmpEtwDumpKcb @ 0x1405FB9D4
 * Callers:
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 * Callees:
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     CmpConstructName @ 0x14051A1D8 (CmpConstructName.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, int *, _QWORD, _QWORD, __int64, __int64); // rsi
  __int64 v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  v2 = (void (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, __int64))CmpTraceRoutine;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( CmpTraceRoutine )
  {
    v5 = CmpConstructName(a1);
    v7 = (void *)v5;
    if ( v5 )
    {
      LOBYTE(v6) = a2;
      v2(v6, &v8, 0LL, 0LL, a1, v5);
      CmpFreeTransientPoolWithTag(v7, 0x624E4D43u);
    }
  }
}
