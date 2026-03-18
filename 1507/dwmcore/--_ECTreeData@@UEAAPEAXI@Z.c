/*
 * XREFs of ??_ECTreeData@@UEAAPEAXI@Z @ 0x1801034F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1CTreeData@@UEAA@XZ @ 0x180059654 (--1CTreeData@@UEAA@XZ.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

CTreeData *__fastcall CTreeData::`vector deleting destructor'(CTreeData *this, char a2)
{
  CTreeData::~CTreeData(this);
  if ( (a2 & 1) != 0 )
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, CTreeData *))(*(_QWORD *)WPF::g_pProcessHeap + 32LL))(
      WPF::g_pProcessHeap,
      this);
  return this;
}
