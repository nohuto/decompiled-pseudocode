/*
 * XREFs of ExSetTimer @ 0x1400F4ACC
 * Callers:
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 * Callees:
 *     ExpCheckForFreedEnhancedTimer @ 0x1400F4AB0 (ExpCheckForFreedEnhancedTimer.c)
 *     ExpTimerSetParametersAreValid @ 0x1400F4D44 (ExpTimerSetParametersAreValid.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

__int64 __fastcall ExSetTimer(ULONG_PTR BugCheckParameter1, signed __int64 a2, signed __int64 a3, __int64 a4)
{
  ULONG_PTR BugCheckParameter4; // r8
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
  if ( a4 && !(unsigned __int8)ExpTimerSetParametersAreValid(a4, a2, 0LL) )
    KeBugCheckEx(0xC7u, 9uLL, 1uLL, v9, BugCheckParameter4);
  ExpCheckForFreedEnhancedTimer(BugCheckParameter1);
  return KeSetTimer2(BugCheckParameter1, a2, a3, a4);
}
