/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x180009790
 * Callers:
 *     <none>
 * Callees:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180009944 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

CaptureBitsResponse *__fastcall CaptureBitsResponse::`scalar deleting destructor'(CaptureBitsResponse *this, char a2)
{
  CaptureBitsResponse::~CaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CaptureBitsResponse *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
