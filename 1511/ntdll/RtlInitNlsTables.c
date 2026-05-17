/*
 * XREFs of RtlInitNlsTables @ 0x180083A80
 * Callers:
 *     LdrpInitializeNlsInfo @ 0x1800909D0 (LdrpInitializeNlsInfo.c)
 * Callees:
 *     RtlInitCodePageTable @ 0x180083AF0 (RtlInitCodePageTable.c)
 */

__int64 __fastcall RtlInitNlsTables(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 result; // rax
  __int64 v8; // rcx

  RtlInitCodePageTable(a1, a4 + 64);
  RtlInitCodePageTable(a2, a4);
  result = a3 + 4;
  v8 = (unsigned __int16)(*(_WORD *)(a3 + 2) + 1);
  *(_QWORD *)(a4 + 128) = a3 + 4;
  *(_QWORD *)(a4 + 136) = a3 + 2 + 2 * v8;
  return result;
}
