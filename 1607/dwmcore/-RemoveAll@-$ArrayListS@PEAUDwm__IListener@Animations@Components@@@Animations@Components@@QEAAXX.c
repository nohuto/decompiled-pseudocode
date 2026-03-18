/*
 * XREFs of ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800B24A0
 * Callers:
 *     ?xwPreDelete@Animation@Animations@Components@@UEAAXXZ @ 0x180086000 (-xwPreDelete@Animation@Animations@Components@@UEAAXXZ.c)
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180086650 (--1Animation@Animations@Components@@UEAA@XZ.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 */

void __fastcall Components::Animations::ArrayListS<Components::Animations::Dwm__IListener *>::RemoveAll(_QWORD *a1)
{
  if ( *a1 )
  {
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      (void *)(*a1 - 8LL));
    *a1 = 0LL;
  }
}
