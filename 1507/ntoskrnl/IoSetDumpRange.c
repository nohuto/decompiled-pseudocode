/*
 * XREFs of IoSetDumpRange @ 0x1401F3904
 * Callers:
 *     IopAddPageDumpRange @ 0x1401F41F4 (IopAddPageDumpRange.c)
 * Callees:
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MmGetPhysicalAddress @ 0x1400DF958 (MmGetPhysicalAddress.c)
 *     IopAddPageToPageMap @ 0x1401F4364 (IopAddPageToPageMap.c)
 */

__int64 __fastcall IoSetDumpRange(__int64 a1, char *a2, unsigned __int64 a3, int a4)
{
  unsigned __int64 v4; // rsi
  char *v5; // rbx
  int v7; // r8d
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // r9d
  _QWORD *v11; // r8
  unsigned int v12; // r10d
  _QWORD *v13; // r9
  char v14; // bp
  PHYSICAL_ADDRESS PhysicalAddress; // rax
  int v16; // eax

  v4 = a3;
  v5 = a2;
  if ( a4 == 1 )
  {
    v7 = MmGetPhysicalAddress(a2).QuadPart >> 12;
    v8 = IopAddPageToPageMap(*(_QWORD *)(a1 + 16), *(_QWORD *)(a1 + 24), v7, v4, *(_BYTE *)(a1 + 32) & 1);
LABEL_20:
    v9 = v8;
  }
  else
  {
    if ( a4 == 2 )
    {
      v9 = -1073741503;
      v10 = 0;
      if ( *(_DWORD *)MmPhysicalMemoryBlock )
      {
        v11 = (char *)MmPhysicalMemoryBlock + 16;
        while ( *v11 <= (unsigned __int64)v5 )
        {
          if ( v11[1] + *v11 > (unsigned __int64)v5 )
          {
            if ( v4 > *((_QWORD *)MmPhysicalMemoryBlock + 2 * v10 + 2)
                    + *((_QWORD *)MmPhysicalMemoryBlock + 2 * v10 + 3)
                    - (_QWORD)v5 )
              break;
LABEL_19:
            v8 = IopAddPageToPageMap(
                   *(_QWORD *)(a1 + 16),
                   *(_QWORD *)(a1 + 24),
                   (_DWORD)v5,
                   v4,
                   *(_BYTE *)(a1 + 32) & 1);
            goto LABEL_20;
          }
          ++v10;
          v11 += 2;
          if ( v10 >= *(_DWORD *)MmPhysicalMemoryBlock )
            break;
        }
      }
      if ( SpecialMemoryRanges )
      {
        v12 = 0;
        if ( *(_DWORD *)SpecialMemoryRanges )
        {
          v13 = (_QWORD *)(SpecialMemoryRanges + 16);
          while ( *v13 <= (unsigned __int64)v5 )
          {
            if ( v13[1] + *v13 > (unsigned __int64)v5 )
            {
              if ( v4 > *(_QWORD *)(SpecialMemoryRanges + 16LL * v12 + 16)
                      + *(_QWORD *)(SpecialMemoryRanges + 16LL * v12 + 24)
                      - (_QWORD)v5 )
                goto LABEL_30;
              goto LABEL_19;
            }
            ++v12;
            v13 += 2;
            if ( v12 >= *(_DWORD *)SpecialMemoryRanges )
              goto LABEL_30;
          }
        }
      }
      goto LABEL_30;
    }
    v14 = 1;
    if ( !a3 )
      return 0;
    do
    {
      if ( MiIsAddressValid((__int64)v5) )
      {
        PhysicalAddress = MmGetPhysicalAddress(v5);
        v16 = IopAddPageToPageMap(
                *(_QWORD *)(a1 + 16),
                *(_QWORD *)(a1 + 24),
                PhysicalAddress.QuadPart >> 12,
                1,
                *(_BYTE *)(a1 + 32) & 1);
        if ( v16 == -1073741789 )
          return 3221225507LL;
        if ( v16 < 0 )
          v14 = 0;
      }
      v5 += 4096;
      --v4;
    }
    while ( v4 );
    if ( v14 == 1 )
      return 0;
    v9 = -1073741503;
  }
  if ( v9 == -1073741503 )
  {
LABEL_30:
    if ( (*(_BYTE *)(a1 + 32) & 1) != 0 )
      return 0;
  }
  return v9;
}
