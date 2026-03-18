/*
 * XREFs of ?ApiSetStartingValue@Animation@Animations@Components@@QEAAJHPEAUIKeyframeAnimationOwner@@W4Dwm__AnimationType@23@@Z @ 0x180018F68
 * Callers:
 *     ?ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATION_SETKEYFRAMEDATA@@@Z @ 0x180087408 (-ProcessSetKeyframeData@CKeyframeAnimation@@QEAAJPEAVCResourceTable@@PEBUMILCMD_KEYFRAMEANIMATIO.c)
 * Callees:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Components::Animations::Animation::ApiSetStartingValue(__int64 a1, int a2, __int64 a3, int a4)
{
  __int64 v8; // rax
  __int64 v9; // rbx
  int v10; // edi

  v8 = (*(__int64 (__fastcall **)(WPF::ProcessHeapImpl *, __int64))(*(_QWORD *)WPF::g_pProcessHeap + 16LL))(
         WPF::g_pProcessHeap,
         32LL);
  v9 = v8;
  if ( v8 )
  {
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = &Components::Animations::StartingValueInput::`vftable';
  }
  else
  {
    v9 = 0LL;
  }
  if ( v9 )
  {
    *(_QWORD *)(v9 + 16) = a3;
    *(_DWORD *)(v9 + 12) = a4;
    v10 = Components::Animations::Sequence::SetKeyframeValue(
            *(Components::Animations::Sequence **)(a1 + 16),
            a2,
            (struct Components::Animations::Input *)v9);
    if ( v10 >= 0 )
      v10 = 0;
    if ( (*(_DWORD *)(v9 + 8))-- == 1 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 48LL))(v9);
  }
  else
  {
    return (unsigned int)-2147024882;
  }
  return (unsigned int)v10;
}
