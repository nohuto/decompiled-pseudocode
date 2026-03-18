/*
 * XREFs of HvlLogGuestCrashInformation @ 0x1401E5218
 * Callers:
 *     KeBugCheck2 @ 0x140201994 (KeBugCheck2.c)
 * Callees:
 *     HvlpGetRegister64 @ 0x1401F03C0 (HvlpGetRegister64.c)
 *     HvlpSetRegister64 @ 0x1401F0464 (HvlpSetRegister64.c)
 */

_UNKNOWN **__fastcall HvlLogGuestCrashInformation(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  _UNKNOWN **result; // rax
  __int64 v10[3]; // [rsp+20h] [rbp-18h] BYREF
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  result = &retaddr;
  if ( (HvlEnlightenments & 0x4000) != 0 )
  {
    HvlpGetRegister64(533LL, v10);
    result = (_UNKNOWN **)0x8000000000000000LL;
    if ( v10[0] < 0 )
    {
      HvlpSetRegister64(528LL, a1);
      HvlpSetRegister64(529LL, a2);
      HvlpSetRegister64(530LL, a3);
      HvlpSetRegister64(531LL, a4);
      HvlpSetRegister64(532LL, a5);
      return (_UNKNOWN **)HvlpSetRegister64(533LL, v10[0]);
    }
  }
  return result;
}
