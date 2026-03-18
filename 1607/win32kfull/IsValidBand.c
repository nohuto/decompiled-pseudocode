/*
 * XREFs of IsValidBand @ 0x1C011DE24
 * Callers:
 *     xxxCreateWindowEx @ 0x1C0072880 (xxxCreateWindowEx.c)
 *     _DeferWindowPosAndBand @ 0x1C00A5BBC (_DeferWindowPosAndBand.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall IsValidBand(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx
  unsigned int v3; // r8d

  result = 0LL;
  v2 = &gazbidOrder;
  v3 = 0;
  while ( *v2 != a1 )
  {
    ++v3;
    ++v2;
    if ( v3 >= 0x12 )
      return result;
  }
  return 1LL;
}
