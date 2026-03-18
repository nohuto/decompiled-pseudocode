/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNTARGET@@IEAAJXZ @ 0x1C0006404
 * Callers:
 *     ??0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z @ 0x1C0005B78 (--0DMMVIDPNTARGET@@QEAA@QEAVDMMVIDPNTARGETSET@@QEAVDMMVIDEOPRESENTTARGET@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ??0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z @ 0x1C0005898 (--0DMMVIDPNTARGETMODESET@@IEAA@PEAVDMMVIDPNTARGET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNTARGET::_SetEmptyCofuncModeSet(DMMVIDPNTARGET *this)
{
  DMMVIDPNTARGETMODESET *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  DMMVIDPNTARGETMODESET *v6; // rdi
  __int64 v7; // rcx
  __int64 v9; // rax
  __int64 v10; // rax

  v2 = (DMMVIDPNTARGETMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
  if ( v2 )
    v6 = DMMVIDPNTARGETMODESET::DMMVIDPNTARGETMODESET(v2, this);
  else
    v6 = 0LL;
  v7 = *((_QWORD *)this + 13);
  if ( v7 && v6 != (DMMVIDPNTARGETMODESET *)v7 )
    ReferenceCounted::Release((ReferenceCounted *)(v7 + 88));
  *((_QWORD *)this + 13) = v6;
  if ( v6 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 3))((__int64)v6 + 24) )
    {
      return 0LL;
    }
    else
    {
      v10 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v10 + 24) = this;
      *(_QWORD *)(v10 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v10);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v9 = WdLogNewEntry5_WdLowResource(0LL, v3, v4, v5);
    WdLogEvent5_WdLowResource(v9);
    return 3221225495LL;
  }
}
