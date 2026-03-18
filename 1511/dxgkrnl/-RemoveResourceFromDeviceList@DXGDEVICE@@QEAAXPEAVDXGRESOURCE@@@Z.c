/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C006E094
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C0070760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0001BC8 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0003574 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ??0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z @ 0x1C00035C0 (--0DXGAUTOPUSHLOCK@@QEAA@QEAVDXGPUSHLOCK@@_N@Z.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(struct _KTHREAD **this, struct DXGRESOURCE *a2)
{
  __int64 v4; // rcx
  __int64 v5; // rcx
  __int64 v6; // rax
  _BYTE v7[8]; // [rsp+20h] [rbp-28h] BYREF
  DXGPUSHLOCK *v8; // [rsp+28h] [rbp-20h]
  int v9; // [rsp+30h] [rbp-18h]

  DXGAUTOPUSHLOCK::DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v7, this + 20);
  DXGPUSHLOCK::AcquireExclusive(v8);
  v9 = 2;
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v4 = *((_QWORD *)a2 + 5);
    if ( v4 )
      *(_QWORD *)(v4 + 32) = *((_QWORD *)a2 + 4);
    v5 = *((_QWORD *)a2 + 4);
    if ( v5 )
    {
      *(_QWORD *)(v5 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        v6 = WdLogNewEntry5_WdAssertion(0LL);
        *(_QWORD *)(v6 + 24) = 7470LL;
        WdLogEvent5_WdAssertion(v6);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
