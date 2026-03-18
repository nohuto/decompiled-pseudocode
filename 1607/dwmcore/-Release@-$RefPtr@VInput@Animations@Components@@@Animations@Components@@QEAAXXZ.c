/*
 * XREFs of ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC
 * Callers:
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AF610 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x180113610 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x180113638 (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 * Callees:
 *     ?FinalRelease@Input@Animations@Components@@MEAAXXZ @ 0x1800AB840 (-FinalRelease@Input@Animations@Components@@MEAAXXZ.c)
 */

void __fastcall Components::Animations::RefPtr<Components::Animations::Input>::Release(
        Components::Animations::Input **a1)
{
  Components::Animations::Input *v1; // rdx
  void (__fastcall *v3)(Components::Animations::Input *__hidden); // rax

  v1 = *a1;
  *a1 = 0LL;
  if ( v1 )
  {
    if ( (*((_DWORD *)v1 + 2))-- == 1 )
    {
      v3 = *(void (__fastcall **)(Components::Animations::Input *__hidden))(*(_QWORD *)v1 + 48LL);
      if ( v3 == Components::Animations::Input::FinalRelease )
        Components::Animations::Input::FinalRelease(v1);
      else
        v3(v1);
    }
  }
}
