/*
 * XREFs of ??_EMagnifierCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1801210B0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1MagnifierCaptureBitsResponse@@UEAA@XZ @ 0x180121070 (--1MagnifierCaptureBitsResponse@@UEAA@XZ.c)
 */

MagnifierCaptureBitsResponse *__fastcall MagnifierCaptureBitsResponse::`vector deleting destructor'(
        MagnifierCaptureBitsResponse *this,
        char a2)
{
  MagnifierCaptureBitsResponse::~MagnifierCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, MagnifierCaptureBitsResponse *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                   + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
