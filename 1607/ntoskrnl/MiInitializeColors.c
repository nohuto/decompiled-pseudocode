/*
 * XREFs of MiInitializeColors @ 0x14078F4E8
 * Callers:
 *     MiCreatePfnDatabase @ 0x14078F270 (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  int v1; // r8d
  int v2; // edx
  __int64 result; // rax

  v0 = (unsigned int)dword_140326A3C >> 12;
  dword_140326A3C = v0;
  if ( !v0 )
  {
    if ( qword_140324E10 < 0x80000 )
    {
      v0 = qword_140324E10 < 0x40000 ? 64 : 128;
LABEL_11:
      dword_140326A3C = v0;
      goto LABEL_5;
    }
LABEL_9:
    v0 = 256;
    goto LABEL_11;
  }
  if ( v0 > 0x100 )
    goto LABEL_9;
  if ( ((v0 - 1) & v0) != 0 || v0 < 8 )
  {
    v0 = 64;
    goto LABEL_11;
  }
LABEL_5:
  _BitScanReverse((unsigned int *)&v1, v0);
  LOBYTE(v2) = 1;
  byte_140326A18 = v1;
  dword_140326A38 = v0 - 1;
  MiChannelMaximumPowerOf2 = 1;
  if ( (unsigned int)MmNumberOfChannels > 1 )
  {
    do
      LOBYTE(v2) = 2 * v2;
    while ( (unsigned __int8)v2 < (unsigned int)MmNumberOfChannels );
    MiChannelMaximumPowerOf2 = v2;
  }
  MiChannelMaximumPowerOf2Mask = v2 - 1;
  _BitScanReverse((unsigned int *)&v2, (unsigned __int8)v2);
  byte_140326A09 = v2 + v1;
  dword_1403269E0 = (1 << (v2 + v1)) - 1;
  result = (unsigned int)dword_140326A38;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_140326A38;
  return result;
}
