/*
 * XREFs of ??_ECScalar@@MEAAPEAXI@Z @ 0x1800F9580
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CScalar@@MEAA@XZ @ 0x180107AC8 (--1CScalar@@MEAA@XZ.c)
 */

CScalar *__fastcall CScalar::`vector deleting destructor'(CScalar *this, char a2)
{
  CScalar::~CScalar(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CScalar *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
