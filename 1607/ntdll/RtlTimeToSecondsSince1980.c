/*
 * XREFs of RtlTimeToSecondsSince1980 @ 0x180081600
 * Callers:
 *     <none>
 * Callees:
 *     RtlExtendedMagicDivide @ 0x180081770 (RtlExtendedMagicDivide.c)
 */

BOOLEAN __cdecl RtlTimeToSecondsSince1980(PLARGE_INTEGER Time, PULONG ElapsedSeconds)
{
  __int64 v2; // rax
  _DWORD *v3; // r10

  v2 = RtlExtendedMagicDivide(Time->QuadPart, Magic10000000, 23) - SecondsToStartOf1980;
  if ( HIDWORD(v2) )
    return 0;
  *v3 = v2;
  return 1;
}
