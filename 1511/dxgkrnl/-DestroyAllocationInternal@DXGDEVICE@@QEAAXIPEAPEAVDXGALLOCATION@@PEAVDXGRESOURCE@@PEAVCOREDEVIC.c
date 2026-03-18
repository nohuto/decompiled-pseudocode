/*
 * XREFs of ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0075D88
 * Callers:
 *     ?DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C005BA30 (-DxgkCddOpenResource@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0064CC0 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCEFROMNTHANDLE@@@@YAJPEAU_D3DKMT_OP.c)
 *     ??$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@IPEAU_DXGSHAREDALLOCOBJECT@@H@Z @ 0x1C0065370 (--$OpenResourceFromGlobalHandleOrNtObject@U_D3DKMT_OPENRESOURCE@@@@YAJPEAU_D3DKMT_OPENRESOURCE@@.c)
 *     ?CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00753B0 (-CreateStandardAllocation@DXGDEVICE@@QEAAJPEAU_D3DKM_CREATESTANDARDALLOCATION@@PEAVCOREDEVICEACC.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00855BC (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z @ 0x1C009B93C (-DestroyCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@I@Z.c)
 *     ?CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIONAL@@W4_D3DDDI_ROTATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009BB50 (-CreateCddAllocations@ADAPTER_DISPLAY@@QEAAJPEAVDXGDEVICE@@IIIW4_D3DDDIFORMAT@@AEBU_D3DDDI_RATIO.c)
 *     ?DxgkCddDestroyAllocation@@YAJII@Z @ 0x1C00B0EE0 (-DxgkCddDestroyAllocation@@YAJII@Z.c)
 *     DxgkCreateAllocation @ 0x1C00B5600 (DxgkCreateAllocation.c)
 *     ?DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIPEAPEAXPEA_K@Z @ 0x1C01361B0 (-DxgkCddOpenResourceFromNtHandle@@YAJPEAU_D3DKMT_OPENRESOURCEFROMNTHANDLE@@IPEAU_EPROCESS@@PEAIP.c)
 *     ?CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C014B818 (-CloseInternalCddPrimaryHandle@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z @ 0x1C014C074 (-PrepareStagingBuffer@DXGPRESENT@@QEAAJPEAVDXGDEVICE@@IPEAVCOREDEVICEACCESS@@PEAI@Z.c)
 *     ?CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ @ 0x1C01569AC (-CloseFromDevice@DXGDXGIKEYEDMUTEX@@QEAAXXZ.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z @ 0x1C0123E58 (-RemoveAllocationsAndTransferToList@DXGDEVICE@@QEAAXPEAPEAVDXGALLOCATION@@I0@Z.c)
 */

void __fastcall DXGDEVICE::DestroyAllocationInternal(
        DXGDEVICE *this,
        unsigned int a2,
        struct DXGALLOCATION **a3,
        struct DXGRESOURCE *a4,
        DXGADAPTER **a5,
        struct _D3DDDICB_DESTROYALLOCATION2FLAGS a6)
{
  __int64 v10; // rcx
  DXGDEVICE *v11; // rcx
  struct DXGALLOCATION *v12; // r9
  int v13; // r8d
  struct DXGRESOURCE *v14; // rdx
  __int64 v15; // rax
  struct DXGALLOCATION *v16; // rdi
  DXGADAPTER **v17; // rsi
  _QWORD *v18; // rax
  struct DXGALLOCATION *v19; // r9
  struct DXGALLOCATION *v20; // [rsp+40h] [rbp+8h] BYREF

  if ( !DXGADAPTER::IsCoreResourceSharedOwner(*(DXGADAPTER **)(*((_QWORD *)this + 2) + 16LL)) )
  {
    v15 = WdLogNewEntry5_WdAssertion(v10);
    *(_QWORD *)(v15 + 24) = 4888LL;
    WdLogEvent5_WdAssertion(v15);
  }
  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(*((PERESOURCE *)this + 10));
  v11 = this;
  if ( a4 )
  {
    v12 = (struct DXGALLOCATION *)*((_QWORD *)a4 + 3);
    v13 = 1;
    v14 = a4;
LABEL_7:
    DXGDEVICE::TerminateAllocations(v11, v14, v13, v12, a5, a6);
    return;
  }
  v20 = 0LL;
  DXGDEVICE::RemoveAllocationsAndTransferToList(this, a3, a2, &v20);
  v16 = v20;
  if ( v20 )
  {
    v14 = (struct DXGRESOURCE *)*((_QWORD *)v20 + 5);
    if ( v14 )
    {
      v12 = v20;
      v13 = 0;
      v11 = this;
      goto LABEL_7;
    }
    v17 = a5;
    do
    {
      v18 = (_QWORD *)((char *)v16 + 64);
      v19 = v16;
      v16 = (struct DXGALLOCATION *)*((_QWORD *)v16 + 8);
      *v18 = 0LL;
      DXGDEVICE::TerminateAllocations(this, 0LL, 0, v19, v17, a6);
    }
    while ( v16 );
  }
}
