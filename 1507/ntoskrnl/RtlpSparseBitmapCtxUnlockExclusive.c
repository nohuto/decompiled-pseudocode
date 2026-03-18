/*
 * XREFs of RtlpSparseBitmapCtxUnlockExclusive @ 0x140273B8C
 * Callers:
 *     RtlpSparseBitmapCtxCheckRangeArray @ 0x140273248 (RtlpSparseBitmapCtxCheckRangeArray.c)
 *     RtlpSparseBitmapCtxUpdateBits @ 0x140273CF0 (RtlpSparseBitmapCtxUpdateBits.c)
 * Callees:
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall RtlpSparseBitmapCtxUnlockExclusive(__int64 a1, _DWORD *a2, unsigned __int8 a3)
{
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  result = *(unsigned int *)(a1 + 72);
  if ( (result & 4) == 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(a2, retaddr);
    else
      *a2 = 0;
    result = a3;
    __writecr8(a3);
  }
  return result;
}
