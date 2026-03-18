/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C0094580
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C00019F4 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0006C6C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005C274 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0068868 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ @ 0x1C006D5D8 (-DestroyAllPagingQueues@DXGDEVICE@@QEAAXXZ.c)
 *     ?DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00742C4 (-DestroyAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C0074AD0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00855BC (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C0089E60 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ @ 0x1C008BB20 (-DestroyCoreState@DXGPAGINGQUEUE@@IEAAXXZ.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C00946F4 (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00B98D4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 *     ?DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z @ 0x1C00C079C (-DxgkDestroyPagingQueueInternal@@YAJPEAUD3DDDI_DESTROYPAGINGQUEUE@@H@Z.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01242F8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, unsigned int a2)
{
  unsigned int v4; // edx
  __int64 v5; // r9
  int v6; // ecx
  int v7; // eax
  char v8; // al
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 v11; // rax

  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    v10 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v10 + 24) = 244LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 245LL;
    WdLogEvent5_WdAssertion(v11);
  }
  v4 = (a2 >> 6) & 0xFFFFFF;
  if ( v4 < *((_DWORD *)this + 4) )
  {
    v5 = *(_QWORD *)this;
    if ( ((a2 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)this + 16LL * v4 + 8) & 0x30)
      && (*(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) & 0xF) != 0 )
    {
      v7 = (*(_DWORD *)(v5 + 16LL * v4 + 8) >> 4) & 3;
      if ( v7 == 3 )
        v8 = 1;
      else
        v8 = v7 + 1;
      v6 = *(_DWORD *)(v5 + 16LL * v4 + 8);
      *(_DWORD *)(v5 + 16LL * v4 + 8) = v6 ^ ((unsigned __int8)v6 ^ (unsigned __int8)(16 * v8)) & 0x30;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= 0xFFFFFFF0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v4 + 8) &= ~0x1000u;
      v9 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v9 + 16LL * v4) = *(_DWORD *)(v9 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v4;
    }
  }
}
