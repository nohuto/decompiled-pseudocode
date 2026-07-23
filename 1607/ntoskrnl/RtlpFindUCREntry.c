/*
 * XREFs of RtlpFindUCREntry @ 0x140094870
 * Callers:
 *     RtlpFindAndCommitPages @ 0x140094574 (RtlpFindAndCommitPages.c)
 *     RtlpInsertUCRBlock @ 0x1400947F0 (RtlpInsertUCRBlock.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpHeapFindListLookupEntry @ 0x140094344 (RtlpHeapFindListLookupEntry.c)
 *     RtlpHeapHandleError @ 0x140218708 (RtlpHeapHandleError.c)
 */

_QWORD *__fastcall RtlpFindUCREntry(__int64 a1, unsigned __int64 a2)
{
  __int64 v4; // rdx
  _QWORD *v5; // rcx
  _QWORD *result; // rax
  unsigned __int64 v7; // rax
  unsigned __int64 v8; // rcx
  __int64 v9; // rax

  if ( RtlpHeapErrorHandlerThreshold >= 1 && ((a2 + 4095) & 0xFFFFFFFFFFFFF000uLL) != a2 )
  {
    DbgPrint("(ROUND_UP_TO_POWER2(Size, PAGE_SIZE) == Size)", a2, a2);
    RtlpHeapHandleError();
  }
  v4 = *(_QWORD *)(a1 + 320);
  if ( v4 )
  {
    v7 = *(unsigned int *)(v4 + 8);
    v8 = a2 >> 12;
    while ( v8 >= v7 )
    {
      v9 = *(_QWORD *)v4;
      if ( !*(_QWORD *)v4 )
      {
        LODWORD(v8) = *(_DWORD *)(v4 + 8) - 1;
        return RtlpHeapFindListLookupEntry(a1, v4, 0, (unsigned int)v8, a2);
      }
      v4 = *(_QWORD *)v4;
      v7 = *(unsigned int *)(v9 + 8);
    }
    return RtlpHeapFindListLookupEntry(a1, v4, 0, (unsigned int)v8, a2);
  }
  else
  {
    v5 = (_QWORD *)(a1 + 240);
    for ( result = (_QWORD *)*v5; v5 != result; result = (_QWORD *)*result )
    {
      if ( result[5] >= a2 )
        return result;
    }
    return v5;
  }
}
