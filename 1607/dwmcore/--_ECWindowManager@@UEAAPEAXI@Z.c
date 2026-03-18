/*
 * XREFs of ??_ECWindowManager@@UEAAPEAXI@Z @ 0x18011ACE0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$DynArrayImpl@$00@@IEAA@XZ @ 0x18009A64C (--1-$DynArrayImpl@$00@@IEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CWindowManager *__fastcall CWindowManager::`vector deleting destructor'(CWindowManager *this, char a2)
{
  struct _RTL_GENERIC_TABLE *i; // rdi
  PVOID v5; // rax
  PVOID RestartKey; // [rsp+30h] [rbp+8h] BYREF

  *(_QWORD *)this = &CWindowManager::`vftable';
  for ( i = (struct _RTL_GENERIC_TABLE *)((char *)this + 48); ; RtlDeleteElementGenericTable(i, v5) )
  {
    RestartKey = 0LL;
    v5 = RtlEnumerateGenericTableWithoutSplaying(i, &RestartKey);
    if ( !v5 )
      break;
  }
  DynArrayImpl<1>::~DynArrayImpl<1>((__int64)this + 16);
  *(_QWORD *)this = &CMILRefCountBase::`vftable';
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CWindowManager *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
