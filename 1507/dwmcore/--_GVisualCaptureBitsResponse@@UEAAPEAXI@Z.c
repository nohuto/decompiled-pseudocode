/*
 * XREFs of ??_GVisualCaptureBitsResponse@@UEAAPEAXI@Z @ 0x1800F03E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1VisualCaptureBitsResponse@@UEAA@XZ @ 0x1800F03A0 (--1VisualCaptureBitsResponse@@UEAA@XZ.c)
 */

VisualCaptureBitsResponse *__fastcall VisualCaptureBitsResponse::`scalar deleting destructor'(
        VisualCaptureBitsResponse *this,
        char a2)
{
  VisualCaptureBitsResponse::~VisualCaptureBitsResponse(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, VisualCaptureBitsResponse *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
