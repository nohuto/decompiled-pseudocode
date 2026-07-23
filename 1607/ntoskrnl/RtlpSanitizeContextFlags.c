/*
 * XREFs of RtlpSanitizeContextFlags @ 0x1404FBBBC
 * Callers:
 *     KiContinuePreviousModeUser @ 0x1400F4474 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140110604 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x1404FA764 (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x1404FADF4 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x140651230 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x1406514EC (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x14065169C (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x140651900 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x14067CCE4 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x1400F2870 (RtlpValidateContextFlags.c)
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
