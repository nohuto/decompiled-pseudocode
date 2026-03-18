/*
 * XREFs of HvpRemoveFreeCellHint @ 0x140479A30
 * Callers:
 *     HvFreeCell @ 0x1403D9010 (HvFreeCell.c)
 *     HvpDelistFreeCell @ 0x1403D963C (HvpDelistFreeCell.c)
 *     HvpDoAllocateCell @ 0x1403F4630 (HvpDoAllocateCell.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     RtlClearBits @ 0x14003B430 (RtlClearBits.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     RtlFindSetBits @ 0x1400A04CC (RtlFindSetBits.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

void __fastcall HvpRemoveFreeCellHint(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter3,
        unsigned int a3,
        int a4)
{
  __int64 v4; // rsi
  __int64 v6; // rbp
  char v7; // di
  ULONG_PTR v8; // rbx
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v10; // rcx
  struct _EX_RUNDOWN_REF *v11; // r13
  unsigned __int64 BinAddress; // r10
  __int64 v13; // r11
  unsigned int *v14; // rdx
  unsigned int v15; // r15d
  unsigned int v16; // r8d
  unsigned int v17; // eax
  ULONG v18; // r15d
  __int64 v19; // rsi
  ULONG SetBits; // eax
  __int64 v21; // rcx
  int v22; // edi
  unsigned int v23; // ecx
  unsigned int v24; // ecx
  BOOLEAN v25[4]; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v26[13]; // [rsp+34h] [rbp-34h] BYREF

  v4 = a4;
  v6 = a3;
  v7 = 0;
  v8 = (unsigned int)BugCheckParameter3;
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, BugCheckParameter3);
  v11 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v8, 0x2D2uLL);
  BinAddress = HvpMapEntryGetBinAddress(v10, CellMap, v25, v26);
  v13 = *(unsigned int *)(BinAddress + 8);
  v14 = (unsigned int *)(BinAddress + 32);
  v15 = *(_DWORD *)(BinAddress + 4);
  v16 = v15 + 32;
  if ( BinAddress + 32 < BinAddress + v13 )
  {
    do
    {
      v17 = *v14;
      if ( (*v14 & 0x80000000) == 0 )
      {
        v23 = (v17 >> 3) - 1;
        if ( v23 >= 0x10 )
        {
          v24 = v23 >> 4;
          if ( v24 > 0xFF )
          {
            v23 = 23;
          }
          else
          {
            _BitScanReverse(&v24, v24);
            v23 = v24 + 16;
          }
        }
        if ( (_DWORD)v6 == v23 && v16 != (v8 & 0x7FFFFFFF) )
        {
          v7 = 1;
          break;
        }
      }
      else
      {
        v17 = -v17;
      }
      v16 += v17;
      v14 = (unsigned int *)((char *)v14 + v17);
    }
    while ( (unsigned __int64)v14 < BinAddress + v13 );
  }
  v18 = v15 >> 12;
  if ( v7 )
  {
    *(_DWORD *)(632 * v4 + BugCheckParameter2 + 2024) |= 1 << v6;
    *(_DWORD *)(632 * v4 + 24 * v6 + BugCheckParameter2 + 1436) = v18;
    RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + 632 * v4 + 24 * (v6 + 60)), v18, *(_DWORD *)(BinAddress + 8) >> 12);
  }
  else
  {
    v19 = 632 * v4;
    RtlClearBits((PRTL_BITMAP)(BugCheckParameter2 + v19 + 24 * (v6 + 60)), v18, (unsigned int)v13 >> 12);
    SetBits = RtlFindSetBits((PRTL_BITMAP)(BugCheckParameter2 + v19 + 24 * (v6 + 60)), 1u, v18);
    v21 = (unsigned int)v6;
    v22 = 1 << v6;
    if ( SetBits == -1 )
    {
      *(_DWORD *)(v19 + BugCheckParameter2 + 2024) &= ~v22;
    }
    else
    {
      *(_DWORD *)(v19 + BugCheckParameter2 + 2024) |= v22;
      v21 = 3 * v6;
      *(_DWORD *)(v19 + 24 * v6 + BugCheckParameter2 + 1436) = SetBits;
    }
  }
  if ( v25[0] )
    HvpMapEntryReleaseBlockAddress(v21, v11);
}
