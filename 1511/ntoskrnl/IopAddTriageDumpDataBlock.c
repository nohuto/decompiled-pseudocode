/*
 * XREFs of IopAddTriageDumpDataBlock @ 0x140141800
 * Callers:
 *     IoAddTriageDumpDataBlock @ 0x1401417B4 (IoAddTriageDumpDataBlock.c)
 *     IopAddRunTimeTriageDataBlocks @ 0x1401B9170 (IopAddRunTimeTriageDataBlocks.c)
 * Callees:
 *     IopIsAddressRangeValid @ 0x1401418A4 (IopIsAddressRangeValid.c)
 */

char __fastcall IopAddTriageDumpDataBlock(unsigned int a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5)
{
  unsigned int *v7; // r10
  unsigned __int64 v8; // r11
  unsigned int v9; // r8d
  unsigned __int64 i; // rdx
  unsigned int v11; // edi
  unsigned __int64 *j; // rax
  unsigned int v13; // eax
  unsigned __int64 *v14; // rcx
  unsigned __int64 v16; // rcx

  if ( a5 - 1 > 0x3FFFE || !(unsigned __int8)IopIsAddressRangeValid(a4) )
    return 0;
  v9 = 0;
  for ( i = a5 + v8; v9 < a1; a2 += 16LL )
  {
    v11 = 0;
    for ( j = *(unsigned __int64 **)(a2 + 8); v11 < *(_DWORD *)a2; j += 2 )
    {
      v16 = j[1];
      if ( v8 < v16 && i > *j )
      {
        if ( v8 < *j )
        {
          if ( i <= v16 )
            i = *j;
        }
        else
        {
          if ( i <= v16 )
            return 1;
          v8 = j[1];
        }
      }
      ++v11;
    }
    ++v9;
  }
  if ( !v7 )
    return 0;
  v13 = *v7;
  if ( *v7 >= v7[1] )
    return 0;
  v14 = (unsigned __int64 *)(*((_QWORD *)v7 + 1) + 16LL * v13);
  *v7 = v13 + 1;
  *v14 = v8;
  v14[1] = i;
  return 1;
}
