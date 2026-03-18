/*
 * XREFs of ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x180154844
 * Callers:
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180155778 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180156DD4 (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 * Callees:
 *     ?Release@Input@Animations@Components@@QEAAXXZ @ 0x180097954 (-Release@Input@Animations@Components@@QEAAXXZ.c)
 */

Components::Animations::Input *__fastcall Components::Animations::RefPtr<Components::Animations::Input>::Assign(
        Components::Animations::Input **a1,
        Components::Animations::Input *a2)
{
  Components::Animations::Input *v4; // rcx

  if ( a2 )
    ++*((_DWORD *)a2 + 2);
  v4 = *a1;
  if ( v4 )
    Components::Animations::Input::Release(v4);
  *a1 = a2;
  return a2;
}
