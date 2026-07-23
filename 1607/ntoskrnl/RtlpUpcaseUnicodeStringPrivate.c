/*
 * XREFs of RtlpUpcaseUnicodeStringPrivate @ 0x140132EB4
 * Callers:
 *     RtlIsNameInExpression @ 0x140081540 (RtlIsNameInExpression.c)
 *     RtlAreNamesEqual @ 0x1400893D0 (RtlAreNamesEqual.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall RtlpUpcaseUnicodeStringPrivate(__int64 a1, unsigned __int16 *a2)
{
  unsigned int v4; // eax
  PVOID PoolWithTag; // rax
  unsigned int v6; // r8d
  unsigned int v7; // r10d
  __int64 v8; // rsi
  unsigned __int16 v9; // r9
  __int16 v10; // cx

  v4 = *a2;
  *(_WORD *)(a1 + 2) = v4;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v4, 0x67727453u);
  *(_QWORD *)(a1 + 8) = PoolWithTag;
  v6 = 0;
  if ( !PoolWithTag )
    return 3221225495LL;
  v7 = *a2 >> 1;
  v8 = *(__int64 *)((char *)&NlsMbCodePageTag + 7);
  while ( v6 < v7 )
  {
    v9 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    if ( v9 < 0x61u )
    {
      v10 = *(_WORD *)(*((_QWORD *)a2 + 1) + 2LL * v6);
    }
    else if ( v9 > 0x7Au )
    {
      v10 = v9
          + *(_WORD *)(v8
                     + 2LL
                     * ((v9 & 0xF)
                      + (unsigned int)*(unsigned __int16 *)(v8
                                                          + 2LL
                                                          * (((v9 >> 4) & 0xF)
                                                           + (unsigned int)*(unsigned __int16 *)(v8
                                                                                               + 2
                                                                                               * ((unsigned __int64)v9 >> 8))))));
    }
    else
    {
      v10 = v9 - 32;
    }
    *(_WORD *)(*(_QWORD *)(a1 + 8) + 2LL * v6++) = v10;
  }
  *(_WORD *)a1 = *a2;
  return 0LL;
}
