/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00848F0
 * Callers:
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0004950 (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000F640 (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C005B404 (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C0073AE8 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C00808F0 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ?DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z @ 0x1C0082554 (-DestroyAllDeviceState@DXGDEVICE@@QEAAXPEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Close@DXGSYNCOBJECT@@QEAAEI@Z @ 0x1C008364C (-Close@DXGSYNCOBJECT@@QEAAEI@Z.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0091FB0 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009206C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C00A8BC4 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00ADB3C (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall HMGRTABLE::FreeHandle(HMGRTABLE *this, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int v4; // edi
  unsigned int v6; // edx
  __int64 v7; // r9
  int v8; // ecx
  int v9; // eax
  char v10; // al
  __int64 v11; // rcx
  __int64 v12; // rax
  __int64 v13; // rax

  v4 = a2;
  if ( *((_DWORD *)this + 5) >= *((_DWORD *)this + 4) )
  {
    v12 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v12 + 24) = 258LL;
    WdLogEvent5_WdAssertion(v12);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    v13 = WdLogNewEntry5_WdAssertion(this, a2, a3, a4);
    *(_QWORD *)(v13 + 24) = 259LL;
    WdLogEvent5_WdAssertion(v13);
  }
  v6 = (v4 >> 6) & 0xFFFFFF;
  if ( v6 < *((_DWORD *)this + 4) )
  {
    v7 = *(_QWORD *)this;
    if ( ((v4 >> 26) & 0x30) == (*(_BYTE *)(*(_QWORD *)this + 16LL * v6 + 8) & 0x30)
      && (*(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) & 0xF) != 0 )
    {
      v9 = (*(_DWORD *)(v7 + 16LL * v6 + 8) >> 4) & 3;
      if ( v9 == 3 )
        v10 = 1;
      else
        v10 = v9 + 1;
      v8 = *(_DWORD *)(v7 + 16LL * v6 + 8);
      *(_DWORD *)(v7 + 16LL * v6 + 8) = v8 ^ ((unsigned __int8)v8 ^ (unsigned __int8)(16 * v10)) & 0x30;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) &= 0xFFFFFFF0;
      *(_DWORD *)(*(_QWORD *)this + 16LL * v6 + 8) &= ~0x1000u;
      v11 = *(_QWORD *)this;
      ++*((_DWORD *)this + 5);
      *(_DWORD *)(v11 + 16LL * v6) = *(_DWORD *)(v11 + 16LL * *((unsigned int *)this + 3));
      *(_DWORD *)(*(_QWORD *)this + 16LL * *((unsigned int *)this + 3)) = v6;
    }
  }
}
