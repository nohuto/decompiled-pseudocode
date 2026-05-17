/*
 * XREFs of RtlInitCodePageTable @ 0x180083AF0
 * Callers:
 *     RtlInitNlsTables @ 0x180083A80 (RtlInitNlsTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlInitCodePageTable(unsigned __int16 *a1, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int16 v3; // r9
  __int64 v4; // rax
  _WORD *v5; // rax
  __int64 result; // rax

  v2 = *a1;
  v3 = a1[v2] + *a1;
  *(_WORD *)a2 = a1[1];
  *(_WORD *)(a2 + 2) = a1[2];
  *(_WORD *)(a2 + 4) = a1[3];
  *(_WORD *)(a2 + 6) = a1[4];
  *(_WORD *)(a2 + 8) = a1[5];
  *(_WORD *)(a2 + 10) = a1[6];
  *(_QWORD *)(a2 + 14) = *(_QWORD *)(a1 + 7);
  *(_DWORD *)(a2 + 22) = *(_DWORD *)(a1 + 11);
  v4 = (__int64)&a1[v2 + 1];
  *(_QWORD *)(a2 + 32) = v4;
  if ( *(_WORD *)(v4 + 512) )
    v5 = (_WORD *)(v4 + 1026);
  else
    v5 = (_WORD *)(v4 + 514);
  *(_QWORD *)(a2 + 48) = v5;
  if ( *v5 )
  {
    *(_QWORD *)(a2 + 56) = v5 + 1;
    *(_WORD *)(a2 + 12) = 1;
  }
  else
  {
    *(_WORD *)(a2 + 12) = 0;
    *(_QWORD *)(a2 + 56) = 0LL;
  }
  result = v3;
  *(_QWORD *)(a2 + 40) = &a1[v3 + 1];
  return result;
}
