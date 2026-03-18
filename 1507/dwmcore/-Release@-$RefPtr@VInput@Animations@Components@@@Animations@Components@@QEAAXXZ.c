/*
 * XREFs of ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A08
 * Callers:
 *     ??_GSequence@Animations@Components@@QEAAPEAXI@Z @ 0x1801539DC (--_GSequence@Animations@Components@@QEAAPEAXI@Z.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801562EC (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x18015671C (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x180097954 (-Release@Input@Animations@Components@@QEAAXXZ.c)
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
