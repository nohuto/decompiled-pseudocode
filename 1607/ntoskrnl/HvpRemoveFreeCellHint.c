/*
 * XREFs of HvpRemoveFreeCellHint @ 0x1404F7A60
 * Callers:
 *     HvFreeCell @ 0x1404005AC (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x140400838 (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x140400C30 (HvpDoAllocateCell.c)
 * Callees:
 *     RtlFindSetBits @ 0x14000AB40 (RtlFindSetBits.c)
 *     RtlSetBits @ 0x140027FA0 (RtlSetBits.c)
 *     HvpMapEntryReleaseBinAddress @ 0x14002CF80 (HvpMapEntryReleaseBinAddress.c)
 *     HvpMapEntryGetBinAddress @ 0x14002D1E0 (HvpMapEntryGetBinAddress.c)
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     HvpGetBinContextInitialize @ 0x14002D300 (HvpGetBinContextInitialize.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  __int64 v5; // rsi
  __int64 v6; // rbp
  ULONG_PTR v7; // rbx
  char v8; // di
  unsigned int v9; // edx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v11; // rcx
  struct _EX_RUNDOWN_REF *v12; // r12
  unsigned __int64 BinAddress; // r10
  __int64 v14; // r11
  unsigned int *v15; // rdx
  unsigned int v16; // r15d
  unsigned int v17; // r8d
  unsigned int v18; // eax
  ULONG v19; // r15d
  __int64 v20; // rsi
  ULONG SetBits; // eax
  __int64 v22; // rcx
  int v23; // edi
  unsigned int v25; // ecx
  unsigned int v26; // ecx
  _WORD v27[28]; // [rsp+30h] [rbp-38h] BYREF

  v5 = a4;
  v6 = a3;
  v7 = (unsigned int)BugCheckParameter3;
  v8 = 0;
  HvpGetBinContextInitialize(v27);
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, v9);
  v12 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v7, 0x2D4uLL);
  BinAddress = HvpMapEntryGetBinAddress(v11, CellMap, v27);
  v14 = *(unsigned int *)(BinAddress + 8);
  v15 = (unsigned int *)(BinAddress + 32);
  v16 = *(_DWORD *)(BinAddress + 4);
  v17 = v16 + 32;
  if ( BinAddress + 32 < BinAddress + v14 )
  {
    do
    {
      v18 = *v15;
      if ( (*v15 & 0x80000000) == 0 )
      {
        v25 = (v18 >> 3) - 1;
        if ( v25 >= 0x10 )
        {
          v26 = v25 >> 4;
          if ( v26 > 0xFF )
          {
            v25 = 23;
          }
          else
          {
            _BitScanReverse(&v26, v26);
            v25 = v26 + 16;
          }
        }
        if ( (_DWORD)v6 == v25 && v17 != (v7 & 0x7FFFFFFF) )
        {
          v8 = 1;
          break;
        }
      }
      else
      {
        v18 = -v18;
      }
      v17 += v18;
      v15 = (unsigned int *)((char *)v15 + v18);
    }
    while ( (unsigned __int64)v15 < BinAddress + v14 );
  }
  v19 = v16 >> 12;
  if ( v8 )
  {
    *(_DWORD *)(632 * v5 + BugCheckParameter2 + 2024) |= 1 << v6;
    *(_DWORD *)(632 * v5 + 24 * v6 + BugCheckParameter2 + 1436) = v19;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 632 * v5 + 24 * (v6 + 60)), v19, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    v20 = 632 * v5;
    RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + v20 + 24 * (v6 + 60)), v19, (unsigned int)v14 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(BugCheckParameter2 + v20 + 24 * (v6 + 60)), 1u, v19);
    v22 = (unsigned int)v6;
    v23 = 1 << v6;
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v20 + BugCheckParameter2 + 2024) &= ~v23;
    }
    else
    {
      *(_DWORD *)(v20 + BugCheckParameter2 + 2024) |= v23;
      v22 = 3 * v6;
      *(_DWORD *)(v20 + 24 * v6 + BugCheckParameter2 + 1436) = SetBits;
    }
  }
  return HvpMapEntryReleaseBinAddress(v22, v12, v27);
}
