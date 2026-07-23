/*
 * XREFs of RtlMergeBitMapsEx @ 0x140212F00
 * Callers:
 *     MiMergePageNodes @ 0x1401F1CB8 (MiMergePageNodes.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlMergeBitMapsEx(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  __int64 v5; // r9
  unsigned __int64 v6; // rdx

  v3 = *a2;
  if ( *a1 < *a2 )
    v3 = *a1;
  if ( v3 )
  {
    v5 = 0LL;
    do
    {
      v6 = a1[1];
      result = a2[1];
      if ( v3 < 0x40 )
      {
        *(_QWORD *)(v5 + v6) |= *(_QWORD *)(v5 + result) & ((1 << v3) - 1);
        v3 = 0LL;
      }
      else
      {
        v3 -= 64LL;
        *(_QWORD *)(v5 + v6) |= *(_QWORD *)(v5 + result);
        v5 += 8LL;
      }
    }
    while ( v3 );
  }
  return result;
}
