/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1403F035C
 * Callers:
 *     KiRaiseException @ 0x140022668 (KiRaiseException.c)
 *     KiContinuePreviousModeUser @ 0x14002B108 (KiContinuePreviousModeUser.c)
 *     PspSetContextThreadInternal @ 0x1403EFC88 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1403EFE2C (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x14061BE54 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x14061C110 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x14061C2C0 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x14061C524 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x14063E6F8 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x14002B50C (RtlpValidateContextFlags.c)
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
