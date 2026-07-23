/*
 * XREFs of RtlpHpAllocateHeapInternal @ 0x1800431B8
 * Callers:
 *     RtlpHpReallocMove @ 0x1800430A0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeap @ 0x1800507C8 (RtlpHpAllocateHeap.c)
 * Callees:
 *     RtlpHpVsContextAllocate @ 0x18001D0F0 (RtlpHpVsContextAllocate.c)
 *     RtlpHpSegAlloc @ 0x18003E7BC (RtlpHpSegAlloc.c)
 *     RtlpHpLfhContextAllocate @ 0x180042D80 (RtlpHpLfhContextAllocate.c)
 *     RtlpHpLargeAlloc @ 0x18004F76C (RtlpHpLargeAlloc.c)
 */

__int64 __fastcall RtlpHpAllocateHeapInternal(
        _RTL_SRWLOCK *BaseAddress,
        size_t Size,
        unsigned __int64 a3,
        unsigned int a4,
        int *a5)
{
  int v9; // edi
  __int64 v10; // r8
  __int64 v12; // rax

  v9 = 3;
  if ( a3 > 0x3FF0 || (v10 = RtlpHpLfhContextAllocate((__int64)&BaseAddress[36], Size, a3, a4), v10 == -1) )
  {
    if ( a3 > 0x20000 )
    {
      if ( a3 > 0x7F000 )
        v12 = RtlpHpLargeAlloc(BaseAddress);
      else
        v12 = (__int64)RtlpHpSegAlloc(BaseAddress, Size, a3, a4);
    }
    else
    {
      v12 = RtlpHpVsContextAllocate(BaseAddress + 22, Size, a3, a4);
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
