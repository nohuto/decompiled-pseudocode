/*
 * XREFs of ?_SetEmptyCofuncModeSet@DMMVIDPNSOURCE@@IEAAJXZ @ 0x1C0009DB4
 * Callers:
 *     ??0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z @ 0x1C0009760 (--0DMMVIDPNSOURCE@@QEAA@QEAVDMMVIDPNSOURCESET@@QEAVDMMVIDEOPRESENTSOURCE@@@Z.c)
 *     ?RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z @ 0x1C0091214 (-RemovePath@DMMVIDPNTOPOLOGY@@QEAAJIIPEAPEAVDMMVIDPNPRESENTPATH@@@Z.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ??0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z @ 0x1C00053E8 (--0DMMVIDPNSOURCEMODESET@@IEAA@PEAVDMMVIDPNSOURCE@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::_SetEmptyCofuncModeSet(DMMVIDPNSOURCE *this)
{
  DMMVIDPNSOURCEMODESET *v2; // rax
  __int64 v3; // rdx
  __int64 v4; // r8
  __int64 v5; // r9
  __int64 v7; // rax
  __int64 v8; // rax

  v2 = (DMMVIDPNSOURCEMODESET *)operator new[](0x98uLL, 0x4E506456u, PagedPool);
  if ( v2 )
    v2 = DMMVIDPNSOURCEMODESET::DMMVIDPNSOURCEMODESET(v2, this);
  auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 13, (__int64)v2);
  if ( *((_QWORD *)this + 13) )
  {
    if ( (**(unsigned __int8 (__fastcall ***)(__int64))(*((_QWORD *)this + 13) + 24LL))(*((_QWORD *)this + 13) + 24LL) )
    {
      return 0LL;
    }
    else
    {
      v8 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v8 + 24) = this;
      *(_QWORD *)(v8 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v8);
      return *(unsigned int *)(*((_QWORD *)this + 13) + 40LL);
    }
  }
  else
  {
    v7 = WdLogNewEntry5_WdLowResource(0LL, v3, v4, v5);
    WdLogEvent5_WdLowResource(v7);
    return 3221225495LL;
  }
}
