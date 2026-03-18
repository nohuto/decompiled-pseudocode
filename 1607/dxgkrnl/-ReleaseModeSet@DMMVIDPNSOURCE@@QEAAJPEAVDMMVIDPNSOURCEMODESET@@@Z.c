/*
 * XREFs of ?ReleaseModeSet@DMMVIDPNSOURCE@@QEAAJPEAVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C0002B04
 * Callers:
 *     ?ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C007D280 (-ReleaseSourceModeSet@DXGK_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNS.c)
 *     ?ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDPNSOURCEMODESET__@@@Z @ 0x1C00BBBF0 (-ReleaseSourceModeSet@DXGDMM_VIDPN_INTERFACE_V1_IMPL@@YAJQEAUD3DKMDT_HVIDPN__@@QEAUD3DKMDT_HVIDP.c)
 * Callees:
 *     ?ContainsByReference@?$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET@@@Z @ 0x1C00023A8 (-ContainsByReference@-$DoublyLinkedList@VDMMVIDPNSOURCEMODESET@@@@QEAAEQEBVDMMVIDPNSOURCEMODESET.c)
 *     ?reset@?$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z @ 0x1C0005D00 (-reset@-$auto_rc@VDMMVIDPNTARGETMODESET@@@@QEAAXPEAVDMMVIDPNTARGETMODESET@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall DMMVIDPNSOURCE::ReleaseModeSet(DMMVIDPNSOURCE *this, struct DMMVIDPNSOURCEMODESET *a2)
{
  char *v4; // rcx
  int v5; // ebx
  __int64 v7; // r9
  _QWORD *v8; // rax
  __int64 v9; // rdx
  _QWORD *v10; // rcx
  __int64 v11; // rax
  _QWORD *v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax

  if ( !a2 )
  {
    v11 = WdLogNewEntry5_WdAssertion();
    WdLogEvent5_WdAssertion(v11);
  }
  if ( *((DMMVIDPNSOURCE **)a2 + 14) == this )
  {
    if ( a2 == *((struct DMMVIDPNSOURCEMODESET **)this + 15) )
    {
      v13 = WdLogNewEntry5_WdDmmEvent();
      *(_QWORD *)(v13 + 24) = a2;
      *(_QWORD *)(v13 + 32) = *((unsigned int *)this + 6);
      WdLogEvent5_WdDmmEvent(v13);
      auto_rc<DMMVIDPNTARGETMODESET>::reset((char *)this + 120, 0LL);
      if ( *((_DWORD *)a2 + 24) != 1 )
      {
        v14 = WdLogNewEntry5_WdAssertion();
        WdLogEvent5_WdAssertion(v14);
      }
    }
    if ( *((_DWORD *)a2 + 24) == 1
      && DoublyLinkedList<DMMVIDPNSOURCEMODESET>::ContainsByReference(*((_QWORD *)this + 14), (__int64)a2) )
    {
      v8 = (_QWORD *)((char *)a2 + 8);
      v9 = *((_QWORD *)a2 + 1);
      v10 = (_QWORD *)*((_QWORD *)a2 + 2);
      if ( *(struct DMMVIDPNSOURCEMODESET **)(v9 + 8) != (struct DMMVIDPNSOURCEMODESET *)((char *)a2 + 8)
        || (_QWORD *)*v10 != v8 )
      {
        __fastfail(3u);
      }
      *v10 = v9;
      *(_QWORD *)(v9 + 8) = v10;
      *v8 = 0LL;
      *((_QWORD *)a2 + 2) = 0LL;
      --*(_QWORD *)(v7 + 32);
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
    v12 = (_QWORD *)WdLogNewEntry5_WdError();
    v12[3] = *((_QWORD *)a2 + 14);
    v12[4] = a2;
    v12[5] = this;
    WdLogEvent5_WdError(v12);
    return 3223192368LL;
  }
}
