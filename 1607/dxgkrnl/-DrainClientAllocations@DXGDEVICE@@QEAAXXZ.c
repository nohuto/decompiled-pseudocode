/*
 * XREFs of ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C015D754
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C009D260 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C01511E0 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainClientAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // rdx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v3, this + 17);
  while ( this[6] )
  {
    v2 = this[6];
    this[6] = (struct _KTHREAD *)*((_QWORD *)v2 + 8);
    *((_QWORD *)v2 + 7) = 0LL;
    *((_QWORD *)v2 + 8) = 0LL;
    DXGDEVICE::DestroyClientAllocations((PERESOURCE *)this, v2);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
