/*
 * XREFs of ?Assign@?$RefPtr@VInput@Animations@Components@@@Animations@Components@@IEAAPEAVInput@23@PEAV423@@Z @ 0x1800AB7F4
 * Callers:
 *     ?SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z @ 0x180085D8C (-SetKeyframeCount@Sequence@Animations@Components@@QEAAJH@Z.c)
 *     ?SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z @ 0x180085F78 (-SetKeyframeValue@Sequence@Animations@Components@@QEAAJHPEAVInput@23@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

_DWORD *__fastcall Components::Animations::RefPtr<Components::Animations::Input>::Assign(_DWORD **a1, _DWORD *a2)
{
  _DWORD *v4; // rcx

  if ( a2 )
    ++a2[2];
  v4 = *a1;
  if ( v4 )
  {
    if ( v4[2]-- == 1 )
      (*(void (__fastcall **)(_DWORD *))(*(_QWORD *)v4 + 48LL))(v4);
  }
  *a1 = a2;
  return a2;
}
