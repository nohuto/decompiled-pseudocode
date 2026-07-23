/*
 * XREFs of HvpGetBinMemAlloc @ 0x1404CFC3C
 * Callers:
 *     HvpEnlistFreeCell @ 0x1404F823C (HvpEnlistFreeCell.c)
 * Callees:
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvpGetCellMap @ 0x1404F6FB0 (HvpGetCellMap.c)
 */

__int64 __fastcall HvpGetBinMemAlloc(__int64 a1, __int64 a2, int a3)
{
  __int64 CellMap; // rax
  unsigned int v4; // r8d
  ULONG_PTR v5; // r10

  CellMap = HvpGetCellMap(a1, (unsigned int)(*(_DWORD *)(a2 + 4) + (a3 << 31)));
  if ( !CellMap )
    KeBugCheckEx(0x51u, 1uLL, v5, v4, 0x702uLL);
  return *(unsigned int *)(CellMap + 32);
}
