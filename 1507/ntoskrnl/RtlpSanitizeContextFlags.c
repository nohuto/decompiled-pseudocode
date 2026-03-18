/*
 * XREFs of RtlpSanitizeContextFlags @ 0x140450724
 * Callers:
 *     KiContinuePreviousModeUser @ 0x140020448 (KiContinuePreviousModeUser.c)
 *     KiRaiseException @ 0x140124BE0 (KiRaiseException.c)
 *     PspSetContextThreadInternal @ 0x14044FFEC (PspSetContextThreadInternal.c)
 *     PspGetContextThreadInternal @ 0x140450184 (PspGetContextThreadInternal.c)
 *     KeCopyContextFromUch @ 0x14069A9D8 (KeCopyContextFromUch.c)
 *     KeCopyContextFromUmsContext @ 0x14069AC94 (KeCopyContextFromUmsContext.c)
 *     KeCopyContextToUch @ 0x14069AE44 (KeCopyContextToUch.c)
 *     KeCopyContextToUmsContext @ 0x14069B0A8 (KeCopyContextToUmsContext.c)
 *     NtCreateThread @ 0x1406BF114 (NtCreateThread.c)
 * Callees:
 *     RtlpValidateContextFlags @ 0x140020858 (RtlpValidateContextFlags.c)
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
