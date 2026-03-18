/*
 * XREFs of ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180164864
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1801648CC (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x180164B34 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1801637B0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801640D0 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(__int64 a1)
{
  int i; // edi

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
    Components::Animations::Sequence::Keyframe::~Keyframe((Components::Animations::Interpolation **)(*(_QWORD *)a1 + 24LL * i));
  if ( *(_QWORD *)a1 != a1 + 16 )
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_DWORD *)(a1 + 12) = 8;
}
