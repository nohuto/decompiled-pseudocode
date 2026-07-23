/*
 * XREFs of RtlpHpReallocMove @ 0x180037FD0
 * Callers:
 *     RtlpHpSegReAlloc @ 0x180037EE0 (RtlpHpSegReAlloc.c)
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasMove @ 0x180058A90 (RtlpHpExtrasMove.c)
 *     RtlpHpExtrasSetPresent @ 0x18006A44C (RtlpHpExtrasSetPresent.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

void *__fastcall RtlpHpReallocMove(_RTL_SRWLOCK *a1, unsigned __int64 a2, __int64 a3, unsigned int a4)
{
  unsigned __int64 v8; // rax
  __int64 v9; // rcx
  void *v10; // rdi
  size_t v11; // r8
  const void *v12; // rdx
  int v14; // eax
  int v15; // eax
  size_t v16; // r15
  int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-58h] BYREF
  int v19; // [rsp+70h] [rbp+18h] BYREF

  v8 = RtlpHpAllocateHeapInternal(a1, *(_QWORD *)(a3 + 24), *(_QWORD *)(a3 + 32), a4, &v19);
  v10 = (void *)v8;
  if ( v8 )
  {
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && ((_WORD)v8 ? (v14 = 0) : (v14 = RtlSparseBitmapCtxCheckBitsInternal(v9, v8 >> 16)),
          v14 && ((_WORD)a2 ? (v15 = 0) : (v15 = RtlSparseBitmapCtxCheckBitsInternal(v9, a2 >> 16)), !v15)) )
    {
      v16 = *(_QWORD *)a3;
      if ( (((unsigned int)RtlpHpAppCompatFlags >> 1) & 1) != 0 )
      {
        v16 -= 16LL;
        if ( (_WORD)a2 )
          v17 = 0;
        else
          v17 = RtlSparseBitmapCtxCheckBitsInternal(v9, a2 >> 16);
        v12 = (const void *)a2;
        if ( !v17 )
          v12 = (const void *)(a2 + 16);
      }
      else
      {
        v12 = (const void *)a2;
      }
      v11 = v16;
    }
    else
    {
      v11 = *(_QWORD *)(a3 + 24);
      v12 = (const void *)a2;
      if ( *(_QWORD *)a3 < v11 )
        v11 = *(_QWORD *)a3;
    }
    memmove(v10, v12, v11);
    if ( *(_DWORD *)(a3 + 16) )
    {
      RtlpHpExtrasMove(a2, *(_QWORD *)a3, (_DWORD)v10, *(_QWORD *)(a3 + 24), a4);
      _InterlockedOr(v18, 0);
      RtlpHpExtrasSetPresent(a1, v10, a4);
    }
    RtlpHpFreeHeap(a1, a2, a4 & 0x11000001);
  }
  return v10;
}
