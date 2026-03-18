/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1405187CC
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400F6624 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x1401100A0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x140517374 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140517A04 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x14065114C (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x140651408 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x1406515B8 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x14065181C (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x14067CC00 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400F4A20 (RtlpValidateContextFlags.c)
 */

__int64 __fastcall RtlpSanitizeContextFlags(int *a1)
{
  __int64 result; // rax
  unsigned int *v2; // r10
  char v3; // r11

  result = RtlpValidateContextFlags(*a1, 0LL);
  if ( (int)result >= 0 && (*v2 & 0x100000) == 0 )
    result = 3221225485LL;
  if ( (_DWORD)result == -1073741811 )
  {
    if ( v3 )
    {
      *v2 = *v2 & 0xD800001F | 0x100000;
      return 0LL;
    }
  }
  return result;
}
