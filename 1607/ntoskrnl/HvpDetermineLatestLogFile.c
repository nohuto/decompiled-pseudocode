/*
 * XREFs of HvpDetermineLatestLogFile @ 0x140612A70
 * Callers:
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall HvpDetermineLatestLogFile(unsigned int *a1)
{
  unsigned int v1; // edx
  unsigned int v2; // eax
  unsigned int v3; // ecx
  unsigned int v4; // eax
  unsigned int v5; // edx

  v1 = *a1;
  v2 = a1[1];
  v3 = 0;
  if ( v1 >= v2 )
  {
    v4 = v1 - v2;
    v5 = 0;
  }
  else
  {
    v4 = v2 - v1;
    v5 = 1;
  }
  if ( v4 <= 0x7FFFFFFF )
    return v5;
  LOBYTE(v3) = v5 == 0;
  return v3;
}
