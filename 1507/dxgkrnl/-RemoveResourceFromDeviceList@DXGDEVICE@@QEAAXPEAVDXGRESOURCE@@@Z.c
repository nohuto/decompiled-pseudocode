/*
 * XREFs of ?RemoveResourceFromDeviceList@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C007B14C
 * Callers:
 *     ?CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@IPEAU_EPROCESS@@PEAIPEA_K@Z @ 0x1C007D760 (-CreateAllocation@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@EEPEAU_DXGSHAREDALLOCOBJECT@@PEB.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 * Callees:
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::RemoveResourceFromDeviceList(
        struct _KTHREAD **this,
        struct DXGRESOURCE *a2,
        __int64 a3,
        __int64 a4)
{
  DXGPUSHLOCK *v4; // rsi
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rcx
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax
  _BYTE v14[8]; // [rsp+20h] [rbp-28h] BYREF
  char *v15; // [rsp+28h] [rbp-20h]
  int v16; // [rsp+30h] [rbp-18h]

  v4 = (DXGPUSHLOCK *)(this + 20);
  v15 = (char *)(this + 20);
  if ( this != (struct _KTHREAD **)-160LL && this[21] == KeGetCurrentThread() )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 1135LL;
    WdLogEvent5_WdAssertion(v12);
  }
  DXGPUSHLOCK::AcquireExclusive(v4);
  v16 = 2;
  if ( a2 == this[7] || *((_QWORD *)a2 + 4) )
  {
    v10 = *((_QWORD *)a2 + 5);
    if ( v10 )
      *(_QWORD *)(v10 + 32) = *((_QWORD *)a2 + 4);
    v11 = *((_QWORD *)a2 + 4);
    if ( v11 )
    {
      *(_QWORD *)(v11 + 40) = *((_QWORD *)a2 + 5);
    }
    else
    {
      if ( this[7] != a2 )
      {
        v13 = WdLogNewEntry5_WdAssertion(0LL, v7, v8, v9);
        *(_QWORD *)(v13 + 24) = 7447LL;
        WdLogEvent5_WdAssertion(v13);
      }
      this[7] = (struct _KTHREAD *)*((_QWORD *)a2 + 5);
    }
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v14);
}
