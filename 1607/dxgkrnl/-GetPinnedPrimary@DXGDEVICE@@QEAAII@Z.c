/*
 * XREFs of ?GetPinnedPrimary@DXGDEVICE@@QEAAII@Z @ 0x1C0007D90
 * Callers:
 *     ?UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z @ 0x1C009E9B8 (-UnpinPrimaryAllocations@DXGDEVICE@@QEAAXI@Z.c)
 *     ?UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z @ 0x1C015F568 (-UnpinTransitionalPrimaryAllocation@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@I@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 */

__int64 __fastcall DXGDEVICE::GetPinnedPrimary(struct _KTHREAD **this, unsigned int a2)
{
  __int64 v2; // rbx
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  v2 = a2;
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 29);
  LODWORD(v2) = (*((_DWORD *)this + v2 + 250) >> 8) & 1;
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
  return (unsigned int)v2;
}
