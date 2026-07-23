/*
 * XREFs of MiCanGrantExecute @ 0x1401EF4E0
 * Callers:
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 */

__int64 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  unsigned int v3; // r10d
  char v4; // cl
  unsigned __int64 Address; // rax
  int v7; // eax
  int v8; // ecx

  if ( !*(_QWORD *)(a1 + 1064) )
    return 0LL;
  v3 = 1;
  if ( (KeFeatureBits & 0x40000000) == 0 )
  {
    v4 = *(_BYTE *)(a1 + 447);
    if ( (v4 & 2) == 0 && ((KeFeatureBits & 0x80000000) != 0 || (v4 & 1) != 0) )
      return 0LL;
  }
  if ( ((a2 & 0xFFFFFFFFFFFFF000uLL) != 0x7FFE0000 || (*(_DWORD *)(a1 + 1740) & 1) != 0)
    && ((Address = MiLocateAddress(a2)) == 0
     || (v7 = *(_DWORD *)(Address + 48), v8 = v7 & 7, v8 == 3)
     || v8 == 2 && (v7 & 0xF8) == 8) )
  {
    return 0LL;
  }
  else
  {
    return v3;
  }
}
