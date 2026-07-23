/*
 * XREFs of MiSetVadBits @ 0x1406A5728
 * Callers:
 *     MiUpdateVadBits @ 0x140468060 (MiUpdateVadBits.c)
 * Callees:
 *     RtlSetBits @ 0x14008B810 (RtlSetBits.c)
 */

void __fastcall MiSetVadBits(__int64 a1)
{
  unsigned int v1; // edx
  unsigned int v2; // r8d
  unsigned int v3; // ecx
  unsigned int v4; // r9d
  _RTL_BITMAP BitMapHeader; // [rsp+20h] [rbp-18h] BYREF

  v1 = (*(_DWORD *)(a1 + 24) >> 4) | (*(unsigned __int8 *)(a1 + 32) << 28);
  v2 = (*(_DWORD *)(a1 + 28) >> 4) | (*(unsigned __int8 *)(a1 + 33) << 28);
  v3 = 8 * MEMORY[0xFFFFF58010804230];
  if ( v2 >= 8 * MEMORY[0xFFFFF58010804230] )
  {
    v4 = MEMORY[0xFFFFF5801080420C] + v3;
    if ( v1 < MEMORY[0xFFFFF5801080420C] + v3 )
    {
      if ( v1 < v3 )
        v1 = 8 * MEMORY[0xFFFFF58010804230];
      if ( v2 >= v4 )
        v2 = v4 - 1;
      BitMapHeader.SizeOfBitMap = MEMORY[0xFFFFF5801080420C];
      BitMapHeader.Buffer = (unsigned int *)MEMORY[0xFFFFF58010804230];
      RtlSetBits(&BitMapHeader, v1 - v3, v2 - v1 + 1);
    }
  }
}
