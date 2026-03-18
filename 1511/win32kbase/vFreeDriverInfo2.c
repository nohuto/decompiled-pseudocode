/*
 * XREFs of vFreeDriverInfo2 @ 0x1C00BEAF0
 * Callers:
 *     <none>
 * Callees:
 *     FreeThreadBufferWithTag @ 0x1C0064B70 (FreeThreadBufferWithTag.c)
 */

__int64 __fastcall vFreeDriverInfo2(__int64 a1)
{
  __int64 result; // rax

  if ( a1 )
    return FreeThreadBufferWithTag(a1);
  return result;
}
