/*
 * XREFs of WmipHexStringToDword @ 0x14047331C
 * Callers:
 *     WmipUuidFromString @ 0x140473198 (WmipUuidFromString.c)
 * Callees:
 *     <none>
 */

bool __fastcall WmipHexStringToDword(unsigned __int16 *a1, int *a2, unsigned int a3, unsigned __int16 a4)
{
  int v5; // r10d
  unsigned int i; // ebx
  unsigned __int16 v7; // r8
  int v8; // r10d

  v5 = 0;
  for ( i = 0; i < a3; ++a1 )
  {
    v7 = *a1;
    if ( (unsigned __int16)(*a1 - 48) > 9u )
    {
      if ( (unsigned __int16)(v7 - 65) > 5u )
      {
        if ( (unsigned __int16)(v7 - 97) > 5u )
          return 0;
        v8 = 16 * v5 - 87;
      }
      else
      {
        v8 = 16 * v5 - 55;
      }
    }
    else
    {
      v8 = 16 * v5 - 48;
    }
    ++i;
    v5 = v7 + v8;
  }
  *a2 = v5;
  return !a4 || *a1 == a4;
}
