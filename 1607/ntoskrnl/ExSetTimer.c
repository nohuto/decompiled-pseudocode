/*
 * XREFs of ExSetTimer @ 0x1400F7AB0
 * Callers:
 *     EnableFlushTimer @ 0x1400F8C24 (EnableFlushTimer.c)
 *     WdipTimeoutCheckRoutine @ 0x1404FF634 (WdipTimeoutCheckRoutine.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 * Callees:
 *     KeSetTimer2 @ 0x1400E9190 (KeSetTimer2.c)
 *     ExpTimerSetParametersAreValid @ 0x1400EC62C (ExpTimerSetParametersAreValid.c)
 *     ExpCheckForFreedEnhancedTimer @ 0x1400F7B2C (ExpCheckForFreedEnhancedTimer.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

_BOOL8 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, __int64 a2, __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // rdx
  ULONG_PTR v9; // r9
  ULONG_PTR v11[3]; // [rsp+30h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter3; // [rsp+58h] [rbp+10h] BYREF

  if ( a2 > 0 && (*(_BYTE *)(BugCheckParameter1 + 129) & 4) != 0 )
  {
    BugCheckParameter3 = a2;
    KeBugCheckEx(0xC7u, 9uLL, 2uLL, (ULONG_PTR)&BugCheckParameter3, 0LL);
  }
  if ( a3 < 0 )
  {
    v11[0] = a3;
    KeBugCheckEx(0xC7u, 9uLL, 4uLL, (ULONG_PTR)v11, 0LL);
  }
  if ( a4 && !ExpTimerSetParametersAreValid(a4) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
