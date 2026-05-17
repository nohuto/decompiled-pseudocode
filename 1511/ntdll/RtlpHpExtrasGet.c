/*
 * XREFs of RtlpHpExtrasGet @ 0x180019CBC
 * Callers:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 *     RtlpHpReAllocateHeap @ 0x18001ADE8 (RtlpHpReAllocateHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 *     RtlpHpGetUserInfo @ 0x18007480C (RtlpHpGetUserInfo.c)
 *     RtlSetUserValueHeap @ 0x180074870 (RtlSetUserValueHeap.c)
 *     RtlSetUserFlagsHeap @ 0x1800E02C0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpSegAllocSize @ 0x180019D50 (RtlpHpSegAllocSize.c)
 *     RtlSparseBitmapCtxCheckBitsInternal @ 0x180040100 (RtlSparseBitmapCtxCheckBitsInternal.c)
 *     RtlpHpLargeAllocSize @ 0x18005A418 (RtlpHpLargeAllocSize.c)
 */

unsigned __int64 __fastcall RtlpHpExtrasGet(__int64 a1, unsigned __int64 a2, __int64 a3, __int64 *a4)
{
  __int64 v4; // rbx
  unsigned int v6; // ebp
  int v9; // eax
  __int64 v10; // rax
  unsigned __int64 v11; // rbx
  int v13; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0LL;
  v6 = a3;
  if ( (_WORD)a2 )
    v9 = 0;
  else
    v9 = RtlSparseBitmapCtxCheckBitsInternal(a1, a2 >> 16);
  if ( v9 )
    v10 = RtlpHpLargeAllocSize(a1, a2, v6, &v13);
  else
    v10 = RtlpHpSegAllocSize(a1, a2, a3, &v13);
  if ( a4 )
    *a4 = v10;
  if ( v13 )
  {
    v11 = v10 + a2;
    if ( (v6 & 0x10000000) != 0 )
      v11 += 16LL;
    return (v11 + 15) & 0xFFFFFFFFFFFFFFF0uLL;
  }
  return v4;
}
