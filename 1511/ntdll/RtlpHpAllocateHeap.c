/*
 * XREFs of RtlpHpAllocateHeap @ 0x18005A8C8
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x18005A854 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpCalculateAllocSize @ 0x18001B1D0 (RtlpHpCalculateAllocSize.c)
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x1800270C0 (RtlpHpAllocateHeapInternal.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasAppend @ 0x18005CB34 (RtlpHpExtrasAppend.c)
 *     RtlpCallInterceptRoutine @ 0x18009524C (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800F155C (RtlpLogHeapAllocateEvent.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeap(_RTL_SRWLOCK *HeapHandle, size_t a2, int a3, __int16 a4)
{
  unsigned int v4; // eax
  unsigned int v5; // edi
  int v9; // ebp
  unsigned __int64 v10; // r15
  unsigned __int64 v11; // rbx
  __int64 v13; // rax
  int v14; // r9d
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // rdi
  int v18; // r8d
  int v19; // eax
  int v20; // [rsp+80h] [rbp+8h] BYREF
  unsigned int v21; // [rsp+90h] [rbp+18h] BYREF

  v4 = 0;
  v5 = (a3 | HIDWORD(HeapHandle[2].Ptr)) & 0x93000F0B;
  v21 = 0;
  v9 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    v9 = (int)HeapHandle[4].0;
    if ( v9 )
    {
      v5 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)HeapHandle, 0, 1, (__int64)&v21) < 0 )
      {
        v10 = 0LL;
LABEL_5:
        v20 = 0;
LABEL_6:
        v11 = 0LL;
        goto LABEL_7;
      }
      v4 = v21;
    }
  }
  if ( a4 )
    v5 |= 8u;
  v10 = RtlpHpCalculateAllocSize(a2 + v4, v5);
  if ( v10 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_5;
  v13 = RtlpHpAllocateHeapInternal(HeapHandle, a2, v10, v5 & 0x13000003, &v20);
  v11 = v13;
  if ( v13 )
  {
    if ( (v5 & 0x30000F08) != 0 )
    {
      v15 = RtlpHpExtrasAppend((_DWORD)HeapHandle, v13, a2, v14, v21, v5, a4);
      v17 = v15;
      if ( v9 )
      {
        *(_BYTE *)(v15 + 2) &= 0xF0u;
        *(_BYTE *)(v15 + 2) |= v9 & 0xF;
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)v11 )
          {
            v19 = 0;
          }
          else
          {
            LOBYTE(v16) = v9 & 0xF;
            v19 = RtlSparseBitmapCtxCheckBitsInternal(v16, v11 >> 16);
          }
          v18 = v11;
          if ( !v19 )
            v18 = v11 + 16;
        }
        else
        {
          v18 = v11;
        }
        if ( (int)RtlpCallInterceptRoutine(v9, (_DWORD)HeapHandle, v18, 2, v17 + 16) < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, (PVOID)v11);
          goto LABEL_6;
        }
      }
    }
  }
LABEL_7:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(HeapHandle, v11, v10);
  return v11;
}
