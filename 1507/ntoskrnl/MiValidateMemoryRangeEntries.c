/*
 * XREFs of MiValidateMemoryRangeEntries @ 0x1404FBB44
 * Callers:
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiValidateMemoryRangeEntries(unsigned __int64 *a1, __int64 a2, unsigned __int64 *a3)
{
  unsigned __int64 v3; // r10
  unsigned __int64 v4; // rdx
  unsigned __int64 *v5; // r9
  unsigned __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax

  v3 = 0LL;
  v4 = (unsigned __int64)&a1[2 * a2];
  v5 = a1;
  if ( (unsigned __int64)a1 >= v4 )
  {
LABEL_8:
    if ( a3 )
      *a3 = v3;
    return 1LL;
  }
  else
  {
    while ( 1 )
    {
      v6 = *v5;
      if ( *v5 > (unsigned __int64)MmHighestUserAddress )
        return 0LL;
      v7 = v5[1];
      if ( !v7 )
        return 0LL;
      if ( v7 + v6 < v6 )
        return 0LL;
      if ( v7 + v6 - 1 > (unsigned __int64)MmHighestUserAddress )
        return 0LL;
      v8 = v3 + ((v7 + (*(_DWORD *)v5 & 0xFFF) + 4095LL) >> 12);
      if ( v8 < v3 )
        return 0LL;
      v5 += 2;
      v3 = v8;
      if ( (unsigned __int64)v5 >= v4 )
        goto LABEL_8;
    }
  }
}
