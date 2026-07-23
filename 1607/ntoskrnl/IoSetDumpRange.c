/*
 * XREFs of IoSetDumpRange @ 0x1401C61F4
 * Callers:
 *     IopAddPageDumpRange @ 0x1401C6AFC (IopAddPageDumpRange.c)
 * Callees:
 *     MmGetPhysicalAddress @ 0x140024B8C (MmGetPhysicalAddress.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     IopAddPageToPageMap @ 0x1401C6CB8 (IopAddPageToPageMap.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  int v5; // eax
  unsigned __int64 v6; // r14
  char *v7; // rdi
  unsigned __int64 v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // edx
  unsigned int v12; // r9d
  _QWORD *v13; // r8
  unsigned int v14; // r10d
  _QWORD *v15; // r9
  char v16; // bp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v18; // eax

  v5 = a4 & 0xF;
  v6 = a3;
  v7 = a2;
  if ( v5 == 1 )
  {
    v9 = (unsigned __int64)MmGetPhysicalAddress(a2).QuadPart >> 12;
    v10 = IopAddPageToPageMap(
            *(_QWORD *)(a1 + 24),
            *(_QWORD *)(a1 + 16),
            *(_QWORD *)(a1 + 32),
            v9,
            v6,
            *(_BYTE *)(a1 + 40) & 1,
            0);
LABEL_20:
    v11 = v10;
  }
  else
  {
    if ( v5 == 2 )
    {
      v11 = -1073741503;
      v12 = 0;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v13 = (char *)MmPhysicalMemoryBlock + 16;
        while ( *v13 <= (unsigned __int64)v7 )
        {
          if ( v13[1] + *v13 > (unsigned __int64)v7 )
          {
            if ( v6 > *((_QWORD *)MmPhysicalMemoryBlock + 2 * v12 + 2)
                    + *((_QWORD *)MmPhysicalMemoryBlock + 2 * v12 + 3)
                    - (_QWORD)v7 )
              break;
LABEL_19:
            v10 = IopAddPageToPageMap(
                    *(_QWORD *)(a1 + 24),
                    *(_QWORD *)(a1 + 16),
                    *(_QWORD *)(a1 + 32),
                    (_DWORD)v7,
                    v6,
                    *(_BYTE *)(a1 + 40) & 1,
                    a4);
            goto LABEL_20;
          }
          ++v12;
          v13 += 2;
          if ( v12 >= *(_DWORD *)MmPhysicalMemoryBlock )
            break;
        }
      }
      if ( SpecialMemoryRanges )
      {
        v14 = 0;
        if ( *(_DWORD *)SpecialMemoryRanges )
        {
          v15 = (_QWORD *)(SpecialMemoryRanges + 16);
          while ( *v15 <= (unsigned __int64)v7 )
          {
            if ( v15[1] + *v15 > (unsigned __int64)v7 )
            {
              if ( v6 > *(_QWORD *)(SpecialMemoryRanges + 16LL * v14 + 16)
                      + *(_QWORD *)(SpecialMemoryRanges + 16LL * v14 + 24)
                      - (_QWORD)v7 )
                goto LABEL_30;
              goto LABEL_19;
            }
            ++v14;
            v15 += 2;
            if ( v14 >= *(_DWORD *)SpecialMemoryRanges )
              goto LABEL_30;
          }
        }
      }
      goto LABEL_30;
    }
    v16 = 1;
    if ( !a3 )
      return 0;
    do
    {
      if ( MiIsAddressValid((__int64)v7) )
      {
        PhysicalAddress = MmGetPhysicalAddress(v7);
        v18 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 24),
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 32),
                (unsigned __int64)PhysicalAddress.QuadPart >> 12,
                1LL,
                *(_BYTE *)(a1 + 40) & 1,
                0);
        if ( v18 == -1073741789 )
          return 3221225507LL;
        if ( v18 < 0 )
          v16 = 0;
      }
      v7 += 4096;
      --v6;
    }
    while ( v6 );
    if ( v16 == 1 )
      return 0;
    v11 = -1073741503;
  }
  if ( v11 == -1073741503 )
  {
LABEL_30:
    if ( (*(_BYTE *)(a1 + 40) & 1) != 0 )
      return 0;
  }
  return v11;
}
