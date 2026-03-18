/*
 * XREFs of ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180164A14
 * Callers:
 *     ?ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z @ 0x180161790 (-ApiSetKeyframeCount@Animation@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x180161BDC (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x180161C18 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801640D0 (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x1801644FC (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x1801648CC (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x180164B34 (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeCount(Components::Animations::Sequence *this, int a2)
{
  __int64 v2; // rdi
  __int64 v3; // rbx
  __int64 *v4; // r14
  __int64 result; // rax
  __int64 v6; // rsi
  __int64 v7; // rdi
  __int64 v8; // rbx
  Components::Animations::Input *v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // rsi
  _QWORD *v12; // r14
  __int64 v13; // rdi
  Components::Animations::Interpolation *v14; // [rsp+20h] [rbp-28h] BYREF
  _OWORD v15[2]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((int *)this + 6);
  v3 = a2;
  if ( a2 <= (int)v2 )
  {
    if ( a2 )
    {
      if ( a2 < (int)v2 )
      {
        v11 = 24LL * a2;
        v12 = (_QWORD *)((char *)this + 16);
        v13 = (unsigned int)(v2 - a2);
        do
        {
          Components::Animations::Sequence::Keyframe::Clear((Components::Animations::Interpolation **)(v11 + *v12));
          v11 += 24LL;
          --v13;
        }
        while ( v13 );
        Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(v12, (unsigned int)v3);
      }
    }
    else
    {
      Components::Animations::Sequence::RemoveAllKeyFrames(this);
    }
  }
  else
  {
    v4 = (__int64 *)((char *)this + 16);
    result = Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(
               (char *)this + 16,
               (unsigned int)a2);
    if ( (int)result < 0 )
      return result;
    if ( v2 < v3 )
    {
      v6 = 24 * v2;
      v7 = v3 - v2;
      do
      {
        LODWORD(v14) = 0;
        v15[0] = 0LL;
        Components::Animations::RefPtr<Components::Animations::Input>::Assign(
          (Components::Animations::Input **)v15,
          Components::Animations::Sequence::s_rpDefaultValue);
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
          (Components::Animations::Interpolation **)v15 + 1,
          (Components::Animations::Interpolation *)Components::Animations::Sequence::s_rpDefaultInterpolation);
        v8 = *v4;
        v9 = *(Components::Animations::Input **)&v15[0];
        v10 = *v4 + 8;
        *(_DWORD *)(v6 + *v4) = (_DWORD)v14;
        Components::Animations::RefPtr<Components::Animations::Input>::Assign(
          (Components::Animations::Input **)(v6 + v10),
          v9);
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
          (Components::Animations::Interpolation **)(v6 + v8 + 16),
          *((Components::Animations::Interpolation **)&v15[0] + 1));
        Components::Animations::Sequence::Keyframe::~Keyframe(&v14);
        v6 += 24LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
