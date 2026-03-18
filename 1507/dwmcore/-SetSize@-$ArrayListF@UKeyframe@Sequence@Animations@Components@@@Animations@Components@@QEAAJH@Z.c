/*
 * XREFs of ?SetSize@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAJH@Z @ 0x180156EF4
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180156DD4 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     memset_0 @ 0x180099BC6 (memset_0.c)
 *     ??1Keyframe@Sequence@Animations@Components@@QEAA@XZ @ 0x1801562EC (--1Keyframe@Sequence@Animations@Components@@QEAA@XZ.c)
 *     ?RemoveAll@?$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXXZ @ 0x180156A84 (-RemoveAll@-$ArrayListF@UKeyframe@Sequence@Animations@Components@@@Animations@Components@@QEAAXX.c)
 *     ?Resize@?$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z @ 0x180156C34 (-Resize@-$ArrayListF@UDeferredEventInfo@Animations@Components@@@Animations@Components@@IEAAJH@Z.c)
 */

__int64 __fastcall Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::SetSize(
        __int64 a1,
        int a2)
{
  int v4; // esi
  __int64 v5; // rsi
  __int64 result; // rax

  if ( a2 == *(_DWORD *)(a1 + 8) )
    return 0LL;
  if ( !a2 )
  {
    Components::Animations::ArrayListF<Components::Animations::Sequence::Keyframe>::RemoveAll(a1);
    return 0LL;
  }
  if ( a2 < *(_DWORD *)(a1 + 8) )
  {
    v4 = a2;
    do
      Components::Animations::Sequence::Keyframe::~Keyframe((Components::Animations::Interpolation **)(*(_QWORD *)a1 + 24LL * v4++));
    while ( v4 < *(_DWORD *)(a1 + 8) );
  }
  v5 = *(int *)(a1 + 8);
  result = Components::Animations::ArrayListF<Components::Animations::DeferredEventInfo>::Resize(a1, a2);
  if ( (int)result >= 0 )
  {
    if ( a2 > (int)v5 )
      memset_0((void *)(*(_QWORD *)a1 + 24 * v5), 0, 24LL * (a2 - (int)v5));
    return 0LL;
  }
  return result;
}
