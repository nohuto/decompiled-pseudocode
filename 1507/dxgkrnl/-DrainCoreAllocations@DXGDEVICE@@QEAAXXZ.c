/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C01358F0
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000B628 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C012CA28 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct _VIDMM_MULTI_GLOBAL_ALLOC *v2; // r9
  struct DXGALLOCATION *v3; // rsi
  __int64 v4; // rbx
  struct DXGALLOCATION *v5; // rdi
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 17);
  v3 = this[6];
  if ( v3 )
  {
    do
    {
      v4 = *((_QWORD *)v3 + 7);
      v5 = (struct DXGALLOCATION *)*((_QWORD *)v3 + 8);
      *((_QWORD *)v3 + 7) = 0LL;
      *((_QWORD *)v3 + 8) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, v3, v2);
      *((_QWORD *)v3 + 7) = v4;
      *((_QWORD *)v3 + 8) = v5;
      v3 = v5;
    }
    while ( v5 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
