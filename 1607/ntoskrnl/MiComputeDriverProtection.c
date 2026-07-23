/*
 * XREFs of MiComputeDriverProtection @ 0x1405544F8
 * Callers:
 *     MiProtectSystemImage @ 0x140554204 (MiProtectSystemImage.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiComputeDriverProtection(int a1, int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a2 & 0x20000000) != 0 )
    result = 2LL;
  if ( (a2 & 0x40000000) != 0 )
    result = (unsigned int)result | 1;
  if ( a2 < 0 )
  {
    if ( a1 == 1 )
      return result & 2 | 5;
    if ( (result & 2) != 0 )
      return 6LL;
    result = 4LL;
  }
  if ( !(_DWORD)result )
    return 24LL;
  return result;
}
