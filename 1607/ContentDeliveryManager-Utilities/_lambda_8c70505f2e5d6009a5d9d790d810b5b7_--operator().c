/*
 * XREFs of _lambda_8c70505f2e5d6009a5d9d790d810b5b7_::operator() @ 0x180008AC0
 * Callers:
 *     ?RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ @ 0x18000898C (-RecordCachedUsageUnderLock@EnabledStateManager@details@wil@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

char __fastcall lambda_8c70505f2e5d6009a5d9d790d810b5b7_::operator()(__int64 a1, int *a2)
{
  __int64 v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax
  __int64 v5; // rax
  __int64 v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  int v9; // eax
  int v10; // ecx
  char result; // al
  __int64 v12; // [rsp+10h] [rbp+10h]

  LOBYTE(v12) = 2;
  **(_QWORD **)a1 = 0LL;
  if ( (*a2 & 0x80000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x8000) == 0) )
    HIDWORD(v12) = 0;
  v2 = v12;
  LOBYTE(v12) = 6;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v2;
  if ( (*a2 & 0x100000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x10000) == 0) )
    HIDWORD(v12) = 0;
  v3 = v12;
  LOBYTE(v12) = 3;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v3;
  if ( (*a2 & 0x200000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x20000) == 0) )
    HIDWORD(v12) = 0;
  v4 = v12;
  LOBYTE(v12) = 7;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v4;
  if ( (*a2 & 0x400000) != 0 || (HIDWORD(v12) = 1, (*a2 & 0x40000) == 0) )
    HIDWORD(v12) = 0;
  v5 = v12;
  LOBYTE(v12) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v5;
  if ( (*a2 & 0x1000) != 0 )
    HIDWORD(v12) = 0;
  else
    HIDWORD(v12) = *a2 & 0xFFF;
  v6 = v12;
  LOBYTE(v12) = 4;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v6;
  if ( (*a2 & 0x1000) != 0 )
    HIDWORD(v12) = *a2 & 0xFFF;
  else
    HIDWORD(v12) = 0;
  v7 = v12;
  LOBYTE(v12) = 1;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v7;
  if ( (*a2 & 0x40000000) != 0 )
    HIDWORD(v12) = 0;
  else
    HIDWORD(v12) = ((unsigned int)*a2 >> 23) & 0x7F;
  v8 = v12;
  LOBYTE(v12) = 5;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v8;
  if ( (*a2 & 0x40000000) != 0 )
    HIDWORD(v12) = ((unsigned int)*a2 >> 23) & 0x7F;
  else
    HIDWORD(v12) = 0;
  *(_QWORD *)(*(_QWORD *)(a1 + 8) + 8LL * (**(_QWORD **)a1)++) = v12;
  v9 = *a2 ^ (*a2 ^ (16 * *a2)) & 0x80000;
  v10 = v9 ^ (v9 ^ (16 * v9)) & 0x100000;
  result = 1;
  *a2 = (v10 ^ (v10 ^ (16 * v10)) & 0x200000) & 0x403FF000 | (16 * ((v10 ^ (v10 ^ (16 * v10)) & 0x200000) & 0x40000));
  return result;
}
