/*
 * XREFs of ?AllocateStorage@AllocatedStorage@CSparseStorage@@SAPEAV12@I@Z @ 0x1800ACB94
 * Callers:
 *     ?FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z @ 0x1800AC9C8 (-FindSlotForData@CSparseStorage@@AEAAAEAVDataInfo@1@II@Z.c)
 * Callees:
 *     ?AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z @ 0x180061650 (-AllocClear@ProcessHeapImpl@WPF@@UEAAPEAX_K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

struct CSparseStorage::AllocatedStorage *__fastcall CSparseStorage::AllocatedStorage::AllocateStorage(int a1)
{
  unsigned int v1; // edi
  void *(__fastcall *v2)(WPF::ProcessHeapImpl *, size_t); // rax
  unsigned int *v3; // rax
  unsigned int *v4; // rbx

  v1 = a1 + 40;
  v2 = *(void *(__fastcall **)(WPF::ProcessHeapImpl *, size_t))(*(_QWORD *)WPF::g_pProcessHeap + 16LL);
  if ( v2 == WPF::ProcessHeapImpl::AllocClear )
    v3 = (unsigned int *)WPF::ProcessHeapImpl::AllocClear(WPF::g_pProcessHeap, v1);
  else
    v3 = (unsigned int *)v2(WPF::g_pProcessHeap, v1);
  v4 = v3;
  if ( !v3 )
    RaiseFailFastException(0LL, 0LL, 0);
  *v4 = v1;
  return (struct CSparseStorage::AllocatedStorage *)v4;
}
