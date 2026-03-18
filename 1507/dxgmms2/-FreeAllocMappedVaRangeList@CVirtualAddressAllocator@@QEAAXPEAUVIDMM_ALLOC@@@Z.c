/*
 * XREFs of ?FreeAllocMappedVaRangeList@CVirtualAddressAllocator@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C005F954
 * Callers:
 *     ?ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C003AD5C (-ProcessSystemCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_SYSTEM_COMMAND@@_N_KPEAU_VIDSCH_SYNC_OBJECT@.c)
 * Callees:
 *     ??0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z @ 0x1C0003E68 (--0DXGAUTOPUSHLOCKEXCLUSIVE@@QEAA@QEAVDXGPUSHLOCK@@@Z.c)
 *     ?Release@DXGAUTOPUSHLOCK@@QEAAXXZ @ 0x1C0005E4C (-Release@DXGAUTOPUSHLOCK@@QEAAXXZ.c)
 *     ?UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_VA_RANGE@@EPEAUVIDMM_VAD_PENDING_OPERATION@@@Z @ 0x1C0053BFC (-UncommitVirtualAddressRange@VIDMM_GLOBAL@@QEAAJPEAVCVirtualAddressAllocator@@PEAUVIDMM_MAPPED_V.c)
 *     ?RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0062EA0 (-RemoveVaRangeFromVad@CVirtualAddressAllocator@@QEAAXPEAU_LIST_ENTRY@@E@Z.c)
 */

void __fastcall CVirtualAddressAllocator::FreeAllocMappedVaRangeList(VIDMM_GLOBAL **this, struct VIDMM_ALLOC *a2)
{
  struct _LIST_ENTRY **v2; // rdi
  struct _LIST_ENTRY **i; // rsi
  struct _LIST_ENTRY *v5; // rdx
  struct _LIST_ENTRY *Flink; // rax
  _BYTE v7[40]; // [rsp+30h] [rbp-28h] BYREF

  v2 = (struct _LIST_ENTRY **)((char *)a2 + 128);
  for ( i = (struct _LIST_ENTRY **)*((_QWORD *)a2 + 16); i != v2; i = (struct _LIST_ENTRY **)*i )
  {
    VIDMM_GLOBAL::UncommitVirtualAddressRange(
      this[8],
      (struct CVirtualAddressAllocator *)this,
      (struct VIDMM_MAPPED_VA_RANGE *)(i - 3),
      KeGetCurrentThread() == *(struct _KTHREAD **)(*(_QWORD *)this[8] + 8LL),
      0LL);
    *((_DWORD *)i + 10) &= 0xFFFFF3FF;
  }
  DXGAUTOPUSHLOCKEXCLUSIVE::DXGAUTOPUSHLOCKEXCLUSIVE(
    (DXGAUTOPUSHLOCKEXCLUSIVE *)v7,
    (struct DXGPUSHLOCK *const)(this + 5));
  while ( *v2 != (struct _LIST_ENTRY *)v2 )
  {
    v5 = *v2;
    Flink = (*v2)->Flink;
    if ( (struct _LIST_ENTRY **)(*v2)->Blink != v2 || Flink->Blink != v5 )
      __fastfail(3u);
    *v2 = Flink;
    Flink->Blink = (struct _LIST_ENTRY *)v2;
    v5->Flink = 0LL;
    v5->Blink = 0LL;
    CVirtualAddressAllocator::RemoveVaRangeFromVad((CVirtualAddressAllocator *)this, v5 - 1, 1u);
  }
  DXGAUTOPUSHLOCK::Release((DXGAUTOPUSHLOCK *)v7);
}
