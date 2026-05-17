/*
 * XREFs of RtlpHpExtrasGet @ 0x1800582D4
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpReAllocateHeap @ 0x180037B9C (RtlpHpReAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180038098 (RtlpHpFreeHeap.c)
 *     RtlpGetUserInfoHeapInternal @ 0x180057D00 (RtlpGetUserInfoHeapInternal.c)
 *     RtlpSetUserValueHeapInternal @ 0x180058098 (RtlpSetUserValueHeapInternal.c)
 *     RtlpSetUserFlagsHeapInternal @ 0x1800DA634 (RtlpSetUserFlagsHeapInternal.c)
 * Callees:
 *     RtlpHpSegAllocSize @ 0x180036EDC (RtlpHpSegAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x1800550CC (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSize @ 0x180058520 (RtlpHpLargeAllocSize.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, __int64 a3)
{
  __int64 v3; // rbx
  unsigned int v4; // esi
  int v7; // eax
  __int64 v8; // rax
  unsigned __int64 v9; // rbx
  int v11; // [rsp+38h] [rbp+10h] BYREF

  v3 = 0LL;
  v4 = a3;
  if ( (_WORD)a2 )
    v7 = 0;
  else
    v7 = RtlSparseBitmapCtxCheckBitsInternal(a1, a2 >> 16);
  if ( v7 )
    v8 = RtlpHpLargeAllocSize(a1, a2, v4, &v11);
  else
    v8 = RtlpHpSegAllocSize(a1, a2, a3, (__int64)&v11);
  if ( v11 )
  {
    v9 = v8 + a2;
    if ( (v4 & 0x10000000) != 0 )
      v9 += 16LL;
    return (v9 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  return v3;
}
