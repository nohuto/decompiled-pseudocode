/*
 * XREFs of ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610
 * Callers:
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x180085FA4 (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800AF69C (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Free@Heap@Animations@Components@@UEAAXPEAX@Z @ 0x1800210A0 (-Free@Heap@Animations@Components@@UEAAXPEAX@Z.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(__int64 a1)
{
  int i; // ebp
  Components::Animations::Input **v3; // rbx

  for ( i = 0; i < *(_DWORD *)(a1 + 8); ++i )
  {
    v3 = *(Components::Animations::Input ***)a1;
    Components::Animations::RefPtr<Components::Animations::Interpolation>::Release((_DWORD **)(*(_QWORD *)a1
                                                                                             + 16LL
                                                                                             + 24LL * i));
    Components::Animations::RefPtr<Components::Animations::Input>::Release(&v3[3 * i + 1]);
  }
  if ( *(_QWORD *)a1 != a1 + 16 )
    Components::Animations::Heap::Free(
      (Components::Animations::Heap *)&Components::Animations::g_defaultHeap,
      *(void **)a1);
  *(_DWORD *)(a1 + 8) = 0;
  *(_QWORD *)a1 = a1 + 16;
  *(_DWORD *)(a1 + 12) = 8;
}
