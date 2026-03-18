/*
 * XREFs of ?GetFirstPath@DMMVIDPNTOPOLOGY@@QEBAPEAVDMMVIDPNPRESENTPATH@@XZ @ 0x1C0004EB0
 * Callers:
 *     sub_1C00BFFB8 @ 0x1C00BFFB8 (sub_1C00BFFB8.c)
 *     ?RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CBC48 (-RemovePresentPathFromActiveVidPn@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     <none>
 */

struct DMMVIDPNPRESENTPATH *__fastcall DMMVIDPNTOPOLOGY::GetFirstPath(DMMVIDPNTOPOLOGY *this)
{
  _QWORD *v1; // rax

  v1 = (_QWORD *)((char *)this + 24);
  if ( (_QWORD *)*v1 == v1 )
    return 0LL;
  else
    return (struct DMMVIDPNPRESENTPATH *)(*v1 - 8LL);
}
