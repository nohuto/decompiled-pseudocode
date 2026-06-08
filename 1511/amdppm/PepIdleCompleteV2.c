/*
 * XREFs of PepIdleCompleteV2 @ 0x1C0003AF0
 * Callers:
 *     <none>
 * Callees:
 *     PepIdleComplete @ 0x1C0003B20 (PepIdleComplete.c)
 */

__int64 __fastcall PepIdleCompleteV2(ULONG_PTR a1, unsigned int a2, int a3, __int64 a4, __int64 a5)
{
  __int64 result; // rax

  if ( a3 != -1 )
    return PepIdleComplete(a1, a5);
  result = a2;
  if ( !*(_BYTE *)(a1 + 72LL * a2 + 129) )
    return PepIdleComplete(a1, a5);
  return result;
}
