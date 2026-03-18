/*
 * XREFs of MiInitializeColors @ 0x1407E7CAC
 * Callers:
 *     MiCreatePfnDatabase @ 0x1407C444C (MiCreatePfnDatabase.c)
 * Callees:
 *     <none>
 */

__int64 MiInitializeColors()
{
  unsigned int v0; // ecx
  int v1; // r8d
  int v2; // edx
  __int64 result; // rax

  v0 = (unsigned int)dword_14034EBBC >> 12;
  dword_14034EBBC = v0;
  if ( !v0 )
  {
    if ( qword_1403551D0 < 0x80000 )
    {
      v0 = qword_1403551D0 < 0x40000 ? 64 : 128;
      goto LABEL_9;
    }
LABEL_3:
    v0 = 256;
LABEL_9:
    dword_14034EBBC = v0;
    goto LABEL_10;
  }
  if ( v0 > 0x100 )
    goto LABEL_3;
  if ( ((v0 - 1) & v0) != 0 || v0 < 8 )
  {
    v0 = 64;
    goto LABEL_9;
  }
LABEL_10:
  _BitScanReverse((unsigned int *)&v1, v0);
  LOBYTE(v2) = 1;
  byte_14034EB98 = v1;
  dword_14034EBB8 = v0 - 1;
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
  byte_14034EB89 = v2 + v1;
  dword_14034EB60 = (1 << (v2 + v1)) - 1;
  result = (unsigned int)dword_14034EBB8;
  KeGetCurrentPrcb()->SecondaryColorMask = dword_14034EBB8;
  return result;
}
