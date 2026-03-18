/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNTARGET@@QEAAJPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000648C
 * Callers:
 *     ?ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C0091690 (-ReleaseTargetModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNT.c)
 *     ?ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNTARGETMODESET__@@@Z @ 0x1C00C2360 (-ReleaseTargetModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0004FA8 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0005834 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET@@@Z @ 0x1C000E43C (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNTARGETMODESET@@@@QEAAEQEBVDMMVIDPNTARGETMODESET.c)
 */

__int64 __fastcall DMMVIDPNTARGET::ReleaseModeSet(DMMVIDPNTARGET *this, struct DMMVIDPNTARGETMODESET *a2)
{
  __int64 v5; // rax
  _QWORD *v6; // rax
  __int64 v7; // rax
  __int64 v8; // rax
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // rdx
  _QWORD *v12; // rcx

  if ( !a2 )
  {
    v5 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v5);
  }
  if ( *((DMMVIDPNTARGET **)a2 + 14) == this )
  {
    if ( a2 == *((struct DMMVIDPNTARGETMODESET **)this + 14) )
    {
      v7 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v7 + 24) = a2;
      *(_QWORD *)(v7 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v7);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((__int64 *)this + 14, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v8 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v8);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNTARGETMODESET>::ContainsByReference(*((_QWORD *)this + 15), a2) )
    {
      v10 = (_QWORD *)((char *)a2 + 8);
      v11 = *((_QWORD *)a2 + 1);
      v12 = (_QWORD *)*((_QWORD *)a2 + 2);
      if ( *(struct DMMVIDPNTARGETMODESET **)(v11 + 8) != (struct DMMVIDPNTARGETMODESET *)((char *)a2 + 8)
        || (_QWORD *)*v12 != v10 )
      {
        __fastfail(3u);
      }
      *v12 = v11;
      *(_QWORD *)(v11 + 8) = v12;
      *v10 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v9 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNTARGETMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError();
    v6[3] = *((_QWORD *)a2 + 14);
    v6[4] = a2;
    v6[5] = this;
    WdLogEvent5_WdError(v6);
    return 3223192368LL;
  }
}
