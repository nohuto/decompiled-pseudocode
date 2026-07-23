/*
 * XREFs of RunLengthEncode @ 0x1401D1734
 * Callers:
 *     KdpReadPhysicalMemory @ 0x1406F3F6C (KdpReadPhysicalMemory.c)
 * Callees:
 *     <none>
 */

char __fastcall RunLengthEncode(_DWORD *a1, unsigned int a2)
{
  int v2; // r8d
  unsigned int v3; // edx
  _DWORD *i; // rax

  if ( a2 && ((unsigned __int8)a1 & 3) == 0 && (a2 & 3) == 0 )
  {
    v2 = 1;
    v3 = a2 >> 2;
    if ( v3 <= 1 )
      return 1;
    for ( i = a1 + 1; *i == *a1; ++i )
    {
      if ( ++v2 >= v3 )
        return 1;
    }
  }
  return 0;
}
