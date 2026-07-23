/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18004376C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180020DC0 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpExtrasGet @ 0x18002925C (RtlpHpExtrasGet.c)
 *     RtlpHpSegReAlloc @ 0x180043274 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x180043A14 (RtlpHpReallocComputeSizes.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCA4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeReAlloc @ 0x180051828 (RtlpHpLargeReAlloc.c)
 *     RtlpCallInterceptRoutine @ 0x180090F44 (RtlpCallInterceptRoutine.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(
        _DWORD *a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  unsigned int v7; // ebp
  unsigned __int64 v8; // rsi
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r14
  int v12; // r15d
  unsigned int v13; // edi
  int v14; // eax
  __int64 v15; // rdi
  unsigned __int64 v16; // rbx
  _WORD *v18; // rax
  int v19; // r8d
  unsigned __int64 v20; // r12
  int v21; // eax
  _QWORD v23[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-40h]
  unsigned __int64 v25; // [rsp+50h] [rbp-38h]

  v7 = (a2 | a1[5]) & 0x93000F0B;
  v8 = a3;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( !(unsigned int)RtlpHpReallocComputeSizes((int)a1, a3, a4, v7, v23) || v25 < a4 )
    return -1LL;
  v10 = 0LL;
  v11 = v23[0];
  if ( a6 )
  {
    v18 = (_WORD *)RtlpHpExtrasGet((__int64)a1, v8, v7, a5);
    v10 = (unsigned __int64)v18;
    if ( v18 )
      *a6 = *v18;
    else
      *a6 = 0;
  }
  else if ( a5 )
  {
    *a5 = v23[0];
  }
  if ( v11 == a4 )
    return v8;
  v12 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( a1[8] )
    {
      if ( v10 || (v10 = RtlpHpExtrasGet((__int64)a1, v8, v7, 0LL)) != 0 )
      {
        v12 = *(_BYTE *)(v10 + 2) & 0xF;
        if ( (*(_BYTE *)(v10 + 2) & 0xF) != 0 )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)v8 )
              v21 = 0;
            else
              v21 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v8 >> 16, 1LL);
            v19 = v8;
            if ( !v21 )
              v19 = v8 + 16;
          }
          else
          {
            v19 = v8;
          }
          if ( (int)RtlpCallInterceptRoutine(v12, (_DWORD)a1, v19, 5, v10 + 16) < 0 )
            return -1LL;
        }
      }
    }
  }
  v13 = v7 & 0x12000003 | 0x1000000;
  if ( (_WORD)v8 )
    v14 = 0;
  else
    v14 = RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v8 >> 16, 1LL);
  if ( v14 )
  {
    v15 = RtlpHpLargeReAlloc(a1, v13, v8, v23);
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v11 -= 16LL;
  }
  else
  {
    v15 = RtlpHpSegReAlloc(a1, v13, v8, (__int64)v23);
  }
  if ( v12 )
  {
    if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v8 = v15;
    v20 = RtlpHpExtrasGet((__int64)a1, v8, v7, 0LL);
    if ( (RtlpHpAppCompatFlags & 2) != 0
      && !((_WORD)v8 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(&RtlpHpLargeAllocationBitmap, v8 >> 16, 1LL)) )
    {
      LODWORD(v8) = v8 + 16;
    }
    RtlpCallInterceptRoutine(v12, (_DWORD)a1, v8, 6, v20 + 16);
  }
  if ( (unsigned __int64)(v15 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v16 = v24;
    if ( (v7 & 2) != 0 && v24 > v11 )
      memset((void *)(v11 + v15), 0, v24 - v11);
    if ( (v7 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v16 + v15) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v16 + v15 + 8) = 0xABABABABABABABABuLL;
    }
  }
  return v15;
}
