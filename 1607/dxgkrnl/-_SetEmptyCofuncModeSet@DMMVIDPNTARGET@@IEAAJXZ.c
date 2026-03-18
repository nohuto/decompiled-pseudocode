/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0003C44
 * Callers:
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C00806CC (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C00031D4 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *v2; // rax
  __int64 v4; // rax
  __int64 v5; // rax

  v2 = (DMMVIDPNTARGETMODESET *)operator new(0x98uLL, 0x4E506456u, PagedPool);
  if ( v2 )
    v2 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v2, this);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 104, v2);
  if ( *((_QWORD *)this + 13) )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(*((_QWORD *)this + 13) + 24LL))(*((_QWORD *)this + 13) + 24LL) )
    {
      return 0LL;
    }
    else
    {
      v5 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v5 + 24) = this;
      *(_QWORD *)(v5 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v5);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v4 = WdLogNewEntry5_WdLowResource(0LL);
    WdLogEvent5_WdLowResource(v4);
    return 3221225495LL;
  }
}
