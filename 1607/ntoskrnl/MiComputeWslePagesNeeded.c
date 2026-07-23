/*
 * XREFs of MiComputeWslePagesNeeded @ 0x1400A04EC
 * Callers:
 *     MiConvertToLinkedWsles @ 0x1400A016C (MiConvertToLinkedWsles.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeWslePagesNeeded(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v3; // r9
  __int64 v4; // r10
  int v5; // edi
  unsigned __int64 v6; // r8
  __int64 v7; // rdx
  unsigned __int64 v8; // rax

  v2 = a2 - 1;
  v3 = 0LL;
  v4 = a1 ^ (a2 - 1);
  v5 = 4;
  v6 = 4096LL;
  do
  {
    v7 = ~(v6 - 1);
    if ( (v7 & v4) == 0 && ((v6 - 1) & a1) != 0 )
      break;
    v8 = ((v7 & (v2 + v6)) - (v7 & (v6 + a1 - 1))) / v6;
    v6 <<= 9;
    v3 += v8;
    --v5;
  }
  while ( v5 );
  return v3;
}
