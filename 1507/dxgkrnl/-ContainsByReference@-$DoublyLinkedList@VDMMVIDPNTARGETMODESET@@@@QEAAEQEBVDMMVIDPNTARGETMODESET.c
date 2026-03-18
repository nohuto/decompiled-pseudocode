/*
 * XREFs of ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C002BF3C
 * Callers:
 *     ?SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV?$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z @ 0x1C0003C3C (-SetCofuncModeSet@DMMVIDPNTARGET@@QEAAJV-$auto_rc@VDMMVIDPNTARGETMODESET@@@@@Z.c)
 *     ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0003E38 (-ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 * Callees:
 *     <none>
 */

char __fastcall DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(__int64 a1, __int64 a2)
{
  char v2; // r8
  _QWORD *v4; // rcx
  __int64 v5; // rax
  _QWORD *v6; // rax

  v2 = 0;
  if ( !a2 )
    return 0;
  v4 = (_QWORD *)(a1 + 16);
  if ( (_QWORD *)*v4 != v4 )
  {
    v5 = *v4 - 8LL;
    if ( *v4 != 8LL )
    {
      do
      {
        if ( v5 == a2 )
          break;
        v6 = *(_QWORD **)(v5 + 8);
        v5 = v6 == v4 ? 0LL : (__int64)(v6 - 1);
      }
      while ( v5 );
      if ( v5 )
        return 1;
    }
  }
  return v2;
}
