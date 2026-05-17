/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800431C8
 * Callers:
 *     RtlpHpReallocMove @ 0x1800430B0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x1800507D8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x18001D100 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x18003E7CC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x180042D90 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18004F77C (RtlpHpLargeAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(__int64 a1, size_t a2, unsigned __int64 a3, unsigned int a4, int *a5)
{
  int v9; // edi
  __int64 v10; // r8
  __int64 v12; // rax

  v9 = 3;
  if ( a3 > 0x3FF0 || (v10 = RtlpHpLfhContextAllocate(a1 + 288, a2, a3, a4), v10 == -1) )
  {
    if ( a3 > 0x20000 )
    {
      if ( a3 > 0x7F000 )
        v12 = RtlpHpLargeAlloc(a1, a2, a3, a4);
      else
        v12 = (__int64)RtlpHpSegAlloc(a1, a2, a3, a4);
    }
    else
    {
      v12 = RtlpHpVsContextAllocate(a1 + 176, a2, a3, a4);
    }
    v10 = v12;
  }
  else
  {
    v9 = 2;
  }
  *a5 = v9;
  return v10;
}
