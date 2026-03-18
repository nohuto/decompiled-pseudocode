/*
 * XREFs of RtlFindLeastSignificantBit @ 0x1400E3090
 * Callers:
 *     KiMaskToLength @ 0x1403A7698 (KiMaskToLength.c)
 * Callees:
 *     <none>
 */

CCHAR __stdcall RtlFindLeastSignificantBit(ULONGLONG Set)
{
  bool v1; // zf
  __int64 v2; // r8
  CCHAR result; // al

  v1 = !_BitScanForward64((unsigned __int64 *)&v2, Set);
  result = -1;
  if ( !v1 )
    return v2;
  return result;
}
