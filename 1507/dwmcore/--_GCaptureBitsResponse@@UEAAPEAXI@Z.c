/*
 * XREFs of ??_GCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800619D0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CaptureBitsResponse@@UEAA@XZ @ 0x180061B94 (--1CaptureBitsResponse@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
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
