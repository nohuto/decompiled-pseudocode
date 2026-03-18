/*
 * XREFs of IrqArbAllocateEntry @ 0x1C0071750
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall IrqArbAllocateEntry(__int64 a1, __int64 a2)
{
  __int64 *v2; // r9
  unsigned int v3; // eax
  __int64 v4; // r8
  __int64 v5; // r10

  v2 = (__int64 *)(a2 + 32);
  v3 = 0;
  v4 = *(_QWORD *)(a2 + 32);
  v5 = 0LL;
  if ( !v4 )
    return ArbAllocateEntry(a1);
  do
  {
    if ( *(_QWORD *)(v4 + 32) == v5 )
    {
      ++v3;
    }
    else
    {
      if ( v3 > 0x800 )
        return 3221225626LL;
      v5 = *(_QWORD *)(v4 + 32);
      v3 = 1;
    }
    v2 += 10;
    v4 = *v2;
  }
  while ( *v2 );
  if ( v3 <= 0x800 )
    return ArbAllocateEntry(a1);
  return 3221225626LL;
}
