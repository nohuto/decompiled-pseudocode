/*
 * XREFs of ?RemoveAll@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x18001D854
 * Callers:
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x18001D898 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 *     ??_GAnimationManager@Animations@Components@@UEAAPEAXI@Z @ 0x180194750 (--_GAnimationManager@Animations@Components@@UEAAPEAXI@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x1801947C0 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Animation *>::RemoveAll(__int64 a1)
{
  __int64 v1; // rdi

  v1 = a1 + 16;
  if ( *(_QWORD *)a1 != a1 + 16 )
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = v1;
  *(_DWORD *)(a1 + 12) = 8;
}
