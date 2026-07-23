/*
 * XREFs of AlpcpGetMessageAttributeOffset @ 0x1404B1D58
 * Callers:
 *     AlpcpCaptureAttributes @ 0x14044B6A0 (AlpcpCaptureAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AlpcpGetMessageAttributeOffset(int a1, int a2)
{
  int v2; // ecx
  __int64 result; // rax

  v2 = ~(2 * a2 - 1) & a1;
  result = 8LL;
  if ( v2 < 0 )
    result = 32LL;
  if ( (v2 & 0x40000000) != 0 )
    result += 32LL;
  if ( (v2 & 0x20000000) != 0 )
    result += 32LL;
  if ( (v2 & 0x10000000) != 0 )
    result += 24LL;
  if ( (v2 & 0x8000000) != 0 )
    result += 24LL;
  if ( (v2 & 0x2000000) != 0 )
    result += 8LL;
  return result;
}
