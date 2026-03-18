/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x1404A5C28
 * Callers:
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiSelectUserAddress @ 0x14047A0C0 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x1404A5CD8 (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(int a1, int a2, int a3, __int64 a4, char a5, __int64 a6)
{
  __int64 v9; // rdi
  unsigned __int64 v10; // rsi
  __int64 v11; // rbx
  unsigned int v12; // ebp
  __int64 result; // rax
  unsigned int v14; // ecx
  unsigned __int64 v15; // rax

  v9 = a4 + 1;
  v10 = MEMORY[0xFFFFF58010804228];
  v11 = a4 + 1;
  if ( (unsigned __int64)(a4 + 1) > MEMORY[0xFFFFF58010804200] )
    v11 = MEMORY[0xFFFFF58010804200];
  v12 = MEMORY[0xFFFFF58010804224];
  if ( !MEMORY[0xFFFFF58010804224] )
    v12 = 1;
  while ( 1 )
  {
    result = MiFindEmptyAddressRangeDownTree(a1, a2, a3, v10, v11, a6);
    v14 = result;
    if ( (int)result >= 0 )
      return result;
    if ( v11 == v9 )
    {
      if ( (a5 & 2) == 0 )
      {
        v15 = 0x10000LL;
        goto LABEL_12;
      }
LABEL_11:
      v15 = (unsigned __int64)v12 << 16;
LABEL_12:
      if ( v15 >= v10 )
        return v14;
      v10 = v15;
    }
    else
    {
      if ( (a5 & 2) != 0 )
        goto LABEL_11;
      v11 = v9;
    }
  }
}
