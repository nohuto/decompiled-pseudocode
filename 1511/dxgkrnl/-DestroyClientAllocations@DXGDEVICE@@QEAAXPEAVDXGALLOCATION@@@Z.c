/*
 * XREFs of ?DestroyClientAllocations@DXGDEVICE@@QEAAXPEAVDXGALLOCATION@@@Z @ 0x1C0132E24
 * Callers:
 *     ?DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z @ 0x1C0132ED0 (-DestroyClientResource@DXGDEVICE@@QEAAXPEAVDXGRESOURCE@@@Z.c)
 *     DxgkDestroyClientAllocation @ 0x1C0133CB4 (DxgkDestroyClientAllocation.c)
 *     ?DrainClientAllocations@DXGDEVICE@@QEAAXXZ @ 0x1C0139F7C (-DrainClientAllocations@DXGDEVICE@@QEAAXXZ.c)
 * Callees:
 *     ??1DXGPROCESSVIDMMLOCK@@QEAA@XZ @ 0x1C00047F4 (--1DXGPROCESSVIDMMLOCK@@QEAA@XZ.c)
 *     ??0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C000481C (--0DXGPROCESSVIDMMLOCK@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_GDXGALLOCATION@@QEAAPEAXI@Z @ 0x1C0018800 (--_GDXGALLOCATION@@QEAAPEAXI@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C01242F8 (-FreeAllocationHandleAndWaitForZeroReferences@ADAPTER_RENDER@@QEAAXPEAVDXGALLOCATION@@PEAVCOREDE.c)
 */

void __fastcall DXGDEVICE::DestroyClientAllocations(PERESOURCE *this, struct DXGALLOCATION *a2)
{
  struct DXGALLOCATION *v4; // r14
  __int64 v5; // rdi
  struct _LIST_ENTRY *Blink; // rbx
  struct _KTHREAD **Current; // rax
  char v8; // [rsp+40h] [rbp+8h] BYREF

  if ( !*((_DWORD *)this + 18) )
    ExIsResourceAcquiredExclusiveLite(this[10]);
  if ( a2 )
  {
    do
    {
      v4 = (struct DXGALLOCATION *)*((_QWORD *)a2 + 8);
      ADAPTER_RENDER::FreeAllocationHandleAndWaitForZeroReferences((ADAPTER_RENDER *)this, a2, 0LL);
      if ( (*((_DWORD *)a2 + 18) & 1) != 0 )
      {
        v5 = *((_QWORD *)a2 + 10);
        Blink = this[2][4].SystemResourcesList.Blink;
        Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent();
        DXGPROCESSVIDMMLOCK::DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8, Current);
        ((void (__fastcall *)(__int64))Blink->Blink[17].Flink)(v5);
        DXGPROCESSVIDMMLOCK::~DXGPROCESSVIDMMLOCK((DXGPROCESSVIDMMLOCK *)&v8);
        *((_DWORD *)a2 + 18) &= ~1u;
      }
      DXGALLOCATION::`scalar deleting destructor'(a2);
      a2 = v4;
    }
    while ( v4 );
  }
}
