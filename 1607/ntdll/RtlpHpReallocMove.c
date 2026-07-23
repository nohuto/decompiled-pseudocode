/*
 * XREFs of RtlpHpReallocMove @ 0x1800430A0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180043274 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x1800431B8 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x180047A60 (RtlpHpFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005172C (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasMove @ 0x180051B78 (RtlpHpExtrasMove.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

void *__fastcall RtlpHpReallocMove(void *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 HeapInternal; // rax
  void *v9; // rdi
  size_t v10; // r8
  const void *v11; // rdx
  int v13; // eax
  int v14; // eax
  size_t v15; // r15
  int v16; // eax
  signed __int32 v17[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v18; // [rsp+70h] [rbp+18h] BYREF

  HeapInternal = RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), (__int64)&v18);
  v9 = (void *)HeapInternal;
  if ( HeapInternal )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && (!(_WORD)HeapInternal
        ? (v13 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, HeapInternal >> 16, 1LL))
        : (v13 = 0),
          v13
       && (!(_WORD)a2
         ? (v14 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL))
         : (v14 = 0),
           !v14)) )
    {
      v15 = *(_QWORD *)a3;
      if ( (((unsigned int)RtlpHpAppCompatFlags >> 1) & 1) != 0 )
      {
        v15 -= 16LL;
        if ( (_WORD)a2 )
          v16 = 0;
        else
          v16 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, a2 >> 16, 1LL);
        v11 = (const void *)a2;
        if ( !v16 )
          v11 = (const void *)(a2 + 16);
      }
      else
      {
        v11 = (const void *)a2;
      }
      v10 = v15;
    }
    else
    {
      v10 = *(_QWORD *)(a3 + 24);
      v11 = (const void *)a2;
      if ( *(_QWORD *)a3 < v10 )
        v10 = *(_QWORD *)a3;
    }
    memmove(v9, v11, v10);
    if ( *(_DWORD *)(a3 + 16) )
    {
      RtlpHpExtrasMove(a2, *(_QWORD *)a3, (_DWORD)v9, *(_QWORD *)(a3 + 24), a4);
      _InterlockedOr(v17, 0);
      RtlpHpExtrasSetPresent(a1, v9, a4);
    }
    RtlpHpFreeHeap((_DWORD)a1, a2, a4 & 0x11000001, 0, 0LL);
  }
  return v9;
}
