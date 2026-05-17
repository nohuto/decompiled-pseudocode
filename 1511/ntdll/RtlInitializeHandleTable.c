/*
 * XREFs of RtlInitializeHandleTable @ 0x18007ECB0
 * Callers:
 *     RtlCreateAtomTableEx @ 0x180043620 (RtlCreateAtomTableEx.c)
 * Callees:
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlInitializeHandleTable(int a1, int a2, _DWORD *a3)
{
  unsigned __int8 v3; // si
  int v5; // ebx
  __int64 result; // rax

  v3 = 0;
  v5 = a2;
  if ( a2 < 0 )
  {
    v5 = a2 & 0x7FFFFFFF;
    v3 = 1;
  }
  memset(a3, 0, 0x30uLL);
  result = v3;
  *a3 = a1;
  a3[1] = v5;
  a3[2] = v3;
  return result;
}
