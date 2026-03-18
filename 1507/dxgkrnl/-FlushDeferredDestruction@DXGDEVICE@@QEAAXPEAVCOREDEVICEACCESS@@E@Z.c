/*
 * XREFs of ?FlushDeferredDestruction@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@E@Z @ 0x1C0082850
 * Callers:
 *     ?NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ @ 0x1C0079E60 (-NotifyProcessFreeze@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C007A3A0 (-DestroyDevice@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ??$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@PEAU_D3DDDI_ALLOCATIONINFO2@@PEAU_DXGK_ALLOCATIONINFO@@PEAVDXGALLOCATION@@PEBU_D3DKM_CREATESTANDARDALLOCATION@@EPEAVCOREDEVICEACCESS@@@Z @ 0x1C007C030 (--$CreateVidMmAllocations@U_DXGK_ALLOCATIONINFO@@@DXGDEVICE@@QEAAJPEAU_D3DKMT_CREATEALLOCATION@@.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Stop@ADAPTER_RENDER@@QEAAXE@Z @ 0x1C0128F10 (-Stop@ADAPTER_RENDER@@QEAAXE@Z.c)
 *     ?Stop@DXGDEVICE@@QEAAXE@Z @ 0x1C0136F50 (-Stop@DXGDEVICE@@QEAAXE@Z.c)
 * Callees:
 *     ?Release@COREACCESS@@QEAAXXZ @ 0x1C0001EBC (-Release@COREACCESS@@QEAAXXZ.c)
 *     ?AcquireShared@COREACCESS@@QEAAXXZ @ 0x1C0001EF4 (-AcquireShared@COREACCESS@@QEAAXXZ.c)
 *     ?IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00024E8 (-IsCoreResourceExclusiveOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0002B00 (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002E50 (-AcquireExclusive@DXGPUSHLOCK@@QEAAXXZ.c)
 */

void __fastcall DXGDEVICE::FlushDeferredDestruction(PVOID *this, PERESOURCE **a2, char a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  NTSTATUS v8; // esi
  __int64 v9; // r8
  __int64 v10; // r9
  bool v11; // zf
  DXGPUSHLOCK *v12; // rdi
  struct _KTHREAD *CurrentThread; // rdx
  __int64 v14; // rdx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  _BYTE v21[8]; // [rsp+30h] [rbp-28h] BYREF
  DXGPUSHLOCK *v22; // [rsp+38h] [rbp-20h]
  int v23; // [rsp+40h] [rbp-18h]

  if ( this[2341] )
  {
    if ( a2 )
    {
      if ( DXGADAPTER::IsCoreResourceExclusiveOwner(a2[2]) )
      {
        v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
        *(_QWORD *)(v18 + 24) = 1015LL;
        WdLogEvent5_WdAssertion(v18);
      }
      if ( *((_BYTE *)a2 + 64) )
        COREACCESS::Release((COREACCESS *)(a2 + 4));
      COREACCESS::Release((COREACCESS *)(a2 + 1));
    }
    v8 = KeWaitForSingleObject(this[2341], Executive, 0, 0, 0LL);
    if ( a3 )
    {
      v11 = this + 14 == 0LL;
      v12 = (DXGPUSHLOCK *)(this + 14);
      v22 = v12;
      if ( !v11 )
      {
        CurrentThread = KeGetCurrentThread();
        if ( *((struct _KTHREAD **)v12 + 1) == CurrentThread )
        {
          v19 = WdLogNewEntry5_WdAssertion(v7, CurrentThread, v9, v10);
          *(_QWORD *)(v19 + 24) = 1135LL;
          WdLogEvent5_WdAssertion(v19);
        }
      }
      DXGPUSHLOCK::AcquireExclusive(v12);
      v23 = 2;
      DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v21);
    }
    if ( a2 )
    {
      COREACCESS::AcquireShared((COREACCESS *)(a2 + 1));
      if ( *((_BYTE *)a2 + 64) )
        COREACCESS::AcquireShared((COREACCESS *)(a2 + 4));
    }
    if ( v8 )
    {
      v20 = WdLogNewEntry5_WdAssertion(v7, v6, v9, v10);
      *(_QWORD *)(v20 + 24) = 1044LL;
      WdLogEvent5_WdAssertion(v20);
    }
  }
}
