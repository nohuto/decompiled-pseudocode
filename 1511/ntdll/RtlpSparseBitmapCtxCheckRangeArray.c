/*
 * XREFs of RtlpSparseBitmapCtxCheckRangeArray @ 0x180040074
 * Callers:
 *     RtlpSparseBitmapCtxPrepareRanges @ 0x18003FFC8 (RtlpSparseBitmapCtxPrepareRanges.c)
 * Callees:
 *     RtlpSparseBitmapCtxUnlockShared @ 0x180040240 (RtlpSparseBitmapCtxUnlockShared.c)
 *     RtlpSparseBitmapCtxLockShared @ 0x180040260 (RtlpSparseBitmapCtxLockShared.c)
 *     RtlpSparseBitmapCtxUnlockExclusive @ 0x180040358 (RtlpSparseBitmapCtxUnlockExclusive.c)
 *     RtlpSparseBitmapCtxLockExclusive @ 0x180040378 (RtlpSparseBitmapCtxLockExclusive.c)
 *     RtlSparseBitmapCtxAllocateArray @ 0x18005ADDC (RtlSparseBitmapCtxAllocateArray.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxCheckRangeArray(__int64 a1, __int64 *a2)
{
  int Array; // edi
  __int64 i; // rax

  Array = 0;
  for ( i = RtlpSparseBitmapCtxLockShared(a1, a1); !*(_QWORD *)(a1 + 8); i = RtlpSparseBitmapCtxLockShared(a1, a1) )
  {
    if ( Array < 0 )
      break;
    RtlpSparseBitmapCtxUnlockShared(a1, a1);
    RtlpSparseBitmapCtxLockExclusive(a1, a1);
    if ( !*(_QWORD *)(a1 + 8) )
      Array = RtlSparseBitmapCtxAllocateArray(a1);
    RtlpSparseBitmapCtxUnlockExclusive(a1, a1);
  }
  *a2 = i;
  return (unsigned int)Array;
}
