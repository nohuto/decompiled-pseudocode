/*
 * XREFs of RtlpFindEntry @ 0x180057470
 * Callers:
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpHeapFindListLookupEntry @ 0x1800574EC (RtlpHeapFindListLookupEntry.c)
 */

__int64 __fastcall RtlpFindEntry(__int64 a1, unsigned __int64 a2)
{
  int v3; // esi
  __int64 *v4; // rdx
  unsigned __int64 i; // rax
  __int64 *v6; // rax
  int v7; // ecx
  __int64 *v8; // rdi
  int j; // r9d
  __int64 result; // rax

  v3 = a1;
  v4 = *(__int64 **)(a1 + 312);
  for ( i = *((unsigned int *)v4 + 2); ; i = *((unsigned int *)v6 + 2) )
  {
    if ( a2 < i )
    {
      v7 = a2;
      goto LABEL_6;
    }
    v6 = (__int64 *)*v4;
    if ( !*v4 )
      break;
    v4 = (__int64 *)*v4;
  }
  v7 = *((_DWORD *)v4 + 2) - 1;
LABEL_6:
  v8 = v4;
  for ( j = v7; ; j = *((_DWORD *)v8 + 6) )
  {
    result = RtlpHeapFindListLookupEntry(v3, (_DWORD)v4, 1, j, a2);
    if ( result )
      break;
    v8 = (__int64 *)*v8;
    LODWORD(v4) = (_DWORD)v8;
  }
  return result;
}
