/*
 * XREFs of RtlpHpVirtAllocateHeap @ 0x1800EAA94
 * Callers:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpHpAllocWithExceptionProtection @ 0x1800300C0 (RtlpHpAllocWithExceptionProtection.c)
 * Callees:
 *     RtlpAllocateHeapInternal @ 0x18002ED90 (RtlpAllocateHeapInternal.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpVirtFreeHeap @ 0x1800EAC08 (RtlpHpVirtFreeHeap.c)
 *     RtlpHpVirtGetProcessHeap @ 0x1800EAC9C (RtlpHpVirtGetProcessHeap.c)
 *     RtlpHpVirtLargeTreeInsert @ 0x1800EB5F8 (RtlpHpVirtLargeTreeInsert.c)
 */

unsigned __int64 __fastcall RtlpHpVirtAllocateHeap(_DWORD *BaseAddress, unsigned __int64 a2, unsigned int a3)
{
  _DWORD *ProcessHeap; // rdi
  unsigned __int64 HeapInternal; // rax
  __int64 v8; // rcx
  unsigned __int64 v9; // rbx
  int v10; // eax
  unsigned __int64 v11; // rsi

  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
  {
    ProcessHeap = (_DWORD *)RtlpHpVirtGetProcessHeap(0LL);
    if ( !ProcessHeap )
      ProcessHeap = BaseAddress;
  }
  else
  {
    ProcessHeap = BaseAddress;
  }
  HeapInternal = RtlpAllocateHeapInternal(ProcessHeap, a2, a3);
  v9 = HeapInternal;
  if ( ProcessHeap == BaseAddress || !HeapInternal )
  {
    v11 = HeapInternal;
    v9 = 0LL;
  }
  else
  {
    if ( (_WORD)HeapInternal )
      v10 = 0;
    else
      v10 = RtlSparseBitmapCtxCheckBitsInternal(v8, HeapInternal >> 16);
    if ( !v10 || (unsigned int)RtlpHpVirtLargeTreeInsert(v9, ProcessHeap) )
      return v9;
    v11 = 0LL;
  }
  if ( v9 )
    RtlpHpVirtFreeHeap(ProcessHeap, v9, a3);
  return v11;
}
