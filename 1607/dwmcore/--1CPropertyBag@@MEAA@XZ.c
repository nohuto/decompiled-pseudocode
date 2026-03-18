/*
 * XREFs of ??1CPropertyBag@@MEAA@XZ @ 0x18008DA40
 * Callers:
 *     ??_GCPropertyBag@@MEAAPEAXI@Z @ 0x18008CC30 (--_GCPropertyBag@@MEAAPEAXI@Z.c)
 * Callees:
 *     ?Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z @ 0x180061620 (-Free@ProcessHeapImpl@WPF@@UEAAXPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

void __fastcall CPropertyBag::~CPropertyBag(CPropertyBag *this)
{
  struct _RTL_GENERIC_TABLE *v2; // rbx
  ULONG i; // edi
  void *v4; // rdx
  void (*v5)(void); // rax
  PVOID v6; // rax
  __int64 v7; // rdx
  const GUID *v8; // r8
  const GUID *v9; // r9
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  v2 = (struct _RTL_GENERIC_TABLE *)((char *)this + 120);
  *(_QWORD *)this = &CPropertyBag::`vftable';
  for ( i = 0; i < RtlNumberGenericTableElements(v2); ++i )
  {
    v4 = (void *)*((_QWORD *)RtlGetElementGenericTable(v2, i) + 1);
    if ( v4 )
    {
      v5 = *(void (**)(void))(*(_QWORD *)WPF::g_pProcessHeap + 32LL);
      if ( (char *)v5 == (char *)WPF::ProcessHeapImpl::Free )
        WPF::ProcessHeapImpl::Free(WPF::g_pProcessHeap, v4);
      else
        v5();
    }
  }
  while ( 1 )
  {
    RestartKey = 0LL;
    v6 = RtlEnumerateGenericTableWithoutSplaying(v2, &RestartKey);
    if ( !v6 )
      break;
    RtlDeleteElementGenericTable(v2, v6);
  }
  CPropertyBagBase::~CPropertyBagBase(this, v7, v8, v9);
}
