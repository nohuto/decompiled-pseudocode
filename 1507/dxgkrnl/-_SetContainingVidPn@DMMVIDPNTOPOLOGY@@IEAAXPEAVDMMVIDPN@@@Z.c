/*
 * XREFs of ?_SetContainingVidPn@DMMVIDPNTOPOLOGY@@IEAAXPEAVDMMVIDPN@@@Z @ 0x1C00042DC
 * Callers:
 *     ??0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z @ 0x1C0088DFC (--0DMMVIDPN@@QEAA@QEAVVIDPN_MGR@@@Z.c)
 *     ??0DMMVIDPN@@QEAA@AEBV0@@Z @ 0x1C00891AC (--0DMMVIDPN@@QEAA@AEBV0@@Z.c)
 * Callees:
 *     ?IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z @ 0x1C00076DC (-IsModifyingActionAllowed@ProtectableFromChange@@QEBAEE@Z.c)
 *     ?SetContainer@?$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z @ 0x1C00097CC (-SetContainer@-$ContainedBy@VDMMVIDPN@@@@QEAAJPEAVDMMVIDPN@@@Z.c)
 */

void __fastcall DMMVIDPNTOPOLOGY::_SetContainingVidPn(DMMVIDPNTOPOLOGY *this, struct DMMVIDPN *a2)
{
  __int64 v4; // rax

  if ( !ProtectableFromChange::IsModifyingActionAllowed((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0) )
  {
    v4 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v4);
  }
  ContainedBy<DMMVIDPN>::SetContainer((char *)this + 160, a2);
  ProtectableFromChange::OnModifyingActionCompletion((DMMVIDPNTOPOLOGY *)((char *)this + 56), 0);
}
