/*
 * XREFs of ??_GHANDLE_TABLE@@UEAAPEAXI@Z @ 0x1800E2360
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

HANDLE_TABLE *__fastcall HANDLE_TABLE::`scalar deleting destructor'(HANDLE_TABLE *this, char a2)
{
  WPF::ProcessHeapImpl *v2; // rdi

  v2 = WPF::g_pProcessHeap;
  *(_QWORD *)this = &HANDLE_TABLE::`vftable';
  (*(void (__fastcall **)(WPF::ProcessHeapImpl *, _QWORD))(*(_QWORD *)v2 + 32LL))(v2, *((_QWORD *)this + 3));
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, HANDLE_TABLE *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
