/*
 * XREFs of RtlpHpReAllocateHeap @ 0x18001ADE8
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180023D40 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpLargeReAlloc @ 0x180001850 (RtlpHpLargeReAlloc.c)
 *     RtlpHpExtrasGet @ 0x180019CBC (RtlpHpExtrasGet.c)
 *     RtlpHpSegReAlloc @ 0x18001A9C0 (RtlpHpSegReAlloc.c)
 *     RtlpHpReallocComputeSizes @ 0x18001B074 (RtlpHpReallocComputeSizes.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(
        __int64 a1,
        int a2,
        unsigned __int64 a3,
        unsigned __int64 a4,
        __int64 *a5,
        _WORD *a6)
{
  unsigned int v7; // ebp
  unsigned __int64 v8; // rdi
  __int64 v10; // rsi
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r14
  _WORD *v14; // rax
  int v15; // r12d
  int v16; // r8d
  int v17; // eax
  unsigned int v18; // esi
  int v19; // eax
  __int64 v20; // rcx
  unsigned __int64 v21; // r13
  unsigned __int64 v23; // rbx
  _QWORD v25[3]; // [rsp+30h] [rbp-58h] BYREF
  unsigned __int64 v26; // [rsp+48h] [rbp-40h]
  unsigned __int64 v27; // [rsp+50h] [rbp-38h]

  v7 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  v8 = a3;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, a3, a4, v7, v25) || v27 < a4 )
    return -1LL;
  v12 = 0LL;
  v13 = v25[0];
  if ( a6 )
  {
    v14 = (_WORD *)RtlpHpExtrasGet(a1, v8, v7, a5);
    v12 = (unsigned __int64)v14;
    if ( v14 )
      *a6 = *v14;
    else
      *a6 = 0;
  }
  else if ( a5 )
  {
    *a5 = v25[0];
  }
  if ( v13 == a4 )
    return v8;
  v15 = 0;
  if ( (v7 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      if ( v12 || (v12 = RtlpHpExtrasGet(a1, v8, v7, 0LL)) != 0 )
      {
        v15 = *(_BYTE *)(v12 + 2) & 0xF;
        if ( (*(_BYTE *)(v12 + 2) & 0xF) != 0 )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)v8 )
              v17 = 0;
            else
              v17 = RtlSparseBitmapCtxCheckBitsInternal(v11, v8 >> 16);
            v16 = v8;
            if ( !v17 )
              v16 = v8 + 16;
          }
          else
          {
            v16 = v8;
          }
          if ( (int)RtlpCallInterceptRoutine(v15, a1, v16, 5, v12 + 16) < 0 )
            return -1LL;
        }
      }
    }
  }
  v18 = v7 & 0x12000003 | 0x1000000;
  if ( (_WORD)v8 )
    v19 = 0;
  else
    v19 = RtlSparseBitmapCtxCheckBitsInternal(v11, v8 >> 16);
  if ( v19 )
  {
    v10 = RtlpHpLargeReAlloc(a1, v18, v8, (__int64)v25);
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v13 -= 16LL;
  }
  else
  {
    v10 = RtlpHpSegReAlloc(a1, v18, v8, (__int64)v25);
  }
  if ( v15 )
  {
    if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v8 = v10;
    v21 = RtlpHpExtrasGet(a1, v8, v7, 0LL);
    if ( (RtlpHpAppCompatFlags & 2) != 0 && !((_WORD)v8 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v20, v8 >> 16)) )
      LODWORD(v8) = v8 + 16;
    RtlpCallInterceptRoutine(v15, a1, v8, 6, v21 + 16);
  }
  if ( (unsigned __int64)(v10 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v23 = v26;
    if ( (v7 & 2) != 0 && v26 > v13 )
      memset((void *)(v13 + v10), 0, v26 - v13);
    if ( (v7 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v23 + v10) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v23 + v10 + 8) = 0xABABABABABABABABuLL;
    }
  }
  return v10;
}
