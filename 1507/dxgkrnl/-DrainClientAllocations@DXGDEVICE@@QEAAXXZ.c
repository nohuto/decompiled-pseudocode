/*
 * XREFs of ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C013585C
 * Callers:
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C012C900 (-DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainClientAllocations(struct _KTHREAD **this)
{
  struct _EX_RUNDOWN_REF *v2; // rdx
  _BYTE v3[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v3, this + 17);
  while ( this[6] )
  {
    v2 = (struct _EX_RUNDOWN_REF *)this[6];
    this[6] = (struct _KTHREAD *)v2[8].Count;
    v2[7].Count = 0LL;
    v2[8].Count = 0LL;
    DXGDEVICE::DestroyClientAllocations((PERESOURCE *)this, v2);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v3);
}
