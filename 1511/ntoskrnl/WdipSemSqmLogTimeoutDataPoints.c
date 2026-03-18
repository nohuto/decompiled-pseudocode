/*
 * XREFs of WdipSemSqmLogTimeoutDataPoints @ 0x14065D00C
 * Callers:
 *     WdipSemLogTimeoutInformation @ 0x14065D350 (WdipSemLogTimeoutInformation.c)
 * Callees:
 *     WdipSemSqmAddToStream @ 0x14065CDDC (WdipSemSqmAddToStream.c)
 *     WdipSemGetGuidKey @ 0x14065D248 (WdipSemGetGuidKey.c)
 */

NTSTATUS __fastcall WdipSemSqmLogTimeoutDataPoints(__int64 a1, int a2)
{
  NTSTATUS result; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF
  int v5; // [rsp+34h] [rbp+Ch]

  v4 = 0;
  if ( !a1 )
    return -1073741811;
  result = WdipSemGetGuidKey(a1, &v4);
  if ( result >= 0 )
  {
    v5 = a2;
    return WdipSemSqmAddToStream((char *)0x41E, 2u, (__int64)&v4);
  }
  return result;
}
