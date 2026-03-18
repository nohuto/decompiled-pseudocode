/*
 * XREFs of ?FreeHandle@HMGRTABLE@@QEAAXI@Z @ 0x1C00A3220
 * Callers:
 *     ?FreeHandleSafe@DXGPROCESS@@QEAAXI@Z @ 0x1C000966C (-FreeHandleSafe@DXGPROCESS@@QEAAXI@Z.c)
 *     ?FreeHandle@DXGGLOBAL@@QEAAXI@Z @ 0x1C0009C7C (-FreeHandle@DXGGLOBAL@@QEAAXI@Z.c)
 *     ?DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z @ 0x1C006FD7C (-DestroyHandle@DXGKEYEDMUTEX@@SAEI@Z.c)
 *     ??1DXGDEVICESYNCOBJECT@@QEAA@XZ @ 0x1C008FE30 (--1DXGDEVICESYNCOBJECT@@QEAA@XZ.c)
 *     ?FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C0092900 (-FreeResourceHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGRESOURCE@@PEAVCOREDEVICE.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00929C8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 *     ?TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009C300 (-TerminateAllocations@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@HPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@.c)
 *     ??1DXGCONTEXT@@QEAA@XZ @ 0x1C00B0C30 (--1DXGCONTEXT@@QEAA@XZ.c)
 *     ?DestroyHandle@DXGADAPTER@@SAJI@Z @ 0x1C00D69C4 (-DestroyHandle@DXGADAPTER@@SAJI@Z.c)
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
    *(_QWORD *)(v10 + 24) = 255LL;
    WdLogEvent5_WdAssertion(v10);
  }
  if ( *((_DWORD *)this + 5) < 0x80u )
  {
    v11 = WdLogNewEntry5_WdAssertion(this);
    *(_QWORD *)(v11 + 24) = 256LL;
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
