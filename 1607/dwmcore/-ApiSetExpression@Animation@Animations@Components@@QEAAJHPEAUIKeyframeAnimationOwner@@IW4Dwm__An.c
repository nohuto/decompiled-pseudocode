/*
 * XREFs of ?ApiSetExpression@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@IW4Dwm__AnimationType@23@@Z @ 0x180191A88
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetExpression(__int64 a1, int a2, __int64 a3, int a4, int a5)
{
  __int64 v9; // rax
  __int64 v10; // rbx
  int v11; // edi

  v9 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v10 = v9;
  if ( v9 )
  {
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)v9 = &Components::Animations::ExpressionInput::`vftable';
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    *(_DWORD *)(v10 + 12) = a5;
    *(_QWORD *)(v10 + 16) = a3;
    *(_DWORD *)(v10 + 24) = a4;
    v11 = Components::Animations::Sequence::SetKeyframeValue(
            *(Components::Animations::Sequence **)(a1 + 16),
            a2,
            (struct Components::Animations::Input *)v10);
    if ( v11 >= 0 )
      v11 = 0;
    if ( (*(_DWORD *)(v10 + 8))-- == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 48LL))(v10);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v11;
}
