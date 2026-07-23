/*
 * XREFs of RtlpHpAllocateHeap @ 0x1800589AC
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180058944 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpAllocateHeapInternal @ 0x180030100 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpCalculateAllocSize @ 0x180037E3C (RtlpHpCalculateAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasAppend @ 0x18006A3C8 (RtlpHpExtrasAppend.c)
 *     RtlpCallInterceptRoutine @ 0x1800D8A44 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800EF604 (RtlpLogHeapAllocateEvent.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeap(_RTL_SRWLOCK *HeapHandle, size_t a2, int a3)
{
  unsigned int v3; // eax
  int v4; // edi
  unsigned int v5; // edi
  int v6; // ebp
  unsigned __int64 v9; // r15
  __int64 v10; // rax
  int v11; // r9d
  unsigned __int64 v12; // rbx
  __int64 v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdi
  int v17; // r8d
  int v18; // eax
  unsigned int v19; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+70h] [rbp+18h] BYREF

  v3 = 0;
  v4 = a3 | HIDWORD(HeapHandle[2].Ptr);
  v20 = 0;
  v5 = v4 & 0x93000F0B;
  v6 = 0;
  if ( (v5 & 0x1000000) == 0 )
  {
    v6 = (int)HeapHandle[4].0;
    if ( v6 )
    {
      v5 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v6, (_DWORD)HeapHandle, 0, 1, (__int64)&v20) < 0 )
      {
        v9 = 0LL;
LABEL_9:
        v12 = 0LL;
        v19 = 0;
        goto LABEL_7;
      }
      v3 = v20;
    }
  }
  v9 = RtlpHpCalculateAllocSize(a2 + v3, v5);
  if ( v9 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_9;
  v10 = RtlpHpAllocateHeapInternal(HeapHandle, a2, v9, v5 & 0x13000003, &v19);
  v12 = v10;
  if ( v10 )
  {
    if ( (v5 & 0x30000F08) != 0 )
    {
      v14 = RtlpHpExtrasAppend((_DWORD)HeapHandle, v10, a2, v11, v20, v5);
      v16 = v14;
      if ( v6 )
      {
        *(_BYTE *)(v14 + 2) &= 0xF0u;
        *(_BYTE *)(v14 + 2) |= v6 & 0xF;
        if ( (RtlpHpAppCompatFlags & 2) != 0 )
        {
          if ( (_WORD)v12 )
          {
            v18 = 0;
          }
          else
          {
            LOBYTE(v15) = v6 & 0xF;
            v18 = RtlSparseBitmapCtxCheckBitsInternal(v15, v12 >> 16);
          }
          v17 = v12;
          if ( !v18 )
            v17 = v12 + 16;
        }
        else
        {
          v17 = v12;
        }
        if ( (int)RtlpCallInterceptRoutine(v6, (_DWORD)HeapHandle, v17, 2, v16 + 16) < 0 )
        {
          RtlFreeHeap(HeapHandle, 0, (PVOID)v12);
          v12 = 0LL;
        }
      }
    }
  }
LABEL_7:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(HeapHandle, v12, v9, v19);
  return v12;
}
