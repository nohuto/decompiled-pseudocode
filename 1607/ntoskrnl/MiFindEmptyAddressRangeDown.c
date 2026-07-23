/*
 * XREFs of MiFindEmptyAddressRangeDown @ 0x1404A68E4
 * Callers:
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     MiSelectUserAddress @ 0x1404A67C0 (MiSelectUserAddress.c)
 * Callees:
 *     MiFindEmptyAddressRangeDownTree @ 0x1404A698C (MiFindEmptyAddressRangeDownTree.c)
 */

__int64 __fastcall MiFindEmptyAddressRangeDown(int a1, int a2, int a3, __int64 a4, char a5, __int64 a6)
{
  unsigned __int64 v9; // rsi
  __int64 v10; // rdi
  __int64 v11; // rbx
  int v12; // eax
  unsigned int v13; // ebp
  __int64 result; // rax
  unsigned int v15; // ecx
  unsigned __int64 v16; // rax

  v9 = *(_QWORD *)(qword_140327FD0 + 276840496);
  v10 = a4 + 1;
  v11 = a4 + 1;
  if ( (unsigned __int64)(a4 + 1) > *(_QWORD *)(qword_140327FD0 + 276840456) )
    v11 = *(_QWORD *)(qword_140327FD0 + 276840456);
  v12 = *(_DWORD *)(qword_140327FD0 + 276840492);
  v13 = (unsigned __int8)v12;
  if ( !(_BYTE)v12 )
    v13 = 1;
  while ( 1 )
  {
    result = MiFindEmptyAddressRangeDownTree(a1, a2, a3, v9, v11, a6);
    v15 = result;
    if ( (int)result >= 0 )
      return result;
    if ( v11 == v10 )
    {
      if ( (a5 & 2) == 0 )
      {
        v16 = 0x10000LL;
        goto LABEL_12;
      }
LABEL_11:
      v16 = (unsigned __int64)v13 << 16;
LABEL_12:
      if ( v16 >= v9 )
        return v15;
      v9 = v16;
    }
    else
    {
      if ( (a5 & 2) != 0 )
        goto LABEL_11;
      v11 = v10;
    }
  }
}
