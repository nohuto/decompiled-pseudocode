/*
 * XREFs of RtlpHpReAllocateHeap @ 0x180037B9C
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x18002DA50 (RtlpReAllocateHeapInternal.c)
 * Callees:
 *     RtlpHpReallocComputeSizes @ 0x180037CFC (RtlpHpReallocComputeSizes.c)
 *     RtlpHpSegReAlloc @ 0x180037EE0 (RtlpHpSegReAlloc.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasGet @ 0x1800582D4 (RtlpHpExtrasGet.c)
 *     RtlpHpLargeReAlloc @ 0x180058360 (RtlpHpLargeReAlloc.c)
 *     memset @ 0x180098540 (memset.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 */

__int64 __fastcall RtlpHpReAllocateHeap(__int64 a1, int a2, unsigned __int64 a3, unsigned __int64 a4)
{
  unsigned int v5; // esi
  unsigned __int64 v6; // rdi
  __int64 v8; // rcx
  unsigned __int64 v9; // r14
  int v10; // r15d
  unsigned int v11; // ebx
  int v12; // eax
  __int64 v13; // rbx
  unsigned __int64 v14; // rdi
  __int64 v16; // rax
  __int64 v17; // rbx
  int v18; // r8d
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // r13
  _QWORD v23[3]; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-30h]
  unsigned __int64 v25; // [rsp+50h] [rbp-28h]

  v5 = (a2 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  v6 = a3;
  if ( a4 > 0x7FFFFFFFFFFFFFFFLL )
    return 0LL;
  if ( !(unsigned int)RtlpHpReallocComputeSizes(a1, a3, a4, v5, v23) || v25 < a4 )
    return -1LL;
  v9 = v23[0];
  if ( v23[0] == a4 )
    return v6;
  v10 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    if ( *(_DWORD *)(a1 + 32) )
    {
      v16 = RtlpHpExtrasGet(a1, v6, v5);
      v17 = v16;
      if ( v16 )
      {
        v10 = *(_BYTE *)(v16 + 2) & 0xF;
        if ( (*(_BYTE *)(v16 + 2) & 0xF) != 0 )
        {
          if ( (RtlpHpAppCompatFlags & 2) != 0 )
          {
            if ( (_WORD)v6 )
              v19 = 0;
            else
              v19 = RtlSparseBitmapCtxCheckBitsInternal(v8, v6 >> 16);
            v18 = v6;
            if ( !v19 )
              v18 = v6 + 16;
          }
          else
          {
            v18 = v6;
          }
          if ( (int)RtlpCallInterceptRoutine(v10, a1, v18, 5, v17 + 16) < 0 )
            return -1LL;
        }
      }
    }
  }
  v11 = v5 & 0x12000003 | 0x1000000;
  if ( (_WORD)v6 )
    v12 = 0;
  else
    v12 = RtlSparseBitmapCtxCheckBitsInternal(v8, v6 >> 16);
  if ( v12 )
  {
    v13 = RtlpHpLargeReAlloc(a1, v11, v6, v23);
    if ( (RtlpHpAppCompatFlags & 2) != 0 )
      v9 -= 16LL;
  }
  else
  {
    v13 = RtlpHpSegReAlloc(a1, v11, v6, v23);
  }
  if ( v10 )
  {
    if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
      v6 = v13;
    v21 = RtlpHpExtrasGet(a1, v6, v5);
    if ( (RtlpHpAppCompatFlags & 2) != 0 && !((_WORD)v6 ? 0 : RtlSparseBitmapCtxCheckBitsInternal(v20, v6 >> 16)) )
      LODWORD(v6) = v6 + 16;
    RtlpCallInterceptRoutine(v10, a1, v6, 6, v21 + 16);
  }
  if ( (unsigned __int64)(v13 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    v14 = v24;
    if ( (v5 & 2) != 0 && v24 > v9 )
      memset((void *)(v9 + v13), 0, v24 - v9);
    if ( (v5 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v14 + v13) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v14 + v13 + 8) = 0xABABABABABABABABuLL;
    }
  }
  return v13;
}
