/*
 * XREFs of CmpEtwDumpKcb @ 0x1405DDA84
 * Callers:
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1403F99D0 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
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
