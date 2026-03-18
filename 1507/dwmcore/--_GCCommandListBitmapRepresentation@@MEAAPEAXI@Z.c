/*
 * XREFs of ??_GCCommandListBitmapRepresentation@@MEAAPEAXI@Z @ 0x1800F9150
 * Callers:
 *     <none>
 * Callees:
 *     ??1CCommandListBitmapRepresentation@@MEAA@XZ @ 0x180087D9C (--1CCommandListBitmapRepresentation@@MEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void **__fastcall CCommandListBitmapRepresentation::`scalar deleting destructor'(void **this, char a2)
{
  CCommandListBitmapRepresentation::~CCommandListBitmapRepresentation(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, void **))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
