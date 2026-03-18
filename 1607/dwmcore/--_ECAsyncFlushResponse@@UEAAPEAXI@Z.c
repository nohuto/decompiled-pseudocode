/*
 * XREFs of ??_ECAsyncFlushResponse@@UEAAPEAXI@Z @ 0x1800AAA50
 * Callers:
 *     <none>
 * Callees:
 *     ??1CAsyncFlushResponse@@UEAA@XZ @ 0x1800AAAF0 (--1CAsyncFlushResponse@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CAsyncFlushResponse *__fastcall CAsyncFlushResponse::`vector deleting destructor'(CAsyncFlushResponse *this, char a2)
{
  CAsyncFlushResponse::~CAsyncFlushResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CAsyncFlushResponse *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
