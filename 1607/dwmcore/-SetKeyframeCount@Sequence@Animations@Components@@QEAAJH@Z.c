/*
 * XREFs of ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ @ 0x180085C2C (-RemoveAllKeyFrames@Sequence@Animations@Components@@AEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpolation@23@PEAV423@@Z @ 0x1800AB728 (-Assign@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@IEAAPEAVInterpola.c)
 *     ?Release@?$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB76C (-Release@-$RefPtr@VInterpolation@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Release@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x1800AB7AC (-Release@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@QEAAXXZ.c)
 *     ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x1800AB7F4 (-Assign@-$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@.c)
 *     ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x1800AF69C (-SetSize@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z.c)
 *     ?Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ @ 0x180113638 (-Clear@Keyframe@Sequence@Animations@Components@@QEAAXXZ.c)
 */

__int64 __fastcall Components::Animations::Sequence::SetKeyframeCount(Components::Animations::Sequence *this, int a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx
  __int64 result; // rax
  __int64 v6; // r14
  __int64 v7; // rdi
  __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r14
  __int64 v12; // rdi
  _OWORD v13[2]; // [rsp+28h] [rbp-20h] BYREF

  v2 = *((int *)this + 2);
  v4 = a2;
  if ( a2 <= (int)v2 )
  {
    if ( a2 )
    {
      if ( a2 < (int)v2 )
      {
        v11 = 24LL * a2;
        v12 = (unsigned int)(v2 - a2);
        do
        {
          Components::Animations::Sequence::Keyframe::Clear((Components::Animations::Sequence::Keyframe *)(v11 + *(_QWORD *)this));
          v11 += 24LL;
          --v12;
        }
        while ( v12 );
        Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(this, (unsigned int)v4);
      }
    }
    else
    {
      Components::Animations::Sequence::RemoveAllKeyFrames(this);
    }
  }
  else
  {
    result = Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(
               this,
               (unsigned int)a2);
    if ( (int)result < 0 )
      return result;
    if ( v2 < v4 )
    {
      v6 = 24 * v2;
      v7 = v4 - v2;
      do
      {
        v13[0] = 0LL;
        Components::Animations::RefPtr<Components::Animations::Input>::Assign(
          v13,
          Components::Animations::Sequence::s_rpDefaultValue);
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
          (char *)v13 + 8,
          Components::Animations::Sequence::s_rpDefaultInterpolation);
        v8 = *(_QWORD *)this;
        v9 = *(_QWORD *)&v13[0];
        v10 = *(_QWORD *)this + 8LL;
        *(_DWORD *)(v6 + *(_QWORD *)this) = 0;
        Components::Animations::RefPtr<Components::Animations::Input>::Assign(v6 + v10, v9);
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Assign(
          v6 + v8 + 16,
          *((_QWORD *)&v13[0] + 1));
        Components::Animations::RefPtr<Components::Animations::Interpolation>::Release((char *)v13 + 8);
        Components::Animations::RefPtr<Components::Animations::Input>::Release(v13);
        v6 += 24LL;
        --v7;
      }
      while ( v7 );
    }
  }
  return 0LL;
}
