/*
 * XREFs of CmpEtwDumpKcb @ 0x140652FB0
 * Callers:
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 */

void __fastcall CmpEtwDumpKcb(__int64 a1, char a2)
{
  void (__fastcall *v2)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD *); // rsi
  _QWORD *v5; // rax
  __int64 v6; // rcx
  void *v7; // rbx
  int v8; // [rsp+30h] [rbp-38h] BYREF
  __int64 v9; // [rsp+34h] [rbp-34h]
  int v10; // [rsp+3Ch] [rbp-2Ch]

  v2 = (void (__fastcall *)(__int64, int *, _QWORD, _QWORD, __int64, _QWORD *))CmpTraceRoutine;
  v8 = 0;
  v9 = 0LL;
  v10 = 0;
  if ( CmpTraceRoutine )
  {
    v5 = CmpConstructName(a1);
    v7 = v5;
    if ( v5 )
    {
      LOBYTE(v6) = a2;
      v2(v6, &v8, 0LL, 0LL, a1, v5);
      ExFreePoolWithTag(v7, 0x624E4D43u);
    }
  }
}
