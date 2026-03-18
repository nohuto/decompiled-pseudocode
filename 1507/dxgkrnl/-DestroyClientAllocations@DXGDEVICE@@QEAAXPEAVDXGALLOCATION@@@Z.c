/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C012C900
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C012C9AC (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C012E524 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C013585C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C0005358 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0005380 (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C00171B4 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C009206C (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(PERESOURCE *this, struct _EX_RUNDOWN_REF *a2)
{
  struct DXGALLOCATION *Count; // r14
  __int64 v5; // rcx
  ULONG_PTR v6; // rdi
  _QWORD *Address; // rbx
  struct _KTHREAD **Current; // rax
  char v9; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  if ( a2 )
  {
    do
    {
      Count = (struct DXGALLOCATION *)a2[8].Count;
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, a2, 0LL);
      if ( (a2[9].Count & 1) != 0 )
      {
        v6 = a2[10].Count;
        Address = this[2][3].Address;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent(v5);
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9, Current);
        (*(void (__fastcall **)(ULONG_PTR))(Address[1] + 272LL))(v6);
        DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v9);
        LODWORD(a2[9].Count) &= ~1u;
      }
      DXGALLOCATION::`scalar deleting destructor'((DXGALLOCATION *)a2);
      a2 = (struct _EX_RUNDOWN_REF *)Count;
    }
    while ( Count );
  }
}
