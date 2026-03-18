/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0003CB8
 * Callers:
 *     ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C007D500 (-ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNT.c)
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00BDC30 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0033D58 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(
        struct DMMVIDPNTARGETMODESET **this,
        struct DMMVIDPNTARGETMODESET *a2)
{
  char *v4; // rcx
  int v5; // ebx
  __int64 v7; // rax
  _QWORD *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rax
  __int64 v11; // r9
  _QWORD *v12; // rax
  __int64 v13; // rdx
  _QWORD *v14; // rcx
  __int64 v15; // rax

  if ( !a2 )
  {
    v7 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v7);
  }
  if ( *((struct DMMVIDPNTARGETMODESET ***)a2 + 14) == this )
  {
    if ( a2 == this[14] )
    {
      v9 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v9 + 24) = a2;
      *(_QWORD *)(v9 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v9);
      auto_rc<DMMVIDPNTARGETMODESET>::reset(this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v10 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v10);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(this[15], a2) )
    {
      v12 = (_QWORD *)((char *)a2 + 8);
      v13 = *((_QWORD *)a2 + 1);
      v14 = (_QWORD *)*((_QWORD *)a2 + 2);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v13 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
        || (_QWORD *)*v14 != v12 )
      {
        __fastfail(3u);
      }
      *v14 = v13;
      *(_QWORD *)(v13 + 8) = v14;
      *v12 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v11 + 32);
    }
    v4 = (char *)a2 + 88;
    v5 = _InterlockedDecrement((volatile signed __int32 *)a2 + 24);
    if ( v5 )
    {
      if ( v5 < 0 )
      {
        v15 = WdLogNewEntry5_WdError();
        *(_QWORD *)(v15 + 24) = v5;
        WdLogEvent5_WdError(v15);
      }
    }
    else if ( v4 )
    {
      (**(void (__fastcall ***)(char *, __int64))v4)(v4, 1LL);
    }
    return 0LL;
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError();
    v8[3] = *((_QWORD *)a2 + 14);
    v8[4] = a2;
    v8[5] = this;
    WdLogEvent5_WdError(v8);
    return 3223192368LL;
  }
}
