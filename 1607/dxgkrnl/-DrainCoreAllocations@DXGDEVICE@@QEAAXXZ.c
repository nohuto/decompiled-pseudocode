/*
 * XREFs of ?DrainCoreAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C015D7E8
 * Callers:
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C015EEB0 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0001668 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0009910 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z @ 0x1C0151348 (-DestroyCoreAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@PEAVDXGALLOCATION@@@Z.c)
 */

void __fastcall DXGDEVICE::DrainCoreAllocations(struct _KTHREAD **this)
{
  struct DXGALLOCATION *v2; // rsi
  __int64 v3; // rbx
  struct DXGALLOCATION *v4; // rdi
  _BYTE v5[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v5, this + 17);
  v2 = this[6];
  if ( v2 )
  {
    do
    {
      v3 = *((_QWORD *)v2 + 7);
      v4 = (struct DXGALLOCATION *)*((_QWORD *)v2 + 8);
      *((_QWORD *)v2 + 7) = 0LL;
      *((_QWORD *)v2 + 8) = 0LL;
      DXGDEVICE::DestroyCoreAllocations((DXGDEVICE *)this, 0LL, v2);
      *((_QWORD *)v2 + 7) = v3;
      *((_QWORD *)v2 + 8) = v4;
      v2 = v4;
    }
    while ( v4 );
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v5);
}
