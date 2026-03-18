/*
 * XREFs of MiInitializeColors @ 0x140748BAC
 * Callers:
 *     MiCreatePfnDatabase @ 0x14074882C (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  int v1; // r8d
  int v2; // edx
  __int64 result; // rax

  v0 = (unsigned int)dword_1402FE70C >> 12;
  dword_1402FE70C = v0;
  if ( !v0 )
  {
    if ( qword_140301390 < 0x80000 )
    {
      v0 = qword_140301390 < 0x40000 ? 64 : 128;
      goto LABEL_8;
    }
LABEL_11:
    v0 = 256;
    goto LABEL_8;
  }
  if ( v0 > 0x100 )
    goto LABEL_11;
  if ( ((v0 - 1) & v0) != 0 || v0 < 8 )
  {
    v0 = 64;
LABEL_8:
    dword_1402FE70C = v0;
  }
  _BitScanReverse((unsigned int *)&v1, v0);
  LOBYTE(v2) = 1;
  byte_1402FE6E8 = v1;
  dword_1402FE708 = v0 - 1;
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
  byte_1402FE6D9 = v2 + v1;
  dword_1402FE6B0 = (1 << (v2 + v1)) - 1;
  result = (unsigned int)dword_1402FE708;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_1402FE708;
  return result;
}
