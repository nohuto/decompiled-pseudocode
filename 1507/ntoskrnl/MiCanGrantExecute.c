/*
 * XREFs of MiCanGrantExecute @ 0x140223AF4
 * Callers:
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiLargePageFault @ 0x140223C5C (MiLargePageFault.c)
 * Callees:
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 */

_BOOL8 __fastcall MiCanGrantExecute(__int64 a1, unsigned __int64 a2)
{
  char v3; // cl
  _BOOL8 result; // rax
  _QWORD *Address; // rax
  int v6; // eax
  int v7; // ecx

  result = 0;
  if ( (BYTE2(MiFlags) & 3) != 3 )
  {
    if ( *(_QWORD *)(a1 + 1064) )
    {
      if ( (KeFeatureBits & 0x40000000) != 0
        || (v3 = *(_BYTE *)(a1 + 447), (v3 & 2) != 0)
        || (KeFeatureBits & 0x80000000) == 0 && (v3 & 1) == 0 )
      {
        if ( (a2 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 && (*(_DWORD *)(a1 + 1716) & 1) == 0 )
          return 1;
        Address = MiLocateAddress(a2);
        if ( Address )
        {
          v6 = *((_DWORD *)Address + 12);
          v7 = v6 & 7;
          if ( v7 != 3 && (v7 != 2 || (v6 & 0xF8) != 8) )
            return 1;
        }
      }
    }
  }
  return result;
}
