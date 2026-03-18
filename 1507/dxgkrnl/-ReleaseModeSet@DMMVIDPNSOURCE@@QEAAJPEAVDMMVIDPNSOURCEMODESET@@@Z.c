/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007038
 * Callers:
 *     ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C0095EC0 (-ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNS.c)
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00AFE30 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?Release@ReferenceCounted@@QEBA_KXZ @ 0x1C0003E94 (-Release@ReferenceCounted@@QEBA_KXZ.c)
 *     ?reset@?$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0007780 (-reset@-$auto_rc@VDMMVIDPNSOURCEMODESET@@@@QEAAXPEAVDMMVIDPNSOURCEMODESET@@@Z.c)
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0008400 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(
        struct DMMVIDPNSOURCEMODESET **this,
        struct DMMVIDPNSOURCEMODESET *a2)
{
  __int64 v5; // r9
  _QWORD *v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rcx
  __int64 v9; // rax
  _QWORD *v10; // rax
  __int64 v11; // rax
  __int64 v12; // rax

  if ( !a2 )
  {
    v9 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v9);
  }
  if ( *((struct DMMVIDPNSOURCEMODESET ***)a2 + 14) == this )
  {
    if ( a2 == this[15] )
    {
      v11 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v11 + 24) = a2;
      *(_QWORD *)(v11 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v11);
      auto_rc<DMMVIDPNSOURCEMODESET>::reset(this + 15, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v12 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v12);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && (unsigned __int8)DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(this[14], a2) )
    {
      v6 = (_QWORD *)((char *)a2 + 8);
      v7 = *((_QWORD *)a2 + 1);
      v8 = (_QWORD *)*((_QWORD *)a2 + 2);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v7 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 8)
        || (_QWORD *)*v8 != v6 )
      {
        __fastfail(3u);
      }
      *v8 = v7;
      *(_QWORD *)(v7 + 8) = v8;
      *v6 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v5 + 32);
    }
    ReferenceCounted::Release((struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 88));
    return 0LL;
  }
  else
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdError(this);
    v10[3] = *((_QWORD *)a2 + 14);
    v10[4] = a2;
    v10[5] = this;
    WdLogEvent5_WdError(v10);
    return 3223192368LL;
  }
}
