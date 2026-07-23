/*
 * XREFs of RtlpHpTagReAllocateHeap @ 0x1800711EC
 * Callers:
 *     RtlReAllocateHeap @ 0x180023CF0 (RtlReAllocateHeap.c)
 *     RtlpHpReAllocWithExceptionProtection @ 0x18007119C (RtlpHpReAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpTagContextUpdate @ 0x180071254 (RtlpHpTagContextUpdate.c)
 */

__int64 __fastcall RtlpHpTagReAllocateHeap(unsigned __int16 *a1, unsigned __int64 a2, unsigned __int64 a3, int a4)
{
  __int64 v5; // rcx
  __int64 v6; // rdi
  unsigned __int16 v8; // [rsp+30h] [rbp-18h] BYREF
  __int64 v9; // [rsp+38h] [rbp-10h] BYREF

  v6 = RtlpReAllocateHeapInternal(a1, a4, a2, a3, &v9, &v8);
  if ( v6 && v8 && a3 != v9 )
    RtlpHpTagContextUpdate(v5, v8, v9, a3);
  return v6;
}
