/*
 * XREFs of RtlpHpLargeAllocSizeInternal @ 0x18004F5F8
 * Callers:
 *     RtlpHpLargeAllocSize @ 0x18004F564 (RtlpHpLargeAllocSize.c)
 *     RtlpHpLargeAllocReport @ 0x1800FBE44 (RtlpHpLargeAllocReport.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpLargeAllocSizeInternal(__int64 a1, __int64 a2, int *a3)
{
  unsigned __int64 result; // rax

  result = (*(_QWORD *)(a2 + 32) & 0xFFFFFFFFFFFFF000uLL) - *(unsigned __int16 *)(a2 + 24);
  if ( a3 )
    *a3 = *(_BYTE *)(a2 + 32) & 1;
  return result;
}
