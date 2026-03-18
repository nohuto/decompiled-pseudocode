/*
 * XREFs of ?RemoveAll@?$ArrayListF@PEAVAnimationEvent@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180160BD0
 * Callers:
 *     ??1Animation@Animations@Components@@UEAA@XZ @ 0x180160C94 (--1Animation@Animations@Components@@UEAA@XZ.c)
 *     ?ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ @ 0x1801610C8 (-ApiRemoveAllEvents@Animation@Animations@Components@@QEAAJXZ.c)
 *     ?CleanUp@Animation@Animations@Components@@AEAAXXZ @ 0x180161E08 (-CleanUp@Animation@Animations@Components@@AEAAXXZ.c)
 *     ??_GAnimationManager@Animations@Components@@UEAAPEAXI@Z @ 0x180163960 (--_GAnimationManager@Animations@Components@@UEAAPEAXI@Z.c)
 *     ?RemoveAt@?$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z @ 0x180163CC8 (-RemoveAt@-$ArrayListF@PEAVAnimation@Animations@Components@@@Animations@Components@@QEAAXH@Z.c)
 *     ?xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ @ 0x180164020 (-xwPreDelete@AnimationManager@Animations@Components@@UEAAXXZ.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1801637B0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::AnimationEvent *>::RemoveAll(__int64 a1)
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
