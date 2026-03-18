/*
 * XREFs of ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1801647E8
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x18016099C (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801640D0 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x1801644FC (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x1800BA524 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 */

void __fastcall Components::Animations::RefPtr<Components::Animations::Input>::Release(
        Components::Animations::Input **a1)
{
  Components::Animations::Input *v1; // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
    Components::Animations::Input::Release(v1);
}
