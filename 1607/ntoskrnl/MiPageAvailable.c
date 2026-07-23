/*
 * XREFs of MiPageAvailable @ 0x140089B28
 * Callers:
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiGetFreeOrZeroPage @ 0x14003D800 (MiGetFreeOrZeroPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageAvailable(__int64 a1, __int16 a2)
{
  unsigned __int64 v2; // r9
  char v3; // r10
  unsigned int v4; // r8d
  int v6; // edx

  v2 = *(_QWORD *)(a1 + 6464);
  v3 = a2;
  v4 = 1;
  if ( v2 )
    --v2;
  if ( v2 < 0x9F && (a2 & 0x800) == 0 )
  {
    v6 = *((_DWORD *)&KeGetCurrentThread()[1].SwapListEntry + 3);
    if ( (v6 & 0xC) != 8 )
    {
      if ( v2 < 0x20 && (int *)a1 == MiSystemPartition )
      {
        return 0;
      }
      else if ( (v3 & 4) == 0 && ((v6 & 2) == 0 || v2 < 0x21) )
      {
        return (*(unsigned __int8 *)(a1 + 4) >> 4) & 1;
      }
    }
  }
  return v4;
}
