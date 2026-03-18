/*
 * XREFs of ComputeByteOffset @ 0x1C00F6D10
 * Callers:
 *     SetupAAHeader @ 0x1C00F649C (SetupAAHeader.c)
 *     CheckBMPNeedFixup @ 0x1C00F6D5C (CheckBMPNeedFixup.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ComputeByteOffset(unsigned int a1, int a2, _BYTE *a3)
{
  char v3; // al
  unsigned int v4; // ecx
  unsigned int v5; // ecx
  unsigned int v6; // ecx
  unsigned int v7; // ecx

  v3 = 0;
  if ( a1 == 6 )
  {
    a2 *= 4;
    goto LABEL_9;
  }
  if ( a1 > 6 )
  {
    if ( a1 < 0xF5 )
      return 0LL;
    if ( a1 <= 0xFB )
      goto LABEL_9;
    if ( a1 <= 0xFD )
    {
LABEL_13:
      a2 *= 2;
      goto LABEL_9;
    }
    if ( a1 == 254 )
      goto LABEL_9;
    if ( a1 != 255 )
      return 0LL;
LABEL_12:
    v3 = a2 & 1;
    a2 >>= 1;
    goto LABEL_9;
  }
  v4 = a1 - 1;
  if ( !v4 )
  {
    v3 = a2 & 7;
    a2 >>= 3;
    goto LABEL_9;
  }
  v5 = v4 - 1;
  if ( !v5 )
    goto LABEL_12;
  v6 = v5 - 1;
  if ( !v6 )
  {
LABEL_9:
    *a3 = v3;
    return (unsigned int)a2;
  }
  v7 = v6 - 1;
  if ( !v7 )
    goto LABEL_13;
  if ( v7 == 1 )
  {
    a2 *= 3;
    goto LABEL_9;
  }
  return 0LL;
}
