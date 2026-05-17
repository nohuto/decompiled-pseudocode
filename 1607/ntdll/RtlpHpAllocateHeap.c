/*
 * XREFs of RtlpHpAllocateHeap @ 0x1800507D8
 * Callers:
 *     RtlpHpMetadataAlloc @ 0x180050764 (RtlpHpMetadataAlloc.c)
 * Callees:
 *     RtlpHpAllocateHeapInternal @ 0x1800431C8 (RtlpHpAllocateHeapInternal.c)
 *     RtlpHpCalculateAllocSize @ 0x180043BA8 (RtlpHpCalculateAllocSize.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x18004FCB4 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpExtrasSetPresent @ 0x18005173C (RtlpHpExtrasSetPresent.c)
 *     RtlpCallInterceptRoutine @ 0x180090F54 (RtlpCallInterceptRoutine.c)
 *     RtlpLogHeapAllocateEvent @ 0x1800F9064 (RtlpLogHeapAllocateEvent.c)
 */

unsigned __int64 __fastcall RtlpHpAllocateHeap(__int64 a1, size_t a2, int a3, __int16 a4)
{
  unsigned __int64 v4; // rsi
  unsigned int v5; // eax
  unsigned int v6; // edi
  int v10; // r15d
  unsigned __int64 v11; // r12
  unsigned __int64 v12; // rbx
  unsigned __int64 v14; // rcx
  unsigned __int64 v15; // rsi
  int v16; // r8d
  int v17; // eax
  signed __int32 v18[8]; // [rsp+0h] [rbp-68h] BYREF
  int v19; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v20; // [rsp+80h] [rbp+18h] BYREF

  v4 = 0LL;
  v5 = 0;
  v6 = (a3 | *(_DWORD *)(a1 + 20)) & 0x93000F0B;
  v20 = 0;
  v10 = 0;
  if ( (v6 & 0x1000000) == 0 )
  {
    v10 = *(_DWORD *)(a1 + 32);
    if ( v10 )
    {
      v6 |= 8u;
      if ( (int)RtlpCallInterceptRoutine(v10, a1, 0, 1, (__int64)&v20) < 0 )
      {
        v11 = 0LL;
LABEL_13:
        v12 = 0LL;
        v19 = 0;
        goto LABEL_8;
      }
      v5 = v20;
    }
  }
  if ( a4 )
    v6 |= 8u;
  v11 = RtlpHpCalculateAllocSize(a2 + v5, v6);
  if ( v11 < a2 || a2 > 0x7FFFFFFFFFFFFFFFLL )
    goto LABEL_13;
  v12 = RtlpHpAllocateHeapInternal(a1, a2, v11, v6 & 0x13000003, &v19);
  if ( v12 && (v6 & 0x30000F08) != 0 )
  {
    v14 = v20;
    if ( (v6 & 0x10000000) != 0 )
    {
      *(_QWORD *)(v12 + a2) = 0xABABABABABABABABuLL;
      *(_QWORD *)(v12 + a2 + 8) = 0xABABABABABABABABuLL;
    }
    if ( (v6 & 0x20000F08) != 0 )
    {
      v15 = v12 + a2;
      if ( (v6 & 0x10000000) != 0 )
        v15 += 16LL;
      v4 = (v15 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
      *(_QWORD *)v4 = 0LL;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_BYTE *)(v4 + 2) &= 0xFu;
      *(_WORD *)v4 = a4;
      *(_BYTE *)(v4 + 2) |= 16 * (BYTE1(v6) & 0xFE);
      *(_BYTE *)(v4 + 3) = v14 >> 4;
      _InterlockedOr(v18, 0);
      RtlpHpExtrasSetPresent(a1, v12, v6);
    }
    if ( v10 )
    {
      *(_BYTE *)(v4 + 2) &= 0xF0u;
      *(_BYTE *)(v4 + 2) |= v10 & 0xF;
      if ( (RtlpHpAppCompatFlags & 2) != 0 )
      {
        if ( (_WORD)v12 )
          v17 = 0;
        else
          v17 = RtlSparseBitmapCtxCheckBitsInternal((__int64)&RtlpHpLargeAllocationBitmap, v12 >> 16, 1uLL, 1);
        v16 = v12;
        if ( !v17 )
          v16 = v12 + 16;
      }
      else
      {
        v16 = v12;
      }
      if ( (int)RtlpCallInterceptRoutine(v10, a1, v16, 2, v4 + 16) < 0 )
      {
        RtlFreeHeap(a1, 0, v12);
        v12 = 0LL;
      }
    }
  }
LABEL_8:
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapAllocateEvent(a1, v12, v11);
  return v12;
}
