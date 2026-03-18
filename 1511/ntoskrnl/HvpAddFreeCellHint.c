/*
 * XREFs of HvpAddFreeCellHint @ 0x1403D9584
 * Callers:
 *     HvpEnlistFreeCell @ 0x1403D9258 (HvpEnlistFreeCell.c)
 * Callees:
 *     HvpMapEntryGetBinAddress @ 0x14003B3D0 (HvpMapEntryGetBinAddress.c)
 *     RtlSetBits @ 0x140061410 (RtlSetBits.c)
 *     HvpMapEntryReleaseBlockAddress @ 0x14014FEAC (HvpMapEntryReleaseBlockAddress.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1403F7A80 (HvpGetCellMap.c)
 */

void __fastcall HvpAddFreeCellHint(ULONG_PTR BugCheckParameter2, __int64 a2, unsigned int a3, int a4)
{
  __int64 v4; // rsi
  __int64 v6; // r15
  struct _EX_RUNDOWN_REF *CellMap; // rax
  __int64 v8; // rcx
  ULONG_PTR v9; // r10
  struct _EX_RUNDOWN_REF *v10; // r14
  unsigned __int64 BinAddress; // rax
  __int64 v12; // rsi
  ULONG v13; // edi
  BOOLEAN v14[4]; // [rsp+30h] [rbp-28h] BYREF
  _DWORD v15[9]; // [rsp+34h] [rbp-24h] BYREF

  v4 = a4;
  v6 = a3;
  CellMap = (struct _EX_RUNDOWN_REF *)HvpGetCellMap(BugCheckParameter2, a2);
  v10 = CellMap;
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, BugCheckParameter2, v9, 0x282uLL);
  BinAddress = HvpMapEntryGetBinAddress(v8, CellMap, v14, v15);
  v12 = 632 * v4;
  v13 = *(_DWORD *)(BinAddress + 4) >> 12;
  RtlSetBits((PRTL_BITMAP)(BugCheckParameter2 + v12 + 24 * (v6 + 60)), v13, *(_DWORD *)(BinAddress + 8) >> 12);
  *(_DWORD *)(v12 + 24 * v6 + BugCheckParameter2 + 1436) = v13;
  *(_DWORD *)(v12 + BugCheckParameter2 + 2024) |= 1 << v6;
  if ( v14[0] )
    HvpMapEntryReleaseBlockAddress((unsigned int)v6, v10);
}
