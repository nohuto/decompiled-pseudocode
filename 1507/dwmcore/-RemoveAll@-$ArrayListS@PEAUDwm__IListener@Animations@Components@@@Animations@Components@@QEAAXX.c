/*
 * XREFs of ?RemoveAll@?$ArrayListS@PEAUDwm__IListener@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180153BE8
 * Callers:
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180153C1C (--1Animation@Animations@Components@@UEAA@XZ.c)
 *     ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180154A78 (-CleanUp@Animation@Animations@Components@@AEAAXXZ.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x180155AE0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
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
