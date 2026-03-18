/*
 * XREFs of ?CreateVidPnMgr@VIDPN_MGR_CLASSFACTORY@@SAJQEAVADAPTER_DISPLAY@@PEAPEAVVIDPN_MGR@@@Z @ 0x1C00D0DE8
 * Callers:
 *     ?Initialize@ADAPTER_DISPLAY@@QEAAJXZ @ 0x1C00CF474 (-Initialize@ADAPTER_DISPLAY@@QEAAJXZ.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z @ 0x1C00CE068 (--0VIDPN_MGR@@QEAA@QEAVADAPTER_DISPLAY@@@Z.c)
 */

__int64 __fastcall VIDPN_MGR_CLASSFACTORY::CreateVidPnMgr(
        struct ADAPTER_DISPLAY *const a1,
        struct VIDPN_MGR **a2,
        __int64 a3,
        __int64 a4)
{
  VIDPN_MGR *v6; // rax
  __int64 v7; // rcx
  VIDPN_MGR *v8; // rdi
  VIDPN_MGR *v9; // rbx
  __int64 v10; // rcx
  unsigned int v11; // edi
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  _QWORD *v16; // rax

  if ( !a1 )
  {
    v13 = WdLogNewEntry5_WdAssertion(0LL, a2, a3, a4);
    WdLogEvent5_WdAssertion(v13);
  }
  if ( !a2 )
  {
    v14 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    WdLogEvent5_WdAssertion(v14);
  }
  v6 = (VIDPN_MGR *)operator new[](0x200uLL, 0x4E506456u, (POOL_TYPE)512);
  if ( v6 )
    v8 = VIDPN_MGR::VIDPN_MGR(v6, a1);
  else
    v8 = 0LL;
  v9 = v8;
  if ( v8 )
  {
    if ( (**((unsigned __int8 (__fastcall ***)(__int64))v8 + 2))((__int64)v8 + 16) )
    {
      v9 = 0LL;
      *a2 = v8;
      v11 = 0;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdDmmEvent(v10);
      v16[3] = v8;
      v16[4] = a1;
      v16[5] = *((int *)v8 + 14);
      WdLogEvent5_WdDmmEvent(v16);
      v11 = *((_DWORD *)v8 + 14);
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v15 + 24) = a1;
    WdLogEvent5_WdLowResource(v15);
    v11 = -1073741801;
  }
  if ( v9 )
    (**(void (__fastcall ***)(VIDPN_MGR *, __int64))v9)(v9, 1LL);
  return v11;
}
