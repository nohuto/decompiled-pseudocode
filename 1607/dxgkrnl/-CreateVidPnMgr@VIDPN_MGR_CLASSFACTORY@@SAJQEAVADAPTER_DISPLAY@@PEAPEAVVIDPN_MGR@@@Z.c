/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00F6228
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00F66C0 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00F49B8 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(struct ADAPTER_DISPLAY *const a1, struct VIDPN_MGR **a2)
{
  VIDPN_MGR *v4; // rax
  __int64 v5; // rcx
  VIDPN_MGR *v6; // rdi
  VIDPN_MGR *v7; // rbx
  __int64 v8; // rcx
  unsigned int v9; // edi
  __int64 v11; // rax
  __int64 v12; // rax
  __int64 v13; // rax
  _QWORD *v14; // rax

  if ( !a1 )
  {
    v11 = WdLogNewEntry5_WdAssertion(0LL);
    WdLogEvent5_WdAssertion(v11);
  }
  if ( !a2 )
  {
    v12 = WdLogNewEntry5_WdAssertion(a1);
    WdLogEvent5_WdAssertion(v12);
  }
  v4 = (VIDPN_MGR *)operator new(0x200uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v4 )
    v6 = VIDPN_MGR::VIDPN_MGR(v4, a1);
  else
    v6 = 0LL;
  v7 = v6;
  if ( v6 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v6 + 2))((__int64)v6 + 16) )
    {
      v7 = 0LL;
      *a2 = v6;
      v9 = 0;
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v8);
      v14[3] = v6;
      v14[4] = a1;
      v14[5] = *((int *)v6 + 14);
      WdLogEvent5_WdDmmEvent(v14);
      v9 = *((_DWORD *)v6 + 14);
    }
  }
  else
  {
    v13 = WdLogNewEntry5_WdLowResource(v5);
    *(_QWORD *)(v13 + 24) = a1;
    WdLogEvent5_WdLowResource(v13);
    v9 = -1073741801;
  }
  if ( v7 )
    (**(void (__fastcall ***)(VIDPN_MGR *, __int64))v7)(v7, 1LL);
  return v9;
}
