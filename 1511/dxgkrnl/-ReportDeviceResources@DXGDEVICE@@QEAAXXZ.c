/*
 * XREFs of ?ReportDeviceResources@DXGDEVICE@@QEAAXXZ @ 0x1C013B2BC
 * Callers:
 *     ?ReportState@DXGDEVICE@@QEAAXXZ @ 0x1C013B35C (-ReportState@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C000AE48 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z @ 0x1C013B22C (-ReportAllocationState@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@H@Z.c)
 */

void __fastcall DXGDEVICE::ReportDeviceResources(struct _KTHREAD **this)
{
  struct _KTHREAD *i; // rbx
  bool v3; // al
  struct DXGALLOCATION *v4; // rdi
  int v5; // ebp
  _BYTE v6[40]; // [rsp+20h] [rbp-28h] BYREF

  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE((DXGAUTOPUSHLOCKEXCLUSIVE *)v6, this + 20);
  for ( i = this[7]; i; i = (struct _KTHREAD *)*((_QWORD *)i + 5) )
  {
    v3 = (*((_DWORD *)i + 1) & 1) == 0 || (*(_DWORD *)(*((_QWORD *)i + 7) + 12LL) & 2) == 0;
    v4 = (struct DXGALLOCATION *)*((_QWORD *)i + 3);
    if ( v4 )
    {
      v5 = v3;
      do
      {
        DXGDEVICE::ReportAllocationState((DXGDEVICE *)this, v4, v5);
        v4 = (struct DXGALLOCATION *)*((_QWORD *)v4 + 8);
        if ( (*((_DWORD *)i + 1) & 1) != 0 )
          *(_DWORD *)(*((_QWORD *)i + 7) + 12LL) |= 2u;
      }
      while ( v4 );
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v6);
}
