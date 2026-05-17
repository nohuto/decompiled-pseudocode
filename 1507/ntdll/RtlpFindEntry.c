/*
 * XREFs of RtlpFindEntry @ 0x180006EA0
 * Callers:
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800EE1F8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x180029F40 (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  __int64 *v2; // rbx
  int v4; // esi
  unsigned __int64 i; // rax
  __int64 *v6; // rax
  int v7; // ecx
  __int64 result; // rax

  v2 = *(__int64 **)(a1 + 312);
  v4 = a1;
  for ( i = *((unsigned int *)v2 + 2); a2 >= i; i = *((unsigned int *)v6 + 2) )
  {
    v6 = (__int64 *)*v2;
    if ( !*v2 )
    {
      v7 = *((_DWORD *)v2 + 2) - 1;
      goto LABEL_6;
    }
    v2 = (__int64 *)*v2;
  }
  v7 = a2;
LABEL_6:
  while ( 1 )
  {
    result = RtlpHeapFindListLookupEntry(v4, (_DWORD)v2, 1, v7, a2);
    if ( result )
      break;
    v2 = (__int64 *)*v2;
    v7 = *((_DWORD *)v2 + 6);
  }
  return result;
}
