/*
 * XREFs of FD6DivL @ 0x1401E6950
 * Callers:
 *     RaisePower @ 0x140146BD0 (RaisePower.c)
 *     Log @ 0x140147308 (Log.c)
 *     ComputeBGRMappingTable @ 0x140304568 (ComputeBGRMappingTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FD6DivL(int a1, int a2)
{
  unsigned int v2; // r9d
  int v3; // r8d
  __int64 result; // rax

  v2 = a2;
  if ( a2 <= 0 )
  {
    v2 = -a2;
    v3 = 1;
    if ( !a2 )
      return (unsigned int)a1;
  }
  else
  {
    v3 = 0;
  }
  if ( a1 <= 0 )
  {
    a1 = -a1;
    if ( !a1 )
      return 0LL;
    v3 ^= 1u;
  }
  result = (a1 + (v2 >> 1)) / v2;
  if ( v3 )
    return (unsigned int)-(int)result;
  return result;
}
