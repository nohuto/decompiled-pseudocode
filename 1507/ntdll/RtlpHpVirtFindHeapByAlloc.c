/*
 * XREFs of RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58
 * Callers:
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04 (RtlpHpVirtGetUserInfoHeap.c)
 *     RtlpHpVirtReAllocateHeap @ 0x1800EBA84 (RtlpHpVirtReAllocateHeap.c)
 *     RtlpHpVirtSetUserFlagsHeap @ 0x1800EBBE0 (RtlpHpVirtSetUserFlagsHeap.c)
 *     RtlpHpVirtSetUserValueHeap @ 0x1800EBC3C (RtlpHpVirtSetUserValueHeap.c)
 *     RtlpHpVirtValidateHeap @ 0x1800EBD20 (RtlpHpVirtValidateHeap.c)
 * Callees:
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 */

unsigned __int64 __fastcall RtlpHpVirtFindHeapByAlloc(__int64 a1, unsigned __int64 a2, __int64 *a3)
{
  unsigned __int64 v5; // rbx
  int v6; // eax
  __int64 v7; // rax

  v5 = a1;
  if ( (_WORD)a2 )
    v6 = 0;
  else
    v6 = RtlSparseBitmapCtxCheckBitsInternal(a1, a2 >> 16);
  if ( v6 )
  {
    v7 = RtlpHpVirtLargeTreeFind(a2, a3 != 0LL);
    if ( v7 )
      v5 = *(_QWORD *)(v7 + 32);
    if ( a3 )
      *a3 = v7;
  }
  else
  {
    if ( *(_DWORD *)(v5 + 16) == -571548178 )
      v5 = RtlpHeapKey ^ *(_QWORD *)((a2 & 0xFFFFFFFFFFF00000uLL) + 0x10) ^ ((a2 & 0xFFFFFFFFFFF00000uLL) >> 20) ^ 0xA2E64EADA2E64EADuLL;
    if ( a3 )
      *a3 = 0LL;
  }
  return v5;
}
