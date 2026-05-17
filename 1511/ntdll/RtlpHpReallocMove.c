/*
 * XREFs of RtlpHpReallocMove @ 0x18001AAB0
 * Callers:
 *     RtlpHpLargeReAlloc @ 0x180001850 (RtlpHpLargeReAlloc.c)
 *     RtlpHpSegReAlloc @ 0x18001A9C0 (RtlpHpSegReAlloc.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005C9DC (RtlpHpExtrasSetPresent.c)
 *     RtlpHpExtrasMove @ 0x180074AB0 (RtlpHpExtrasMove.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

void *__fastcall RtlpHpReallocMove(__int64 a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 HeapInternal; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  int v11; // eax
  int v12; // eax
  size_t v13; // r14
  const void *v14; // rdx
  int v15; // eax
  size_t v16; // r8
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  __int64 v19; // [rsp+70h] [rbp+18h] BYREF

  HeapInternal = RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32), a4, (__int64)&v19);
  v10 = (void *)HeapInternal;
  if ( HeapInternal )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && ((_WORD)HeapInternal ? (v11 = 0) : (v11 = RtlSparseBitmapCtxCheckBitsInternal(v9, HeapInternal >> 16)),
          v11 && ((_WORD)a2 ? (v12 = 0) : (v12 = RtlSparseBitmapCtxCheckBitsInternal(v9, a2 >> 16)), !v12)) )
    {
      v13 = *(_QWORD *)a3;
      if ( (((unsigned int)RtlpHpAppCompatFlags >> 1) & 1) != 0 )
      {
        v13 -= 16LL;
        if ( (_WORD)a2 )
          v15 = 0;
        else
          v15 = RtlSparseBitmapCtxCheckBitsInternal(v9, a2 >> 16);
        v14 = (const void *)a2;
        if ( !v15 )
          v14 = (const void *)(a2 + 16);
      }
      else
      {
        v14 = (const void *)a2;
      }
      v16 = v13;
    }
    else
    {
      v16 = *(_QWORD *)(a3 + 24);
      v14 = (const void *)a2;
      if ( *(_QWORD *)a3 < v16 )
        v16 = *(_QWORD *)a3;
    }
    memmove(v10, v14, v16);
    if ( *(_DWORD *)(a3 + 16) )
    {
      RtlpHpExtrasMove(a2, *(_QWORD *)a3, (_DWORD)v10, *(_QWORD *)(a3 + 24), a4);
      _InterlockedOr(v18, 0);
      RtlpHpExtrasSetPresent(a1, v10, a4);
    }
    RtlpHpFreeHeap(a1, a2, a4 & 0x11000001, 0, 0LL);
  }
  return v10;
}
